#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Gost3411Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(751))
// CS Name: Org.BouncyCastle.Crypto.Digests.Gost3411Digest
class CORDL_TYPE Gost3411Digest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~Gost3411Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411Digest", modifiers: " const&", def_value: None }]
constexpr Gost3411Digest(Gost3411Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411Digest", modifiers: "&&", def_value: None }]
constexpr Gost3411Digest(Gost3411Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3411Digest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3411Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3411Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3411Digest& operator=(Gost3411Digest&& o) noexcept = default;
  constexpr Gost3411Digest& operator=(Gost3411Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DIGEST_LENGTH offset 0
static constexpr int32_t  DIGEST_LENGTH{32};

 ::ArrayW<uint8_t> __declspec(property(get=__get_H, put=__set_H))  H;

constexpr void __set_H(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_H() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_L, put=__set_L))  L;

constexpr void __set_L(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_L() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_M, put=__set_M))  M;

constexpr void __set_M(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_M() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Sum, put=__set_Sum))  Sum;

constexpr void __set_Sum(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Sum() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_C, put=__set_C))  C;

constexpr void __set_C(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get_C() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_xBuf, put=__set_xBuf))  xBuf;

constexpr void __set_xBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_xBuf() const;

 int32_t __declspec(property(get=__get_xBufOff, put=__set_xBufOff))  xBufOff;

constexpr void __set_xBufOff(int32_t value) ;

constexpr int32_t __get_xBufOff() const;

 uint64_t __declspec(property(get=__get_byteCount, put=__set_byteCount))  byteCount;

constexpr void __set_byteCount(uint64_t value) ;

constexpr uint64_t __get_byteCount() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sBox, put=__set_sBox))  sBox;

constexpr void __set_sBox(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sBox() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_K, put=__set_K))  K;

constexpr void __set_K(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_K() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_a() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_wS, put=__set_wS))  wS;

constexpr void __set_wS(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_wS() const;

 ::ArrayW<int16_t> __declspec(property(get=__get_w_S, put=__set_w_S))  w_S;

constexpr void __set_w_S(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_w_S() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_S, put=__set_S))  S;

constexpr void __set_S(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_S() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_U, put=__set_U))  U;

constexpr void __set_U(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_U() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_V, put=__set_V))  V;

constexpr void __set_V(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_V() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_W, put=__set_W))  W;

constexpr void __set_W(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_W() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_C2, put=__set_C2))  C2;

static void __set_C2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_C2() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method MakeC addr 0x1196780 size 0xd0 virtual false final false
static ::ArrayW<::ArrayW<uint8_t>> MakeC() ;

// Ctor Parameters []
explicit Gost3411Digest() ;

/// @brief Method .ctor addr 0x1196850 size 0x290 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "sBoxParam", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Gost3411Digest(::ArrayW<uint8_t> sBoxParam) ;

/// @brief Method .ctor addr 0x1196c40 size 0x294 virtual false final false
 void _ctor(::ArrayW<uint8_t> sBoxParam) ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Digests::Gost3411Digest", modifiers: "", def_value: None }]
explicit Gost3411Digest(Org::BouncyCastle::Crypto::Digests::Gost3411Digest t) ;

/// @brief Method .ctor addr 0x1196ed4 size 0x1a4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Gost3411Digest t) ;

/// @brief Method get_AlgorithmName addr 0x1197350 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x1197390 size 0x8 virtual true final true
 int32_t GetDigestSize() ;

/// @brief Method Update addr 0x1197398 size 0x80 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x11977b4 size 0x130 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method P addr 0x11978e4 size 0x110 virtual false final false
 ::ArrayW<uint8_t> P(::ArrayW<uint8_t> input) ;

/// @brief Method A addr 0x11979f4 size 0xc0 virtual false final false
 ::ArrayW<uint8_t> A(::ArrayW<uint8_t> input) ;

/// @brief Method E addr 0x1197ab4 size 0x17c virtual false final false
 void E(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> s, int32_t sOff, ::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method fw addr 0x1197c30 size 0x10c virtual false final false
 void fw(::ArrayW<uint8_t> input) ;

/// @brief Method processBlock addr 0x1197490 size 0x324 virtual false final false
 void processBlock(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method finish addr 0x1197e64 size 0x58 virtual false final false
 void finish() ;

/// @brief Method DoFinal addr 0x1197ebc size 0x4c virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x1196ae0 size 0x160 virtual true final true
 void Reset() ;

/// @brief Method sumByteArray addr 0x1197418 size 0x78 virtual false final false
 void sumByteArray(::ArrayW<uint8_t> input) ;

/// @brief Method cpyBytesToShort addr 0x1197d3c size 0x8c virtual false final false
static void cpyBytesToShort(::ArrayW<uint8_t> S, ::ArrayW<int16_t> wS) ;

/// @brief Method cpyShortToBytes addr 0x1197dc8 size 0x9c virtual false final false
static void cpyShortToBytes(::ArrayW<int16_t> wS, ::ArrayW<uint8_t> S) ;

/// @brief Method GetByteLength addr 0x1197f08 size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method Copy addr 0x1197f10 size 0x60 virtual true final true
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x1197078 size 0x2d8 virtual true final true
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Gost3411Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411Digest, "Org.BouncyCastle.Crypto.Digests", "Gost3411Digest");
