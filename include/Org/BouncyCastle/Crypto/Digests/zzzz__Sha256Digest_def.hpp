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
class Sha256Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Sha256Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(768))
// CS Name: Org.BouncyCastle.Crypto.Digests.Sha256Digest
class CORDL_TYPE Sha256Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Sha256Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha256Digest", modifiers: " const&", def_value: None }]
constexpr Sha256Digest(Sha256Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha256Digest", modifiers: "&&", def_value: None }]
constexpr Sha256Digest(Sha256Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sha256Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr Sha256Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sha256Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sha256Digest& operator=(Sha256Digest&& o) noexcept = default;
  constexpr Sha256Digest& operator=(Sha256Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{32};

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

 uint32_t __declspec(property(get=__get_H5, put=__set_H5))  H5;

constexpr void __set_H5(uint32_t value) ;

constexpr uint32_t __get_H5() const;

 uint32_t __declspec(property(get=__get_H6, put=__set_H6))  H6;

constexpr void __set_H6(uint32_t value) ;

constexpr uint32_t __get_H6() const;

 uint32_t __declspec(property(get=__get_H7, put=__set_H7))  H7;

constexpr void __set_H7(uint32_t value) ;

constexpr uint32_t __get_H7() const;

 uint32_t __declspec(property(get=__get_H8, put=__set_H8))  H8;

constexpr void __set_H8(uint32_t value) ;

constexpr uint32_t __get_H8() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_K, put=__set_K))  K;

static void __set_K(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_K() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Digests::Sha256Digest New_ctor() ;

/// @brief Method .ctor addr 0xe1663c size 0x74 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Digests::Sha256Digest New_ctor(Org::BouncyCastle::Crypto::Digests::Sha256Digest t) ;

/// @brief Method .ctor addr 0xe166cc size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Sha256Digest t) ;

/// @brief Method CopyIn addr 0xe16740 size 0x64 virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::Sha256Digest t) ;

/// @brief Method get_AlgorithmName addr 0xe167a4 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe167e4 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0xe167ec size 0x80 virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0xe1686c size 0x6c virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method DoFinal addr 0xe168d8 size 0xe0 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe169b8 size 0x4c virtual true final false
 void Reset() ;

/// @brief Method initHs addr 0xe166b0 size 0x1c virtual false final false
 void initHs() ;

/// @brief Method ProcessBlock addr 0xe16a04 size 0x56c virtual true final false
 void ProcessBlock() ;

/// @brief Method Sum1Ch addr 0xe16f90 size 0x20 virtual false final false
static uint32_t Sum1Ch(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method Sum0Maj addr 0xe16fb0 size 0x24 virtual false final false
static uint32_t Sum0Maj(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method Theta0 addr 0xe16f80 size 0x10 virtual false final false
static uint32_t Theta0(uint32_t x) ;

/// @brief Method Theta1 addr 0xe16f70 size 0x10 virtual false final false
static uint32_t Theta1(uint32_t x) ;

/// @brief Method Copy addr 0xe16fd4 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe17034 size 0x84 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Sha256Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha256Digest, "Org.BouncyCastle.Crypto.Digests", "Sha256Digest");
