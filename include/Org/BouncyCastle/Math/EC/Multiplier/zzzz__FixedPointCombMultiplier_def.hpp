#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointCombMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::FixedPointCombMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1529))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.FixedPointCombMultiplier
class CORDL_TYPE FixedPointCombMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FixedPointCombMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointCombMultiplier", modifiers: " const&", def_value: None }]
constexpr FixedPointCombMultiplier(FixedPointCombMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointCombMultiplier", modifiers: "&&", def_value: None }]
constexpr FixedPointCombMultiplier(FixedPointCombMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedPointCombMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr FixedPointCombMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedPointCombMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedPointCombMultiplier& operator=(FixedPointCombMultiplier&& o) noexcept = default;
  constexpr FixedPointCombMultiplier& operator=(FixedPointCombMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfa8cb0 size 0x2a8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

static Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier New_ctor() ;

/// @brief Method .ctor addr 0xfa90c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::FixedPointCombMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointCombMultiplier");
