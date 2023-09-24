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
class ZSignedDigitR2LMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::ZSignedDigitR2LMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1551))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.ZSignedDigitR2LMultiplier
class CORDL_TYPE ZSignedDigitR2LMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ZSignedDigitR2LMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZSignedDigitR2LMultiplier", modifiers: " const&", def_value: None }]
constexpr ZSignedDigitR2LMultiplier(ZSignedDigitR2LMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZSignedDigitR2LMultiplier", modifiers: "&&", def_value: None }]
constexpr ZSignedDigitR2LMultiplier(ZSignedDigitR2LMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZSignedDigitR2LMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr ZSignedDigitR2LMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZSignedDigitR2LMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZSignedDigitR2LMultiplier& operator=(ZSignedDigitR2LMultiplier&& o) noexcept = default;
  constexpr ZSignedDigitR2LMultiplier& operator=(ZSignedDigitR2LMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfadd4c size 0x130 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

static Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier New_ctor() ;

/// @brief Method .ctor addr 0xfade7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitR2LMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "ZSignedDigitR2LMultiplier");
