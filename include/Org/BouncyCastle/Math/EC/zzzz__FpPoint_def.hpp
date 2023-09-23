#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class FpPoint;
}
// Type: Org.BouncyCastle.Math.EC::FpPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1571))
// CS Name: Org.BouncyCastle.Math.EC.FpPoint
class CORDL_TYPE FpPoint : public Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FpPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: " const&", def_value: None }]
constexpr FpPoint(FpPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FpPoint", modifiers: "&&", def_value: None }]
constexpr FpPoint(FpPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FpPoint(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpPoint(ptr) {
}


  constexpr FpPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FpPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FpPoint& operator=(FpPoint&& o) noexcept = default;
  constexpr FpPoint& operator=(FpPoint const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit FpPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xfc5af0 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit FpPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xfbfdb8 size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit FpPoint(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xfc0240 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xfc5af8 size 0x98 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method GetZCoord addr 0xfc5b90 size 0x64 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement GetZCoord(int32_t index) ;

/// @brief Method Add addr 0xfc5bf4 size 0xbe0 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Add(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xfc67d4 size 0xb08 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xfc72dc size 0x474 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TwicePlus(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method ThreeTimes addr 0xfc7750 size 0x3fc virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ThreeTimes() ;

/// @brief Method TimesPow2 addr 0xfc7b4c size 0x7dc virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TimesPow2(int32_t e) ;

/// @brief Method Two addr 0xfc8328 size 0x20 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Two(Org::BouncyCastle::Math::EC::ECFieldElement x) ;

/// @brief Method Three addr 0xfc8348 size 0x34 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Three(Org::BouncyCastle::Math::EC::ECFieldElement x) ;

/// @brief Method Four addr 0xfc837c size 0x34 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Four(Org::BouncyCastle::Math::EC::ECFieldElement x) ;

/// @brief Method Eight addr 0xfc83b0 size 0x34 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Eight(Org::BouncyCastle::Math::EC::ECFieldElement x) ;

/// @brief Method DoubleProductFromSquares addr 0xfc83e4 size 0x74 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement DoubleProductFromSquares(Org::BouncyCastle::Math::EC::ECFieldElement a, Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::EC::ECFieldElement aSquared, Org::BouncyCastle::Math::EC::ECFieldElement bSquared) ;

/// @brief Method Negate addr 0xfc8458 size 0x120 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Negate() ;

/// @brief Method CalculateJacobianModifiedW addr 0xfc8578 size 0x154 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement CalculateJacobianModifiedW(Org::BouncyCastle::Math::EC::ECFieldElement Z, Org::BouncyCastle::Math::EC::ECFieldElement ZSquared) ;

/// @brief Method GetJacobianModifiedW addr 0xfc86cc size 0x8c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement GetJacobianModifiedW() ;

/// @brief Method TwiceJacobianModified addr 0xfc8758 size 0x350 virtual true final false
 Org::BouncyCastle::Math::EC::FpPoint TwiceJacobianModified(bool calculateW) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::FpPoint);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::FpPoint, "Org.BouncyCastle.Math.EC", "FpPoint");
