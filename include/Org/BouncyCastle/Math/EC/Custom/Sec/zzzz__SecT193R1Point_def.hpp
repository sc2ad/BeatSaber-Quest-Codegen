#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT193R1Point;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT193R1Point
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1474))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Point
class CORDL_TYPE SecT193R1Point : public Org::BouncyCastle::Math::EC::AbstractF2mPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SecT193R1Point() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT193R1Point", modifiers: " const&", def_value: None }]
constexpr SecT193R1Point(SecT193R1Point const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT193R1Point", modifiers: "&&", def_value: None }]
constexpr SecT193R1Point(SecT193R1Point&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT193R1Point(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractF2mPoint(ptr) {
}


  constexpr SecT193R1Point& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT193R1Point& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT193R1Point& operator=(SecT193R1Point&& o) noexcept = default;
  constexpr SecT193R1Point& operator=(SecT193R1Point const& o) noexcept = default;
                


// Properties

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_YCoord))  YCoord;

 bool __declspec(property(get=get_CompressionYTilde))  CompressionYTilde;


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit SecT193R1Point(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xf89e4c size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecT193R1Point(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf89fb0 size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecT193R1Point(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf8a0d0 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xf8a6c0 size 0x98 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method get_YCoord addr 0xf8a758 size 0xd0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_YCoord() ;

/// @brief Method get_CompressionYTilde addr 0xf8a828 size 0x7c virtual true final false
 bool get_CompressionYTilde() ;

/// @brief Method Add addr 0xf8a8a4 size 0x758 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Add(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xf8affc size 0x380 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xf8b37c size 0x52c virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TwicePlus(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Negate addr 0xf8b8a8 size 0x164 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Negate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Point, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R1Point");
