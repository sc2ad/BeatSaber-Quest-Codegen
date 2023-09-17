#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1170))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsKeyExchange
class CORDL_TYPE TlsKeyExchange : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsKeyExchange() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsKeyExchange(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_RequiresServerKeyExchange))  RequiresServerKeyExchange;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method SkipServerCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 void SkipServerCredentials() ;

/// @brief Method ProcessServerCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials) ;

/// @brief Method ProcessServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method get_RequiresServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_RequiresServerKeyExchange() ;

/// @brief Method GenerateServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method SkipServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 void SkipServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessServerKeyExchange(::System::IO::Stream input) ;

/// @brief Method ValidateCertificateRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method SkipClientCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 void SkipClientCredentials() ;

/// @brief Method ProcessClientCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method ProcessClientCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method GenerateClientKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 void GenerateClientKeyExchange(::System::IO::Stream output) ;

/// @brief Method ProcessClientKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessClientKeyExchange(::System::IO::Stream input) ;

/// @brief Method GeneratePremasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GeneratePremasterSecret() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsKeyExchange");
