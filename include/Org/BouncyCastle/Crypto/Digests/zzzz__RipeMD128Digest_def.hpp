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
class RipeMD128Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD128Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(762))
// CS Name: Org.BouncyCastle.Crypto.Digests.RipeMD128Digest
class CORDL_TYPE RipeMD128Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RipeMD128Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD128Digest", modifiers: " const&", def_value: None }]
constexpr RipeMD128Digest(RipeMD128Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD128Digest", modifiers: "&&", def_value: None }]
constexpr RipeMD128Digest(RipeMD128Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RipeMD128Digest(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr RipeMD128Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RipeMD128Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RipeMD128Digest& operator=(RipeMD128Digest&& o) noexcept = default;
  constexpr RipeMD128Digest& operator=(RipeMD128Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{16};

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

 ::ArrayW<int32_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit RipeMD128Digest() ;

/// @brief Method .ctor addr 0x119edc0 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest", modifiers: "", def_value: None }]
explicit RipeMD128Digest(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest t) ;

/// @brief Method .ctor addr 0x119ee2c size 0x74 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest t) ;

/// @brief Method CopyIn addr 0x119eea0 size 0x5c virtual false final false
 void CopyIn(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest t) ;

/// @brief Method get_AlgorithmName addr 0x119eefc size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x119ef3c size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0x119ef44 size 0xbc virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0x119f000 size 0x6c virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method UnpackWord addr 0x119f06c size 0x80 virtual false final false
 void UnpackWord(int32_t word, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0x119f0ec size 0x80 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x119f16c size 0x60 virtual true final false
 void Reset() ;

/// @brief Method RL addr 0x119f1cc size 0xc virtual false final false
 int32_t RL(int32_t x, int32_t n) ;

/// @brief Method F1 addr 0x119f1d8 size 0xc virtual false final false
 int32_t F1(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F2 addr 0x119f1e4 size 0x10 virtual false final false
 int32_t F2(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F3 addr 0x119f1f4 size 0xc virtual false final false
 int32_t F3(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F4 addr 0x119f200 size 0x10 virtual false final false
 int32_t F4(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F1 addr 0x119f210 size 0x1c virtual false final false
 int32_t F1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method F2 addr 0x119f22c size 0x2c virtual false final false
 int32_t F2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method F3 addr 0x119f258 size 0x28 virtual false final false
 int32_t F3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method F4 addr 0x119f280 size 0x2c virtual false final false
 int32_t F4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF1 addr 0x119f2ac size 0x1c virtual false final false
 int32_t FF1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF2 addr 0x119f2c8 size 0x2c virtual false final false
 int32_t FF2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF3 addr 0x119f2f4 size 0x28 virtual false final false
 int32_t FF3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method FF4 addr 0x119f31c size 0x2c virtual false final false
 int32_t FF4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s) ;

/// @brief Method ProcessBlock addr 0x119f348 size 0xedc virtual true final false
 void ProcessBlock() ;

/// @brief Method Copy addr 0x11a0224 size 0x60 virtual true final false
 ::Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x11a0284 size 0x84 virtual true final false
 void Reset(::Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, "Org.BouncyCastle.Crypto.Digests", "RipeMD128Digest");
