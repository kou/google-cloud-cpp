// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/retail/v2/user_event_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_MOCKS_MOCK_USER_EVENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_MOCKS_MOCK_USER_EVENT_CONNECTION_H

#include "google/cloud/retail/user_event_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace retail_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockUserEventServiceConnection
    : public retail::UserEventServiceConnection {
 public:
  MOCK_METHOD(StatusOr<google::cloud::retail::v2::UserEvent>, WriteUserEvent,
              (google::cloud::retail::v2::WriteUserEventRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::api::HttpBody>, CollectUserEvent,
      (google::cloud::retail::v2::CollectUserEventRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::retail::v2::PurgeUserEventsResponse>>,
      PurgeUserEvents,
      (google::cloud::retail::v2::PurgeUserEventsRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::retail::v2::ImportUserEventsResponse>>,
      ImportUserEvents,
      (google::cloud::retail::v2::ImportUserEventsRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::retail::v2::RejoinUserEventsResponse>>,
      RejoinUserEvents,
      (google::cloud::retail::v2::RejoinUserEventsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_MOCKS_MOCK_USER_EVENT_CONNECTION_H