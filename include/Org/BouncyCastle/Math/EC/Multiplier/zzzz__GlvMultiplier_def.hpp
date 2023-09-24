#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_def.hpp"
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class GlvMultiplier;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::GlvMultiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1533))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.GlvMultiplier
class CORDL_TYPE GlvMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlvMultiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvMultiplier", modifiers: " const&", def_value: None }]
constexpr GlvMultiplier(GlvMultiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvMultiplier", modifiers: "&&", def_value: None }]
constexpr GlvMultiplier(GlvMultiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlvMultiplier(void* ptr) noexcept : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(ptr) {
}


  constexpr GlvMultiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlvMultiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlvMultiplier& operator=(GlvMultiplier&& o) noexcept = default;
  constexpr GlvMultiplier& operator=(GlvMultiplier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_curve() const;

 Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism __declspec(property(get=__get_glvEndomorphism, put=__set_glvEndomorphism))  glvEndomorphism;

constexpr void __set_glvEndomorphism(Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism value) ;

constexpr Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism __get_glvEndomorphism() const;


// Methods

static Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism glvEndomorphism) ;

/// @brief Method .ctor addr 0xfa9734 size 0xa8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism glvEndomorphism) ;

/// @brief Method MultiplyPositive addr 0xfa97dc size 0x26c virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier, "Org.BouncyCastle.Math.EC.Multiplier", "GlvMultiplier");
