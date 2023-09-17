#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
// Type: Org.BouncyCastle.Math.EC::AbstractF2mPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1374))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1446))
// CS Name: Org.BouncyCastle.Math.EC.AbstractF2mPoint
class CORDL_TYPE AbstractF2mPoint : public ::Org::BouncyCastle::Math::EC::ECPointBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AbstractF2mPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractF2mPoint", modifiers: " const&", def_value: None }]
constexpr AbstractF2mPoint(AbstractF2mPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractF2mPoint", modifiers: "&&", def_value: None }]
constexpr AbstractF2mPoint(AbstractF2mPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractF2mPoint(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::ECPointBase(ptr) {
}


  constexpr AbstractF2mPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractF2mPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractF2mPoint& operator=(AbstractF2mPoint&& o) noexcept = default;
  constexpr AbstractF2mPoint& operator=(AbstractF2mPoint const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit AbstractF2mPoint(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xf76d4c size 0xc virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::EC::ECFieldElement", modifiers: "", def_value: None }, CppParam { name: "zs", ty: "::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement>", modifiers: "", def_value: None }, CppParam { name: "withCompression", ty: "bool", modifiers: "", def_value: None }]
explicit AbstractF2mPoint(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xf76d58 size 0xc virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method SatisfiesCurveEquation addr 0xf76d64 size 0x458 virtual true final false
 bool SatisfiesCurveEquation() ;

/// @brief Method SatisfiesOrder addr 0xf771bc size 0x308 virtual true final false
 bool SatisfiesOrder() ;

/// @brief Method ScaleX addr 0xf774c4 size 0x298 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint ScaleX(::Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method ScaleXNegateY addr 0xf7775c size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint ScaleXNegateY(::Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method ScaleY addr 0xf7776c size 0xe8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint ScaleY(::Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method ScaleYNegateX addr 0xf77854 size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint ScaleYNegateX(::Org::BouncyCastle::Math::EC::ECFieldElement scale) ;

/// @brief Method Subtract addr 0xf77864 size 0x6c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Subtract(::Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Tau addr 0xf778d0 size 0x288 virtual true final false
 ::Org::BouncyCastle::Math::EC::AbstractF2mPoint Tau() ;

/// @brief Method TauPow addr 0xf77b58 size 0x2a8 virtual true final false
 ::Org::BouncyCastle::Math::EC::AbstractF2mPoint TauPow(int32_t pow) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractF2mPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractF2mPoint, "Org.BouncyCastle.Math.EC", "AbstractF2mPoint");
