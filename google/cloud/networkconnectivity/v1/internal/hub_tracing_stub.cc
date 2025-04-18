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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/v1/internal/hub_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace networkconnectivity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

HubServiceTracingStub::HubServiceTracingStub(
    std::shared_ptr<HubServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::networkconnectivity::v1::ListHubsResponse>
HubServiceTracingStub::ListHubs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListHubsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListHubs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListHubs(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::Hub>
HubServiceTracingStub::GetHub(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetHub");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetHub(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncCreateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "CreateHub");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateHub(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::CreateHub(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "CreateHub");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateHub(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncUpdateHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "UpdateHub");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateHub(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::UpdateHub(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "UpdateHub");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateHub(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncDeleteHub(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "DeleteHub");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteHub(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::DeleteHub(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "DeleteHub");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteHub(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::ListHubSpokesResponse>
HubServiceTracingStub::ListHubSpokes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListHubSpokesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListHubSpokes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListHubSpokes(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::QueryHubStatusResponse>
HubServiceTracingStub::QueryHubStatus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::QueryHubStatusRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "QueryHubStatus");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->QueryHubStatus(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::ListSpokesResponse>
HubServiceTracingStub::ListSpokes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListSpokesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListSpokes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSpokes(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceTracingStub::GetSpoke(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetSpoke");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSpoke(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncCreateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "CreateSpoke");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSpoke(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::CreateSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "CreateSpoke");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSpoke(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncUpdateSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "UpdateSpoke");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSpoke(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::UpdateSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "UpdateSpoke");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSpoke(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncRejectHubSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "RejectHubSpoke");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncRejectHubSpoke(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::RejectHubSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "RejectHubSpoke");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RejectHubSpoke(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncAcceptHubSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "AcceptHubSpoke");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncAcceptHubSpoke(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::AcceptHubSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "AcceptHubSpoke");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AcceptHubSpoke(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncAcceptSpokeUpdate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::AcceptSpokeUpdateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "AcceptSpokeUpdate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncAcceptSpokeUpdate(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
HubServiceTracingStub::AcceptSpokeUpdate(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::AcceptSpokeUpdateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "AcceptSpokeUpdate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->AcceptSpokeUpdate(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncRejectSpokeUpdate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::RejectSpokeUpdateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "RejectSpokeUpdate");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncRejectSpokeUpdate(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
HubServiceTracingStub::RejectSpokeUpdate(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::RejectSpokeUpdateRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "RejectSpokeUpdate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->RejectSpokeUpdate(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncDeleteSpoke(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "DeleteSpoke");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSpoke(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::DeleteSpoke(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "DeleteSpoke");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSpoke(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceTracingStub::GetRouteTable(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetRouteTable");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRouteTable(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::Route>
HubServiceTracingStub::GetRoute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetRouteRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetRoute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRoute(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::ListRoutesResponse>
HubServiceTracingStub::ListRoutes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListRoutesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListRoutes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRoutes(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::ListRouteTablesResponse>
HubServiceTracingStub::ListRouteTables(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListRouteTablesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListRouteTables");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRouteTables(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::Group>
HubServiceTracingStub::GetGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::GetGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGroup(context, options, request));
}

StatusOr<google::cloud::networkconnectivity::v1::ListGroupsResponse>
HubServiceTracingStub::ListGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::networkconnectivity::v1::ListGroupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListGroups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGroups(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncUpdateGroup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::networkconnectivity::v1::UpdateGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "UpdateGroup");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateGroup(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::UpdateGroup(
    grpc::ClientContext& context, Options options,
    google::cloud::networkconnectivity::v1::UpdateGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "UpdateGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateGroup(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
HubServiceTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location> HubServiceTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::iam::v1::Policy> HubServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> HubServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
HubServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
HubServiceTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation> HubServiceTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status HubServiceTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status HubServiceTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.networkconnectivity.v1.HubService", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
HubServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> HubServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<HubServiceStub> MakeHubServiceTracingStub(
    std::shared_ptr<HubServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<HubServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1_internal
}  // namespace cloud
}  // namespace google
