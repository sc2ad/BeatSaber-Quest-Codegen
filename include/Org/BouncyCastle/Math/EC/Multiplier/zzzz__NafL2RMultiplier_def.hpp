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
class NafL2RMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::NafL2RMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1536))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.NafL2RMultiplier
class CORDL_TYPE NafL2RMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NafL2RMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "NafL2RMultiplier", modifiers: " const&", def_value: None }]
constexpr NafL2RMultiplier(NafL2RMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NafL2RMultiplier", modifiers: "&&", def_value: None }]
constexpr NafL2RMultiplier(NafL2RMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NafL2RMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr NafL2RMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NafL2RMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NafL2RMultiplier& operator=(NafL2RMultiplier&& o) noexcept = default;
  constexpr NafL2RMultiplier& operator=(NafL2RMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfaa22c size 0x148 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

// Ctor Parameters []
explicit NafL2RMultiplier() ;

/// @brief Method .ctor addr 0xfaa374 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::NafL2RMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "NafL2RMultiplier");
