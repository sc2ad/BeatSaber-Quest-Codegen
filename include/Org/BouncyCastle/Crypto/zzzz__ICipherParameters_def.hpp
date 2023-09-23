#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Type: Org.BouncyCastle.Crypto::ICipherParameters
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(641))
// CS Name: Org.BouncyCastle.Crypto.ICipherParameters
class CORDL_TYPE ICipherParameters : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICipherParameters() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICipherParameters(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::ICipherParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::ICipherParameters, "Org.BouncyCastle.Crypto", "ICipherParameters");
