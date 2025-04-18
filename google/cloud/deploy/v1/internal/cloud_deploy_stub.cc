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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#include "google/cloud/deploy/v1/internal/cloud_deploy_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/deploy/v1/cloud_deploy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudDeployStub::~CloudDeployStub() = default;

StatusOr<google::cloud::deploy::v1::ListDeliveryPipelinesResponse>
DefaultCloudDeployStub::ListDeliveryPipelines(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListDeliveryPipelinesRequest const& request) {
  google::cloud::deploy::v1::ListDeliveryPipelinesResponse response;
  auto status = grpc_stub_->ListDeliveryPipelines(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
DefaultCloudDeployStub::GetDeliveryPipeline(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request) {
  google::cloud::deploy::v1::DeliveryPipeline response;
  auto status = grpc_stub_->GetDeliveryPipeline(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncCreateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::CreateDeliveryPipelineRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::CreateDeliveryPipelineRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDeliveryPipeline(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::CreateDeliveryPipeline(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateDeliveryPipeline(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncUpdateDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::UpdateDeliveryPipelineRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDeliveryPipeline(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::UpdateDeliveryPipeline(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateDeliveryPipeline(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncDeleteDeliveryPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::DeleteDeliveryPipelineRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDeliveryPipeline(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::DeleteDeliveryPipeline(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteDeliveryPipeline(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListTargetsResponse>
DefaultCloudDeployStub::ListTargets(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListTargetsRequest const& request) {
  google::cloud::deploy::v1::ListTargetsResponse response;
  auto status = grpc_stub_->ListTargets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::RollbackTargetResponse>
DefaultCloudDeployStub::RollbackTarget(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::RollbackTargetRequest const& request) {
  google::cloud::deploy::v1::RollbackTargetResponse response;
  auto status = grpc_stub_->RollbackTarget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::Target> DefaultCloudDeployStub::GetTarget(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetTargetRequest const& request) {
  google::cloud::deploy::v1::Target response;
  auto status = grpc_stub_->GetTarget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncCreateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::CreateTargetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::CreateTargetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTarget(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultCloudDeployStub::CreateTarget(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::CreateTargetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateTarget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncUpdateTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::UpdateTargetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::UpdateTargetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTarget(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultCloudDeployStub::UpdateTarget(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::UpdateTargetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateTarget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncDeleteTarget(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::DeleteTargetRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::DeleteTargetRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTarget(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultCloudDeployStub::DeleteTarget(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::DeleteTargetRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteTarget(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListCustomTargetTypesResponse>
DefaultCloudDeployStub::ListCustomTargetTypes(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListCustomTargetTypesRequest const& request) {
  google::cloud::deploy::v1::ListCustomTargetTypesResponse response;
  auto status = grpc_stub_->ListCustomTargetTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::CustomTargetType>
DefaultCloudDeployStub::GetCustomTargetType(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetCustomTargetTypeRequest const& request) {
  google::cloud::deploy::v1::CustomTargetType response;
  auto status = grpc_stub_->GetCustomTargetType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncCreateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::CreateCustomTargetTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::CreateCustomTargetTypeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateCustomTargetType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::CreateCustomTargetType(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::CreateCustomTargetTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateCustomTargetType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncUpdateCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::UpdateCustomTargetTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateCustomTargetType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::UpdateCustomTargetType(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::UpdateCustomTargetTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateCustomTargetType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncDeleteCustomTargetType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::DeleteCustomTargetTypeRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteCustomTargetType(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::DeleteCustomTargetType(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::DeleteCustomTargetTypeRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteCustomTargetType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListReleasesResponse>
DefaultCloudDeployStub::ListReleases(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListReleasesRequest const& request) {
  google::cloud::deploy::v1::ListReleasesResponse response;
  auto status = grpc_stub_->ListReleases(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::Release> DefaultCloudDeployStub::GetRelease(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetReleaseRequest const& request) {
  google::cloud::deploy::v1::Release response;
  auto status = grpc_stub_->GetRelease(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncCreateRelease(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::CreateReleaseRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::CreateReleaseRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRelease(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultCloudDeployStub::CreateRelease(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::CreateReleaseRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRelease(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
DefaultCloudDeployStub::AbandonRelease(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::AbandonReleaseRequest const& request) {
  google::cloud::deploy::v1::AbandonReleaseResponse response;
  auto status = grpc_stub_->AbandonRelease(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncCreateDeployPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::CreateDeployPolicyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::CreateDeployPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::deploy::v1::CreateDeployPolicyRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateDeployPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::CreateDeployPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::CreateDeployPolicyRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateDeployPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncUpdateDeployPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::UpdateDeployPolicyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::UpdateDeployPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::deploy::v1::UpdateDeployPolicyRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDeployPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::UpdateDeployPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::UpdateDeployPolicyRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateDeployPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncDeleteDeployPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::DeleteDeployPolicyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::DeleteDeployPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::deploy::v1::DeleteDeployPolicyRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDeployPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::DeleteDeployPolicy(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::DeleteDeployPolicyRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteDeployPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListDeployPoliciesResponse>
DefaultCloudDeployStub::ListDeployPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListDeployPoliciesRequest const& request) {
  google::cloud::deploy::v1::ListDeployPoliciesResponse response;
  auto status = grpc_stub_->ListDeployPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::DeployPolicy>
DefaultCloudDeployStub::GetDeployPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetDeployPolicyRequest const& request) {
  google::cloud::deploy::v1::DeployPolicy response;
  auto status = grpc_stub_->GetDeployPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
DefaultCloudDeployStub::ApproveRollout(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ApproveRolloutRequest const& request) {
  google::cloud::deploy::v1::ApproveRolloutResponse response;
  auto status = grpc_stub_->ApproveRollout(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
DefaultCloudDeployStub::AdvanceRollout(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::AdvanceRolloutRequest const& request) {
  google::cloud::deploy::v1::AdvanceRolloutResponse response;
  auto status = grpc_stub_->AdvanceRollout(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
DefaultCloudDeployStub::CancelRollout(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::CancelRolloutRequest const& request) {
  google::cloud::deploy::v1::CancelRolloutResponse response;
  auto status = grpc_stub_->CancelRollout(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListRolloutsResponse>
DefaultCloudDeployStub::ListRollouts(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListRolloutsRequest const& request) {
  google::cloud::deploy::v1::ListRolloutsResponse response;
  auto status = grpc_stub_->ListRollouts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::Rollout> DefaultCloudDeployStub::GetRollout(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetRolloutRequest const& request) {
  google::cloud::deploy::v1::Rollout response;
  auto status = grpc_stub_->GetRollout(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncCreateRollout(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::CreateRolloutRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::CreateRolloutRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRollout(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultCloudDeployStub::CreateRollout(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::CreateRolloutRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRollout(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
DefaultCloudDeployStub::IgnoreJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::IgnoreJobRequest const& request) {
  google::cloud::deploy::v1::IgnoreJobResponse response;
  auto status = grpc_stub_->IgnoreJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
DefaultCloudDeployStub::RetryJob(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::RetryJobRequest const& request) {
  google::cloud::deploy::v1::RetryJobResponse response;
  auto status = grpc_stub_->RetryJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListJobRunsResponse>
DefaultCloudDeployStub::ListJobRuns(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListJobRunsRequest const& request) {
  google::cloud::deploy::v1::ListJobRunsResponse response;
  auto status = grpc_stub_->ListJobRuns(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::JobRun> DefaultCloudDeployStub::GetJobRun(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetJobRunRequest const& request) {
  google::cloud::deploy::v1::JobRun response;
  auto status = grpc_stub_->GetJobRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
DefaultCloudDeployStub::TerminateJobRun(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::TerminateJobRunRequest const& request) {
  google::cloud::deploy::v1::TerminateJobRunResponse response;
  auto status = grpc_stub_->TerminateJobRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::Config> DefaultCloudDeployStub::GetConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetConfigRequest const& request) {
  google::cloud::deploy::v1::Config response;
  auto status = grpc_stub_->GetConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncCreateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::CreateAutomationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::CreateAutomationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAutomation(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::CreateAutomation(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::CreateAutomationRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateAutomation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncUpdateAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::UpdateAutomationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::UpdateAutomationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAutomation(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::UpdateAutomation(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::UpdateAutomationRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateAutomation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncDeleteAutomation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::deploy::v1::DeleteAutomationRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::deploy::v1::DeleteAutomationRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAutomation(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultCloudDeployStub::DeleteAutomation(
    grpc::ClientContext& context, Options,
    google::cloud::deploy::v1::DeleteAutomationRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteAutomation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::Automation>
DefaultCloudDeployStub::GetAutomation(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetAutomationRequest const& request) {
  google::cloud::deploy::v1::Automation response;
  auto status = grpc_stub_->GetAutomation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListAutomationsResponse>
DefaultCloudDeployStub::ListAutomations(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListAutomationsRequest const& request) {
  google::cloud::deploy::v1::ListAutomationsResponse response;
  auto status = grpc_stub_->ListAutomations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::AutomationRun>
DefaultCloudDeployStub::GetAutomationRun(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::GetAutomationRunRequest const& request) {
  google::cloud::deploy::v1::AutomationRun response;
  auto status = grpc_stub_->GetAutomationRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::ListAutomationRunsResponse>
DefaultCloudDeployStub::ListAutomationRuns(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::ListAutomationRunsRequest const& request) {
  google::cloud::deploy::v1::ListAutomationRunsResponse response;
  auto status = grpc_stub_->ListAutomationRuns(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::deploy::v1::CancelAutomationRunResponse>
DefaultCloudDeployStub::CancelAutomationRun(
    grpc::ClientContext& context, Options const&,
    google::cloud::deploy::v1::CancelAutomationRunRequest const& request) {
  google::cloud::deploy::v1::CancelAutomationRunResponse response;
  auto status = grpc_stub_->CancelAutomationRun(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultCloudDeployStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultCloudDeployStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultCloudDeployStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultCloudDeployStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultCloudDeployStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultCloudDeployStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultCloudDeployStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCloudDeployStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultCloudDeployStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultCloudDeployStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultCloudDeployStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google
