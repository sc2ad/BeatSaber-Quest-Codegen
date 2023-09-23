#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class MixedNafR2LMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::MixedNafR2LMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1534))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.MixedNafR2LMultiplier
class CORDL_TYPE MixedNafR2LMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MixedNafR2LMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "MixedNafR2LMultiplier", modifiers: " const&", def_value: None }]
constexpr MixedNafR2LMultiplier(MixedNafR2LMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MixedNafR2LMultiplier", modifiers: "&&", def_value: None }]
constexpr MixedNafR2LMultiplier(MixedNafR2LMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MixedNafR2LMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr MixedNafR2LMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MixedNafR2LMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MixedNafR2LMultiplier& operator=(MixedNafR2LMultiplier&& o) noexcept = default;
  constexpr MixedNafR2LMultiplier& operator=(MixedNafR2LMultiplier const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_additionCoord, put=__set_additionCoord))  additionCoord;

constexpr void __set_additionCoord(int32_t value) ;

constexpr int32_t __get_additionCoord() const;

 int32_t __declspec(property(get=__get_doublingCoord, put=__set_doublingCoord))  doublingCoord;

constexpr void __set_doublingCoord(int32_t value) ;

constexpr int32_t __get_doublingCoord() const;


// Methods

// Ctor Parameters []
explicit MixedNafR2LMultiplier() ;

/// @brief Method .ctor addr 0xfa9a48 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "additionCoord", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doublingCoord", ty: "int32_t", modifiers: "", def_value: None }]
explicit MixedNafR2LMultiplier(int32_t additionCoord, int32_t doublingCoord) ;

/// @brief Method .ctor addr 0xfa9a6c size 0x2c virtual false final false
 void _ctor(int32_t additionCoord, int32_t doublingCoord) ;

/// @brief Method MultiplyPositive addr 0xfa9a98 size 0x1e8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method ConfigureCurve addr 0xfa9ef4 size 0x134 virtual true final false
 Org::BouncyCastle::Math::EC::ECCurve ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve c, int32_t coord) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "MixedNafR2LMultiplier");
