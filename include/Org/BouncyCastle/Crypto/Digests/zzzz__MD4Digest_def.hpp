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
class MD4Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::MD4Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(758))
// CS Name: Org.BouncyCastle.Crypto.Digests.MD4Digest
class CORDL_TYPE MD4Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MD4Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD4Digest", modifiers: " const&", def_value: None }]
constexpr MD4Digest(MD4Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD4Digest", modifiers: "&&", def_value: None }]
constexpr MD4Digest(MD4Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD4Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr MD4Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD4Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD4Digest& operator=(MD4Digest&& o) noexcept = default;
  constexpr MD4Digest& operator=(MD4Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{16};

/// @brief Field S11 offset 0
static constexpr int32_t  S11{3};

/// @brief Field S12 offset 0
static constexpr int32_t  S12{7};

/// @brief Field S13 offset 0
static constexpr int32_t  S13{11};

/// @brief Field S14 offset 0
static constexpr int32_t  S14{19};

/// @brief Field S21 offset 0
static constexpr int32_t  S21{3};

/// @brief Field S22 offset 0
static constexpr int32_t  S22{5};

/// @brief Field S23 offset 0
static constexpr int32_t  S23{9};

/// @brief Field S24 offset 0
static constexpr int32_t  S24{13};

/// @brief Field S31 offset 0
static constexpr int32_t  S31{3};

/// @brief Field S32 offset 0
static constexpr int32_t  S32{9};

/// @brief Field S33 offset 0
static constexpr int32_t  S33{11};

/// @brief Field S34 offset 0
static constexpr int32_t  S34{15};

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

 ::ArrayW<int32_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Digests::MD4Digest New_ctor() ;

/// @brief Method .ctor addr 0x119ca6c size 0x6c virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Digests::MD4Digest New_ctor(Org::BouncyCastle::Crypto::Digests::MD4Digest t) ;

/// @brief Method .ctor addr 0x119cad8 size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::MD4Digest t) ;

/// @brief Method CopyIn addr 0x119cb4c size 0x5c virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::MD4Digest t) ;

/// @brief Method get_AlgorithmName addr 0x119cba8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x119cbe8 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0x119cbf0 size 0xbc virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0x119ccac size 0x6c virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method UnpackWord addr 0x119cd18 size 0x80 virtual false final false
 void UnpackWord(int32_t word, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0x119cd98 size 0x80 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x119ce18 size 0x60 virtual true final false
 void Reset() ;

/// @brief Method RotateLeft addr 0x119ce78 size 0xc virtual false final false
 int32_t RotateLeft(int32_t x, int32_t n) ;

/// @brief Method F addr 0x119ce84 size 0x10 virtual false final false
 int32_t F(int32_t u, int32_t v, int32_t w) ;

/// @brief Method G addr 0x119ce94 size 0x14 virtual false final false
 int32_t G(int32_t u, int32_t v, int32_t w) ;

/// @brief Method H addr 0x119cea8 size 0xc virtual false final false
 int32_t H(int32_t u, int32_t v, int32_t w) ;

/// @brief Method ProcessBlock addr 0x119ceb4 size 0x648 virtual true final false
 void ProcessBlock() ;

/// @brief Method Copy addr 0x119d4fc size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x119d55c size 0x84 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::MD4Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD4Digest, "Org.BouncyCastle.Crypto.Digests", "MD4Digest");
