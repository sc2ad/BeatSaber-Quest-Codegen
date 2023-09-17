#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mCurve;
}
namespace Org::BouncyCastle::Math::EC::Abc {
class SimpleBigDecimal;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class Tnaf;
}
// Type: Org.BouncyCastle.Math.EC.Abc::Tnaf
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1357))
// CS Name: Org.BouncyCastle.Math.EC.Abc.Tnaf
class CORDL_TYPE Tnaf : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Tnaf() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: " const&", def_value: None }]
constexpr Tnaf(Tnaf const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: "&&", def_value: None }]
constexpr Tnaf(Tnaf&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tnaf(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tnaf& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tnaf& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tnaf& operator=(Tnaf&& o) noexcept = default;
  constexpr Tnaf& operator=(Tnaf const& o) noexcept = default;
                


// Fields

/// @brief Field Width offset 0
static constexpr int8_t  Width{4};

/// @brief Field Pow2Width offset 0
static constexpr int8_t  Pow2Width{16};

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_MinusOne, put=__set_MinusOne))  MinusOne;

static void __set_MinusOne(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_MinusOne() ;

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_MinusTwo, put=__set_MinusTwo))  MinusTwo;

static void __set_MinusTwo(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_MinusTwo() ;

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_MinusThree, put=__set_MinusThree))  MinusThree;

static void __set_MinusThree(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_MinusThree() ;

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Four, put=__set_Four))  Four;

static void __set_Four(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_Four() ;

static ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement> __declspec(property(get=__get_Alpha0, put=__set_Alpha0))  Alpha0;

static void __set_Alpha0(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement> value) ;

static ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement> __get_Alpha0() ;

static ::ArrayW<::ArrayW<int8_t>> __declspec(property(get=__get_Alpha0Tnaf, put=__set_Alpha0Tnaf))  Alpha0Tnaf;

static void __set_Alpha0Tnaf(::ArrayW<::ArrayW<int8_t>> value) ;

static ::ArrayW<::ArrayW<int8_t>> __get_Alpha0Tnaf() ;

static ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement> __declspec(property(get=__get_Alpha1, put=__set_Alpha1))  Alpha1;

static void __set_Alpha1(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement> value) ;

static ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement> __get_Alpha1() ;

static ::ArrayW<::ArrayW<int8_t>> __declspec(property(get=__get_Alpha1Tnaf, put=__set_Alpha1Tnaf))  Alpha1Tnaf;

static void __set_Alpha1Tnaf(::ArrayW<::ArrayW<int8_t>> value) ;

static ::ArrayW<::ArrayW<int8_t>> __get_Alpha1Tnaf() ;


// Methods

/// @brief Method Norm addr 0xf3a220 size 0x11c virtual false final false
static ::Org::BouncyCastle::Math::BigInteger Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement lambda) ;

/// @brief Method Norm addr 0xf3a33c size 0xfc virtual false final false
static ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Norm(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal u, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal v) ;

/// @brief Method Round addr 0xf3a438 size 0x3b8 virtual false final false
static ::Org::BouncyCastle::Math::EC::Abc::ZTauElement Round(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal lambda0, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal lambda1, int8_t mu) ;

/// @brief Method ApproximateDivisionByN addr 0xf3a81c size 0x178 virtual false final false
static ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal ApproximateDivisionByN(::Org::BouncyCastle::Math::BigInteger k, ::Org::BouncyCastle::Math::BigInteger s, ::Org::BouncyCastle::Math::BigInteger vm, int8_t a, int32_t m, int32_t c) ;

/// @brief Method TauAdicNaf addr 0xf3a994 size 0x3a4 virtual false final false
static ::ArrayW<int8_t> TauAdicNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement lambda) ;

/// @brief Method Tau addr 0xf3ad38 size 0x20 virtual false final false
static ::Org::BouncyCastle::Math::EC::AbstractF2mPoint Tau(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p) ;

/// @brief Method GetMu addr 0xf3ad58 size 0x104 virtual false final false
static int8_t GetMu(::Org::BouncyCastle::Math::EC::AbstractF2mCurve curve) ;

/// @brief Method GetMu addr 0xf3ae5c size 0x30 virtual false final false
static int8_t GetMu(::Org::BouncyCastle::Math::EC::ECFieldElement curveA) ;

/// @brief Method GetMu addr 0xf3ae8c size 0x10 virtual false final false
static int8_t GetMu(int32_t curveA) ;

/// @brief Method GetLucas addr 0xf3ae9c size 0x1e4 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Math::BigInteger> GetLucas(int8_t mu, int32_t k, bool doV) ;

/// @brief Method GetTw addr 0xf3b080 size 0x16c virtual false final false
static ::Org::BouncyCastle::Math::BigInteger GetTw(int8_t mu, int32_t w) ;

/// @brief Method GetSi addr 0xf3b1ec size 0x30c virtual false final false
static ::ArrayW<::Org::BouncyCastle::Math::BigInteger> GetSi(::Org::BouncyCastle::Math::EC::AbstractF2mCurve curve) ;

/// @brief Method GetSi addr 0xf3b590 size 0x250 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Math::BigInteger> GetSi(int32_t fieldSize, int32_t curveA, ::Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method GetShiftsForCofactor addr 0xf3b4f8 size 0x98 virtual false final false
static int32_t GetShiftsForCofactor(::Org::BouncyCastle::Math::BigInteger h) ;

/// @brief Method PartModReduction addr 0xf3b7e0 size 0x288 virtual false final false
static ::Org::BouncyCastle::Math::EC::Abc::ZTauElement PartModReduction(::Org::BouncyCastle::Math::BigInteger k, int32_t m, int8_t a, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> s, int8_t mu, int8_t c) ;

/// @brief Method MultiplyRTnaf addr 0xf3ba68 size 0x150 virtual false final false
static ::Org::BouncyCastle::Math::EC::AbstractF2mPoint MultiplyRTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, ::Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method MultiplyTnaf addr 0xf3bbb8 size 0xfc virtual false final false
static ::Org::BouncyCastle::Math::EC::AbstractF2mPoint MultiplyTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement lambda) ;

/// @brief Method MultiplyFromTnaf addr 0xf3bcb4 size 0x20c virtual false final false
static ::Org::BouncyCastle::Math::EC::AbstractF2mPoint MultiplyFromTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, ::ArrayW<int8_t> u) ;

/// @brief Method TauAdicWNaf addr 0xf3bec0 size 0x3c0 virtual false final false
static ::ArrayW<int8_t> TauAdicWNaf(int8_t mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement lambda, int8_t width, ::Org::BouncyCastle::Math::BigInteger pow2w, ::Org::BouncyCastle::Math::BigInteger tw, ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement> alpha) ;

/// @brief Method GetPreComp addr 0xf3c280 size 0x1a4 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint> GetPreComp(::Org::BouncyCastle::Math::EC::AbstractF2mPoint p, int8_t a) ;

// Ctor Parameters []
explicit Tnaf() ;

/// @brief Method .ctor addr 0xf3cb30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Abc
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::Tnaf);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::Tnaf, "Org.BouncyCastle.Math.EC.Abc", "Tnaf");
