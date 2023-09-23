#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509verify_result;
}
namespace Mono::Security::Interface {
class MonoTlsConnectionInfo;
}
namespace System {
class Exception;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_write_callback;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509list_ref;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback;
}
namespace Mono::Unity {
class Mono__Unity__UnityTls__unitytls_tlsctx_read_callback;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsContext;
}
// Type: Mono.Unity::UnityTlsContext
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7688))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7661))
// CS Name: Mono.Unity.UnityTlsContext
class CORDL_TYPE UnityTlsContext : public Mono::Net::Security::MobileTlsContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~UnityTlsContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsContext", modifiers: " const&", def_value: None }]
constexpr UnityTlsContext(UnityTlsContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsContext", modifiers: "&&", def_value: None }]
constexpr UnityTlsContext(UnityTlsContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityTlsContext(void* ptr) noexcept : Mono::Net::Security::MobileTlsContext(ptr) {
}


  constexpr UnityTlsContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityTlsContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityTlsContext& operator=(UnityTlsContext&& o) noexcept = default;
  constexpr UnityTlsContext& operator=(UnityTlsContext const& o) noexcept = default;
                


// Fields

 void* __declspec(property(get=__get_tlsContext, put=__set_tlsContext))  tlsContext;

constexpr void __set_tlsContext(void* value) ;

constexpr void* __get_tlsContext() const;

 void* __declspec(property(get=__get_requestedClientCertChain, put=__set_requestedClientCertChain))  requestedClientCertChain;

constexpr void __set_requestedClientCertChain(void* value) ;

constexpr void* __get_requestedClientCertChain() const;

 void* __declspec(property(get=__get_requestedClientKey, put=__set_requestedClientKey))  requestedClientKey;

constexpr void __set_requestedClientKey(void* value) ;

constexpr void* __get_requestedClientKey() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback __declspec(property(get=__get_readCallback, put=__set_readCallback))  readCallback;

constexpr void __set_readCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback __get_readCallback() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback __declspec(property(get=__get_writeCallback, put=__set_writeCallback))  writeCallback;

constexpr void __set_writeCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback __get_writeCallback() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback __declspec(property(get=__get_certificateCallback, put=__set_certificateCallback))  certificateCallback;

constexpr void __set_certificateCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback __get_certificateCallback() const;

 Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback __declspec(property(get=__get_verifyCallback, put=__set_verifyCallback))  verifyCallback;

constexpr void __set_verifyCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback value) ;

constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback __get_verifyCallback() const;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=__get_localClientCertificate, put=__set_localClientCertificate))  localClientCertificate;

constexpr void __set_localClientCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate __get_localClientCertificate() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=__get_remoteCertificate, put=__set_remoteCertificate))  remoteCertificate;

constexpr void __set_remoteCertificate(System::Security::Cryptography::X509Certificates::X509Certificate2 value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2 __get_remoteCertificate() const;

 Mono::Security::Interface::MonoTlsConnectionInfo __declspec(property(get=__get_connectioninfo, put=__set_connectioninfo))  connectioninfo;

constexpr void __set_connectioninfo(Mono::Security::Interface::MonoTlsConnectionInfo value) ;

constexpr Mono::Security::Interface::MonoTlsConnectionInfo __get_connectioninfo() const;

 bool __declspec(property(get=__get_isAuthenticated, put=__set_isAuthenticated))  isAuthenticated;

constexpr void __set_isAuthenticated(bool value) ;

constexpr bool __get_isAuthenticated() const;

 bool __declspec(property(get=__get_hasContext, put=__set_hasContext))  hasContext;

constexpr void __set_hasContext(bool value) ;

constexpr bool __get_hasContext() const;

 bool __declspec(property(get=__get_closedGraceful, put=__set_closedGraceful))  closedGraceful;

constexpr void __set_closedGraceful(bool value) ;

constexpr bool __get_closedGraceful() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_writeBuffer, put=__set_writeBuffer))  writeBuffer;

constexpr void __set_writeBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_writeBuffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_readBuffer, put=__set_readBuffer))  readBuffer;

constexpr void __set_readBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_readBuffer() const;

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get_handle() const;

 System::Exception __declspec(property(get=__get_lastException, put=__set_lastException))  lastException;

constexpr void __set_lastException(System::Exception value) ;

