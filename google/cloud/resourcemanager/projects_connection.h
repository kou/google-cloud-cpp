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
// source: google/cloud/resourcemanager/v3/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_PROJECTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_PROJECTS_CONNECTION_H

#include "google/cloud/resourcemanager/internal/projects_retry_traits.h"
#include "google/cloud/resourcemanager/internal/projects_stub.h"
#include "google/cloud/resourcemanager/projects_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ProjectsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    resourcemanager_internal::ProjectsRetryTraits>;

using ProjectsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        resourcemanager_internal::ProjectsRetryTraits>;

using ProjectsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        resourcemanager_internal::ProjectsRetryTraits>;

class ProjectsConnection {
 public:
  virtual ~ProjectsConnection() = 0;

  virtual StatusOr<google::cloud::resourcemanager::v3::Project> GetProject(
      google::cloud::resourcemanager::v3::GetProjectRequest const& request);

  virtual StreamRange<google::cloud::resourcemanager::v3::Project> ListProjects(
      google::cloud::resourcemanager::v3::ListProjectsRequest request);

  virtual StreamRange<google::cloud::resourcemanager::v3::Project>
  SearchProjects(
      google::cloud::resourcemanager::v3::SearchProjectsRequest request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Project>>
  CreateProject(
      google::cloud::resourcemanager::v3::CreateProjectRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Project>>
  UpdateProject(
      google::cloud::resourcemanager::v3::UpdateProjectRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Project>>
  MoveProject(
      google::cloud::resourcemanager::v3::MoveProjectRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Project>>
  DeleteProject(
      google::cloud::resourcemanager::v3::DeleteProjectRequest const& request);

  virtual future<StatusOr<google::cloud::resourcemanager::v3::Project>>
  UndeleteProject(
      google::cloud::resourcemanager::v3::UndeleteProjectRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

std::shared_ptr<ProjectsConnection> MakeProjectsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<resourcemanager::ProjectsConnection> MakeProjectsConnection(
    std::shared_ptr<ProjectsStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_PROJECTS_CONNECTION_H