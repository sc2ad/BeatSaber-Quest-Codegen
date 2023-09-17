#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160K1Point;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160K1Point
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1389))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP160K1Point
class CORDL_TYPE SecP160K1Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SecP160K1Point() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP160K1Point", modifiers: " const&", def_value: None }]
constexpr SecP160K1Point(SecP160K1Point const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP160K1Point", modifiers: "&&", def_value: None }]
constexpr SecP160K1Point(SecP160K1Point&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP160K1Point(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractFpPoint(ptr) {
}


  constexpr SecP160K1Point& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP160K1Point& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP160K1Point& operator=(SecP160K1Point&& o) noexcept = default;
  constexpr SecP160K1Point& operator=(SecP160K1Point const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit SecP160K1Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xf4c9a4 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecP160K1Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf4cbc0 size 0x88 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecP160K1Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf4ccd8 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xf4d404 size 0x98 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method Add addr 0xf4d49c size 0x6e8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Add(::Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xf4db84 size 0x45c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xf4dfe0 size 0xcc virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method ThreeTimes addr 0xf4e0ac size 0x7c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint ThreeTimes() ;

/// @brief Method Negate addr 0xf4e128 size 0x10d4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Negate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160K1Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160K1Point, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160K1Point");
