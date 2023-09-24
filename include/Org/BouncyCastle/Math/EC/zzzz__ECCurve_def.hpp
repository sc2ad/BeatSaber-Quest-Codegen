#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC {
class Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class Org__BouncyCastle__Math__EC__ECCurve__Config;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class Org__BouncyCastle__Math__EC__ECCurve__Config;
}
namespace Org::BouncyCastle::Math::EC {
class Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable;
}
// Type: ::Config
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1359))
// CS Name: Org.BouncyCastle.Math.EC.ECCurve::Config
class CORDL_TYPE Org__BouncyCastle__Math__EC__ECCurve__Config : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Org__BouncyCastle__Math__EC__ECCurve__Config() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__ECCurve__Config", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__ECCurve__Config(Org__BouncyCastle__Math__EC__ECCurve__Config const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__ECCurve__Config", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__ECCurve__Config(Org__BouncyCastle__Math__EC__ECCurve__Config&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__ECCurve__Config(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__ECCurve__Config& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__ECCurve__Config& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__ECCurve__Config& operator=(Org__BouncyCastle__Math__EC__ECCurve__Config&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__ECCurve__Config& operator=(Org__BouncyCastle__Math__EC__ECCurve__Config const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_outer() const;

 int32_t __declspec(property(get=__get_coord, put=__set_coord))  coord;

constexpr void __set_coord(int32_t value) ;

constexpr int32_t __get_coord() const;

 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __declspec(property(get=__get_endomorphism, put=__set_endomorphism))  endomorphism;

constexpr void __set_endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value) ;

constexpr Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __get_endomorphism() const;

 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier value) ;

constexpr Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier __get_multiplier() const;


// Methods

static Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config New_ctor(Org::BouncyCastle::Math::EC::ECCurve outer, int32_t coord, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier multiplier) ;

/// @brief Method .ctor addr 0xf3cc54 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve outer, int32_t coord, Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism, Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier multiplier) ;

/// @brief Method SetCoordinateSystem addr 0xf3e628 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config SetCoordinateSystem(int32_t coord) ;

/// @brief Method SetEndomorphism addr 0xf3e630 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config SetEndomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism endomorphism) ;

/// @brief Method SetMultiplier addr 0xf3e638 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config SetMultiplier(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier multiplier) ;

/// @brief Method Create addr 0xf3e640 size 0xdc virtual false final false
 Org::BouncyCastle::Math::EC::ECCurve Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
// Type: ::DefaultLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1360))
// CS Name: Org.BouncyCastle.Math.EC.ECCurve::DefaultLookupTable
class CORDL_TYPE Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable(Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable(Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractECLookupTable(ptr) {
}


  constexpr Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable& operator=(Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable& operator=(Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_m_outer, put=__set_m_outer))  m_outer;

constexpr void __set_m_outer(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_m_outer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_table, put=__set_m_table))  m_table;

constexpr void __set_m_table(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_table() const;

 int32_t __declspec(property(get=__get_m_size, put=__set_m_size))  m_size;

constexpr void __set_m_size(int32_t value) ;

constexpr int32_t __get_m_size() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

static Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable New_ctor(Org::BouncyCastle::Math::EC::ECCurve outer, ::ArrayW<uint8_t> table, int32_t size) ;

/// @brief Method .ctor addr 0xf3daf4 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve outer, ::ArrayW<uint8_t> table, int32_t size) ;

/// @brief Method get_Size addr 0xf3e724 size 0x8 virtual true final false
 int32_t get_Size() ;

/// @brief Method Lookup addr 0xf3e72c size 0x180 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint Lookup(int32_t index) ;

/// @brief Method LookupVar addr 0xf3e9ac size 0x144 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint LookupVar(int32_t index) ;

/// @brief Method CreatePoint addr 0xf3e8ac size 0x100 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint CreatePoint(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
// Type: Org.BouncyCastle.Math.EC::ECCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1361))
// CS Name: Org.BouncyCastle.Math.EC.ECCurve
class CORDL_TYPE ECCurve : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DefaultLookupTable = Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable;

using Config = Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ECCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECCurve", modifiers: " const&", def_value: None }]
constexpr ECCurve(ECCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECCurve", modifiers: "&&", def_value: None }]
constexpr ECCurve(ECCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECCurve(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECCurve& operator=(ECCurve&& o) noexcept = default;
  constexpr ECCurve& operator=(ECCurve const& o) noexcept = default;
                


// Fields

/// @brief Field COORD_AFFINE offset 0
static constexpr int32_t  COORD_AFFINE{0};

/// @brief Field COORD_HOMOGENEOUS offset 0
static constexpr int32_t  COORD_HOMOGENEOUS{1};

/// @brief Field COORD_JACOBIAN offset 0
static constexpr int32_t  COORD_JACOBIAN{2};

/// @brief Field COORD_JACOBIAN_CHUDNOVSKY offset 0
static constexpr int32_t  COORD_JACOBIAN_CHUDNOVSKY{3};

/// @brief Field COORD_JACOBIAN_MODIFIED offset 0
static constexpr int32_t  COORD_JACOBIAN_MODIFIED{4};

/// @brief Field COORD_LAMBDA_AFFINE offset 0
static constexpr int32_t  COORD_LAMBDA_AFFINE{5};

/// @brief Field COORD_LAMBDA_PROJECTIVE offset 0
static constexpr int32_t  COORD_LAMBDA_PROJECTIVE{6};

/// @brief Field COORD_SKEWED offset 0
static constexpr int32_t  COORD_SKEWED{7};

 Org::BouncyCastle::Math::Field::IFiniteField __declspec(property(get=__get_m_field, put=__set_m_field))  m_field;

constexpr void __set_m_field(Org::BouncyCastle::Math::Field::IFiniteField value) ;

constexpr Org::BouncyCastle::Math::Field::IFiniteField __get_m_field() const;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=__get_m_a, put=__set_m_a))  m_a;

constexpr void __set_m_a(Org::BouncyCastle::Math::EC::ECFieldElement value) ;

constexpr Org::BouncyCastle::Math::EC::ECFieldElement __get_m_a() const;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=__get_m_b, put=__set_m_b))  m_b;

constexpr void __set_m_b(Org::BouncyCastle::Math::EC::ECFieldElement value) ;

constexpr Org::BouncyCastle::Math::EC::ECFieldElement __get_m_b() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_order, put=__set_m_order))  m_order;

constexpr void __set_m_order(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_order() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_cofactor, put=__set_m_cofactor))  m_cofactor;

