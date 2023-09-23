#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class WhirlpoolDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::WhirlpoolDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(784))
// CS Name: Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest
class CORDL_TYPE WhirlpoolDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~WhirlpoolDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "WhirlpoolDigest", modifiers: " const&", def_value: None }]
constexpr WhirlpoolDigest(WhirlpoolDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WhirlpoolDigest", modifiers: "&&", def_value: None }]
constexpr WhirlpoolDigest(WhirlpoolDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WhirlpoolDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WhirlpoolDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WhirlpoolDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WhirlpoolDigest& operator=(WhirlpoolDigest&& o) noexcept = default;
  constexpr WhirlpoolDigest& operator=(WhirlpoolDigest const& o) noexcept = default;
                


// Fields

/// @brief Field BYTE_LENGTH offset 0
static constexpr int32_t  BYTE_LENGTH{64};

/// @brief Field DIGEST_LENGTH_BYTES offset 0
static constexpr int32_t  DIGEST_LENGTH_BYTES{64};

/// @brief Field ROUNDS offset 0
static constexpr int32_t  ROUNDS{10};

/// @brief Field REDUCTION_POLYNOMIAL offset 0
static constexpr int32_t  REDUCTION_POLYNOMIAL{285};

/// @brief Field BITCOUNT_ARRAY_SIZE offset 0
static constexpr int32_t  BITCOUNT_ARRAY_SIZE{32};

static ::ArrayW<int32_t> __declspec(property(get=__get_SBOX, put=__set_SBOX))  SBOX;

static void __set_SBOX(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_SBOX() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C0, put=__set_C0))  C0;

static void __set_C0(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C0() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C1, put=__set_C1))  C1;

static void __set_C1(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C1() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C2, put=__set_C2))  C2;

static void __set_C2(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C2() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C3, put=__set_C3))  C3;

static void __set_C3(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C3() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C4, put=__set_C4))  C4;

static void __set_C4(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C4() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C5, put=__set_C5))  C5;

static void __set_C5(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C5() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C6, put=__set_C6))  C6;

static void __set_C6(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C6() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_C7, put=__set_C7))  C7;

static void __set_C7(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_C7() ;

 ::ArrayW<int64_t> __declspec(property(get=__get__rc, put=__set__rc))  _rc;

constexpr void __set__rc(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__rc() const;

static ::ArrayW<int16_t> __declspec(property(get=__get_EIGHT, put=__set_EIGHT))  EIGHT;

static void __set_EIGHT(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_EIGHT() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__bufferPos, put=__set__bufferPos))  _bufferPos;

constexpr void __set__bufferPos(int32_t value) ;

constexpr int32_t __get__bufferPos() const;

 ::ArrayW<int16_t> __declspec(property(get=__get__bitCount, put=__set__bitCount))  _bitCount;

constexpr void __set__bitCount(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get__bitCount() const;

 ::ArrayW<int64_t> __declspec(property(get=__get__hash, put=__set__hash))  _hash;

constexpr void __set__hash(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__hash() const;

 ::ArrayW<int64_t> __declspec(property(get=__get__K, put=__set__K))  _K;

constexpr void __set__K(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__K() const;

 ::ArrayW<int64_t> __declspec(property(get=__get__L, put=__set__L))  _L;

constexpr void __set__L(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__L() const;

 ::ArrayW<int64_t> __declspec(property(get=__get__block, put=__set__block))  _block;

constexpr void __set__block(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__block() const;

 ::ArrayW<int64_t> __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__state() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit WhirlpoolDigest() ;

/// @brief Method .ctor addr 0xe1ea2c size 0x2b0 virtual false final false
 void _ctor() ;

/// @brief Method packIntoLong addr 0xe1e9f8 size 0x34 virtual false final false
static int64_t packIntoLong(int32_t b7, int32_t b6, int32_t b5, int32_t b4, int32_t b3, int32_t b2, int32_t b1, int32_t b0) ;

/// @brief Method maskWithReductionPolynomial addr 0xe1e9e4 size 0x14 virtual false final false
static int32_t maskWithReductionPolynomial(int32_t input) ;

// Ctor Parameters [CppParam { name: "originalDigest", ty: "Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest", modifiers: "", def_value: None }]
explicit WhirlpoolDigest(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest originalDigest) ;

/// @brief Method .ctor addr 0xe1ecdc size 0x110 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest originalDigest) ;

/// @brief Method get_AlgorithmName addr 0xe1ef54 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe1ef94 size 0x8 virtual true final true
 int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0xe1ef9c size 0xc4 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe1f18c size 0xbc virtual true final true
 void Reset() ;

/// @brief Method processFilledBuffer addr 0xe1f248 size 0xe0 virtual false final false
 void processFilledBuffer() ;

/// @brief Method bytesToLongFromBuffer addr 0xe1f328 size 0xd4 virtual false final false
static int64_t bytesToLongFromBuffer(::ArrayW<uint8_t> buffer, int32_t startPos) ;

/// @brief Method convertLongToByteArray addr 0xe1f134 size 0x58 virtual false final false
static void convertLongToByteArray(int64_t inputLong, ::ArrayW<uint8_t> outputArray, int32_t offSet) ;

/// @brief Method processBlock addr 0xe1f3fc size 0x6b0 virtual false final false
 void processBlock() ;

/// @brief Method Update addr 0xe1faac size 0x64 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method increment addr 0xe1fb10 size 0xf4 virtual false final false
 void increment() ;

/// @brief Method BlockUpdate addr 0xe1fc04 size 0x6c virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method finish addr 0xe1f060 size 0xd4 virtual false final false
 void finish() ;

/// @brief Method copyBitLength addr 0xe1fc70 size 0xa8 virtual false final false
 ::ArrayW<uint8_t> copyBitLength() ;

/// @brief Method GetByteLength addr 0xe1fd18 size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method Copy addr 0xe1fd20 size 0x60 virtual true final true
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe1edec size 0x168 virtual true final true
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest, "Org.BouncyCastle.Crypto.Digests", "WhirlpoolDigest");
