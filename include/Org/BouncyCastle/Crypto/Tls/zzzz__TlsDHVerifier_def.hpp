#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsDHVerifier
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1211))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDHVerifier
class CORDL_TYPE TlsDHVerifier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsDHVerifier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsDHVerifier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Accept addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Accept(Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsDHVerifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsDHVerifier, "Org.BouncyCastle.Crypto.Tls", "TlsDHVerifier");
