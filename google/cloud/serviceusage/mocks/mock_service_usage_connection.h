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
// source: google/api/serviceusage/v1/serviceusage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_MOCKS_MOCK_SERVICE_USAGE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_MOCKS_MOCK_SERVICE_USAGE_CONNECTION_H

#include "google/cloud/serviceusage/service_usage_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace serviceusage_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockServiceUsageConnection : public serviceusage::ServiceUsageConnection {
 public:
  MOCK_METHOD(
      future<StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>,
      EnableService,
      (google::api::serviceusage::v1::EnableServiceRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>,
      DisableService,
      (google::api::serviceusage::v1::DisableServiceRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::api::serviceusage::v1::Service>, GetService,
              (google::api::serviceusage::v1::GetServiceRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::api::serviceusage::v1::Service>, ListServices,
              (google::api::serviceusage::v1::ListServicesRequest request),
              (override));

  MOCK_METHOD(
      future<
          StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>,
      BatchEnableServices,
      (google::api::serviceusage::v1::BatchEnableServicesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>,
      BatchGetServices,
      (google::api::serviceusage::v1::BatchGetServicesRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_MOCKS_MOCK_SERVICE_USAGE_CONNECTION_H