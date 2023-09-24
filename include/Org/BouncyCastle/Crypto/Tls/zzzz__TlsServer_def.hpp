#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatus;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServer;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsServer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1172))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsServer
class CORDL_TYPE TlsServer : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsPeer
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsPeer() const noexcept;

~TlsServer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsServer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsServerContext context) ;

/// @brief Method NotifyClientVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyClientVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion clientVersion) ;

/// @brief Method NotifyFallback addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyFallback(bool isFallback) ;

/// @brief Method NotifyOfferedCipherSuites addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyOfferedCipherSuites(::ArrayW<int32_t> offeredCipherSuites) ;

/// @brief Method NotifyOfferedCompressionMethods addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyOfferedCompressionMethods(::ArrayW<uint8_t> offeredCompressionMethods) ;

/// @brief Method ProcessClientExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessClientExtensions(System::Collections::IDictionary clientExtensions) ;

/// @brief Method GetServerVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion GetServerVersion() ;

/// @brief Method GetSelectedCipherSuite addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetSelectedCipherSuite() ;

/// @brief Method GetSelectedCompressionMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 uint8_t GetSelectedCompressionMethod() ;

/// @brief Method GetServerExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IDictionary GetServerExtensions() ;

/// @brief Method GetServerSupplementalData addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IList GetServerSupplementalData() ;

/// @brief Method GetCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCredentials GetCredentials() ;

/// @brief Method GetCertificateStatus addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::CertificateStatus GetCertificateStatus() ;

/// @brief Method GetKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method GetCertificateRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::CertificateRequest GetCertificateRequest() ;

/// @brief Method ProcessClientSupplementalData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessClientSupplementalData(System::Collections::IList clientSupplementalData) ;

/// @brief Method NotifyClientCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyClientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method GetNewSessionTicket addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::NewSessionTicket GetNewSessionTicket() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsServer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsServer, "Org.BouncyCastle.Crypto.Tls", "TlsServer");
