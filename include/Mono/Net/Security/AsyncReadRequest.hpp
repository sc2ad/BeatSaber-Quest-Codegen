// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.AsyncReadOrWriteRequest
#include "Mono/Net/Security/AsyncReadOrWriteRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: AsyncReadRequest
  class AsyncReadRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::AsyncReadRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncReadRequest*, "Mono.Net.Security", "AsyncReadRequest");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.AsyncReadRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncReadRequest : public ::Mono::Net::Security::AsyncReadOrWriteRequest {
    public:
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x1AFC19C
    // Implemented from: Mono.Net.Security.AsyncReadOrWriteRequest
    // Base method: System.Void AsyncReadOrWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncReadRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t> buffer, int offset, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::AsyncReadRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncReadRequest*, creationType>(parent, sync, buffer, offset, size)));
    }
    // protected override Mono.Net.Security.AsyncOperationStatus Run(Mono.Net.Security.AsyncOperationStatus status)
    // Offset: 0x1AFC1A4
    // Implemented from: Mono.Net.Security.AsyncProtocolRequest
    // Base method: Mono.Net.Security.AsyncOperationStatus AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus status)
    ::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status);
  }; // Mono.Net.Security.AsyncReadRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::AsyncReadRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::AsyncReadRequest::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (Mono::Net::Security::AsyncReadRequest::*)(::Mono::Net::Security::AsyncOperationStatus)>(&Mono::Net::Security::AsyncReadRequest::Run)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("Mono.Net.Security", "AsyncOperationStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncReadRequest*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status});
  }
};
