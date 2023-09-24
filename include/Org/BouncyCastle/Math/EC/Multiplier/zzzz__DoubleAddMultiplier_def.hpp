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
class DoubleAddMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::DoubleAddMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1528))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.DoubleAddMultiplier
class CORDL_TYPE DoubleAddMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DoubleAddMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleAddMultiplier", modifiers: " const&", def_value: None }]
constexpr DoubleAddMultiplier(DoubleAddMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleAddMultiplier", modifiers: "&&", def_value: None }]
constexpr DoubleAddMultiplier(DoubleAddMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DoubleAddMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr DoubleAddMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DoubleAddMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DoubleAddMultiplier& operator=(DoubleAddMultiplier&& o) noexcept = default;
  constexpr DoubleAddMultiplier& operator=(DoubleAddMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfa8af4 size 0x1b4 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

static Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier New_ctor() ;

/// @brief Method .ctor addr 0xfa8ca8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::DoubleAddMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "DoubleAddMultiplier");