constexpr void __set_m_cofactor(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_cofactor() const;

 int32_t __declspec(property(get=__get_m_coord, put=__set_m_coord))  m_coord;

constexpr void __set_m_coord(int32_t value) ;

constexpr int32_t __get_m_coord() const;

 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __declspec(property(get=__get_m_endomorphism, put=__set_m_endomorphism))  m_endomorphism;

constexpr void __set_m_endomorphism(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism value) ;

constexpr Org::BouncyCastle::Math::EC::Endo::ECEndomorphism __get_m_endomorphism() const;

 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier __declspec(property(get=__get_m_multiplier, put=__set_m_multiplier))  m_multiplier;

constexpr void __set_m_multiplier(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier value) ;

constexpr Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier __get_m_multiplier() const;


// Properties

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Infinity))  Infinity;

 Org::BouncyCastle::Math::Field::IFiniteField __declspec(property(get=get_Field))  Field;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_A))  A;

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_B))  B;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Order))  Order;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Cofactor))  Cofactor;

 int32_t __declspec(property(get=get_CoordinateSystem))  CoordinateSystem;


// Methods

/// @brief Method GetAllCoordinateSystems addr 0xf3cb38 size 0x70 virtual false final false
static ::ArrayW<int32_t> GetAllCoordinateSystems() ;

static Org::BouncyCastle::Math::EC::ECCurve New_ctor(Org::BouncyCastle::Math::Field::IFiniteField field) ;

/// @brief Method .ctor addr 0xf3cba8 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Math::Field::IFiniteField field) ;

/// @brief Method get_FieldSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method IsValidFieldElement addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsValidFieldElement(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method RandomFieldElement addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElement(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method RandomFieldElementMult addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method Configure addr 0xf3cbd8 size 0x7c virtual true final false
 Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config Configure() ;

/// @brief Method ValidatePoint addr 0xf3cc98 size 0x84 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ValidatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method ValidatePoint addr 0xf3cd28 size 0x8c virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ValidatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y, bool withCompression) ;

