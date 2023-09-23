#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsAuthentication
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1269))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsAuthentication
class CORDL_TYPE TlsAuthentication : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsAuthentication() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsAuthentication(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method NotifyServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method GetClientCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCredentials GetClientCredentials(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsAuthentication);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsAuthentication, "Org.BouncyCastle.Crypto.Tls", "TlsAuthentication");
