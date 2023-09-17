#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsClientProtocol;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState;
}
// Type: ::ClientHandshakeState
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1223))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsClientProtocol::ClientHandshakeState
class CORDL_TYPE ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState(____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState(____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState& operator=(____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState& operator=(____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsClient __declspec(property(get=__get_client, put=__set_client))  client;

constexpr void __set_client(::Org::BouncyCastle::Crypto::Tls::TlsClient value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient __get_client() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl __declspec(property(get=__get_clientContext, put=__set_clientContext))  clientContext;

constexpr void __set_clientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl __get_clientContext() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsSession __declspec(property(get=__get_tlsSession, put=__set_tlsSession))  tlsSession;

constexpr void __set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession __get_tlsSession() const;

 ::Org::BouncyCastle::Crypto::Tls::SessionParameters __declspec(property(get=__get_sessionParameters, put=__set_sessionParameters))  sessionParameters;

constexpr void __set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters __get_sessionParameters() const;

 ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder __declspec(property(get=__get_sessionParametersBuilder, put=__set_sessionParametersBuilder))  sessionParametersBuilder;

constexpr void __set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder __get_sessionParametersBuilder() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_offeredCipherSuites, put=__set_offeredCipherSuites))  offeredCipherSuites;

constexpr void __set_offeredCipherSuites(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_offeredCipherSuites() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_clientExtensions, put=__set_clientExtensions))  clientExtensions;

constexpr void __set_clientExtensions(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_clientExtensions() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_serverExtensions, put=__set_serverExtensions))  serverExtensions;

constexpr void __set_serverExtensions(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_serverExtensions() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_selectedSessionID, put=__set_selectedSessionID))  selectedSessionID;

constexpr void __set_selectedSessionID(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_selectedSessionID() const;

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

 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __declspec(property(get=__get_keyExchange, put=__set_keyExchange))  keyExchange;

constexpr void __set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __get_keyExchange() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication __declspec(property(get=__get_authentication, put=__set_authentication))  authentication;

constexpr void __set_authentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication __get_authentication() const;

 ::Org::BouncyCastle::Crypto::Tls::CertificateStatus __declspec(property(get=__get_certificateStatus, put=__set_certificateStatus))  certificateStatus;

constexpr void __set_certificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus __get_certificateStatus() const;

 ::Org::BouncyCastle::Crypto::Tls::CertificateRequest __declspec(property(get=__get_certificateRequest, put=__set_certificateRequest))  certificateRequest;

constexpr void __set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest __get_certificateRequest() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsCredentials __declspec(property(get=__get_clientCredentials, put=__set_clientCredentials))  clientCredentials;

constexpr void __set_clientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials __get_clientCredentials() const;


// Methods

// Ctor Parameters []
explicit ____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState() ;

/// @brief Method .ctor addr 0xeda434 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsClientProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1224))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsClientProtocol
class CORDL_TYPE DtlsClientProtocol : public ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol {
public:
// Declarations
using ClientHandshakeState = ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DtlsClientProtocol() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: " const&", def_value: None }]
constexpr DtlsClientProtocol(DtlsClientProtocol const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsClientProtocol", modifiers: "&&", def_value: None }]
constexpr DtlsClientProtocol(DtlsClientProtocol&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsClientProtocol(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol(ptr) {
}


  constexpr DtlsClientProtocol& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsClientProtocol& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsClientProtocol& operator=(DtlsClientProtocol&& o) noexcept = default;
  constexpr DtlsClientProtocol& operator=(DtlsClientProtocol const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "secureRandom", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit DtlsClientProtocol(::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xed9d30 size 0x4 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method Connect addr 0xed9d34 size 0x700 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::DtlsTransport Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient client, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport transport) ;

/// @brief Method AbortClientHandshake addr 0xeda590 size 0x50 virtual true final false
 void AbortClientHandshake(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer, uint8_t alertDescription) ;

/// @brief Method ClientHandshake addr 0xeda5e0 size 0x1390 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::DtlsTransport ClientHandshake(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer) ;

/// @brief Method GenerateCertificateVerify addr 0xedc3c0 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GenerateCertificateVerify(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DigitallySigned certificateVerify) ;

/// @brief Method GenerateClientHello addr 0xedc444 size 0x5e0 virtual true final false
 ::ArrayW<uint8_t> GenerateClientHello(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::TlsClient client) ;

/// @brief Method GenerateClientKeyExchange addr 0xedca24 size 0xec virtual true final false
 ::ArrayW<uint8_t> GenerateClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state) ;

/// @brief Method InvalidateSession addr 0xedcb10 size 0xc4 virtual true final false
 void InvalidateSession(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state) ;

/// @brief Method ProcessCertificateRequest addr 0xedcbd4 size 0x14c virtual true final false
 void ProcessCertificateRequest(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessCertificateStatus addr 0xedcd20 size 0xc8 virtual true final false
 void ProcessCertificateStatus(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessHelloVerifyRequest addr 0xedcde8 size 0x18c virtual true final false
 ::ArrayW<uint8_t> ProcessHelloVerifyRequest(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessNewSessionTicket addr 0xedcf74 size 0x108 virtual true final false
 void ProcessNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessServerCertificate addr 0xedd07c size 0x224 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::Certificate ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessServerHello addr 0xedd2a0 size 0xca4 virtual true final false
 void ProcessServerHello(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessServerKeyExchange addr 0xeddf44 size 0xf8 virtual true final false
 void ProcessServerKeyExchange(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ProcessServerSupplementalData addr 0xede03c size 0xfc virtual true final false
 void ProcessServerSupplementalData(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body) ;

/// @brief Method ReportServerVersion addr 0xede138 size 0x144 virtual true final false
 void ReportServerVersion(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion server_version) ;

/// @brief Method PatchClientHelloWithCookie addr 0xedbf80 size 0x130 virtual false final false
static ::ArrayW<uint8_t> PatchClientHelloWithCookie(::ArrayW<uint8_t> clientHelloBody, ::ArrayW<uint8_t> cookie) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, "Org.BouncyCastle.Crypto.Tls", "DtlsClientProtocol/ClientHandshakeState");
