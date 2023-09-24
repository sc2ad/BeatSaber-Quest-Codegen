#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class F2mPoint;
}
// Type: Org.BouncyCastle.Math.EC::F2mPoint
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1572))
// CS Name: Org.BouncyCastle.Math.EC.F2mPoint
class CORDL_TYPE F2mPoint : public Org::BouncyCastle::Math::EC::AbstractF2mPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~F2mPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mPoint", modifiers: " const&", def_value: None }]
constexpr F2mPoint(F2mPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mPoint", modifiers: "&&", def_value: None }]
constexpr F2mPoint(F2mPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit F2mPoint(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractF2mPoint(ptr) {
}


  constexpr F2mPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr F2mPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr F2mPoint& operator=(F2mPoint&& o) noexcept = default;
  constexpr F2mPoint& operator=(F2mPoint const& o) noexcept = default;
                


// Properties

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_YCoord))  YCoord;

 bool __declspec(property(get=get_CompressionYTilde))  CompressionYTilde;


// Methods

static Org::BouncyCastle::Math::EC::F2mPoint New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method .ctor addr 0xfc8aa8 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

static Org::BouncyCastle::Math::EC::F2mPoint New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method .ctor addr 0xfc06d8 size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

static Org::BouncyCastle::Math::EC::F2mPoint New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method .ctor addr 0xfc0d9c size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method Detach addr 0xfc8ab0 size 0x98 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Detach() ;

/// @brief Method get_YCoord addr 0xfc8b48 size 0x108 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_YCoord() ;

/// @brief Method get_CompressionYTilde addr 0xfc8c50 size 0xc8 virtual true final false
 bool get_CompressionYTilde() ;

/// @brief Method Add addr 0xfc8d18 size 0xc40 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Add(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Twice addr 0xfc9958 size 0x908 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Twice() ;

/// @brief Method TwicePlus addr 0xfca260 size 0x548 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint TwicePlus(Org::BouncyCastle::Math::EC::ECPoint b) ;

/// @brief Method Negate addr 0xfca7a8 size 0x278 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Negate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::F2mPoint);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::F2mPoint, "Org.BouncyCastle.Math.EC", "F2mPoint");
