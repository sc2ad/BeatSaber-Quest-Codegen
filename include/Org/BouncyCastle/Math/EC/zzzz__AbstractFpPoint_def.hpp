#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractFpPoint;
}
// Type: Org.BouncyCastle.Math.EC::AbstractFpPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1374))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1375))
// CS Name: Org.BouncyCastle.Math.EC.AbstractFpPoint
class CORDL_TYPE AbstractFpPoint : public ::Org::BouncyCastle::Math::EC::ECPointBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AbstractFpPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpPoint", modifiers: " const&", def_value: None }]
constexpr AbstractFpPoint(AbstractFpPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpPoint", modifiers: "&&", def_value: None }]
constexpr AbstractFpPoint(AbstractFpPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractFpPoint(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::ECPointBase(ptr) {
}


  constexpr AbstractFpPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractFpPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractFpPoint& operator=(AbstractFpPoint&& o) noexcept = default;
  constexpr AbstractFpPoint& operator=(AbstractFpPoint const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CompressionYTilde))  CompressionYTilde;


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit AbstractFpPoint(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf43ccc size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit AbstractFpPoint(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf43cd4 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method get_CompressionYTilde addr 0xf43cdc size 0x2c virtual true final false
 bool get_CompressionYTilde() ;

/// @brief Method SatisfiesCurveEquation addr 0xf43d08 size 0x2d8 virtual true final false
 bool SatisfiesCurveEquation() ;

/// @brief Method Subtract addr 0xf43fe0 size 0x60 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Subtract(::Org::BouncyCastle::Math::EC::ECPoint b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpPoint, "Org.BouncyCastle.Math.EC", "AbstractFpPoint");
