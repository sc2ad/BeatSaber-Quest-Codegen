#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT193R2Point;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT193R2Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable;
}
// Type: ::SecT193R2LookupTable
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1475))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R2Curve::SecT193R2LookupTable
class CORDL_TYPE ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable(____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable(____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractECLookupTable(ptr) {
}


  constexpr ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable& operator=(____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable& operator=(____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve __declspec(property(get=__get_m_outer, put=__set_m_outer))  m_outer;

constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve value) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve __get_m_outer() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_m_table, put=__set_m_table))  m_table;

constexpr void __set_m_table(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_m_table() const;

 int32_t __declspec(property(get=__get_m_size, put=__set_m_size))  m_size;

constexpr void __set_m_size(int32_t value) ;

constexpr int32_t __get_m_size() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve", modifiers: "", def_value: None }, CppParam { name: "table", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve outer, ::ArrayW<uint64_t> table, int32_t size) ;

/// @brief Method .ctor addr 0xf8c070 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve outer, ::ArrayW<uint64_t> table, int32_t size) ;

/// @brief Method get_Size addr 0xf8c1b8 size 0x8 virtual true final false
 int32_t get_Size() ;

/// @brief Method Lookup addr 0xf8c1c0 size 0x118 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method LookupVar addr 0xf8c3b8 size 0xc8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

/// @brief Method CreatePoint addr 0xf8c2d8 size 0xe0 virtual false final false
 ::Org::BouncyCastle::Math::EC::ECPoint CreatePoint(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT193R2Curve
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1476))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R2Curve
class CORDL_TYPE SecT193R2Curve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
// Declarations
using SecT193R2LookupTable = ::Org::BouncyCastle::Math::EC::Custom::Sec::____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SecT193R2Curve() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT193R2Curve", modifiers: " const&", def_value: None }]
constexpr SecT193R2Curve(SecT193R2Curve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT193R2Curve", modifiers: "&&", def_value: None }]
constexpr SecT193R2Curve(SecT193R2Curve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT193R2Curve(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractF2mCurve(ptr) {
}


  constexpr SecT193R2Curve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT193R2Curve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT193R2Curve& operator=(SecT193R2Curve&& o) noexcept = default;
  constexpr SecT193R2Curve& operator=(SecT193R2Curve const& o) noexcept = default;
                


// Fields

/// @brief Field SECT193R2_DEFAULT_COORDS offset 0
static constexpr int32_t  SECT193R2_DEFAULT_COORDS{6};

/// @brief Field SECT193R2_FE_LONGS offset 0
static constexpr int32_t  SECT193R2_FE_LONGS{4};

static ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> __declspec(property(get=__get_SECT193R2_AFFINE_ZS, put=__set_SECT193R2_AFFINE_ZS))  SECT193R2_AFFINE_ZS;

static void __set_SECT193R2_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> value) ;

static ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> __get_SECT193R2_AFFINE_ZS() ;

 ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point __declspec(property(get=__get_m_infinity, put=__set_m_infinity))  m_infinity;

constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point value) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Point __get_m_infinity() const;


// Properties

 ::Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Infinity))  Infinity;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;

 bool __declspec(property(get=get_IsKoblitz))  IsKoblitz;

 int32_t __declspec(property(get=get_M))  M;

 bool __declspec(property(get=get_IsTrinomial))  IsTrinomial;

 int32_t __declspec(property(get=get_K1))  K1;

 int32_t __declspec(property(get=get_K2))  K2;

 int32_t __declspec(property(get=get_K3))  K3;


// Methods

// Ctor Parameters []
explicit SecT193R2Curve() ;

/// @brief Method .ctor addr 0xf8ba0c size 0x200 virtual false final false
 void _ctor() ;

/// @brief Method CloneCurve addr 0xf8bc14 size 0x58 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECCurve CloneCurve() ;

/// @brief Method SupportsCoordinateSystem addr 0xf8bc6c size 0xc virtual true final false
 bool SupportsCoordinateSystem(int32_t coord) ;

/// @brief Method get_Infinity addr 0xf8bc78 size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint get_Infinity() ;

/// @brief Method get_FieldSize addr 0xf8bc80 size 0x8 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0xf8bc88 size 0x60 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement FromBigInteger(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method CreateRawPoint addr 0xf8bce8 size 0x88 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method CreateRawPoint addr 0xf8bdfc size 0x94 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method get_IsKoblitz addr 0xf8be9c size 0x8 virtual true final false
 bool get_IsKoblitz() ;

/// @brief Method get_M addr 0xf8bea4 size 0x8 virtual true final false
 int32_t get_M() ;

/// @brief Method get_IsTrinomial addr 0xf8beac size 0x8 virtual true final false
 bool get_IsTrinomial() ;

/// @brief Method get_K1 addr 0xf8beb4 size 0x8 virtual true final false
 int32_t get_K1() ;

/// @brief Method get_K2 addr 0xf8bebc size 0x8 virtual true final false
 int32_t get_K2() ;

/// @brief Method get_K3 addr 0xf8bec4 size 0x8 virtual true final false
 int32_t get_K3() ;

/// @brief Method CreateCacheSafeLookupTable addr 0xf8becc size 0x1a4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECLookupTable CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R2Curve, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R2Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::____Org__BouncyCastle__Math__EC__Custom__Sec__SecT193R2Curve__SecT193R2LookupTable, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R2Curve/SecT193R2LookupTable");
