#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class LongArray;
}
// Type: Org.BouncyCastle.Math.EC::LongArray
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1574))
// CS Name: Org.BouncyCastle.Math.EC.LongArray
class CORDL_TYPE LongArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LongArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: " const&", def_value: None }]
constexpr LongArray(LongArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: "&&", def_value: None }]
constexpr LongArray(LongArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LongArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LongArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LongArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LongArray& operator=(LongArray&& o) noexcept = default;
  constexpr LongArray& operator=(LongArray const& o) noexcept = default;
                


// Fields

/// @brief Field ZEROES offset 0
static constexpr ::ConstString  ZEROES{u"0000000000000000000000000000000000000000000000000000000000000000"};

static ::ArrayW<uint16_t> __declspec(property(get=__get_INTERLEAVE2_TABLE, put=__set_INTERLEAVE2_TABLE))  INTERLEAVE2_TABLE;

static void __set_INTERLEAVE2_TABLE(::ArrayW<uint16_t> value) ;

static ::ArrayW<uint16_t> __get_INTERLEAVE2_TABLE() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_INTERLEAVE3_TABLE, put=__set_INTERLEAVE3_TABLE))  INTERLEAVE3_TABLE;

static void __set_INTERLEAVE3_TABLE(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_INTERLEAVE3_TABLE() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_INTERLEAVE4_TABLE, put=__set_INTERLEAVE4_TABLE))  INTERLEAVE4_TABLE;

static void __set_INTERLEAVE4_TABLE(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_INTERLEAVE4_TABLE() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_INTERLEAVE5_TABLE, put=__set_INTERLEAVE5_TABLE))  INTERLEAVE5_TABLE;

static void __set_INTERLEAVE5_TABLE(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_INTERLEAVE5_TABLE() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_INTERLEAVE7_TABLE, put=__set_INTERLEAVE7_TABLE))  INTERLEAVE7_TABLE;

static void __set_INTERLEAVE7_TABLE(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_INTERLEAVE7_TABLE() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_BitLengths, put=__set_BitLengths))  BitLengths;

