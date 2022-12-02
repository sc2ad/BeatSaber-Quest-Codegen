// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.IAuthenticationModule
#include "System/Net/IAuthenticationModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: NtlmClient
  class NtlmClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NtlmClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NtlmClient*, "System.Net", "NtlmClient");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NtlmClient
  // [TokenAttribute] Offset: FFFFFFFF
  class NtlmClient : public ::Il2CppObject/*, public ::System::Net::IAuthenticationModule*/ {
    public:
    public:
    // private System.Net.IAuthenticationModule authObject
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::IAuthenticationModule* authObject;
    // Field size check
    static_assert(sizeof(::System::Net::IAuthenticationModule*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Net::IAuthenticationModule
    operator ::System::Net::IAuthenticationModule() noexcept {
      return *reinterpret_cast<::System::Net::IAuthenticationModule*>(this);
    }
    // Creating interface conversion operator: i_IAuthenticationModule
    inline ::System::Net::IAuthenticationModule* i_IAuthenticationModule() noexcept {
      return reinterpret_cast<::System::Net::IAuthenticationModule*>(this);
    }
    // Creating conversion operator: operator ::System::Net::IAuthenticationModule*
    constexpr operator ::System::Net::IAuthenticationModule*() const noexcept {
      return authObject;
    }
    // Get instance field reference: private System.Net.IAuthenticationModule authObject
    [[deprecated("Use field access instead!")]] ::System::Net::IAuthenticationModule*& dyn_authObject();
    // public System.String get_AuthenticationType()
    // Offset: 0x1BB8700
    ::StringW get_AuthenticationType();
    // public System.Void .ctor()
    // Offset: 0x1BB85A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NtlmClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmClient*, creationType>()));
    }
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x1BB860C
    ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x1BB86F8
    ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);
  }; // System.Net.NtlmClient
  #pragma pack(pop)
  static check_size<sizeof(NtlmClient), 16 + sizeof(::System::Net::IAuthenticationModule*)> __System_Net_NtlmClientSizeCheck;
  static_assert(sizeof(NtlmClient) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NtlmClient::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::NtlmClient::*)()>(&System::Net::NtlmClient::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NtlmClient*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NtlmClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NtlmClient::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (System::Net::NtlmClient::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::NtlmClient::Authenticate)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NtlmClient*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, webRequest, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::NtlmClient::PreAuthenticate
// Il2CppName: PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (System::Net::NtlmClient::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::NtlmClient::PreAuthenticate)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NtlmClient*), "PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest, credentials});
  }
};
