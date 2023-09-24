#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class AbstractECMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::AbstractECMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1527))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
class CORDL_TYPE AbstractECMultiplier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier
constexpr operator  Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractECMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractECMultiplier", modifiers: " const&", def_value: None }]
constexpr AbstractECMultiplier(AbstractECMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractECMultiplier", modifiers: "&&", def_value: None }]
constexpr AbstractECMultiplier(AbstractECMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractECMultiplier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractECMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractECMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractECMultiplier& operator=(AbstractECMultiplier&& o) noexcept = default;
  constexpr AbstractECMultiplier& operator=(AbstractECMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method Multiply addr 0xfa8a04 size 0xdc virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Multiply(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method MultiplyPositive addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method CheckResult addr 0xfa8ae0 size 0xc virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CheckResult(Org::BouncyCastle::Math::EC::ECPoint p) ;

static Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier New_ctor() ;

/// @brief Method .ctor addr 0xfa8aec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "AbstractECMultiplier");
