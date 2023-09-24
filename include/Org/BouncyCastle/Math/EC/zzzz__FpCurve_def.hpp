#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class FpPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class FpCurve;
}
// Type: Org.BouncyCastle.Math.EC::FpCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1566))
// CS Name: Org.BouncyCastle.Math.EC.FpCurve
class CORDL_TYPE FpCurve : public Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~FpCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "FpCurve", modifiers: " const&", def_value: None }]
constexpr FpCurve(FpCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FpCurve", modifiers: "&&", def_value: None }]
constexpr FpCurve(FpCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FpCurve(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpCurve(ptr) {
}


  constexpr FpCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FpCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FpCurve& operator=(FpCurve&& o) noexcept = default;
  constexpr FpCurve& operator=(FpCurve const& o) noexcept = default;
                


// Fields

/// @brief Field FP_DEFAULT_COORDS offset 0
static constexpr int32_t  FP_DEFAULT_COORDS{4};

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_q, put=__set_m_q))  m_q;

constexpr void __set_m_q(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_q() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_r, put=__set_m_r))  m_r;

constexpr void __set_m_r(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_r() const;

 Org::BouncyCastle::Math::EC::FpPoint __declspec(property(get=__get_m_infinity, put=__set_m_infinity))  m_infinity;

constexpr void __set_m_infinity(Org::BouncyCastle::Math::EC::FpPoint value) ;

constexpr Org::BouncyCastle::Math::EC::FpPoint __get_m_infinity() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Infinity))  Infinity;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;


// Methods

static Org::BouncyCastle::Math::EC::FpCurve New_ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method .ctor addr 0xfbfb90 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b) ;

static Org::BouncyCastle::Math::EC::FpCurve New_ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method .ctor addr 0xfbfb9c size 0xf8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

static Org::BouncyCastle::Math::EC::FpCurve New_ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::EC::ECFieldElement a, Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method .ctor addr 0xfbfe44 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::EC::ECFieldElement a, Org::BouncyCastle::Math::EC::ECFieldElement b) ;

static Org::BouncyCastle::Math::EC::FpCurve New_ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::EC::ECFieldElement a, Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method .ctor addr 0xfbfe50 size 0xc4 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::EC::ECFieldElement a, Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method CloneCurve addr 0xfbff14 size 0x90 virtual true final false
 Org::BouncyCastle::Math::EC::ECCurve CloneCurve() ;

/// @brief Method SupportsCoordinateSystem addr 0xfbffa4 size 0x20 virtual true final false
 bool SupportsCoordinateSystem(int32_t coord) ;

/// @brief Method get_Q addr 0xfbffc4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_Infinity addr 0xfbffcc size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_Infinity() ;

/// @brief Method get_FieldSize addr 0xfbffd4 size 0x1c virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0xfbfff0 size 0x78 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method CreateRawPoint addr 0xfc0124 size 0x88 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method CreateRawPoint addr 0xfc01ac size 0x94 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method ImportPoint addr 0xfc024c size 0x224 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ImportPoint(Org::BouncyCastle::Math::EC::ECPoint p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::FpCurve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::FpCurve, "Org.BouncyCastle.Math.EC", "FpCurve");
