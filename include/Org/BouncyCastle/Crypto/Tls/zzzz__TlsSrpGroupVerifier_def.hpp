#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpGroupVerifier
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1216))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSrpGroupVerifier
class CORDL_TYPE TlsSrpGroupVerifier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsSrpGroupVerifier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSrpGroupVerifier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Accept addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Accept(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier, "Org.BouncyCastle.Crypto.Tls", "TlsSrpGroupVerifier");
