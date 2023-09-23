#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD5Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::MD5Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(759))
// CS Name: Org.BouncyCastle.Crypto.Digests.MD5Digest
class CORDL_TYPE MD5Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MD5Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD5Digest", modifiers: " const&", def_value: None }]
constexpr MD5Digest(MD5Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD5Digest", modifiers: "&&", def_value: None }]
constexpr MD5Digest(MD5Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD5Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr MD5Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD5Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD5Digest& operator=(MD5Digest&& o) noexcept = default;
  constexpr MD5Digest& operator=(MD5Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{16};

 uint32_t __declspec(property(get=__get_H1, put=__set_H1))  H1;

constexpr void __set_H1(uint32_t value) ;

constexpr uint32_t __get_H1() const;

 uint32_t __declspec(property(get=__get_H2, put=__set_H2))  H2;

constexpr void __set_H2(uint32_t value) ;

constexpr uint32_t __get_H2() const;

 uint32_t __declspec(property(get=__get_H3, put=__set_H3))  H3;

constexpr void __set_H3(uint32_t value) ;

constexpr uint32_t __get_H3() const;

 uint32_t __declspec(property(get=__get_H4, put=__set_H4))  H4;

constexpr void __set_H4(uint32_t value) ;

constexpr uint32_t __get_H4() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;

static int32_t __declspec(property(get=__get_S11, put=__set_S11))  S11;

static void __set_S11(int32_t value) ;

static int32_t __get_S11() ;

static int32_t __declspec(property(get=__get_S12, put=__set_S12))  S12;

static void __set_S12(int32_t value) ;

static int32_t __get_S12() ;

static int32_t __declspec(property(get=__get_S13, put=__set_S13))  S13;

static void __set_S13(int32_t value) ;

static int32_t __get_S13() ;

static int32_t __declspec(property(get=__get_S14, put=__set_S14))  S14;

static void __set_S14(int32_t value) ;

static int32_t __get_S14() ;

static int32_t __declspec(property(get=__get_S21, put=__set_S21))  S21;

static void __set_S21(int32_t value) ;

static int32_t __get_S21() ;

static int32_t __declspec(property(get=__get_S22, put=__set_S22))  S22;

static void __set_S22(int32_t value) ;

static int32_t __get_S22() ;

static int32_t __declspec(property(get=__get_S23, put=__set_S23))  S23;

static void __set_S23(int32_t value) ;

static int32_t __get_S23() ;

static int32_t __declspec(property(get=__get_S24, put=__set_S24))  S24;

static void __set_S24(int32_t value) ;

static int32_t __get_S24() ;

static int32_t __declspec(property(get=__get_S31, put=__set_S31))  S31;

static void __set_S31(int32_t value) ;

static int32_t __get_S31() ;

static int32_t __declspec(property(get=__get_S32, put=__set_S32))  S32;

static void __set_S32(int32_t value) ;

static int32_t __get_S32() ;

static int32_t __declspec(property(get=__get_S33, put=__set_S33))  S33;

static void __set_S33(int32_t value) ;

static int32_t __get_S33() ;

static int32_t __declspec(property(get=__get_S34, put=__set_S34))  S34;

static void __set_S34(int32_t value) ;

static int32_t __get_S34() ;

static int32_t __declspec(property(get=__get_S41, put=__set_S41))  S41;

static void __set_S41(int32_t value) ;

static int32_t __get_S41() ;

static int32_t __declspec(property(get=__get_S42, put=__set_S42))  S42;

static void __set_S42(int32_t value) ;

static int32_t __get_S42() ;

static int32_t __declspec(property(get=__get_S43, put=__set_S43))  S43;

static void __set_S43(int32_t value) ;

static int32_t __get_S43() ;

static int32_t __declspec(property(get=__get_S44, put=__set_S44))  S44;

static void __set_S44(int32_t value) ;

static int32_t __get_S44() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit MD5Digest() ;

/// @brief Method .ctor addr 0x119d5e0 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Digests::MD5Digest", modifiers: "", def_value: None }]
explicit MD5Digest(Org::BouncyCastle::Crypto::Digests::MD5Digest t) ;

/// @brief Method .ctor addr 0x119d64c size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::MD5Digest t) ;

/// @brief Method CopyIn addr 0x119d6c0 size 0x5c virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::MD5Digest t) ;

/// @brief Method get_AlgorithmName addr 0x119d71c size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x119d75c size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0x119d764 size 0x80 virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0x119d7e4 size 0xb8 virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method DoFinal addr 0x119d89c size 0x90 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x119d92c size 0x60 virtual true final false
 void Reset() ;

/// @brief Method RotateLeft addr 0x119d98c size 0xc virtual false final false
static uint32_t RotateLeft(uint32_t x, int32_t n) ;

/// @brief Method F addr 0x119d998 size 0x10 virtual false final false
static uint32_t F(uint32_t u, uint32_t v, uint32_t w) ;

/// @brief Method G addr 0x119d9a8 size 0x10 virtual false final false
static uint32_t G(uint32_t u, uint32_t v, uint32_t w) ;

/// @brief Method H addr 0x119d9b8 size 0xc virtual false final false
static uint32_t H(uint32_t u, uint32_t v, uint32_t w) ;

/// @brief Method K addr 0x119d9c4 size 0xc virtual false final false
static uint32_t K(uint32_t u, uint32_t v, uint32_t w) ;

/// @brief Method ProcessBlock addr 0x119d9d0 size 0xb68 virtual true final false
 void ProcessBlock() ;

/// @brief Method Copy addr 0x119e538 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x119e598 size 0x84 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::MD5Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD5Digest, "Org.BouncyCastle.Crypto.Digests", "MD5Digest");
