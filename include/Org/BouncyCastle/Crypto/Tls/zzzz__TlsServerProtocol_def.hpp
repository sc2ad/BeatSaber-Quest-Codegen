#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerProtocol;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsServerProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1292))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1323))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsServerProtocol
class CORDL_TYPE TlsServerProtocol : public Org::BouncyCastle::Crypto::Tls::TlsProtocol {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~TlsServerProtocol() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsServerProtocol", modifiers: " const&", def_value: None }]
constexpr TlsServerProtocol(TlsServerProtocol const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsServerProtocol", modifiers: "&&", def_value: None }]
constexpr TlsServerProtocol(TlsServerProtocol&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsServerProtocol(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::TlsProtocol(ptr) {
}


  constexpr TlsServerProtocol& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsServerProtocol& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsServerProtocol& operator=(TlsServerProtocol&& o) noexcept = default;
  constexpr TlsServerProtocol& operator=(TlsServerProtocol const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsServer __declspec(property(get=__get_mTlsServer, put=__set_mTlsServer))  mTlsServer;

constexpr void __set_mTlsServer(Org::BouncyCastle::Crypto::Tls::TlsServer value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsServer __get_mTlsServer() const;

 Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl __declspec(property(get=__get_mTlsServerContext, put=__set_mTlsServerContext))  mTlsServerContext;

constexpr void __set_mTlsServerContext(Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl __get_mTlsServerContext() const;

 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __declspec(property(get=__get_mKeyExchange, put=__set_mKeyExchange))  mKeyExchange;

constexpr void __set_mKeyExchange(Org::BouncyCastle::Crypto::Tls::TlsKeyExchange value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __get_mKeyExchange() const;

 Org::BouncyCastle::Crypto::Tls::TlsCredentials __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials))  mServerCredentials;

constexpr void __set_mServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCredentials __get_mServerCredentials() const;

 Org::BouncyCastle::Crypto::Tls::CertificateRequest __declspec(property(get=__get_mCertificateRequest, put=__set_mCertificateRequest))  mCertificateRequest;

constexpr void __set_mCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest value) ;

constexpr Org::BouncyCastle::Crypto::Tls::CertificateRequest __get_mCertificateRequest() const;

 int16_t __declspec(property(get=__get_mClientCertificateType, put=__set_mClientCertificateType))  mClientCertificateType;

constexpr void __set_mClientCertificateType(int16_t value) ;

constexpr int16_t __get_mClientCertificateType() const;

 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __declspec(property(get=__get_mPrepareFinishHash, put=__set_mPrepareFinishHash))  mPrepareFinishHash;

constexpr void __set_mPrepareFinishHash(Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __get_mPrepareFinishHash() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=get_Context))  Context;

 Org::BouncyCastle::Crypto::Tls::AbstractTlsContext __declspec(property(get=get_ContextAdmin))  ContextAdmin;

 Org::BouncyCastle::Crypto::Tls::TlsPeer __declspec(property(get=get_Peer))  Peer;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit TlsServerProtocol(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf256a4 size 0x24 virtual false final false
 void _ctor(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit TlsServerProtocol(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf256c8 size 0x24 virtual false final false
 void _ctor(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit TlsServerProtocol(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf256ec size 0x24 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method Accept addr 0xf25710 size 0x308 virtual true final false
 void Accept(Org::BouncyCastle::Crypto::Tls::TlsServer tlsServer) ;

/// @brief Method CleanupHandshake addr 0xf25a18 size 0x24 virtual true final false
 void CleanupHandshake() ;

/// @brief Method get_Context addr 0xf25a3c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsContext get_Context() ;

/// @brief Method get_ContextAdmin addr 0xf25a44 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::AbstractTlsContext get_ContextAdmin() ;

/// @brief Method get_Peer addr 0xf25a4c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsPeer get_Peer() ;

/// @brief Method HandleHandshakeMessage addr 0xf25a54 size 0xcdc virtual true final false
 void HandleHandshakeMessage(uint8_t type, System::IO::MemoryStream buf) ;

/// @brief Method HandleAlertWarningMessage addr 0xf26afc size 0x174 virtual true final false
 void HandleAlertWarningMessage(uint8_t alertDescription) ;

/// @brief Method NotifyClientCertificate addr 0xf26c70 size 0x2cc virtual true final false
 void NotifyClientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method ReceiveCertificateMessage addr 0xf27278 size 0x8c virtual true final false
 void ReceiveCertificateMessage(System::IO::MemoryStream buf) ;

/// @brief Method ReceiveCertificateVerifyMessage addr 0xf27304 size 0x4fc virtual true final false
 void ReceiveCertificateVerifyMessage(System::IO::MemoryStream buf) ;

/// @brief Method ReceiveClientHelloMessage addr 0xf27efc size 0x658 virtual true final false
 void ReceiveClientHelloMessage(System::IO::MemoryStream buf) ;

/// @brief Method ReceiveClientKeyExchangeMessage addr 0xf2899c size 0x2dc virtual true final false
 void ReceiveClientKeyExchangeMessage(System::IO::MemoryStream buf) ;

/// @brief Method SendCertificateRequestMessage addr 0xf28c78 size 0x90 virtual true final false
 void SendCertificateRequestMessage(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method SendCertificateStatusMessage addr 0xf28d08 size 0x90 virtual true final false
 void SendCertificateStatusMessage(Org::BouncyCastle::Crypto::Tls::CertificateStatus certificateStatus) ;

/// @brief Method SendNewSessionTicketMessage addr 0xf28d98 size 0xc4 virtual true final false
 void SendNewSessionTicketMessage(Org::BouncyCastle::Crypto::Tls::NewSessionTicket newSessionTicket) ;

/// @brief Method SendServerHelloMessage addr 0xf28e5c size 0x874 virtual true final false
 void SendServerHelloMessage() ;

/// @brief Method SendServerHelloDoneMessage addr 0xf2998c size 0xc8 virtual true final false
 void SendServerHelloDoneMessage() ;

/// @brief Method SendServerKeyExchangeMessage addr 0xf29ab8 size 0x88 virtual true final false
 void SendServerKeyExchangeMessage(::ArrayW<uint8_t> serverKeyExchange) ;

/// @brief Method ExpectCertificateVerifyMessage addr 0xf29b40 size 0x80 virtual true final false
 bool ExpectCertificateVerifyMessage() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol, "Org.BouncyCastle.Crypto.Tls", "TlsServerProtocol");
