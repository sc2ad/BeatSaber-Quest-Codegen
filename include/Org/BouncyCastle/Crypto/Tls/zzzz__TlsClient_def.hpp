#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClient;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsClient
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1164))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsClient
class CORDL_TYPE TlsClient : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsPeer
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsPeer() const noexcept;

~TlsClient() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsClient(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ClientHelloRecordLayerVersion))  ClientHelloRecordLayerVersion;

 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ClientVersion))  ClientVersion;

 bool __declspec(property(get=get_IsFallback))  IsFallback;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::Org::BouncyCastle::Crypto::Tls::TlsClientContext context) ;

/// @brief Method GetSessionToResume addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsSession GetSessionToResume() ;

/// @brief Method get_ClientHelloRecordLayerVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ClientHelloRecordLayerVersion() ;

/// @brief Method get_ClientVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ClientVersion() ;

/// @brief Method get_IsFallback addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFallback() ;

/// @brief Method GetCipherSuites addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetCompressionMethods addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetCompressionMethods() ;

/// @brief Method GetClientExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::IDictionary GetClientExtensions() ;

/// @brief Method NotifyServerVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion selectedVersion) ;

/// @brief Method NotifySessionID addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifySessionID(::ArrayW<uint8_t> sessionID) ;

/// @brief Method NotifySelectedCipherSuite addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifySelectedCipherSuite(int32_t selectedCipherSuite) ;

/// @brief Method NotifySelectedCompressionMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod) ;

/// @brief Method ProcessServerExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessServerExtensions(::System::Collections::IDictionary serverExtensions) ;

/// @brief Method ProcessServerSupplementalData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessServerSupplementalData(::System::Collections::IList serverSupplementalData) ;

/// @brief Method GetKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method GetAuthentication addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication GetAuthentication() ;

/// @brief Method GetClientSupplementalData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::IList GetClientSupplementalData() ;

/// @brief Method NotifyNewSessionTicket addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket newSessionTicket) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsClient, "Org.BouncyCastle.Crypto.Tls", "TlsClient");