/// @brief Method CreatePoint addr 0xf3cdb4 size 0x14 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method CreatePoint addr 0xf3cdc8 size 0x68 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreatePoint(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Math::BigInteger y, bool withCompression) ;

/// @brief Method CloneCurve addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECCurve CloneCurve() ;

/// @brief Method CreateRawPoint addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, bool withCompression) ;

/// @brief Method CreateRawPoint addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y, ::ArrayW<Org::BouncyCastle::Math::EC::ECFieldElement> zs, bool withCompression) ;

/// @brief Method CreateDefaultMultiplier addr 0xf3ce30 size 0xc0 virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier CreateDefaultMultiplier() ;

/// @brief Method SupportsCoordinateSystem addr 0xf3cef0 size 0xc virtual true final false
 bool SupportsCoordinateSystem(int32_t coord) ;

/// @brief Method GetPreCompInfo addr 0xf3cefc size 0x218 virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo GetPreCompInfo(Org::BouncyCastle::Math::EC::ECPoint point, ::StringW name) ;

/// @brief Method Precompute addr 0xf3d114 size 0x370 virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(Org::BouncyCastle::Math::EC::ECPoint point, ::StringW name, Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback callback) ;

/// @brief Method ImportPoint addr 0xf3d484 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint ImportPoint(Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method NormalizeAll addr 0xf3d594 size 0x2c virtual true final false
 void NormalizeAll(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points) ;

/// @brief Method NormalizeAll addr 0xf3d5c0 size 0x2f0 virtual true final false
 void NormalizeAll(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len, Org::BouncyCastle::Math::EC::ECFieldElement iso) ;

/// @brief Method get_Infinity addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint get_Infinity() ;

/// @brief Method get_Field addr 0xf3d8b0 size 0x8 virtual true final false
 Org::BouncyCastle::Math::Field::IFiniteField get_Field() ;

/// @brief Method get_A addr 0xf3d8b8 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_A() ;

/// @brief Method get_B addr 0xf3d8c0 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_B() ;

/// @brief Method get_Order addr 0xf3d8c8 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Order() ;

/// @brief Method get_Cofactor addr 0xf3d8d0 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Cofactor() ;

/// @brief Method get_CoordinateSystem addr 0xf3d8d8 size 0x8 virtual true final false
 int32_t get_CoordinateSystem() ;

/// @brief Method CreateCacheSafeLookupTable addr 0xf3d8e0 size 0x214 virtual true final false
 Org::BouncyCastle::Math::EC::ECLookupTable CreateCacheSafeLookupTable(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

/// @brief Method CheckPoint addr 0xf3db30 size 0x98 virtual true final false
 void CheckPoint(Org::BouncyCastle::Math::EC::ECPoint point) ;

/// @brief Method CheckPoints addr 0xf3dbc8 size 0x28 virtual true final false
 void CheckPoints(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points) ;

/// @brief Method CheckPoints addr 0xf3dbf0 size 0x16c virtual true final false
 void CheckPoints(::ArrayW<Org::BouncyCastle::Math::EC::ECPoint> points, int32_t off, int32_t len) ;

/// @brief Method Equals addr 0xf3dd5c size 0x150 virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::ECCurve other) ;

/// @brief Method Equals addr 0xf3deac size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xf3df38 size 0xcc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method DecompressPoint addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint DecompressPoint(int32_t yTilde, Org::BouncyCastle::Math::BigInteger X1) ;

/// @brief Method GetEndomorphism addr 0xf3e004 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::Endo::ECEndomorphism GetEndomorphism() ;

/// @brief Method GetMultiplier addr 0xf3e00c size 0xbc virtual true final false
 Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier GetMultiplier() ;

/// @brief Method DecodePoint addr 0xf3e0c8 size 0x420 virtual true final false
 Org::BouncyCastle::Math::EC::ECPoint DecodePoint(::ArrayW<uint8_t> encoded) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ECCurve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECCurve, "Org.BouncyCastle.Math.EC", "ECCurve");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__Config, "Org.BouncyCastle.Math.EC", "ECCurve/Config");
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Org__BouncyCastle__Math__EC__ECCurve__DefaultLookupTable, "Org.BouncyCastle.Math.EC", "ECCurve/DefaultLookupTable");
