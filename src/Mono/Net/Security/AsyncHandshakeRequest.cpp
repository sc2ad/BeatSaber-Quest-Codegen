// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Mono.Net.Security.AsyncHandshakeRequest
#include "Mono/Net/Security/AsyncHandshakeRequest.hpp"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
// Including type: Mono.Net.Security.AsyncOperationStatus
#include "Mono/Net/Security/AsyncOperationStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Net.Security.AsyncHandshakeRequest..ctor
Mono::Net::Security::AsyncHandshakeRequest* Mono::Net::Security::AsyncHandshakeRequest::New_ctor(Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync) {
  return THROW_UNLESS(il2cpp_utils::New<AsyncHandshakeRequest*>(parent, sync));
}
// Autogenerated method: Mono.Net.Security.AsyncHandshakeRequest.Run
Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncHandshakeRequest::Run(Mono::Net::Security::AsyncOperationStatus status) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Net::Security::AsyncOperationStatus>(this, "Run", status));
}