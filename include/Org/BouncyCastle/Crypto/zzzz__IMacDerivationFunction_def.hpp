#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
}
// Type: Org.BouncyCastle.Crypto::IMacDerivationFunction
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(909))
// CS Name: Org.BouncyCastle.Crypto.IMacDerivationFunction
class CORDL_TYPE IMacDerivationFunction : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

~IMacDerivationFunction() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMacDerivationFunction(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetMac addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IMac GetMac() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IMacDerivationFunction);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IMacDerivationFunction, "Org.BouncyCastle.Crypto", "IMacDerivationFunction");
