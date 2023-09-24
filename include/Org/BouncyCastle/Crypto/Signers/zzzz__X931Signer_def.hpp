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
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class X931Signer;
}
// Type: Org.BouncyCastle.Crypto.Signers::X931Signer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1155))
// CS Name: Org.BouncyCastle.Crypto.Signers.X931Signer
class CORDL_TYPE X931Signer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X931Signer() = default;

// Ctor Parameters [CppParam { name: "", ty: "X931Signer", modifiers: " const&", def_value: None }]
constexpr X931Signer(X931Signer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X931Signer", modifiers: "&&", def_value: None }]
constexpr X931Signer(X931Signer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X931Signer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X931Signer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X931Signer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X931Signer& operator=(X931Signer&& o) noexcept = default;
  constexpr X931Signer& operator=(X931Signer const& o) noexcept = default;
                


// Fields

/// @brief Field TRAILER_IMPLICIT offset 0
static constexpr int32_t  TRAILER_IMPLICIT{188};

/// @brief Field TRAILER_RIPEMD160 offset 0
static constexpr int32_t  TRAILER_RIPEMD160{12748};

/// @brief Field TRAILER_RIPEMD128 offset 0
static constexpr int32_t  TRAILER_RIPEMD128{13004};

/// @brief Field TRAILER_SHA1 offset 0
static constexpr int32_t  TRAILER_SHA1{13260};

/// @brief Field TRAILER_SHA256 offset 0
static constexpr int32_t  TRAILER_SHA256{13516};

/// @brief Field TRAILER_SHA512 offset 0
static constexpr int32_t  TRAILER_SHA512{13772};

/// @brief Field TRAILER_SHA384 offset 0
static constexpr int32_t  TRAILER_SHA384{14028};

/// @brief Field TRAILER_WHIRLPOOL offset 0
static constexpr int32_t  TRAILER_WHIRLPOOL{14284};

/// @brief Field TRAILER_SHA224 offset 0
static constexpr int32_t  TRAILER_SHA224{14540};

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_cipher() const;

 Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_kParam, put=__set_kParam))  kParam;

constexpr void __set_kParam(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_kParam() const;

 int32_t __declspec(property(get=__get_trailer, put=__set_trailer))  trailer;

constexpr void __set_trailer(int32_t value) ;

constexpr int32_t __get_trailer() const;

 int32_t __declspec(property(get=__get_keyBits, put=__set_keyBits))  keyBits;

constexpr void __set_keyBits(int32_t value) ;

constexpr int32_t __get_keyBits() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_block, put=__set_block))  block;

constexpr void __set_block(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_block() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Signers::X931Signer New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, bool isImplicit) ;

/// @brief Method .ctor addr 0xeca51c size 0x110 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, bool isImplicit) ;

/// @brief Method get_AlgorithmName addr 0xeca62c size 0x160 virtual true final false
 ::StringW get_AlgorithmName() ;

static Org::BouncyCastle::Crypto::Signers::X931Signer New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xeca78c size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0xeca794 size 0x1a0 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ClearBlock addr 0xeca934 size 0x24 virtual false final false
 void ClearBlock(::ArrayW<uint8_t> block) ;

/// @brief Method Update addr 0xeca958 size 0xac virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0xecaa04 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t off, int32_t len) ;

/// @brief Method Reset addr 0xecaac8 size 0xa4 virtual true final false
 void Reset() ;

/// @brief Method GenerateSignature addr 0xecab6c size 0x160 virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method CreateSignatureBlock addr 0xecaccc size 0x280 virtual false final false
 void CreateSignatureBlock() ;

/// @brief Method VerifySignature addr 0xecaf4c size 0x24c virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::X931Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::X931Signer, "Org.BouncyCastle.Crypto.Signers", "X931Signer");
