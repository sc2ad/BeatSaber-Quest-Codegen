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
class RipeMD160Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD160Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(763))
// CS Name: Org.BouncyCastle.Crypto.Digests.RipeMD160Digest
class CORDL_TYPE RipeMD160Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RipeMD160Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD160Digest", modifiers: " const&", def_value: None }]
constexpr RipeMD160Digest(RipeMD160Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RipeMD160Digest", modifiers: "&&", def_value: None }]
constexpr RipeMD160Digest(RipeMD160Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RipeMD160Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr RipeMD160Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RipeMD160Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RipeMD160Digest& operator=(RipeMD160Digest&& o) noexcept = default;
  constexpr RipeMD160Digest& operator=(RipeMD160Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{20};

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
explicit RipeMD160Digest() ;

/// @brief Method .ctor addr 0x11a0308 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Digests::RipeMD160Digest", modifiers: "", def_value: None }]
explicit RipeMD160Digest(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest t) ;

/// @brief Method .ctor addr 0x11a0374 size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest t) ;

/// @brief Method CopyIn addr 0x11a03e8 size 0x64 virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest t) ;

/// @brief Method get_AlgorithmName addr 0x11a044c size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x11a048c size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0x11a0494 size 0xbc virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0x11a0550 size 0x6c virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method UnpackWord addr 0x11a05bc size 0x80 virtual false final false
 void UnpackWord(int32_t word, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0x11a063c size 0x90 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x11a06cc size 0x6c virtual true final false
 void Reset() ;

/// @brief Method RL addr 0x11a0738 size 0xc virtual false final false
 int32_t RL(int32_t x, int32_t n) ;

/// @brief Method F1 addr 0x11a0744 size 0xc virtual false final false
 int32_t F1(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F2 addr 0x11a0750 size 0x10 virtual false final false
 int32_t F2(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F3 addr 0x11a0760 size 0xc virtual false final false
 int32_t F3(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F4 addr 0x11a076c size 0x10 virtual false final false
 int32_t F4(int32_t x, int32_t y, int32_t z) ;

/// @brief Method F5 addr 0x11a077c size 0xc virtual false final false
 int32_t F5(int32_t x, int32_t y, int32_t z) ;

/// @brief Method ProcessBlock addr 0x11a0788 size 0x1780 virtual true final false
 void ProcessBlock() ;

/// @brief Method Copy addr 0x11a1f08 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x11a1f68 size 0x1084 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest, "Org.BouncyCastle.Crypto.Digests", "RipeMD160Digest");
