#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT163R2Point;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT163R2Point
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1469))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Point
class CORDL_TYPE SecT163R2Point : public ::Org::BouncyCastle::Math::EC::AbstractF2mPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SecT163R2Point() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT163R2Point", modifiers: " const&", def_value: None }]
constexpr SecT163R2Point(SecT163R2Point const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT163R2Point", modifiers: "&&", def_value: None }]
constexpr SecT163R2Point(SecT163R2Point&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT163R2Point(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractF2mPoint(ptr) {
}


  constexpr SecT163R2Point& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT163R2Point& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT163R2Point& operator=(SecT163R2Point&& o) noexcept = default;
  constexpr SecT163R2Point& operator=(SecT163R2Point const& o) noexcept = default;
                


// Properties

 ::Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_YCoord))  YCoord;

 bool __declspec(property(get=get_CompressionYTilde))  CompressionYTilde;


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit SecT163R2Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xf864f0 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecT163R2Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf86654 size 0x8c virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecT163R2Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf86774 size 0xc virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xf86d5c size 0x98 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method get_YCoord addr 0xf86df4 size 0xd0 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement get_YCoord() ;

/// @brief Method get_CompressionYTilde addr 0xf86ec4 size 0x7c virtual true final false
 bool get_CompressionYTilde() ;

/// @brief Method Add addr 0xf86f40 size 0x73c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Add(::Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xf8767c size 0x34c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xf879c8 size 0x4e8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Negate addr 0xf87eb0 size 0x164 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Negate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT163R2Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT163R2Point, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT163R2Point");
