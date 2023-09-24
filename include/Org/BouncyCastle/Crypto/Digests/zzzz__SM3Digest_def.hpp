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
class SM3Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::SM3Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(782))
// CS Name: Org.BouncyCastle.Crypto.Digests.SM3Digest
class CORDL_TYPE SM3Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SM3Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM3Digest", modifiers: " const&", def_value: None }]
constexpr SM3Digest(SM3Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM3Digest", modifiers: "&&", def_value: None }]
constexpr SM3Digest(SM3Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM3Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::GeneralDigest(ptr) {
}


  constexpr SM3Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM3Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM3Digest& operator=(SM3Digest&& o) noexcept = default;
  constexpr SM3Digest& operator=(SM3Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DIGEST_LENGTH offset 0
static constexpr int32_t  DIGEST_LENGTH{32};

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{16};

 ::ArrayW<uint32_t> __declspec(property(get=__get_V, put=__set_V))  V;

constexpr void __set_V(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_V() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_inwords, put=__set_inwords))  inwords;

constexpr void __set_inwords(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_inwords() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_W, put=__set_W))  W;

constexpr void __set_W(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_W() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_T, put=__set_T))  T;

static void __set_T(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_T() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Digests::SM3Digest New_ctor() ;

/// @brief Method .ctor addr 0xe1b9ac size 0x8c virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Digests::SM3Digest New_ctor(Org::BouncyCastle::Crypto::Digests::SM3Digest t) ;

/// @brief Method .ctor addr 0xe1ba38 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::SM3Digest t) ;

/// @brief Method CopyIn addr 0xe1bacc size 0x6c virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::SM3Digest t) ;

/// @brief Method get_AlgorithmName addr 0xe1bb38 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe1bb78 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method Copy addr 0xe1bb80 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe1bbe0 size 0x94 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

/// @brief Method Reset addr 0xe1bc74 size 0xcc virtual true final false
 void Reset() ;

/// @brief Method DoFinal addr 0xe1bd40 size 0x54 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessWord addr 0xe1bd94 size 0x74 virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0xe1be08 size 0xf8 virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method P0 addr 0xe1bf00 size 0xc virtual false final false
 uint32_t P0(uint32_t x) ;

/// @brief Method P1 addr 0xe1bf0c size 0xc virtual false final false
 uint32_t P1(uint32_t x) ;

/// @brief Method FF0 addr 0xe1bf18 size 0xc virtual false final false
 uint32_t FF0(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method FF1 addr 0xe1bf24 size 0x14 virtual false final false
 uint32_t FF1(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method GG0 addr 0xe1bf38 size 0xc virtual false final false
 uint32_t GG0(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method GG1 addr 0xe1bf44 size 0x10 virtual false final false
 uint32_t GG1(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method ProcessBlock addr 0xe1bf54 size 0x414 virtual true final false
 void ProcessBlock() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::SM3Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::SM3Digest, "Org.BouncyCastle.Crypto.Digests", "SM3Digest");
