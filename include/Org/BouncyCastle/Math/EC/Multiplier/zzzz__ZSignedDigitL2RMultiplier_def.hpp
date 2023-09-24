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
class ZSignedDigitL2RMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::ZSignedDigitL2RMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1550))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.ZSignedDigitL2RMultiplier
class CORDL_TYPE ZSignedDigitL2RMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ZSignedDigitL2RMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZSignedDigitL2RMultiplier", modifiers: " const&", def_value: None }]
constexpr ZSignedDigitL2RMultiplier(ZSignedDigitL2RMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZSignedDigitL2RMultiplier", modifiers: "&&", def_value: None }]
constexpr ZSignedDigitL2RMultiplier(ZSignedDigitL2RMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZSignedDigitL2RMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr ZSignedDigitL2RMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZSignedDigitL2RMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZSignedDigitL2RMultiplier& operator=(ZSignedDigitL2RMultiplier&& o) noexcept = default;
  constexpr ZSignedDigitL2RMultiplier& operator=(ZSignedDigitL2RMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfadc54 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

static Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier New_ctor() ;

/// @brief Method .ctor addr 0xfadd44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "ZSignedDigitL2RMultiplier");
