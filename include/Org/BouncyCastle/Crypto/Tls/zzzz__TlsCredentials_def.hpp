#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1156))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsCredentials
class CORDL_TYPE TlsCredentials : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsCredentials() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsCredentials(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=get_Certificate))  Certificate;


// Methods

/// @brief Method get_Certificate addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::Certificate get_Certificate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsCredentials);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsCredentials, "Org.BouncyCastle.Crypto.Tls", "TlsCredentials");
