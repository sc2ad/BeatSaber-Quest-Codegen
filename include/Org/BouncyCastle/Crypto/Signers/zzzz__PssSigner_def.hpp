#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class PssSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::PssSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1150))
// CS Name: Org.BouncyCastle.Crypto.Signers.PssSigner
class CORDL_TYPE PssSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~PssSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "PssSigner", modifiers: " const&", def_value: None }]
constexpr PssSigner(PssSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PssSigner", modifiers: "&&", def_value: None }]
constexpr PssSigner(PssSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PssSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PssSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PssSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PssSigner& operator=(PssSigner&& o) noexcept = default;
  constexpr PssSigner& operator=(PssSigner const& o) noexcept = default;
                


// Fields

/// @brief Field TrailerImplicit offset 0
static constexpr uint8_t  TrailerImplicit{188u};

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_contentDigest1, put=__set_contentDigest1))  contentDigest1;

constexpr void __set_contentDigest1(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_contentDigest1() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_contentDigest2, put=__set_contentDigest2))  contentDigest2;

constexpr void __set_contentDigest2(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_contentDigest2() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mgfDigest, put=__set_mgfDigest))  mgfDigest;

constexpr void __set_mgfDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mgfDigest() const;

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_cipher() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 int32_t __declspec(property(get=__get_hLen, put=__set_hLen))  hLen;

constexpr void __set_hLen(int32_t value) ;

constexpr int32_t __get_hLen() const;

 int32_t __declspec(property(get=__get_mgfhLen, put=__set_mgfhLen))  mgfhLen;

constexpr void __set_mgfhLen(int32_t value) ;

constexpr int32_t __get_mgfhLen() const;

 int32_t __declspec(property(get=__get_sLen, put=__set_sLen))  sLen;

constexpr void __set_sLen(int32_t value) ;

constexpr int32_t __get_sLen() const;

 bool __declspec(property(get=__get_sSet, put=__set_sSet))  sSet;

constexpr void __set_sSet(bool value) ;

constexpr bool __get_sSet() const;

 int32_t __declspec(property(get=__get_emBits, put=__set_emBits))  emBits;

constexpr void __set_emBits(int32_t value) ;

constexpr int32_t __get_emBits() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_salt() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mDash, put=__set_mDash))  mDash;

constexpr void __set_mDash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mDash() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_block, put=__set_block))  block;

constexpr void __set_block(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_block() const;

 uint8_t __declspec(property(get=__get_trailer, put=__set_trailer))  trailer;

constexpr void __set_trailer(uint8_t value) ;

constexpr uint8_t __get_trailer() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method CreateRawSigner addr 0xec53e8 size 0x134 virtual false final false
static Org::BouncyCastle::Crypto::Signers::PssSigner CreateRawSigner(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method CreateRawSigner addr 0xec56c8 size 0xcc virtual false final false
static Org::BouncyCastle::Crypto::Signers::PssSigner CreateRawSigner(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest, Org::BouncyCastle::Crypto::IDigest mgfDigest, int32_t saltLen, uint8_t trailer) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xec5794 size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, int32_t saltLen) ;

/// @brief Method .ctor addr 0xec5874 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, int32_t saltLen) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> salt) ;

/// @brief Method .ctor addr 0xec58cc size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> salt) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest, Org::BouncyCastle::Crypto::IDigest mgfDigest, int32_t saltLen) ;

/// @brief Method .ctor addr 0xec5900 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest, Org::BouncyCastle::Crypto::IDigest mgfDigest, int32_t saltLen) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest, Org::BouncyCastle::Crypto::IDigest mgfDigest, ::ArrayW<uint8_t> salt) ;

/// @brief Method .ctor addr 0xec5958 size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest, Org::BouncyCastle::Crypto::IDigest mgfDigest, ::ArrayW<uint8_t> salt) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, int32_t saltLen, uint8_t trailer) ;

/// @brief Method .ctor addr 0xec58a0 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, int32_t saltLen, uint8_t trailer) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest, Org::BouncyCastle::Crypto::IDigest mgfDigest, int32_t saltLen, uint8_t trailer) ;

/// @brief Method .ctor addr 0xec592c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest, Org::BouncyCastle::Crypto::IDigest mgfDigest, int32_t saltLen, uint8_t trailer) ;

static Org::BouncyCastle::Crypto::Signers::PssSigner New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest1, Org::BouncyCastle::Crypto::IDigest contentDigest2, Org::BouncyCastle::Crypto::IDigest mgfDigest, int32_t saltLen, ::ArrayW<uint8_t> salt, uint8_t trailer) ;

/// @brief Method .ctor addr 0xec551c size 0x1ac virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest contentDigest1, Org::BouncyCastle::Crypto::IDigest contentDigest2, Org::BouncyCastle::Crypto::IDigest mgfDigest, int32_t saltLen, ::ArrayW<uint8_t> salt, uint8_t trailer) ;

/// @brief Method get_AlgorithmName addr 0xec598c size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xec5a4c size 0x288 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ClearBlock addr 0xec5cd4 size 0x24 virtual false final false
 void ClearBlock(::ArrayW<uint8_t> block) ;

/// @brief Method Update addr 0xec5cf8 size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xec5da4 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Reset addr 0xec5e68 size 0xa4 virtual true final false
 void Reset() ;

/// @brief Method GenerateSignature addr 0xec5f0c size 0x43c virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xec67b8 size 0x500 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method ItoOSP addr 0xec6cb8 size 0x54 virtual false final false
 void ItoOSP(int32_t i, ::ArrayW<uint8_t> sp) ;

/// @brief Method MaskGeneratorFunction1 addr 0xec6348 size 0x470 virtual false final false
 ::ArrayW<uint8_t> MaskGeneratorFunction1(::ArrayW<uint8_t> Z, int32_t zOff, int32_t zLen, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::PssSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::PssSigner, "Org.BouncyCastle.Crypto.Signers", "PssSigner");
