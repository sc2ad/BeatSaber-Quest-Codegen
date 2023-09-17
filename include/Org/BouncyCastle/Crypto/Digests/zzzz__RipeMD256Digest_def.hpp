#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class RipeMD256Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD256Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(764))
// CS Name: Org.BouncyCastle.Crypto.Digests.RipeMD256Digest
class CORDL_TYPE RipeMD256Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~RipeMD256Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD256Digest", modifiers: " const&", def_value: None }]
constexpr RipeMD256Digest(RipeMD256Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD256Digest", modifiers: "&&", def_value: None }]
constexpr RipeMD256Digest(RipeMD256Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RipeMD256Digest(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr RipeMD256Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RipeMD256Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RipeMD256Digest& operator=(RipeMD256Digest&& o) noexcept = default;
  constexpr RipeMD256Digest& operator=(RipeMD256Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{32};

 int32_t __declspec(property(get=__get_H0, put=__set_H0))  H0;

constexpr void __set_H0(int32_t value) ;

constexpr int32_t __get_H0() const;

 int32_t __declspec(property(get=__get_H1, put=__set_H1))  H1;

constexpr void __set_H1(int32_t value) ;

constexpr int32_t __get_H1() const;

 int32_t __declspec(property(get=__get_H2, put=__set_H2))  H2;

constexpr void __set_H2(int32_t value) ;

constexpr int32_t __get_H2() const;

 int32_t __declspec(property(get=__get_H3, put=__set_H3))  H3;

constexpr void __set_H3(int32_t value) ;

constexpr int32_t __get_H3() const;

 int32_t __declspec(property(get=__get_H4, put=__set_H4))  H4;

constexpr void __set_H4(int32_t value) ;

constexpr int32_t __get_H4() const;

 int32_t __declspec(property(get=__get_H5, put=__set_H5))  H5;

constexpr void __set_H5(int32_t value) ;

constexpr int32_t __get_H5() const;

 int32_t __declspec(property(get=__get_H6, put=__set_H6))  H6;

constexpr void __set_H6(int32_t value) ;

constexpr int32_t __get_H6() const;

 int32_t __declspec(property(get=__get_H7, put=__set_H7))  H7;

constexpr void __set_H7(int32_t value) ;

constexpr int32_t __get_H7() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0xe11da8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe11de8 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

// Ctor Parameters []
explicit RipeMD256Digest() ;

/// @brief Method .ctor addr 0xe11df0 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest", modifiers: "", def_value: None }]
explicit RipeMD256Digest(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest t) ;

/// @brief Method .ctor addr 0xe11e5c size 0x74 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest t) ;

/// @brief Method CopyIn addr 0xe11ed0 size 0x64 virtual false final false
 void CopyIn(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest t) ;

/// @brief Method ProcessWord addr 0xe11f34 size 0xbc virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0xe11ff0 size 0x6c virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method UnpackWord addr 0xe1205c size 0x80 virtual false final false
 void UnpackWord(int32_t word, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe120dc size 0xc0 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe1219c size 0x6c virtual true final false
 void Reset() ;

/// @brief Method RL addr 0xe12208 size 0xc virtual false final false
 int32_t RL(int32_t x, int32_t n) ;

/// @brief Method F1 addr 0xe12214 size 0xc virtual false final false
 int32_t F1(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F2 addr 0xe12220 size 0x10 virtual false final false
 int32_t F2(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F3 addr 0xe12230 size 0xc virtual false final false
 int32_t F3(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F4 addr 0xe1223c size 0x10 virtual false final false
 int32_t F4(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F1 addr 0xe1224c size 0x1c virtual false final false
 int32_t F1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method F2 addr 0xe12268 size 0x2c virtual false final false
 int32_t F2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method F3 addr 0xe12294 size 0x28 virtual false final false
 int32_t F3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method F4 addr 0xe122bc size 0x2c virtual false final false
 int32_t F4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF1 addr 0xe122e8 size 0x1c virtual false final false
 int32_t FF1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF2 addr 0xe12304 size 0x2c virtual false final false
 int32_t FF2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF3 addr 0xe12330 size 0x28 virtual false final false
 int32_t FF3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF4 addr 0xe12358 size 0x2c virtual false final false
 int32_t FF4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method ProcessBlock addr 0xe12384 size 0xf60 virtual true final false
 void ProcessBlock() ;

/// @brief Method Copy addr 0xe132e4 size 0x60 virtual true final false
 ::Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe13344 size 0x84 virtual true final false
 void Reset(::Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, "Org.BouncyCastle.Crypto.Digests", "RipeMD256Digest");
