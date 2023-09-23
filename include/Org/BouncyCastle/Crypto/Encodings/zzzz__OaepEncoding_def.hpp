#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
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
namespace Org::BouncyCastle::Crypto::Encodings {
class OaepEncoding;
}
// Type: Org.BouncyCastle.Crypto.Encodings::OaepEncoding
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(820))
// CS Name: Org.BouncyCastle.Crypto.Encodings.OaepEncoding
class CORDL_TYPE OaepEncoding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OaepEncoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "OaepEncoding", modifiers: " const&", def_value: None }]
constexpr OaepEncoding(OaepEncoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OaepEncoding", modifiers: "&&", def_value: None }]
constexpr OaepEncoding(OaepEncoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OaepEncoding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OaepEncoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OaepEncoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OaepEncoding& operator=(OaepEncoding&& o) noexcept = default;
  constexpr OaepEncoding& operator=(OaepEncoding const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_defHash, put=__set_defHash))  defHash;

constexpr void __set_defHash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_defHash() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mgf1Hash, put=__set_mgf1Hash))  mgf1Hash;

constexpr void __set_mgf1Hash(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mgf1Hash() const;

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_engine() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }]
explicit OaepEncoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe26cdc size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }, CppParam { name: "hash", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit OaepEncoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest hash) ;

/// @brief Method .ctor addr 0xe26d64 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest hash) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }, CppParam { name: "hash", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "encodingParams", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit OaepEncoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest hash, ::ArrayW<uint8_t> encodingParams) ;

/// @brief Method .ctor addr 0xe26d58 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest hash, ::ArrayW<uint8_t> encodingParams) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }, CppParam { name: "hash", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "mgf1Hash", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "encodingParams", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit OaepEncoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest hash, Org::BouncyCastle::Crypto::IDigest mgf1Hash, ::ArrayW<uint8_t> encodingParams) ;

/// @brief Method .ctor addr 0xe26d70 size 0x22c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, Org::BouncyCastle::Crypto::IDigest hash, Org::BouncyCastle::Crypto::IDigest mgf1Hash, ::ArrayW<uint8_t> encodingParams) ;

/// @brief Method GetUnderlyingCipher addr 0xe26f9c size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher GetUnderlyingCipher() ;

/// @brief Method get_AlgorithmName addr 0xe26fa4 size 0xc0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe27064 size 0x148 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters param) ;

/// @brief Method GetInputBlockSize addr 0xe271ac size 0xc8 virtual true final true
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe27274 size 0xc8 virtual true final true
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0xe2733c size 0x10 virtual true final true
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen) ;

/// @brief Method EncodeBlock addr 0xe2734c size 0x324 virtual false final false
 ::ArrayW<uint8_t> EncodeBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen) ;

/// @brief Method DecodeBlock addr 0xe27670 size 0x450 virtual false final false
 ::ArrayW<uint8_t> DecodeBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen) ;

/// @brief Method ItoOSP addr 0xe27f98 size 0x54 virtual false final false
 void ItoOSP(int32_t i, ::ArrayW<uint8_t> sp) ;

/// @brief Method maskGeneratorFunction1 addr 0xe27ac0 size 0x4d8 virtual false final false
 ::ArrayW<uint8_t> maskGeneratorFunction1(::ArrayW<uint8_t> Z, int32_t zOff, int32_t zLen, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Encodings::OaepEncoding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Encodings::OaepEncoding, "Org.BouncyCastle.Crypto.Encodings", "OaepEncoding");
