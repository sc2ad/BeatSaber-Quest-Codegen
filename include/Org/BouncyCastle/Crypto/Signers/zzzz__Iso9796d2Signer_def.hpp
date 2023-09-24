#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISignerWithRecovery;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Iso9796d2Signer;
}
// Type: Org.BouncyCastle.Crypto.Signers::Iso9796d2Signer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1147))
// CS Name: Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
class CORDL_TYPE Iso9796d2Signer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISignerWithRecovery
constexpr operator  Org::BouncyCastle::Crypto::ISignerWithRecovery() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Iso9796d2Signer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Iso9796d2Signer", modifiers: " const&", def_value: None }]
constexpr Iso9796d2Signer(Iso9796d2Signer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Iso9796d2Signer", modifiers: "&&", def_value: None }]
constexpr Iso9796d2Signer(Iso9796d2Signer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Iso9796d2Signer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Iso9796d2Signer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Iso9796d2Signer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Iso9796d2Signer& operator=(Iso9796d2Signer&& o) noexcept = default;
  constexpr Iso9796d2Signer& operator=(Iso9796d2Signer const& o) noexcept = default;
                


// Fields

/// @brief Field TrailerImplicit offset 0
static constexpr int32_t  TrailerImplicit{188};

/// @brief Field TrailerRipeMD160 offset 0
static constexpr int32_t  TrailerRipeMD160{12748};

/// @brief Field TrailerRipeMD128 offset 0
static constexpr int32_t  TrailerRipeMD128{13004};

/// @brief Field TrailerSha1 offset 0
static constexpr int32_t  TrailerSha1{13260};

/// @brief Field TrailerSha256 offset 0
static constexpr int32_t  TrailerSha256{13516};

/// @brief Field TrailerSha512 offset 0
static constexpr int32_t  TrailerSha512{13772};

/// @brief Field TrailerSha384 offset 0
static constexpr int32_t  TrailerSha384{14028};

/// @brief Field TrailerWhirlpool offset 0
static constexpr int32_t  TrailerWhirlpool{14284};

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_cipher() const;

 int32_t __declspec(property(get=__get_trailer, put=__set_trailer))  trailer;

constexpr void __set_trailer(int32_t value) ;

constexpr int32_t __get_trailer() const;

 int32_t __declspec(property(get=__get_keyBits, put=__set_keyBits))  keyBits;

constexpr void __set_keyBits(int32_t value) ;

constexpr int32_t __get_keyBits() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_block, put=__set_block))  block;

constexpr void __set_block(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_block() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mBuf, put=__set_mBuf))  mBuf;

constexpr void __set_mBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mBuf() const;

 int32_t __declspec(property(get=__get_messageLength, put=__set_messageLength))  messageLength;

constexpr void __set_messageLength(int32_t value) ;

constexpr int32_t __get_messageLength() const;

 bool __declspec(property(get=__get_fullMessage, put=__set_fullMessage))  fullMessage;

constexpr void __set_fullMessage(bool value) ;

constexpr bool __get_fullMessage() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_recoveredMessage, put=__set_recoveredMessage))  recoveredMessage;

constexpr void __set_recoveredMessage(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_recoveredMessage() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_preSig, put=__set_preSig))  preSig;

constexpr void __set_preSig(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_preSig() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_preBlock, put=__set_preBlock))  preBlock;

constexpr void __set_preBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_preBlock() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method GetRecoveredMessage addr 0xec2fe4 size 0x8 virtual true final true
 ::ArrayW<uint8_t> GetRecoveredMessage() ;

static Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, bool isImplicit) ;

/// @brief Method .ctor addr 0xec2fec size 0x108 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest, bool isImplicit) ;

static Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xec30f4 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_AlgorithmName addr 0xec30fc size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xec31bc size 0x218 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method IsSameAs addr 0xec33d4 size 0xb0 virtual false final false
 bool IsSameAs(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method ClearBlock addr 0xec3484 size 0x24 virtual false final false
 void ClearBlock(::ArrayW<uint8_t> block) ;

/// @brief Method UpdateWithRecoveredMessage addr 0xec34a8 size 0x490 virtual true final false
 void UpdateWithRecoveredMessage(::ArrayW<uint8_t> signature) ;

/// @brief Method Update addr 0xec3938 size 0xe8 virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xec3a20 size 0x134 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Reset addr 0xec3b54 size 0xe0 virtual true final false
 void Reset() ;

/// @brief Method GenerateSignature addr 0xec3c34 size 0x3e8 virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xec401c size 0x7a4 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method ReturnFalse addr 0xec47c0 size 0x28 virtual false final false
 bool ReturnFalse(::ArrayW<uint8_t> block) ;

/// @brief Method HasFullMessage addr 0xec47e8 size 0x8 virtual true final false
 bool HasFullMessage() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, "Org.BouncyCastle.Crypto.Signers", "Iso9796d2Signer");
