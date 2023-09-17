#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IXof;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Ed448;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp;
}
// Type: ::Algorithm
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1561))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Algorithm
struct CORDL_TYPE ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm(int32_t value__) noexcept;


                    constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm const&) = default;
                    constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm&&) = default;
                    constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm& operator=(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm& operator=(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm_Unwrapped : int32_t {
__Ed448 = 0,
__Ed448ph = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm_Unwrapped () const noexcept {
return std::bit_cast<______Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ed448 offset 0
static ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm const Ed448;

/// @brief Field Ed448ph offset 0
static ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm const Ed448ph;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointExt
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1562))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointExt
class CORDL_TYPE ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt& operator=(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt& operator=(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_y() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_z() const;


// Methods

// Ctor Parameters []
explicit ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt() ;

/// @brief Method .ctor addr 0xfbabfc size 0x3c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointPrecomp
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1563))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointPrecomp
class CORDL_TYPE ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp& operator=(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp& operator=(____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_y() const;


// Methods

// Ctor Parameters []
explicit ____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp() ;

/// @brief Method .ctor addr 0xfbbecc size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
// Type: Org.BouncyCastle.Math.EC.Rfc8032::Ed448
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1564))
// CS Name: Org.BouncyCastle.Math.EC.Rfc8032.Ed448
class CORDL_TYPE Ed448 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PointPrecomp = ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp;

using PointExt = ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt;

using Algorithm = ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Ed448() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448", modifiers: " const&", def_value: None }]
constexpr Ed448(Ed448 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448", modifiers: "&&", def_value: None }]
constexpr Ed448(Ed448&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed448(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed448& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed448& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed448& operator=(Ed448&& o) noexcept = default;
  constexpr Ed448& operator=(Ed448 const& o) noexcept = default;
                


// Fields

/// @brief Field M26UL offset 0
static constexpr uint64_t  M26UL{67108863u};

/// @brief Field M28UL offset 0
static constexpr uint64_t  M28UL{268435455u};

/// @brief Field PointBytes offset 0
static constexpr int32_t  PointBytes{57};

/// @brief Field ScalarUints offset 0
static constexpr int32_t  ScalarUints{14};

/// @brief Field ScalarBytes offset 0
static constexpr int32_t  ScalarBytes{57};

/// @brief Field L_0 offset 0
static constexpr int32_t  L_0{78101261};

/// @brief Field L_1 offset 0
static constexpr int32_t  L_1{141809365};

/// @brief Field L_2 offset 0
static constexpr int32_t  L_2{175155932};

/// @brief Field L_3 offset 0
static constexpr int32_t  L_3{64542499};

/// @brief Field L_4 offset 0
static constexpr int32_t  L_4{158326419};

/// @brief Field L_5 offset 0
static constexpr int32_t  L_5{191173276};

/// @brief Field L_6 offset 0
static constexpr int32_t  L_6{104575268};

/// @brief Field L_7 offset 0
static constexpr int32_t  L_7{137584065};

/// @brief Field L4_0 offset 0
static constexpr int32_t  L4_0{43969588};

/// @brief Field L4_1 offset 0
static constexpr int32_t  L4_1{30366549};

/// @brief Field L4_2 offset 0
static constexpr int32_t  L4_2{163752818};

/// @brief Field L4_3 offset 0
static constexpr int32_t  L4_3{258169998};

/// @brief Field L4_4 offset 0
static constexpr int32_t  L4_4{96434764};

/// @brief Field L4_5 offset 0
static constexpr int32_t  L4_5{227822194};

/// @brief Field L4_6 offset 0
static constexpr int32_t  L4_6{149865618};

/// @brief Field L4_7 offset 0
static constexpr int32_t  L4_7{550336261};

/// @brief Field C_d offset 0
static constexpr int32_t  C_d{-39081};

/// @brief Field WnafWidthBase offset 0
static constexpr int32_t  WnafWidthBase{7};

/// @brief Field PrecompBlocks offset 0
static constexpr int32_t  PrecompBlocks{5};

/// @brief Field PrecompTeeth offset 0
static constexpr int32_t  PrecompTeeth{5};

/// @brief Field PrecompSpacing offset 0
static constexpr int32_t  PrecompSpacing{18};

/// @brief Field PrecompPoints offset 0
static constexpr int32_t  PrecompPoints{16};

/// @brief Field PrecompMask offset 0
static constexpr int32_t  PrecompMask{15};

static int32_t __declspec(property(get=__get_PrehashSize, put=__set_PrehashSize))  PrehashSize;

static void __set_PrehashSize(int32_t value) ;

static int32_t __get_PrehashSize() ;

static int32_t __declspec(property(get=__get_PublicKeySize, put=__set_PublicKeySize))  PublicKeySize;

static void __set_PublicKeySize(int32_t value) ;

static int32_t __get_PublicKeySize() ;

static int32_t __declspec(property(get=__get_SecretKeySize, put=__set_SecretKeySize))  SecretKeySize;

static void __set_SecretKeySize(int32_t value) ;

static int32_t __get_SecretKeySize() ;

static int32_t __declspec(property(get=__get_SignatureSize, put=__set_SignatureSize))  SignatureSize;

static void __set_SignatureSize(int32_t value) ;

static int32_t __get_SignatureSize() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Dom4Prefix, put=__set_Dom4Prefix))  Dom4Prefix;

static void __set_Dom4Prefix(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Dom4Prefix() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_P, put=__set_P))  P;

static void __set_P(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_P() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_L, put=__set_L))  L;

static void __set_L(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_L() ;

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_N, put=__set_N))  N;