static void __set_BitLengths(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_BitLengths() ;

 ::ArrayW<int64_t> __declspec(property(get=__get_m_ints, put=__set_m_ints))  m_ints;

constexpr void __set_m_ints(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_m_ints() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

static Org::BouncyCastle::Math::EC::LongArray New_ctor(int32_t intLen) ;

/// @brief Method .ctor addr 0xfcaa20 size 0x68 virtual false final false
 void _ctor(int32_t intLen) ;

static Org::BouncyCastle::Math::EC::LongArray New_ctor(::ArrayW<int64_t> ints) ;

/// @brief Method .ctor addr 0xfc1488 size 0x28 virtual false final false
 void _ctor(::ArrayW<int64_t> ints) ;

static Org::BouncyCastle::Math::EC::LongArray New_ctor(::ArrayW<int64_t> ints, int32_t off, int32_t len) ;

/// @brief Method .ctor addr 0xfcaa88 size 0xb4 virtual false final false
 void _ctor(::ArrayW<int64_t> ints, int32_t off, int32_t len) ;

static Org::BouncyCastle::Math::EC::LongArray New_ctor(Org::BouncyCastle::Math::BigInteger bigInt) ;

/// @brief Method .ctor addr 0xfc3384 size 0x224 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger bigInt) ;

/// @brief Method CopyTo addr 0xfc0fb0 size 0x2c virtual false final false
 void CopyTo(::ArrayW<int64_t> z, int32_t zOff) ;

/// @brief Method IsOne addr 0xfc368c size 0x60 virtual false final false
 bool IsOne() ;

/// @brief Method IsZero addr 0xfc3740 size 0x4c virtual false final false
 bool IsZero() ;

/// @brief Method GetUsedLength addr 0xfcab3c size 0x1c virtual false final false
 int32_t GetUsedLength() ;

/// @brief Method GetUsedLengthFrom addr 0xfcab58 size 0xe0 virtual false final false
 int32_t GetUsedLengthFrom(int32_t from) ;

/// @brief Method Degree addr 0xfc35d0 size 0xa4 virtual false final false
 int32_t Degree() ;

/// @brief Method DegreeFrom addr 0xfcad58 size 0xac virtual false final false
 int32_t DegreeFrom(int32_t limit) ;

/// @brief Method BitLength addr 0xfcac38 size 0x120 virtual false final false
static int32_t BitLength(int64_t w) ;

/// @brief Method ResizedInts addr 0xfcae04 size 0xbc virtual false final false
 ::ArrayW<int64_t> ResizedInts(int32_t newLen) ;

/// @brief Method ToBigInteger addr 0xfc3814 size 0x214 virtual false final false
 Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method ShiftUp addr 0xfcaec0 size 0x80 virtual false final false
static int64_t ShiftUp(::ArrayW<int64_t> x, int32_t xOff, int32_t count, int32_t shift) ;

/// @brief Method ShiftUp addr 0xfcaf40 size 0x98 virtual false final false
static int64_t ShiftUp(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count, int32_t shift) ;

/// @brief Method AddOne addr 0xfc3ed4 size 0x11c virtual false final false
 Org::BouncyCastle::Math::EC::LongArray AddOne() ;

/// @brief Method AddShiftedByBitsSafe addr 0xfcafd8 size 0x100 virtual false final false
 void AddShiftedByBitsSafe(Org::BouncyCastle::Math::EC::LongArray other, int32_t otherDegree, int32_t bits) ;

/// @brief Method AddShiftedUp addr 0xfcb150 size 0xa4 virtual false final false
static int64_t AddShiftedUp(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t count, int32_t shift) ;

/// @brief Method AddShiftedDown addr 0xfcb1f4 size 0x90 virtual false final false
static int64_t AddShiftedDown(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t count, int32_t shift) ;

/// @brief Method AddShiftedByWords addr 0xfc3d74 size 0xd4 virtual false final false
 void AddShiftedByWords(Org::BouncyCastle::Math::EC::LongArray other, int32_t words) ;

/// @brief Method Add addr 0xfcb0d8 size 0x78 virtual false final false
static void Add(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t count) ;

/// @brief Method Add addr 0xfcb284 size 0x90 virtual false final false
static void Add(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method AddBoth addr 0xfcb314 size 0x98 virtual false final false
static void AddBoth(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y1, int32_t y1Off, ::ArrayW<int64_t> y2, int32_t y2Off, int32_t count) ;

/// @brief Method Distribute addr 0xfcb3ac size 0xa8 virtual false final false
static void Distribute(::ArrayW<int64_t> x, int32_t src, int32_t dst1, int32_t dst2, int32_t count) ;

/// @brief Method get_Length addr 0xfcb454 size 0x1c virtual false final false
 int32_t get_Length() ;

/// @brief Method FlipWord addr 0xfcb470 size 0x7c virtual false final false
static void FlipWord(::ArrayW<int64_t> buf, int32_t off, int32_t bit, int64_t word) ;

/// @brief Method TestBitZero addr 0xfc37c8 size 0x34 virtual false final false
 bool TestBitZero() ;

/// @brief Method TestBit addr 0xfcb4ec size 0x40 virtual false final false
static bool TestBit(::ArrayW<int64_t> buf, int32_t off, int32_t n) ;

/// @brief Method FlipBit addr 0xfcb52c size 0x44 virtual false final false
static void FlipBit(::ArrayW<int64_t> buf, int32_t off, int32_t n) ;

/// @brief Method MultiplyWord addr 0xfcb570 size 0x118 virtual false final false
static void MultiplyWord(int64_t a, ::ArrayW<int64_t> b, int32_t bLen, ::ArrayW<int64_t> c, int32_t cOff) ;

/// @brief Method ModMultiplyLD addr 0xfcb688 size 0x518 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModMultiplyLD(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModMultiply addr 0xfc40d0 size 0x450 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModMultiply(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModMultiplyAlt addr 0xfcbc58 size 0x4bc virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModMultiplyAlt(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModReduce addr 0xfcc28c size 0xe4 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModReduce(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Multiply addr 0xfc46c8 size 0x430 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray Multiply(Org::BouncyCastle::Math::EC::LongArray other, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Reduce addr 0xfc4af8 size 0xe0 virtual false final false
 void Reduce(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceResult addr 0xfcbba0 size 0xb8 virtual false final false
static Org::BouncyCastle::Math::EC::LongArray ReduceResult(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceInPlace addr 0xfcc370 size 0x248 virtual false final false
static int32_t ReduceInPlace(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceBitWise addr 0xfcc860 size 0xc4 virtual false final false
static void ReduceBitWise(::ArrayW<int64_t> buf, int32_t off, int32_t BitLength, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceBit addr 0xfcc924 size 0x114 virtual false final false
static void ReduceBit(::ArrayW<int64_t> buf, int32_t off, int32_t bit, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceWordWise addr 0xfcc6f0 size 0x170 virtual false final false
static void ReduceWordWise(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t toBit, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceWord addr 0xfcca38 size 0x108 virtual false final false
static void ReduceWord(::ArrayW<int64_t> buf, int32_t off, int32_t bit, int64_t word, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ReduceVectorWise addr 0xfcc5b8 size 0x138 virtual false final false
static void ReduceVectorWise(::ArrayW<int64_t> buf, int32_t off, int32_t len, int32_t words, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method FlipVector addr 0xfccb40 size 0x100 virtual false final false
static void FlipVector(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> y, int32_t yOff, int32_t yLen, int32_t bits) ;

/// @brief Method ModSquare addr 0xfc4cb0 size 0x190 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModSquare(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method ModSquareN addr 0xfc5198 size 0x134 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModSquareN(int32_t n, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Square addr 0xfc4fa4 size 0x150 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray Square(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method SquareInPlace addr 0xfccd00 size 0xe0 virtual false final false
static void SquareInPlace(::ArrayW<int64_t> x, int32_t xLen, int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Interleave addr 0xfcc114 size 0x178 virtual false final false
static void Interleave(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count, int32_t width) ;

/// @brief Method Interleave3 addr 0xfccde0 size 0xe4 virtual false final false
static void Interleave3(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method Interleave3 addr 0xfcd180 size 0x88 virtual false final false
static int64_t Interleave3(int64_t x) ;

/// @brief Method Interleave3_21to63 addr 0xfcd208 size 0xac virtual false final false
static int64_t Interleave3_21to63(int32_t x) ;

/// @brief Method Interleave5 addr 0xfccec4 size 0xe4 virtual false final false
static void Interleave5(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method Interleave5 addr 0xfcd2b4 size 0xa0 virtual false final false
static int64_t Interleave5(int64_t x) ;

/// @brief Method Interleave3_13to65 addr 0xfcd354 size 0x94 virtual false final false
static int64_t Interleave3_13to65(int32_t x) ;

/// @brief Method Interleave7 addr 0xfccfa8 size 0xe4 virtual false final false
static void Interleave7(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count) ;

/// @brief Method Interleave7 addr 0xfcd3e8 size 0x114 virtual false final false
static int64_t Interleave7(int64_t x) ;

/// @brief Method Interleave2_n addr 0xfcd08c size 0xf4 virtual false final false
static void Interleave2_n(::ArrayW<int64_t> x, int32_t xOff, ::ArrayW<int64_t> z, int32_t zOff, int32_t count, int32_t rounds) ;

/// @brief Method Interleave2_n addr 0xfcd4fc size 0xec virtual false final false
static int64_t Interleave2_n(int64_t x, int32_t rounds) ;

/// @brief Method Interleave4_16to64 addr 0xfcd5e8 size 0x94 virtual false final false
static int64_t Interleave4_16to64(int32_t x) ;

/// @brief Method Interleave2_32to64 addr 0xfccc40 size 0xc0 virtual false final false
static int64_t Interleave2_32to64(int32_t x) ;

/// @brief Method ModInverse addr 0xfc5360 size 0x480 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray ModInverse(int32_t m, ::ArrayW<int32_t> ks) ;

/// @brief Method Equals addr 0xfcd67c size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xfcd704 size 0xb0 virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::LongArray other) ;

/// @brief Method GetHashCode addr 0xfcd7b4 size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0xfc3cd4 size 0xa0 virtual false final false
 Org::BouncyCastle::Math::EC::LongArray Copy() ;

/// @brief Method ToString addr 0xfcd830 size 0x1bc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::LongArray);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::LongArray, "Org.BouncyCastle.Math.EC", "LongArray");
