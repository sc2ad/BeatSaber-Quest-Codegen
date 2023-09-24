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
class ReferenceMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::ReferenceMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1538))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.ReferenceMultiplier
class CORDL_TYPE ReferenceMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReferenceMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceMultiplier", modifiers: " const&", def_value: None }]
constexpr ReferenceMultiplier(ReferenceMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceMultiplier", modifiers: "&&", def_value: None }]
constexpr ReferenceMultiplier(ReferenceMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReferenceMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr ReferenceMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReferenceMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReferenceMultiplier& operator=(ReferenceMultiplier&& o) noexcept = default;
  constexpr ReferenceMultiplier& operator=(ReferenceMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfaa4cc size 0x10 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

static Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier New_ctor() ;

/// @brief Method .ctor addr 0xfaa4dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::ReferenceMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "ReferenceMultiplier");
