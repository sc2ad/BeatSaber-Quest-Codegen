// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_create_server_t
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1063E1C
  class UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1ADB398
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx* Invoke(Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_protocolrange supportedProtocols, Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_callbacks callbacks, System.UInt64 certChain, System.UInt64 leafCertificateKey, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1ADB3A8
    ::Mono::Unity::UnityTls::unitytls_tlsctx* Invoke(::Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls::unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_protocolrange supportedProtocols, Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_callbacks callbacks, System.UInt64 certChain, System.UInt64 leafCertificateKey, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1ADB770
    ::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls::unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx* EndInvoke(System.IAsyncResult result)
    // Offset: 0x1ADB85C
    ::Mono::Unity::UnityTls::unitytls_tlsctx* EndInvoke(::System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_interface_struct/Mono.Unity.unitytls_tlsctx_create_server_t
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_tlsctx* (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::*)(::Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls::unitytls_tlsctx_callbacks, uint64_t, uint64_t, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::Invoke)> {
  static const MethodInfo* get() {
    static auto* supportedProtocols = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx_protocolrange")->byval_arg;
    static auto* callbacks = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx_callbacks")->byval_arg;
    static auto* certChain = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* leafCertificateKey = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{supportedProtocols, callbacks, certChain, leafCertificateKey, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::*)(::Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls::unitytls_tlsctx_callbacks, uint64_t, uint64_t, ::Mono::Unity::UnityTls::unitytls_errorstate*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* supportedProtocols = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx_protocolrange")->byval_arg;
    static auto* callbacks = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx_callbacks")->byval_arg;
    static auto* certChain = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* leafCertificateKey = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{supportedProtocols, callbacks, certChain, leafCertificateKey, errorState, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_tlsctx* (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::*)(::System::IAsyncResult*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_create_server_t*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
