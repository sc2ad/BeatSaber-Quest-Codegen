// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentialPolicy
  class ICredentialPolicy;
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
  // Forward declaring type: AuthenticationManager
  class AuthenticationManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::AuthenticationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationManager*, "System.Net", "AuthenticationManager");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.AuthenticationManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticationManager : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.ArrayList modules
    static ::System::Collections::ArrayList* _get_modules();
    // Set static field: static private System.Collections.ArrayList modules
    static void _set_modules(::System::Collections::ArrayList* value);
    // Get static field: static private System.Object locker
    static ::Il2CppObject* _get_locker();
    // Set static field: static private System.Object locker
    static void _set_locker(::Il2CppObject* value);
    // Get static field: static private System.Net.ICredentialPolicy credential_policy
    static ::System::Net::ICredentialPolicy* _get_credential_policy();
    // Set static field: static private System.Net.ICredentialPolicy credential_policy
    static void _set_credential_policy(::System::Net::ICredentialPolicy* value);
    // static private System.Void .cctor()
    // Offset: 0x1D903EC
    static void _cctor();
    // static private System.Void EnsureModules()
    // Offset: 0x1D8F7D8
    static void EnsureModules();
    // static public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x1D8FA04
    static ::System::Net::Authorization* Authenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);
    // static private System.Net.Authorization DoAuthenticate(System.String challenge, System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x1D8FB00
    static ::System::Net::Authorization* DoAuthenticate(::StringW challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);
    // static public System.Net.Authorization PreAuthenticate(System.Net.WebRequest request, System.Net.ICredentials credentials)
    // Offset: 0x1D8FF58
    static ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials);
  }; // System.Net.AuthenticationManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::AuthenticationManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::AuthenticationManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::EnsureModules
// Il2CppName: EnsureModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::AuthenticationManager::EnsureModules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "EnsureModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::AuthenticationManager::Authenticate)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, request, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::DoAuthenticate
// Il2CppName: DoAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::AuthenticationManager::DoAuthenticate)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "DoAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge, request, credentials});
  }
};
// Writing MetadataGetter for method: System::Net::AuthenticationManager::PreAuthenticate
// Il2CppName: PreAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::AuthenticationManager::PreAuthenticate)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::AuthenticationManager*), "PreAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, credentials});
  }
};
