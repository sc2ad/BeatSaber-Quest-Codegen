#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsServerProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState;
}
// Type: ::ServerHandshakeState
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1235))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsServerProtocol::ServerHandshakeState
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState(Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState(Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState& operator=(Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState& operator=(Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsServer __declspec(property(get=__get_server, put=__set_server))  server;

constexpr void __set_server(Org::BouncyCastle::Crypto::Tls::TlsServer value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsServer __get_server() const;

 Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl __declspec(property(get=__get_serverContext, put=__set_serverContext))  serverContext;

constexpr void __set_serverContext(Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl __get_serverContext() const;

 Org::BouncyCastle::Crypto::Tls::TlsSession __declspec(property(get=__get_tlsSession, put=__set_tlsSession))  tlsSession;

constexpr void __set_tlsSession(Org::BouncyCastle::Crypto::Tls::TlsSession value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSession __get_tlsSession() const;

 Org::BouncyCastle::Crypto::Tls::SessionParameters __declspec(property(get=__get_sessionParameters, put=__set_sessionParameters))  sessionParameters;

constexpr void __set_sessionParameters(Org::BouncyCastle::Crypto::Tls::SessionParameters value) ;

constexpr Org::BouncyCastle::Crypto::Tls::SessionParameters __get_sessionParameters() const;

 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder __declspec(property(get=__get_sessionParametersBuilder, put=__set_sessionParametersBuilder))  sessionParametersBuilder;

constexpr void __set_sessionParametersBuilder(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder __get_sessionParametersBuilder() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_offeredCipherSuites, put=__set_offeredCipherSuites))  offeredCipherSuites;

constexpr void __set_offeredCipherSuites(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_offeredCipherSuites() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_offeredCompressionMethods, put=__set_offeredCompressionMethods))  offeredCompressionMethods;

constexpr void __set_offeredCompressionMethods(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_offeredCompressionMethods() const;

 System::Collections::IDictionary __declspec(property(get=__get_clientExtensions, put=__set_clientExtensions))  clientExtensions;

constexpr void __set_clientExtensions(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_clientExtensions() const;

 System::Collections::IDictionary __declspec(property(get=__get_serverExtensions, put=__set_serverExtensions))  serverExtensions;

constexpr void __set_serverExtensions(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_serverExtensions() const;

 bool __declspec(property(get=__get_resumedSession, put=__set_resumedSession))  resumedSession;

constexpr void __set_resumedSession(bool value) ;

constexpr bool __get_resumedSession() const;

 bool __declspec(property(get=__get_secure_renegotiation, put=__set_secure_renegotiation))  secure_renegotiation;

constexpr void __set_secure_renegotiation(bool value) ;

constexpr bool __get_secure_renegotiation() const;

 bool __declspec(property(get=__get_allowCertificateStatus, put=__set_allowCertificateStatus))  allowCertificateStatus;

constexpr void __set_allowCertificateStatus(bool value) ;

constexpr bool __get_allowCertificateStatus() const;

 bool __declspec(property(get=__get_expectSessionTicket, put=__set_expectSessionTicket))  expectSessionTicket;

constexpr void __set_expectSessionTicket(bool value) ;

constexpr bool __get_expectSessionTicket() const;

 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __declspec(property(get=__get_keyExchange, put=__set_keyExchange))  keyExchange;

constexpr void __set_keyExchange(Org::BouncyCastle::Crypto::Tls::TlsKeyExchange value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __get_keyExchange() const;

 Org::BouncyCastle::Crypto::Tls::TlsCredentials __declspec(property(get=__get_serverCredentials, put=__set_serverCredentials))  serverCredentials;

constexpr void __set_serverCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCredentials __get_serverCredentials() const;

 Org::BouncyCastle::Crypto::Tls::CertificateRequest __declspec(property(get=__get_certificateRequest, put=__set_certificateRequest))  certificateRequest;

constexpr void __set_certificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest value) ;

constexpr Org::BouncyCastle::Crypto::Tls::CertificateRequest __get_certificateRequest() const;

 int16_t __declspec(property(get=__get_clientCertificateType, put=__set_clientCertificateType))  clientCertificateType;

constexpr void __set_clientCertificateType(int16_t value) ;

constexpr int16_t __get_clientCertificateType() const;

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_clientCertificate, put=__set_clientCertificate))  clientCertificate;

constexpr void __set_clientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Certificate __get_clientCertificate() const;


// Methods

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState New_ctor() ;

/// @brief Method .ctor addr 0xf03a44 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsServerProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1236))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsServerProtocol
class CORDL_TYPE DtlsServerProtocol : public Org::BouncyCastle::Crypto::Tls::DtlsProtocol {
public:
// Declarations
using ServerHandshakeState = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DtlsServerProtocol() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsServerProtocol", modifiers: " const&", def_value: None }]
constexpr DtlsServerProtocol(DtlsServerProtocol const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsServerProtocol", modifiers: "&&", def_value: None }]
constexpr DtlsServerProtocol(DtlsServerProtocol&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsServerProtocol(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::DtlsProtocol(ptr) {
}


  constexpr DtlsServerProtocol& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsServerProtocol& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsServerProtocol& operator=(DtlsServerProtocol&& o) noexcept = default;
  constexpr DtlsServerProtocol& operator=(DtlsServerProtocol const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_mVerifyRequests, put=__set_mVerifyRequests))  mVerifyRequests;

constexpr void __set_mVerifyRequests(bool value) ;

constexpr bool __get_mVerifyRequests() const;


// Properties

 bool __declspec(property(get=get_VerifyRequests, put=set_VerifyRequests))  VerifyRequests;


// Methods

static Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol New_ctor(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xee2190 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method get_VerifyRequests addr 0xee219c size 0x8 virtual true final false
 bool get_VerifyRequests() ;

/// @brief Method set_VerifyRequests addr 0xee21a4 size 0xc virtual true final false
 void set_VerifyRequests(bool value) ;

/// @brief Method Accept addr 0xee21b0 size 0x58c virtual true final false
 Org::BouncyCastle::Crypto::Tls::DtlsTransport Accept(Org::BouncyCastle::Crypto::Tls::TlsServer server, Org::BouncyCastle::Crypto::Tls::DatagramTransport transport) ;

/// @brief Method AbortServerHandshake addr 0xee273c size 0x50 virtual true final false
 void AbortServerHandshake(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer, uint8_t alertDescription) ;

/// @brief Method ServerHandshake addr 0xee278c size 0xe18 virtual true final false
 Org::BouncyCastle::Crypto::Tls::DtlsTransport ServerHandshake(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer) ;

/// @brief Method InvalidateSession addr 0xee35a4 size 0xc4 virtual true final false
 void InvalidateSession(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state) ;

/// @brief Method GenerateCertificateRequest addr 0xee3668 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GenerateCertificateRequest(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method GenerateCertificateStatus addr 0xee36ec size 0x84 virtual true final false
 ::ArrayW<uint8_t> GenerateCertificateStatus(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, Org::BouncyCastle::Crypto::Tls::CertificateStatus certificateStatus) ;

/// @brief Method GenerateNewSessionTicket addr 0xee3770 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GenerateNewSessionTicket(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, Org::BouncyCastle::Crypto::Tls::NewSessionTicket newSessionTicket) ;

/// @brief Method GenerateServerHello addr 0xee37f4 size 0x764 virtual true final false
 ::ArrayW<uint8_t> GenerateServerHello(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state) ;

/// @brief Method NotifyClientCertificate addr 0xee3f58 size 0x2e4 virtual true final false
 void NotifyClientCertificate(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method ProcessClientCertificate addr 0xee423c size 0xc8 virtual true final false
 void ProcessClientCertificate(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessCertificateVerify addr 0xee4304 size 0x518 virtual true final false
 void ProcessCertificateVerify(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body, Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash prepareFinishHash) ;

/// @brief Method ProcessClientHello addr 0xee481c size 0x6b0 virtual true final false
 void ProcessClientHello(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessClientKeyExchange addr 0xee4ecc size 0xf8 virtual true final false
 void ProcessClientKeyExchange(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessClientSupplementalData addr 0xee4fc4 size 0xfc virtual true final false
 void ProcessClientSupplementalData(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ExpectCertificateVerifyMessage addr 0xee50c0 size 0x1078 virtual true final false
 bool ExpectCertificateVerifyMessage(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol, "Org.BouncyCastle.Crypto.Tls", "DtlsServerProtocol");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, "Org.BouncyCastle.Crypto.Tls", "DtlsServerProtocol/ServerHandshakeState");