constexpr System::Exception __get_lastException() const;


// Properties

 bool __declspec(property(get=get_IsAuthenticated))  IsAuthenticated;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_LocalClientCertificate))  LocalClientCertificate;

 System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=get_RemoteCertificate))  RemoteCertificate;


// Methods

// Ctor Parameters [CppParam { name: "parent", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "options", ty: "Mono::Net::Security::MonoSslAuthenticationOptions", modifiers: "", def_value: None }]
explicit UnityTlsContext(Mono::Net::Security::MobileAuthenticatedStream parent, Mono::Net::Security::MonoSslAuthenticationOptions options) ;

/// @brief Method .ctor addr 0x26886e8 size 0x708 virtual false final false
 void _ctor(Mono::Net::Security::MobileAuthenticatedStream parent, Mono::Net::Security::MonoSslAuthenticationOptions options) ;

/// @brief Method ExtractNativeKeyAndChainFromManagedCertificate addr 0x2688fa0 size 0x340 virtual false final false
static void ExtractNativeKeyAndChainFromManagedCertificate(System::Security::Cryptography::X509Certificates::X509Certificate cert, void* errorState, ByRef<void*> nativeCertChain, ByRef<void*> nativeKey) ;

/// @brief Method get_IsAuthenticated addr 0x26892e0 size 0x8 virtual true final false
 bool get_IsAuthenticated() ;

/// @brief Method get_LocalClientCertificate addr 0x26892e8 size 0x8 virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_LocalClientCertificate() ;

/// @brief Method get_RemoteCertificate addr 0x26892f0 size 0x8 virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate2 get_RemoteCertificate() ;

/// @brief Method Read addr 0x26892f8 size 0x1a8 virtual true final false
 System::ValueTuple_2<int32_t,bool> Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x26894a0 size 0x1a0 virtual true final false
 System::ValueTuple_2<int32_t,bool> Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Renegotiate addr 0x2689640 size 0x40 virtual true final false
 void Renegotiate() ;

/// @brief Method PendingRenegotiation addr 0x2689680 size 0x8 virtual true final false
 bool PendingRenegotiation() ;

/// @brief Method Shutdown addr 0x2689688 size 0xf8 virtual true final false
 void Shutdown() ;

/// @brief Method Dispose addr 0x268979c size 0x78 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method StartHandshake addr 0x2689814 size 0x180 virtual true final false
 void StartHandshake() ;

/// @brief Method ProcessHandshake addr 0x2689994 size 0x174 virtual true final false
 bool ProcessHandshake() ;

/// @brief Method FinishHandshake addr 0x2689b58 size 0x128 virtual true final false
 void FinishHandshake() ;

/// @brief Method WriteCallback addr 0x26883e0 size 0xc8 virtual false final false
static ::cordl_internals::intptr_t WriteCallback(void* userData, void* data, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

/// @brief Method WriteCallback addr 0x2689ca0 size 0x260 virtual false final false
 ::cordl_internals::intptr_t WriteCallback(void* data, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

/// @brief Method ReadCallback addr 0x26884a8 size 0xc8 virtual false final false
static ::cordl_internals::intptr_t ReadCallback(void* userData, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

/// @brief Method ReadCallback addr 0x268a0f0 size 0x2f8 virtual false final false
 ::cordl_internals::intptr_t ReadCallback(void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState) ;

/// @brief Method VerifyCallback addr 0x2688570 size 0xb0 virtual false final false
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result VerifyCallback(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* errorState) ;

/// @brief Method VerifyCallback addr 0x268a4f4 size 0x408 virtual false final false
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result VerifyCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* errorState) ;

/// @brief Method CertificateCallback addr 0x2688620 size 0xc8 virtual false final false
static void CertificateCallback(void* userData, void* ctx, void* cn, ::cordl_internals::intptr_t cnLen, void* caList, ::cordl_internals::intptr_t caListLen, void* chain, void* key, void* errorState) ;

/// @brief Method CertificateCallback addr 0x268a984 size 0x2cc virtual false final false
 void CertificateCallback(void* ctx, void* cn, ::cordl_internals::intptr_t cnLen, void* caList, ::cordl_internals::intptr_t caListLen, void* chain, void* key, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
NEED_NO_BOX(Mono::Unity::UnityTlsContext);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTlsContext, "Mono.Unity", "UnityTlsContext");
