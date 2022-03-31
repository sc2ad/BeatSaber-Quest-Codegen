// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.MobileTlsContext
#include "Mono/Net/Security/MobileTlsContext.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsConnectionInfo
  class MonoTlsConnectionInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Forward declaring type: UnityTlsContext
  class UnityTlsContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::UnityTlsContext);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsContext*, "Mono.Unity", "UnityTlsContext");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTlsContext
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext {
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
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx* tlsContext
    // Size: 0x8
    // Offset: 0x58
    ::Mono::Unity::UnityTls::unitytls_tlsctx* tlsContext;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx*) == 0x8);
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list* requestedClientCertChain
    // Size: 0x8
    // Offset: 0x60
    ::Mono::Unity::UnityTls::unitytls_x509list* requestedClientCertChain;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_x509list*) == 0x8);
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_key* requestedClientKey
    // Size: 0x8
    // Offset: 0x68
    ::Mono::Unity::UnityTls::unitytls_key* requestedClientKey;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_key*) == 0x8);
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_read_callback readCallback
    // Size: 0x8
    // Offset: 0x70
    ::Mono::Unity::UnityTls::unitytls_tlsctx_read_callback* readCallback;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*) == 0x8);
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_write_callback writeCallback
    // Size: 0x8
    // Offset: 0x78
    ::Mono::Unity::UnityTls::unitytls_tlsctx_write_callback* writeCallback;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx_write_callback*) == 0x8);
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_certificate_callback certificateCallback
    // Size: 0x8
    // Offset: 0x80
    ::Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback* certificateCallback;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback*) == 0x8);
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_x509verify_callback verifyCallback
    // Size: 0x8
    // Offset: 0x88
    ::Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback* verifyCallback;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate localClientCertificate
    // Size: 0x8
    // Offset: 0x90
    ::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate
    // Size: 0x8
    // Offset: 0x98
    ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private Mono.Security.Interface.MonoTlsConnectionInfo connectioninfo
    // Size: 0x8
    // Offset: 0xA0
    ::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::MonoTlsConnectionInfo*) == 0x8);
    // private System.Boolean isAuthenticated
    // Size: 0x1
    // Offset: 0xA8
    bool isAuthenticated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasContext
    // Size: 0x1
    // Offset: 0xA9
    bool hasContext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean closedGraceful
    // Size: 0x1
    // Offset: 0xAA
    bool closedGraceful;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closedGraceful and: writeBuffer
    char __padding12[0x5] = {};
    // private System.Byte[] writeBuffer
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<uint8_t> writeBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] readBuffer
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<uint8_t> readBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Runtime.InteropServices.GCHandle handle
    // Size: 0x4
    // Offset: 0xC0
    ::System::Runtime::InteropServices::GCHandle handle;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle) == 0x4);
    // Padding between fields: handle and: lastException
    char __padding15[0x4] = {};
    // private System.Exception lastException
    // Size: 0x8
    // Offset: 0xC8
    ::System::Exception* lastException;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    public:
    // Get instance field reference: private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx* tlsContext
    ::Mono::Unity::UnityTls::unitytls_tlsctx*& dyn_tlsContext();
    // Get instance field reference: private Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list* requestedClientCertChain
    ::Mono::Unity::UnityTls::unitytls_x509list*& dyn_requestedClientCertChain();
    // Get instance field reference: private Mono.Unity.UnityTls/Mono.Unity.unitytls_key* requestedClientKey
    ::Mono::Unity::UnityTls::unitytls_key*& dyn_requestedClientKey();
    // Get instance field reference: private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_read_callback readCallback
    ::Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*& dyn_readCallback();
    // Get instance field reference: private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_write_callback writeCallback
    ::Mono::Unity::UnityTls::unitytls_tlsctx_write_callback*& dyn_writeCallback();
    // Get instance field reference: private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_certificate_callback certificateCallback
    ::Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback*& dyn_certificateCallback();
    // Get instance field reference: private Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_x509verify_callback verifyCallback
    ::Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback*& dyn_verifyCallback();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate localClientCertificate
    ::System::Security::Cryptography::X509Certificates::X509Certificate*& dyn_localClientCertificate();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate
    ::System::Security::Cryptography::X509Certificates::X509Certificate*& dyn_remoteCertificate();
    // Get instance field reference: private Mono.Security.Interface.MonoTlsConnectionInfo connectioninfo
    ::Mono::Security::Interface::MonoTlsConnectionInfo*& dyn_connectioninfo();
    // Get instance field reference: private System.Boolean isAuthenticated
    bool& dyn_isAuthenticated();
    // Get instance field reference: private System.Boolean hasContext
    bool& dyn_hasContext();
    // Get instance field reference: private System.Boolean closedGraceful
    bool& dyn_closedGraceful();
    // Get instance field reference: private System.Byte[] writeBuffer
    ::ArrayW<uint8_t>& dyn_writeBuffer();
    // Get instance field reference: private System.Byte[] readBuffer
    ::ArrayW<uint8_t>& dyn_readBuffer();
    // Get instance field reference: private System.Runtime.InteropServices.GCHandle handle
    ::System::Runtime::InteropServices::GCHandle& dyn_handle();
    // Get instance field reference: private System.Exception lastException
    ::System::Exception*& dyn_lastException();
    // static private System.Void ExtractNativeKeyAndChainFromManagedCertificate(System.Security.Cryptography.X509Certificates.X509Certificate cert, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState, out Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list* nativeCertChain, out Mono.Unity.UnityTls/Mono.Unity.unitytls_key* nativeKey)
    // Offset: 0x1AAC0E8
    static void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState, ByRef<::Mono::Unity::UnityTls::unitytls_x509list*> nativeCertChain, ByRef<::Mono::Unity::UnityTls::unitytls_key*> nativeKey);
    // static private System.IntPtr WriteCallback(System.Void* userData, System.Byte* data, System.IntPtr bufferLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AAB7F4
    static ::System::IntPtr WriteCallback(void* userData, uint8_t* data, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // private System.IntPtr WriteCallback(System.Byte* data, System.IntPtr bufferLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AACC30
    ::System::IntPtr WriteCallback(uint8_t* data, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // static private System.IntPtr ReadCallback(System.Void* userData, System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AAB8C4
    static ::System::IntPtr ReadCallback(void* userData, uint8_t* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // private System.IntPtr ReadCallback(System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AACE78
    ::System::IntPtr ReadCallback(uint8_t* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // static private Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result VerifyCallback(System.Void* userData, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref chain, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AAB994
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result VerifyCallback(void* userData, ::Mono::Unity::UnityTls::unitytls_x509list_ref chain, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // private Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result VerifyCallback(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref chain, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AAD148
    ::Mono::Unity::UnityTls::unitytls_x509verify_result VerifyCallback(::Mono::Unity::UnityTls::unitytls_x509list_ref chain, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // static private System.Void CertificateCallback(System.Void* userData, Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx* ctx, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509name* caList, System.IntPtr caListLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref* chain, Mono.Unity.UnityTls/Mono.Unity.unitytls_key_ref* key, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AABA5C
    static void CertificateCallback(void* userData, ::Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls::unitytls_x509name* caList, ::System::IntPtr caListLen, ::Mono::Unity::UnityTls::unitytls_x509list_ref* chain, ::Mono::Unity::UnityTls::unitytls_key_ref* key, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // private System.Void CertificateCallback(Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx* ctx, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509name* caList, System.IntPtr caListLen, Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref* chain, Mono.Unity.UnityTls/Mono.Unity.unitytls_key_ref* key, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1AAD290
    void CertificateCallback(::Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls::unitytls_x509name* caList, ::System::IntPtr caListLen, ::Mono::Unity::UnityTls::unitytls_x509list_ref* chain, ::Mono::Unity::UnityTls::unitytls_key_ref* key, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public override System.Boolean get_IsAuthenticated()
    // Offset: 0x1AAC3EC
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Boolean MobileTlsContext::get_IsAuthenticated()
    bool get_IsAuthenticated();
    // override System.Security.Cryptography.X509Certificates.X509Certificate get_LocalClientCertificate()
    // Offset: 0x1AAC3F4
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Security.Cryptography.X509Certificates.X509Certificate MobileTlsContext::get_LocalClientCertificate()
    ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate();
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean serverMode, System.String targetHost, System.Security.Authentication.SslProtocols enabledProtocols, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Boolean askForClientCert)
    // Offset: 0x1AABB2C
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Void MobileTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean serverMode, System.String targetHost, System.Security.Authentication.SslProtocols enabledProtocols, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Boolean askForClientCert)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTlsContext* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool serverMode, ::StringW targetHost, ::System::Security::Authentication::SslProtocols enabledProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Unity::UnityTlsContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTlsContext*, creationType>(parent, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, askForClientCert)));
    }
    // public override System.ValueTuple`2<System.Int32,System.Boolean> Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1AAC3FC
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.ValueTuple`2<System.Int32,System.Boolean> MobileTlsContext::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    ::System::ValueTuple_2<int, bool> Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.ValueTuple`2<System.Int32,System.Boolean> Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1AAC59C
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.ValueTuple`2<System.Int32,System.Boolean> MobileTlsContext::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    ::System::ValueTuple_2<int, bool> Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Shutdown()
    // Offset: 0x1AAC734
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Void MobileTlsContext::Shutdown()
    void Shutdown();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1AAC7FC
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Void MobileTlsContext::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void StartHandshake()
    // Offset: 0x1AAC870
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Void MobileTlsContext::StartHandshake()
    void StartHandshake();
    // public override System.Boolean ProcessHandshake()
    // Offset: 0x1AAC9E0
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Boolean MobileTlsContext::ProcessHandshake()
    bool ProcessHandshake();
    // public override System.Void FinishHandshake()
    // Offset: 0x1AACB34
    // Implemented from: Mono.Net.Security.MobileTlsContext
    // Base method: System.Void MobileTlsContext::FinishHandshake()
    void FinishHandshake();
  }; // Mono.Unity.UnityTlsContext
  #pragma pack(pop)
  static check_size<sizeof(UnityTlsContext), 200 + sizeof(::System::Exception*)> __Mono_Unity_UnityTlsContextSizeCheck;
  static_assert(sizeof(UnityTlsContext) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate
// Il2CppName: ExtractNativeKeyAndChainFromManagedCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Mono::Unity::UnityTls::unitytls_errorstate*, ByRef<::Mono::Unity::UnityTls::unitytls_x509list*>, ByRef<::Mono::Unity::UnityTls::unitytls_key*>)>(&Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    static auto* nativeCertChain = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list"))->this_arg;
    static auto* nativeKey = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_key"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "ExtractNativeKeyAndChainFromManagedCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert, errorState, nativeCertChain, nativeKey});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::WriteCallback
// Il2CppName: WriteCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(void*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::WriteCallback)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "WriteCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, data, bufferLen, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::WriteCallback
// Il2CppName: WriteCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::Unity::UnityTlsContext::*)(uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::WriteCallback)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "WriteCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, bufferLen, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::ReadCallback
// Il2CppName: ReadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(void*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::ReadCallback)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "ReadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, buffer, bufferLen, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::ReadCallback
// Il2CppName: ReadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::Unity::UnityTlsContext::*)(uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::ReadCallback)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "ReadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bufferLen, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::VerifyCallback
// Il2CppName: VerifyCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_x509verify_result (*)(void*, ::Mono::Unity::UnityTls::unitytls_x509list_ref, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::VerifyCallback)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "VerifyCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, chain, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::VerifyCallback
// Il2CppName: VerifyCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_x509verify_result (Mono::Unity::UnityTlsContext::*)(::Mono::Unity::UnityTls::unitytls_x509list_ref, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::VerifyCallback)> {
  static const MethodInfo* get() {
    static auto* chain = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "VerifyCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::CertificateCallback
// Il2CppName: CertificateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::Mono::Unity::UnityTls::unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_x509list_ref*, ::Mono::Unity::UnityTls::unitytls_key_ref*, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::CertificateCallback)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* ctx = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx"))->byval_arg;
    static auto* cn = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* cnLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* caList = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509name"))->byval_arg;
    static auto* caListLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* chain = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref"))->byval_arg;
    static auto* key = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_key_ref"))->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "CertificateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::CertificateCallback
// Il2CppName: CertificateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)(::Mono::Unity::UnityTls::unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_x509list_ref*, ::Mono::Unity::UnityTls::unitytls_key_ref*, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTlsContext::CertificateCallback)> {
  static const MethodInfo* get() {
    static auto* ctx = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx"))->byval_arg;
    static auto* cn = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* cnLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* caList = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509name"))->byval_arg;
    static auto* caListLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* chain = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref"))->byval_arg;
    static auto* key = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_key_ref"))->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "CertificateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx, cn, cnLen, caList, caListLen, chain, key, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::get_IsAuthenticated
// Il2CppName: get_IsAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::get_IsAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "get_IsAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::get_LocalClientCertificate
// Il2CppName: get_LocalClientCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::get_LocalClientCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "get_LocalClientCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int, bool> (Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Unity::UnityTlsContext::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int, bool> (Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Unity::UnityTlsContext::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::Shutdown
// Il2CppName: Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::Shutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)(bool)>(&Mono::Unity::UnityTlsContext::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::StartHandshake
// Il2CppName: StartHandshake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::StartHandshake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "StartHandshake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::ProcessHandshake
// Il2CppName: ProcessHandshake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::ProcessHandshake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "ProcessHandshake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsContext::FinishHandshake
// Il2CppName: FinishHandshake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::FinishHandshake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsContext*), "FinishHandshake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
