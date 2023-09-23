#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class SM2P256V1Point;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable;
}
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class SM2P256V1Curve;
}
// Type: ::SM2P256V1LookupTable
namespace Org::BouncyCastle::Math::EC::Custom::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1377))
// CS Name: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve::SM2P256V1LookupTable
class CORDL_TYPE Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable(Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable(Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractECLookupTable(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable& operator=(Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable& operator=(Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve __declspec(property(get=__get_m_outer, put=__set_m_outer))  m_outer;

constexpr void __set_m_outer(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve value) ;

constexpr Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve __get_m_outer() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_table, put=__set_m_table))  m_table;

constexpr void __set_m_table(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_table() const;

 int32_t __declspec(property(get=__get_m_size, put=__set_m_size))  m_size;

constexpr void __set_m_size(int32_t value) ;

constexpr int32_t __get_m_size() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve", modifiers: "", def_value: None }, CppParam { name: "table", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve outer, ::ArrayW<uint32_t> table, int32_t size) ;

/// @brief Method .ctor addr 0xf459d8 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve outer, ::ArrayW<uint32_t> table, int32_t size) ;

/// @brief Method get_Size addr 0xf45dfc size 0x8 virtual true final false
 int32_t get_Size() ;

/// @brief Method Lookup addr 0xf45e04 size 0x118 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method LookupVar addr 0xf45ffc size 0xc4 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

/// @brief Method CreatePoint addr 0xf45f1c size 0xe0 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint CreatePoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::GM
// Type: Org.BouncyCastle.Math.EC.Custom.GM::SM2P256V1Curve
namespace Org::BouncyCastle::Math::EC::Custom::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1378))
// CS Name: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve
class CORDL_TYPE SM2P256V1Curve : public Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
// Declarations
using SM2P256V1LookupTable = Org::BouncyCastle::Math::EC::Custom::GM::Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SM2P256V1Curve() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Curve", modifiers: " const&", def_value: None }]
constexpr SM2P256V1Curve(SM2P256V1Curve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Curve", modifiers: "&&", def_value: None }]
constexpr SM2P256V1Curve(SM2P256V1Curve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM2P256V1Curve(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpCurve(ptr) {
}


  constexpr SM2P256V1Curve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM2P256V1Curve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM2P256V1Curve& operator=(SM2P256V1Curve&& o) noexcept = default;
  constexpr SM2P256V1Curve& operator=(SM2P256V1Curve const& o) noexcept = default;
                


// Fields

/// @brief Field SM2P256V1_DEFAULT_COORDS offset 0
static constexpr int32_t  SM2P256V1_DEFAULT_COORDS{2};

/// @brief Field SM2P256V1_FE_INTS offset 0
static constexpr int32_t  SM2P256V1_FE_INTS{8};

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

static void __set_q(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_q() ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __declspec(property(get=__get_SM2P256V1_AFFINE_ZS, put=__set_SM2P256V1_AFFINE_ZS))  SM2P256V1_AFFINE_ZS;

static void __set_SM2P256V1_AFFINE_ZS(::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> value) ;

static ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> __get_SM2P256V1_AFFINE_ZS() ;

 Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point __declspec(property(get=__get_m_infinity, put=__set_m_infinity))  m_infinity;

constexpr void __set_m_infinity(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point value) ;

constexpr Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point __get_m_infinity() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Infinity))  Infinity;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;


// Methods

// Ctor Parameters []
explicit SM2P256V1Curve() ;

/// @brief Method .ctor addr 0xf451cc size 0x218 virtual false final false
 void _ctor() ;

/// @brief Method CloneCurve addr 0xf453ec size 0x58 virtual true final false
 Org::BouncyCastle::Math::EC::ECCurve CloneCurve() ;

/// @brief Method SupportsCoordinateSystem addr 0xf45444 size 0xc virtual true final false
 bool SupportsCoordinateSystem(int32_t coord) ;

/// @brief Method get_Q addr 0xf45450 size 0x58 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_Infinity addr 0xf454a8 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_Infinity() ;

/// @brief Method get_FieldSize addr 0xf454b0 size 0x64 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0xf45514 size 0x60 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method CreateRawPoint addr 0xf4568c size 0x88 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method CreateRawPoint addr 0xf4579c size 0x90 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method CreateCacheSafeLookupTable addr 0xf45834 size 0x1a4 virtual true final false
 Org::BouncyCastle::Math::EC::ECLookupTable CreateCacheSafeLookupTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

/// @brief Method RandomFieldElement addr 0xf45a14 size 0xa4 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElement(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method RandomFieldElementMult addr 0xf45bb8 size 0xa4 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::GM
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::GM::Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::GM::Org__BouncyCastle__Math__EC__Custom__GM__SM2P256V1Curve__SM2P256V1LookupTable, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve/SM2P256V1LookupTable");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve");
