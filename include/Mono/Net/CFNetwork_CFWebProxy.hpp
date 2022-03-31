// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFProxy
  class CFProxy;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::CFNetwork::CFWebProxy);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFNetwork::CFWebProxy*, "Mono.Net", "CFNetwork/CFWebProxy");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNetwork/Mono.Net.CFWebProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class CFNetwork::CFWebProxy : public ::Il2CppObject/*, public ::System::Net::IWebProxy*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Net.ICredentials credentials
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::ICredentials* credentials;
    // Field size check
    static_assert(sizeof(::System::Net::ICredentials*) == 0x8);
    // private System.Boolean userSpecified
    // Size: 0x1
    // Offset: 0x18
    bool userSpecified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Net::IWebProxy
    operator ::System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<::System::Net::IWebProxy*>(this);
    }
    // Get instance field reference: private System.Net.ICredentials credentials
    ::System::Net::ICredentials*& dyn_credentials();
    // Get instance field reference: private System.Boolean userSpecified
    bool& dyn_userSpecified();
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x1A99C74
    ::System::Net::ICredentials* get_Credentials();
    // static private System.Uri GetProxyUri(Mono.Net.CFProxy proxy, out System.Net.NetworkCredential credentials)
    // Offset: 0x1A99C7C
    static ::System::Uri* GetProxyUri(::Mono::Net::CFProxy* proxy, ByRef<::System::Net::NetworkCredential*> credentials);
    // static private System.Uri GetProxyUriFromScript(System.IntPtr script, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x1A9A1E8
    static ::System::Uri* GetProxyUriFromScript(::System::IntPtr script, ::System::Uri* targetUri, ByRef<::System::Net::NetworkCredential*> credentials);
    // static private System.Uri ExecuteProxyAutoConfigurationURL(System.IntPtr proxyAutoConfigURL, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x1A9A334
    static ::System::Uri* ExecuteProxyAutoConfigurationURL(::System::IntPtr proxyAutoConfigURL, ::System::Uri* targetUri, ByRef<::System::Net::NetworkCredential*> credentials);
    // static private System.Uri SelectProxy(Mono.Net.CFProxy[] proxies, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x1A9A26C
    static ::System::Uri* SelectProxy(::ArrayW<::Mono::Net::CFProxy*> proxies, ::System::Uri* targetUri, ByRef<::System::Net::NetworkCredential*> credentials);
    // public System.Uri GetProxy(System.Uri targetUri)
    // Offset: 0x1A9A3B8
    ::System::Uri* GetProxy(::System::Uri* targetUri);
    // public System.Boolean IsBypassed(System.Uri targetUri)
    // Offset: 0x1A9A87C
    bool IsBypassed(::System::Uri* targetUri);
    // public System.Void .ctor()
    // Offset: 0x1A99700
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFNetwork::CFWebProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::CFNetwork::CFWebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFNetwork::CFWebProxy*, creationType>()));
    }
  }; // Mono.Net.CFNetwork/Mono.Net.CFWebProxy
  #pragma pack(pop)
  static check_size<sizeof(CFNetwork::CFWebProxy), 24 + sizeof(bool)> __Mono_Net_CFNetwork_CFWebProxySizeCheck;
  static_assert(sizeof(CFNetwork::CFWebProxy) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (Mono::Net::CFNetwork::CFWebProxy::*)()>(&Mono::Net::CFNetwork::CFWebProxy::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFWebProxy*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::GetProxyUri
// Il2CppName: GetProxyUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::Mono::Net::CFProxy*, ByRef<::System::Net::NetworkCredential*>)>(&Mono::Net::CFNetwork::CFWebProxy::GetProxyUri)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFProxy")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkCredential")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFWebProxy*), "GetProxyUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy, credentials});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::GetProxyUriFromScript
// Il2CppName: GetProxyUriFromScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::System::IntPtr, ::System::Uri*, ByRef<::System::Net::NetworkCredential*>)>(&Mono::Net::CFNetwork::CFWebProxy::GetProxyUriFromScript)> {
  static const MethodInfo* get() {
    static auto* script = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkCredential")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFWebProxy*), "GetProxyUriFromScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{script, targetUri, credentials});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::ExecuteProxyAutoConfigurationURL
// Il2CppName: ExecuteProxyAutoConfigurationURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::System::IntPtr, ::System::Uri*, ByRef<::System::Net::NetworkCredential*>)>(&Mono::Net::CFNetwork::CFWebProxy::ExecuteProxyAutoConfigurationURL)> {
  static const MethodInfo* get() {
    static auto* proxyAutoConfigURL = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* targetUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkCredential")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFWebProxy*), "ExecuteProxyAutoConfigurationURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxyAutoConfigURL, targetUri, credentials});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::SelectProxy
// Il2CppName: SelectProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::ArrayW<::Mono::Net::CFProxy*>, ::System::Uri*, ByRef<::System::Net::NetworkCredential*>)>(&Mono::Net::CFNetwork::CFWebProxy::SelectProxy)> {
  static const MethodInfo* get() {
    static auto* proxies = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Mono.Net", "CFProxy"), 1)->byval_arg;
    static auto* targetUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkCredential")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFWebProxy*), "SelectProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxies, targetUri, credentials});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::GetProxy
// Il2CppName: GetProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (Mono::Net::CFNetwork::CFWebProxy::*)(::System::Uri*)>(&Mono::Net::CFNetwork::CFWebProxy::GetProxy)> {
  static const MethodInfo* get() {
    static auto* targetUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFWebProxy*), "GetProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetUri});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::IsBypassed
// Il2CppName: IsBypassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::CFNetwork::CFWebProxy::*)(::System::Uri*)>(&Mono::Net::CFNetwork::CFWebProxy::IsBypassed)> {
  static const MethodInfo* get() {
    static auto* targetUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFWebProxy*), "IsBypassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetUri});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFWebProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
