// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServerCertValidationCallback
  class ServerCertValidationCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: ServerCertValidationCallbackWrapper
  class ServerCertValidationCallbackWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::ServerCertValidationCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::ServerCertValidationCallbackWrapper*, "Mono.Net.Security", "ServerCertValidationCallbackWrapper");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.ServerCertValidationCallbackWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerCertValidationCallbackWrapper : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AD86D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCertValidationCallbackWrapper* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::ServerCertValidationCallbackWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCertValidationCallbackWrapper*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Net.ServerCertValidationCallback callback, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, Mono.Security.Interface.MonoSslPolicyErrors sslPolicyErrors)
    // Offset: 0x1AD37E0
    bool Invoke(::System::Net::ServerCertValidationCallback* callback, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors);
    // public System.IAsyncResult BeginInvoke(System.Net.ServerCertValidationCallback callback, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, Mono.Security.Interface.MonoSslPolicyErrors sslPolicyErrors, System.AsyncCallback __callback, System.Object object)
    // Offset: 0x1AD86E0
    ::System::IAsyncResult* BeginInvoke(::System::Net::ServerCertValidationCallback* callback, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors, ::System::AsyncCallback* __callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1AD8790
    bool EndInvoke(::System::IAsyncResult* result);
  }; // Mono.Net.Security.ServerCertValidationCallbackWrapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::ServerCertValidationCallbackWrapper::*)(::System::Net::ServerCertValidationCallback*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors)>(&Mono::Net::Security::ServerCertValidationCallbackWrapper::Invoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Net", "ServerCertValidationCallback")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    static auto* sslPolicyErrors = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoSslPolicyErrors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ServerCertValidationCallbackWrapper*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, certificate, chain, sslPolicyErrors});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Mono::Net::Security::ServerCertValidationCallbackWrapper::*)(::System::Net::ServerCertValidationCallback*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors, ::System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Net::Security::ServerCertValidationCallbackWrapper::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Net", "ServerCertValidationCallback")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    static auto* sslPolicyErrors = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoSslPolicyErrors")->byval_arg;
    static auto* __callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ServerCertValidationCallbackWrapper*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, certificate, chain, sslPolicyErrors, __callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::ServerCertValidationCallbackWrapper::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::ServerCertValidationCallbackWrapper::*)(::System::IAsyncResult*)>(&Mono::Net::Security::ServerCertValidationCallbackWrapper::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::ServerCertValidationCallbackWrapper*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
