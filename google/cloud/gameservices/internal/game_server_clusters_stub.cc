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
// source: google/cloud/gaming/v1/game_server_clusters_service.proto

#include "google/cloud/gameservices/internal/game_server_clusters_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gaming/v1/game_server_clusters_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerClustersServiceStub::~GameServerClustersServiceStub() = default;

StatusOr<google::cloud::gaming::v1::ListGameServerClustersResponse>
DefaultGameServerClustersServiceStub::ListGameServerClusters(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::ListGameServerClustersRequest const& request) {
  google::cloud::gaming::v1::ListGameServerClustersResponse response;
  auto status =
      grpc_stub_->ListGameServerClusters(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gaming::v1::GameServerCluster>
DefaultGameServerClustersServiceStub::GetGameServerCluster(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::GetGameServerClusterRequest const& request) {
  google::cloud::gaming::v1::GameServerCluster response;
  auto status =
      grpc_stub_->GetGameServerCluster(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerClustersServiceStub::AsyncCreateGameServerCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::CreateGameServerClusterRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gaming::v1::CreateGameServerClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGameServerCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse>
DefaultGameServerClustersServiceStub::PreviewCreateGameServerCluster(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const&
        request) {
  google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse response;
  auto status = grpc_stub_->PreviewCreateGameServerCluster(&client_context,
                                                           request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerClustersServiceStub::AsyncDeleteGameServerCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::DeleteGameServerClusterRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gaming::v1::DeleteGameServerClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGameServerCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse>
DefaultGameServerClustersServiceStub::PreviewDeleteGameServerCluster(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const&
        request) {
  google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse response;
  auto status = grpc_stub_->PreviewDeleteGameServerCluster(&client_context,
                                                           request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerClustersServiceStub::AsyncUpdateGameServerCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerClusterRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::gaming::v1::UpdateGameServerClusterRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGameServerCluster(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse>
DefaultGameServerClustersServiceStub::PreviewUpdateGameServerCluster(
    grpc::ClientContext& client_context,
    google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const&
        request) {
  google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse response;
  auto status = grpc_stub_->PreviewUpdateGameServerCluster(&client_context,
                                                           request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultGameServerClustersServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultGameServerClustersServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
          [this](grpc::ClientContext* context,
                 google::longrunning::CancelOperationRequest const& request,
                 grpc::CompletionQueue* cq) {
            return operations_->AsyncCancelOperation(context, request, cq);
          },
          request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google