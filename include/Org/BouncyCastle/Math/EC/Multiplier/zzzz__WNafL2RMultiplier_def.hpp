#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class WNafL2RMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::WNafL2RMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1540))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.WNafL2RMultiplier
class CORDL_TYPE WNafL2RMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WNafL2RMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "WNafL2RMultiplier", modifiers: " const&", def_value: None }]
constexpr WNafL2RMultiplier(WNafL2RMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WNafL2RMultiplier", modifiers: "&&", def_value: None }]
constexpr WNafL2RMultiplier(WNafL2RMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WNafL2RMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr WNafL2RMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WNafL2RMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WNafL2RMultiplier& operator=(WNafL2RMultiplier&& o) noexcept = default;
  constexpr WNafL2RMultiplier& operator=(WNafL2RMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfaa590 size 0x308 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

// Ctor Parameters []
explicit WNafL2RMultiplier() ;

/// @brief Method .ctor addr 0xfaad44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WNafL2RMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "WNafL2RMultiplier");
