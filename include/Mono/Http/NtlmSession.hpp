// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: MessageBase
  class MessageBase;
}
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
// Type namespace: Mono.Http
namespace Mono::Http {
  // Forward declaring type: NtlmSession
  class NtlmSession;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Http::NtlmSession);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Http::NtlmSession*, "Mono.Http", "NtlmSession");
// Type namespace: Mono.Http
namespace Mono::Http {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Http.NtlmSession
  // [TokenAttribute] Offset: FFFFFFFF
  class NtlmSession : public ::Il2CppObject {
    public:
    public:
    // private Mono.Security.Protocol.Ntlm.MessageBase message
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Security::Protocol::Ntlm::MessageBase* message;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Ntlm::MessageBase*) == 0x8);
    public:
    // Creating conversion operator: operator ::Mono::Security::Protocol::Ntlm::MessageBase*
    constexpr operator ::Mono::Security::Protocol::Ntlm::MessageBase*() const noexcept {
      return message;
    }
    // Get instance field reference: private Mono.Security.Protocol.Ntlm.MessageBase message
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Ntlm::MessageBase*& dyn_message();
    // public System.Void .ctor()
    // Offset: 0x1ACCA30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtlmSession* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Http::NtlmSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtlmSession*, creationType>()));
    }
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x1ACC464
    ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);
  }; // Mono.Http.NtlmSession
  #pragma pack(pop)
  static check_size<sizeof(NtlmSession), 16 + sizeof(::Mono::Security::Protocol::Ntlm::MessageBase*)> __Mono_Http_NtlmSessionSizeCheck;
  static_assert(sizeof(NtlmSession) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Http::NtlmSession::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Http::NtlmSession::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (Mono::Http::NtlmSession::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&Mono::Http::NtlmSession::Authenticate)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Http::NtlmSession*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, webRequest, credentials});
  }
};
