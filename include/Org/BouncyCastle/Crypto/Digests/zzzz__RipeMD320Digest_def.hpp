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
class RipeMD320Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD320Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(765))
// CS Name: Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
class CORDL_TYPE RipeMD320Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RipeMD320Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD320Digest", modifiers: " const&", def_value: None }]
constexpr RipeMD320Digest(RipeMD320Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD320Digest", modifiers: "&&", def_value: None }]
constexpr RipeMD320Digest(RipeMD320Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RipeMD320Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr RipeMD320Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RipeMD320Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RipeMD320Digest& operator=(RipeMD320Digest&& o) noexcept = default;
  constexpr RipeMD320Digest& operator=(RipeMD320Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{40};

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

 int32_t __declspec(property(get=__get_H8, put=__set_H8))  H8;

constexpr void __set_H8(int32_t value) ;

constexpr int32_t __get_H8() const;

 int32_t __declspec(property(get=__get_H9, put=__set_H9))  H9;

constexpr void __set_H9(int32_t value) ;

constexpr int32_t __get_H9() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0xe133c8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe13408 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

// Ctor Parameters []
explicit RipeMD320Digest() ;

/// @brief Method .ctor addr 0xe13410 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Digests::RipeMD320Digest", modifiers: "", def_value: None }]
explicit RipeMD320Digest(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest t) ;

/// @brief Method .ctor addr 0xe1347c size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest t) ;

/// @brief Method CopyIn addr 0xe134f0 size 0x74 virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest t) ;

/// @brief Method ProcessWord addr 0xe13564 size 0xbc virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0xe13620 size 0x6c virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method UnpackWord addr 0xe1368c size 0x80 virtual false final false
 void UnpackWord(int32_t word, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe1370c size 0xe0 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe137ec size 0x80 virtual true final false
 void Reset() ;

/// @brief Method RL addr 0xe1386c size 0xc virtual false final false
 int32_t RL(int32_t x, int32_t n) ;

/// @brief Method F1 addr 0xe13878 size 0xc virtual false final false
 int32_t F1(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F2 addr 0xe13884 size 0x10 virtual false final false
 int32_t F2(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F3 addr 0xe13894 size 0xc virtual false final false
 int32_t F3(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F4 addr 0xe138a0 size 0x10 virtual false final false
 int32_t F4(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F5 addr 0xe138b0 size 0xc virtual false final false
 int32_t F5(int32_t x, int32_t y, int32_t z) ;

/// @brief Method ProcessBlock addr 0xe138bc size 0x180c virtual true final false
 void ProcessBlock() ;

/// @brief Method Copy addr 0xe150c8 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe15128 size 0x84 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::RipeMD320Digest, "Org.BouncyCastle.Crypto.Digests", "RipeMD320Digest");
