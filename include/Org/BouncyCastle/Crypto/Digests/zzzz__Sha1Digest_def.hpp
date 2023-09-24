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
class Sha1Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Sha1Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(766))
// CS Name: Org.BouncyCastle.Crypto.Digests.Sha1Digest
class CORDL_TYPE Sha1Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Sha1Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha1Digest", modifiers: " const&", def_value: None }]
constexpr Sha1Digest(Sha1Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha1Digest", modifiers: "&&", def_value: None }]
constexpr Sha1Digest(Sha1Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sha1Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr Sha1Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sha1Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sha1Digest& operator=(Sha1Digest&& o) noexcept = default;
  constexpr Sha1Digest& operator=(Sha1Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{20};

/// @brief Field Y1 offset 0
static constexpr uint32_t  Y1{1518500249u};

/// @brief Field Y2 offset 0
static constexpr uint32_t  Y2{1859775393u};

/// @brief Field Y3 offset 0
static constexpr uint32_t  Y3{2400959708u};

/// @brief Field Y4 offset 0
static constexpr uint32_t  Y4{3395469782u};

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

 ::ArrayW<uint32_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Digests::Sha1Digest New_ctor() ;

/// @brief Method .ctor addr 0xe151ac size 0x6c virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Digests::Sha1Digest New_ctor(Org::BouncyCastle::Crypto::Digests::Sha1Digest t) ;

/// @brief Method .ctor addr 0xe15218 size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Sha1Digest t) ;

/// @brief Method CopyIn addr 0xe1528c size 0x64 virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::Sha1Digest t) ;

/// @brief Method get_AlgorithmName addr 0xe152f0 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe15330 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method ProcessWord addr 0xe15338 size 0x80 virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0xe153b8 size 0x6c virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method DoFinal addr 0xe15424 size 0xa4 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe154c8 size 0x4c virtual true final false
 void Reset() ;

/// @brief Method F addr 0xe15514 size 0x10 virtual false final false
static uint32_t F(uint32_t u, uint32_t v, uint32_t w) ;

/// @brief Method H addr 0xe15524 size 0xc virtual false final false
static uint32_t H(uint32_t u, uint32_t v, uint32_t w) ;

/// @brief Method G addr 0xe15530 size 0x14 virtual false final false
static uint32_t G(uint32_t u, uint32_t v, uint32_t w) ;

/// @brief Method ProcessBlock addr 0xe15544 size 0x53c virtual true final false
 void ProcessBlock() ;

/// @brief Method Copy addr 0xe15a80 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe15ae0 size 0x84 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Sha1Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha1Digest, "Org.BouncyCastle.Crypto.Digests", "Sha1Digest");