static void __set_N(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_N() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_B_x, put=__set_B_x))  B_x;

static void __set_B_x(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_B_x() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_B_y, put=__set_B_y))  B_y;

static void __set_B_y(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_B_y() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_precompLock, put=__set_precompLock))  precompLock;

static void __set_precompLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_precompLock() ;

static ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> __declspec(property(get=__get_precompBaseTable, put=__set_precompBaseTable))  precompBaseTable;

static void __set_precompBaseTable(::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> value) ;

static ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> __get_precompBaseTable() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_precompBase, put=__set_precompBase))  precompBase;

static void __set_precompBase(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_precompBase() ;


// Methods

/// @brief Method CalculateS addr 0xfb8050 size 0x198 virtual false final false
static ::ArrayW<uint8_t> CalculateS(::ArrayW<uint8_t> r, ::ArrayW<uint8_t> k, ::ArrayW<uint8_t> s) ;

/// @brief Method CheckContextVar addr 0xfb8b60 size 0x14 virtual false final false
static bool CheckContextVar(::ArrayW<uint8_t> ctx) ;

/// @brief Method CheckPoint addr 0xfb8b74 size 0xd8 virtual false final false
static int32_t CheckPoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method CheckPoint addr 0xfb8c4c size 0x12c virtual false final false
static int32_t CheckPoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method CheckPointVar addr 0xfb8d78 size 0xe0 virtual false final false
static bool CheckPointVar(::ArrayW<uint8_t> p) ;

/// @brief Method CheckScalarVar addr 0xfb8f28 size 0xd4 virtual false final false
static bool CheckScalarVar(::ArrayW<uint8_t> s) ;

/// @brief Method CreatePrehash addr 0xfb8ffc size 0x4c virtual false final false
static ::Org::BouncyCastle::Crypto::IXof CreatePrehash() ;

/// @brief Method CreateXof addr 0xfb9048 size 0x60 virtual false final false
static ::Org::BouncyCastle::Crypto::IXof CreateXof() ;

/// @brief Method Decode16 addr 0xfb90a8 size 0x40 virtual false final false
static uint32_t Decode16(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Decode24 addr 0xfb90e8 size 0x54 virtual false final false
static uint32_t Decode24(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Decode32 addr 0xfb913c size 0x68 virtual false final false
static uint32_t Decode32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Decode32 addr 0xfb8e58 size 0xd0 virtual false final false
static void Decode32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> n, int32_t nOff, int32_t nLen) ;

/// @brief Method DecodePointVar addr 0xfb91a4 size 0x200 virtual false final false
static bool DecodePointVar(::ArrayW<uint8_t> p, int32_t pOff, bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r) ;

/// @brief Method DecodeScalar addr 0xfb81e8 size 0x74 virtual false final false
static void DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n) ;

/// @brief Method Dom4 addr 0xfb93c0 size 0x230 virtual false final false
static void Dom4(::Org::BouncyCastle::Crypto::IXof d, uint8_t x, ::ArrayW<uint8_t> y) ;

/// @brief Method Encode24 addr 0xfb95f0 size 0x64 virtual false final false
static void Encode24(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode32 addr 0xfb825c size 0x80 virtual false final false
static void Encode32(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode56 addr 0xfb9654 size 0x7c virtual false final false
static void Encode56(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method EncodePoint addr 0xfb96d0 size 0x134 virtual false final false
static int32_t EncodePoint(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method GeneratePrivateKey addr 0xfb9804 size 0x1c virtual false final false
static void GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<uint8_t> k) ;

/// @brief Method GeneratePublicKey addr 0xfb9820 size 0x1e0 virtual false final false
static void GeneratePublicKey(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff) ;

/// @brief Method GetWnafVar addr 0xfb9b48 size 0x1b8 virtual false final false
static ::ArrayW<int8_t> GetWnafVar(::ArrayW<uint32_t> n, int32_t width) ;

/// @brief Method ImplSign addr 0xfb9d00 size 0x474 virtual false final false
static void ImplSign(::Org::BouncyCastle::Crypto::IXof d, ::ArrayW<uint8_t> h, ::ArrayW<uint8_t> s, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method ImplSign addr 0xfba174 size 0x2c0 virtual false final false
static void ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method ImplSign addr 0xfba434 size 0x2b0 virtual false final false
static void ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method ImplVerify addr 0xfba6e4 size 0x518 virtual false final false
static bool ImplVerify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen) ;

/// @brief Method PointAddVar addr 0xfbadf4 size 0x264 virtual false final false
static void PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r) ;

/// @brief Method PointAddPrecomp addr 0xfbb058 size 0x1f8 virtual false final false
static void PointAddPrecomp(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp p, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r) ;

/// @brief Method PointCopy addr 0xfbb250 size 0xa8 virtual false final false
static ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p) ;

/// @brief Method PointDouble addr 0xfbb2f8 size 0x17c virtual false final false
static void PointDouble(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r) ;

/// @brief Method PointExtendXY addr 0xfb93a4 size 0x1c virtual false final false
static void PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p) ;

/// @brief Method PointLookup addr 0xfbb474 size 0xdc virtual false final false
static void PointLookup(int32_t block, int32_t index, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp p) ;

/// @brief Method PointPrecompVar addr 0xfbb550 size 0x17c virtual false final false
static ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt> PointPrecompVar(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, int32_t count) ;

/// @brief Method PointSetNeutral addr 0xfbb6cc size 0x38 virtual false final false
static void PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p) ;

