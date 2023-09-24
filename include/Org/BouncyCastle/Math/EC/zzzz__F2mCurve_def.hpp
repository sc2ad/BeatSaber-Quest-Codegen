#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class F2mPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
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
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class F2mCurve;
}
namespace Org::BouncyCastle::Math::EC {
class Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable;
}
// Type: ::DefaultF2mLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1567))
// CS Name: Org.BouncyCastle.Math.EC.F2mCurve::DefaultF2mLookupTable
class CORDL_TYPE Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable(Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable(Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractECLookupTable(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable& operator=(Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable& operator=(Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::F2mCurve __declspec(property(get=__get_m_outer, put=__set_m_outer))  m_outer;

constexpr void __set_m_outer(Org::BouncyCastle::Math::EC::F2mCurve value) ;

constexpr Org::BouncyCastle::Math::EC::F2mCurve __get_m_outer() const;

 ::ArrayW<int64_t> __declspec(property(get=__get_m_table, put=__set_m_table))  m_table;

constexpr void __set_m_table(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_m_table() const;

 int32_t __declspec(property(get=__get_m_size, put=__set_m_size))  m_size;

constexpr void __set_m_size(int32_t value) ;

constexpr int32_t __get_m_size() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

static Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable New_ctor(Org::BouncyCastle::Math::EC::F2mCurve outer, ::ArrayW<int64_t> table, int32_t size) ;

/// @brief Method .ctor addr 0xfc0fdc size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::F2mCurve outer, ::ArrayW<int64_t> table, int32_t size) ;

/// @brief Method get_Size addr 0xfc1018 size 0x8 virtual true final false
 int32_t get_Size() ;

/// @brief Method Lookup addr 0xfc1020 size 0x170 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method LookupVar addr 0xfc1354 size 0x134 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

/// @brief Method CreatePoint addr 0xfc1190 size 0x1c4 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint CreatePoint(::ArrayW<int64_t> x, ::ArrayW<int64_t> y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
// Type: Org.BouncyCastle.Math.EC::F2mCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1568))
// CS Name: Org.BouncyCastle.Math.EC.F2mCurve
class CORDL_TYPE F2mCurve : public Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
// Declarations
using DefaultF2mLookupTable = Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~F2mCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mCurve", modifiers: " const&", def_value: None }]
constexpr F2mCurve(F2mCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mCurve", modifiers: "&&", def_value: None }]
constexpr F2mCurve(F2mCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit F2mCurve(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractF2mCurve(ptr) {
}


  constexpr F2mCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr F2mCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr F2mCurve& operator=(F2mCurve&& o) noexcept = default;
  constexpr F2mCurve& operator=(F2mCurve const& o) noexcept = default;
                


// Fields

/// @brief Field F2M_DEFAULT_COORDS offset 0
static constexpr int32_t  F2M_DEFAULT_COORDS{6};

 int32_t __declspec(property(get=__get_m, put=__set_m))  m;

constexpr void __set_m(int32_t value) ;

constexpr int32_t __get_m() const;

 int32_t __declspec(property(get=__get_k1, put=__set_k1))  k1;

constexpr void __set_k1(int32_t value) ;

constexpr int32_t __get_k1() const;

 int32_t __declspec(property(get=__get_k2, put=__set_k2))  k2;

constexpr void __set_k2(int32_t value) ;

constexpr int32_t __get_k2() const;

 int32_t __declspec(property(get=__get_k3, put=__set_k3))  k3;

constexpr void __set_k3(int32_t value) ;

constexpr int32_t __get_k3() const;

 Org::BouncyCastle::Math::EC::F2mPoint __declspec(property(get=__get_m_infinity, put=__set_m_infinity))  m_infinity;

constexpr void __set_m_infinity(Org::BouncyCastle::Math::EC::F2mPoint value) ;

constexpr Org::BouncyCastle::Math::EC::F2mPoint __get_m_infinity() const;


// Properties

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Infinity))  Infinity;

 int32_t __declspec(property(get=get_M))  M;

 int32_t __declspec(property(get=get_K1))  K1;

 int32_t __declspec(property(get=get_K2))  K2;

 int32_t __declspec(property(get=get_K3))  K3;


// Methods

static Org::BouncyCastle::Math::EC::F2mCurve New_ctor(int32_t m, int32_t k, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method .ctor addr 0xfc0470 size 0x30 virtual false final false
 void _ctor(int32_t m, int32_t k, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b) ;

static Org::BouncyCastle::Math::EC::F2mCurve New_ctor(int32_t m, int32_t k, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method .ctor addr 0xfc0684 size 0x34 virtual false final false
 void _ctor(int32_t m, int32_t k, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

static Org::BouncyCastle::Math::EC::F2mCurve New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method .ctor addr 0xfc06b8 size 0x20 virtual false final false
 void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b) ;

static Org::BouncyCastle::Math::EC::F2mCurve New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method .ctor addr 0xfc04a0 size 0x1e4 virtual false final false
 void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Math::BigInteger b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

static Org::BouncyCastle::Math::EC::F2mCurve New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Math::EC::ECFieldElement a, Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method .ctor addr 0xfc07a4 size 0xe4 virtual false final false
 void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Math::EC::ECFieldElement a, Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor) ;

/// @brief Method CloneCurve addr 0xfc0888 size 0xb4 virtual true final false
 Org::BouncyCastle::Math::EC::ECCurve CloneCurve() ;

/// @brief Method SupportsCoordinateSystem addr 0xfc093c size 0x1c virtual true final false
 bool SupportsCoordinateSystem(int32_t coord) ;

/// @brief Method CreateDefaultMultiplier addr 0xfc0958 size 0x8c virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier CreateDefaultMultiplier() ;

/// @brief Method get_FieldSize addr 0xfc09e4 size 0x8 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0xfc09ec size 0x8c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method CreateRawPoint addr 0xfc0c80 size 0x88 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method CreateRawPoint addr 0xfc0d08 size 0x94 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method get_Infinity addr 0xfc0da8 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_Infinity() ;

/// @brief Method get_M addr 0xfc0db0 size 0x8 virtual false final false
 int32_t get_M() ;

/// @brief Method IsTrinomial addr 0xfc0db8 size 0x20 virtual false final false
 bool IsTrinomial() ;

/// @brief Method get_K1 addr 0xfc0dd8 size 0x8 virtual false final false
 int32_t get_K1() ;

/// @brief Method get_K2 addr 0xfc0de0 size 0x8 virtual false final false
 int32_t get_K2() ;

/// @brief Method get_K3 addr 0xfc0de8 size 0x8 virtual false final false
 int32_t get_K3() ;

/// @brief Method CreateCacheSafeLookupTable addr 0xfc0df0 size 0x1c0 virtual true final false
 Org::BouncyCastle::Math::EC::ECLookupTable CreateCacheSafeLookupTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::F2mCurve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::F2mCurve, "Org.BouncyCastle.Math.EC", "F2mCurve");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__F2mCurve__DefaultF2mLookupTable, "Org.BouncyCastle.Math.EC", "F2mCurve/DefaultF2mLookupTable");
