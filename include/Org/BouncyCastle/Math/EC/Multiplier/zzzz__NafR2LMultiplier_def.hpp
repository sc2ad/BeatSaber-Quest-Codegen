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
class NafR2LMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::NafR2LMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1537))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.NafR2LMultiplier
class CORDL_TYPE NafR2LMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NafR2LMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "NafR2LMultiplier", modifiers: " const&", def_value: None }]
constexpr NafR2LMultiplier(NafR2LMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NafR2LMultiplier", modifiers: "&&", def_value: None }]
constexpr NafR2LMultiplier(NafR2LMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NafR2LMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr NafR2LMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NafR2LMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NafR2LMultiplier& operator=(NafR2LMultiplier&& o) noexcept = default;
  constexpr NafR2LMultiplier& operator=(NafR2LMultiplier const& o) noexcept = default;
                


// Methods

/// @brief Method MultiplyPositive addr 0xfaa37c size 0x148 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

// Ctor Parameters []
explicit NafR2LMultiplier() ;

/// @brief Method .ctor addr 0xfaa4c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::NafR2LMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::NafR2LMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "NafR2LMultiplier");
