#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class MontgomeryLadderMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::MontgomeryLadderMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1535))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.MontgomeryLadderMultiplier
class CORDL_TYPE MontgomeryLadderMultiplier : public ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MontgomeryLadderMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "MontgomeryLadderMultiplier", modifiers: " const&", def_value: None }]
constexpr MontgomeryLadderMultiplier(MontgomeryLadderMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MontgomeryLadderMultiplier", modifiers: "&&", def_value: None }]
constexpr MontgomeryLadderMultiplier(MontgomeryLadderMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MontgomeryLadderMultiplier(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr MontgomeryLadderMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MontgomeryLadderMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MontgomeryLadderMultiplier& operator=(MontgomeryLadderMultiplier&& o) noexcept = default;
  constexpr MontgomeryLadderMultiplier& operator=(MontgomeryLadderMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfaa028 size 0x1fc virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint p, ::Org::BouncyCastle::Math::BigInteger k) ;

// Ctor Parameters []
explicit MontgomeryLadderMultiplier() ;

/// @brief Method .ctor addr 0xfaa224 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::MontgomeryLadderMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "MontgomeryLadderMultiplier");
