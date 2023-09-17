#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientProtocol;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsClientProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1292))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1293))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsClientProtocol
class CORDL_TYPE TlsClientProtocol : public ::Org::BouncyCastle::Crypto::Tls::TlsProtocol {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~TlsClientProtocol() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientProtocol", modifiers: " const&", def_value: None }]
constexpr TlsClientProtocol(TlsClientProtocol const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientProtocol", modifiers: "&&", def_value: None }]
constexpr TlsClientProtocol(TlsClientProtocol&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsClientProtocol(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::TlsProtocol(ptr) {
}


  constexpr TlsClientProtocol& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsClientProtocol& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsClientProtocol& operator=(TlsClientProtocol&& o) noexcept = default;
  constexpr TlsClientProtocol& operator=(TlsClientProtocol const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsClient __declspec(property(get=__get_mTlsClient, put=__set_mTlsClient))  mTlsClient;

constexpr void __set_mTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsClient value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient __get_mTlsClient() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl __declspec(property(get=__get_mTlsClientContext, put=__set_mTlsClientContext))  mTlsClientContext;

constexpr void __set_mTlsClientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl __get_mTlsClientContext() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSelectedSessionID, put=__set_mSelectedSessionID))  mSelectedSessionID;

constexpr void __set_mSelectedSessionID(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSelectedSessionID() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __declspec(property(get=__get_mKeyExchange, put=__set_mKeyExchange))  mKeyExchange;

constexpr void __set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange __get_mKeyExchange() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication __declspec(property(get=__get_mAuthentication, put=__set_mAuthentication))  mAuthentication;

constexpr void __set_mAuthentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication __get_mAuthentication() const;

 ::Org::BouncyCastle::Crypto::Tls::CertificateStatus __declspec(property(get=__get_mCertificateStatus, put=__set_mCertificateStatus))  mCertificateStatus;

constexpr void __set_mCertificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus __get_mCertificateStatus() const;

 ::Org::BouncyCastle::Crypto::Tls::CertificateRequest __declspec(property(get=__get_mCertificateRequest, put=__set_mCertificateRequest))  mCertificateRequest;

constexpr void __set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest __get_mCertificateRequest() const;


// Properties

 ::Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=get_Context))  Context;

 ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext __declspec(property(get=get_ContextAdmin))  ContextAdmin;

 ::Org::BouncyCastle::Crypto::Tls::TlsPeer __declspec(property(get=get_Peer))  Peer;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit TlsClientProtocol(::System::IO::Stream stream, ::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf12cc8 size 0x20 virtual false final false
 void _ctor(::System::IO::Stream stream, ::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "output", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit TlsClientProtocol(::System::IO::Stream input, ::System::IO::Stream output, ::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf12ce8 size 0x18 virtual false final false
 void _ctor(::System::IO::Stream input, ::System::IO::Stream output, ::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

// Ctor Parameters [CppParam { name: "secureRandom", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit TlsClientProtocol(::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf12d00 size 0x18 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method Connect addr 0xf12d18 size 0x478 virtual true final false
 void Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient tlsClient) ;

/// @brief Method CleanupHandshake addr 0xf13190 size 0x24 virtual true final false
 void CleanupHandshake() ;

/// @brief Method get_Context addr 0xf131b4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsContext get_Context() ;

/// @brief Method get_ContextAdmin addr 0xf131bc size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext get_ContextAdmin() ;

/// @brief Method get_Peer addr 0xf131c4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsPeer get_Peer() ;

/// @brief Method HandleHandshakeMessage addr 0xf131cc size 0x1260 virtual true final false
 void HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream buf) ;

/// @brief Method HandleSupplementalData addr 0xf1442c size 0x1b0 virtual true final false
 void HandleSupplementalData(::System::Collections::IList serverSupplementalData) ;

/// @brief Method ReceiveNewSessionTicketMessage addr 0xf145dc size 0xc0 virtual true final false
 void ReceiveNewSessionTicketMessage(::System::IO::MemoryStream buf) ;

/// @brief Method ReceiveServerHelloMessage addr 0xf1469c size 0xea4 virtual true final false
 void ReceiveServerHelloMessage(::System::IO::MemoryStream buf) ;

/// @brief Method SendCertificateVerifyMessage addr 0xf15540 size 0x8c virtual true final false
 void SendCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::DigitallySigned certificateVerify) ;

/// @brief Method SendClientHelloMessage addr 0xf155cc size 0x6a0 virtual true final false
 void SendClientHelloMessage() ;

/// @brief Method SendClientKeyExchangeMessage addr 0xf15c6c size 0xe4 virtual true final false
 void SendClientKeyExchangeMessage() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol, "Org.BouncyCastle.Crypto.Tls", "TlsClientProtocol");