/// @brief Method Precompute addr 0xfbb704 size 0x5b4 virtual false final false
static void Precompute() ;

/// @brief Method PruneScalar addr 0xfb9a00 size 0x60 virtual false final false
static void PruneScalar(::ArrayW<uint8_t> n, int32_t nOff, ::ArrayW<uint8_t> r) ;

/// @brief Method ReduceScalar addr 0xfb82dc size 0x884 virtual false final false
static ::ArrayW<uint8_t> ReduceScalar(::ArrayW<uint8_t> n) ;

/// @brief Method ScalarMultBase addr 0xfbbcb8 size 0x214 virtual false final false
static void ScalarMultBase(::ArrayW<uint8_t> k, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r) ;

/// @brief Method ScalarMultBaseEncoded addr 0xfb9a60 size 0xe8 virtual false final false
static void ScalarMultBaseEncoded(::ArrayW<uint8_t> k, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method ScalarMultBaseXY addr 0xfbbefc size 0x154 virtual false final false
static void ScalarMultBaseXY(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method ScalarMultStrausVar addr 0xfbac38 size 0x1bc virtual false final false
static void ScalarMultStrausVar(::ArrayW<uint32_t> nb, ::ArrayW<uint32_t> np, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt p, ::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt r) ;

/// @brief Method Sign addr 0xfbc050 size 0xbc virtual false final false
static void Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method Sign addr 0xfbc10c size 0xcc virtual false final false
static void Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfbc1d8 size 0xb8 virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfbc290 size 0xd4 virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfbc364 size 0x1cc virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::Org::BouncyCastle::Crypto::IXof ph, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method SignPrehash addr 0xfbc530 size 0x1e8 virtual false final false
static void SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::Org::BouncyCastle::Crypto::IXof ph, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method Verify addr 0xfbc718 size 0xc0 virtual false final false
static bool Verify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen) ;

/// @brief Method VerifyPrehash addr 0xfbc7d8 size 0xc0 virtual false final false
static bool VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff) ;

/// @brief Method VerifyPrehash addr 0xfbc898 size 0x1d4 virtual false final false
static bool VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::Org::BouncyCastle::Crypto::IXof ph) ;

// Ctor Parameters []
explicit Ed448() ;

/// @brief Method .ctor addr 0xfbcc5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc8032
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__Algorithm, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/Algorithm");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointExt, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/PointExt");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed448__PointPrecomp, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/PointPrecomp");
