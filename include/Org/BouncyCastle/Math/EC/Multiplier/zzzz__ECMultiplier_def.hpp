#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::ECMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1526))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
class CORDL_TYPE ECMultiplier : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ECMultiplier() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECMultiplier(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Multiply(::Org::BouncyCastle::Math::EC::ECPoint p, ::Org::BouncyCastle::Math::BigInteger k) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "ECMultiplier");
