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
class SecP128R1Point;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP128R1Point
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1375))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1386))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1Point
class CORDL_TYPE SecP128R1Point : public ::Org::BouncyCastle::Math::EC::AbstractFpPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SecP128R1Point() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP128R1Point", modifiers: " const&", def_value: None }]
constexpr SecP128R1Point(SecP128R1Point const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP128R1Point", modifiers: "&&", def_value: None }]
constexpr SecP128R1Point(SecP128R1Point&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP128R1Point(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractFpPoint(ptr) {
}


  constexpr SecP128R1Point& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP128R1Point& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP128R1Point& operator=(SecP128R1Point&& o) noexcept = default;
  constexpr SecP128R1Point& operator=(SecP128R1Point const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }]
explicit SecP128R1Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xf4907c size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecP128R1Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf493ac size 0x88 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit SecP128R1Point(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf494c4 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xf4ba14 size 0x98 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method Add addr 0xf4baac size 0x68c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Add(::Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xf4c138 size 0x4b4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xf4c5ec size 0xcc virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint TwicePlus(::Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method ThreeTimes addr 0xf4c6b8 size 0x7c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint ThreeTimes() ;

/// @brief Method Negate addr 0xf4c734 size 0xd4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Negate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP128R1Point);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP128R1Point, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP128R1Point");
