// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLLING_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLLING_POLICY_H

#include "google/cloud/internal/backoff_policy.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status.h"
#include "google/cloud/version.h"
#include <chrono>
#include <memory>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Control the Cloud C++ client library behavior with respect to polling on
 * long running operations.
 *
 * Some operations in Cloud services return a `google.longrunning.Operation`
 * object. As their name implies, these objects represent requests that may take
 * a long time to complete, in some cases operations may take tens of seconds
 * or even 30 minutes to complete.
 *
 * The Cloud C++ client libraries models these long running operations
 * as a `google::cloud::future<StatusOr<T>>`, where `T` represents the final
 * result of the operation. In the background, the library polls the service
 * until the operation completes (or fails) and then satisfies the future.
 *
 * This class defines the interface for policies that control the behavior of
 * this polling loop.
 *
 * @see https://aip.dev/151 for more information on long running operations.
 */
class PollingPolicy {
 public:
  virtual ~PollingPolicy() = default;

  /**
   * Return a copy of the current policy.
   *
   * This function is called at the beginning of the polling loop. Policies that
   * are based on relative time should restart their timers when this function
   * is called.
   */
  virtual std::unique_ptr<PollingPolicy> clone() const = 0;

  /**
   * A callback to indicate that a polling attempt failed.
   *
   * This is called when a polling request fails. Note that this callback is not
   * invoked when the polling request succeeds with "operation not done".
   *
   * @return true if the failure should be treated as transient and the polling
   *     loop should continue.
   */
  virtual bool OnFailure(Status const& status) = 0;

  /**
   * How long should the polling loop wait before trying again.
   */
  virtual std::chrono::milliseconds WaitPeriod() = 0;
};

/**
 * Construct a polling policy from existing Retry and Backoff policies.
 *
 * A polling policy can be built by composing a retry and backoff policy. For
 * example, to create a polling policy that "retries N times, waiting a fixed
 * period between retries" you could compose the "try N times" retry policy with
 * the "wait a fixed period between retries" backoff policy.
 *
 * This class makes it easier to create such composed polling policies.
 *
 * @tparam Retry the retry policy used to limit the number of errors or the
 *     total duration of the polling loop.
 * @tparam Backoff the backoff policy used to control how often the
 *     library polls.
 */
template <typename Retry, typename Backoff>
class GenericPollingPolicy : public PollingPolicy {
 public:
  GenericPollingPolicy(Retry retry_policy, Backoff backoff_policy)
      : retry_prototype_(std::move(retry_policy)),
        backoff_prototype_(std::move(backoff_policy)),
        retry_clone_(maybe_deref(retry_prototype_).clone()),
        backoff_clone_(maybe_deref(backoff_prototype_).clone()) {}

  //@{
  std::unique_ptr<PollingPolicy> clone() const override {
    return std::unique_ptr<PollingPolicy>(
        new GenericPollingPolicy<Retry, Backoff>(retry_prototype_,
                                                 backoff_prototype_));
  }

  bool OnFailure(Status const& status) override {
    return retry_clone_->OnFailure(status);
  }

  std::chrono::milliseconds WaitPeriod() override {
    return backoff_clone_->OnCompletion();
  }
  //@}

 private:
  template <typename T>
  T& maybe_deref(T& v) {
    return v;
  }
  template <typename T>
  T& maybe_deref(std::shared_ptr<T>& v) {
    return *v;
  }

  Retry retry_prototype_;
  Backoff backoff_prototype_;

  std::unique_ptr<internal::RetryPolicy> retry_clone_;
  std::unique_ptr<internal::BackoffPolicy> backoff_clone_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLLING_POLICY_H
