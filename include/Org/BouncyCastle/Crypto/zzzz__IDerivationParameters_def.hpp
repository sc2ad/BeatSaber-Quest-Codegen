#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Type: Org.BouncyCastle.Crypto::IDerivationParameters
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(723))
// CS Name: Org.BouncyCastle.Crypto.IDerivationParameters
class CORDL_TYPE IDerivationParameters : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDerivationParameters() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDerivationParameters(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IDerivationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IDerivationParameters, "Org.BouncyCastle.Crypto", "IDerivationParameters");
