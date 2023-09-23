#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Encodings {
class Pkcs1Encoding;
}
// Type: Org.BouncyCastle.Crypto.Encodings::Pkcs1Encoding
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(821))
// CS Name: Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding
class CORDL_TYPE Pkcs1Encoding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Pkcs1Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs1Encoding", modifiers: " const&", def_value: None }]
constexpr Pkcs1Encoding(Pkcs1Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs1Encoding", modifiers: "&&", def_value: None }]
constexpr Pkcs1Encoding(Pkcs1Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs1Encoding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs1Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs1Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs1Encoding& operator=(Pkcs1Encoding&& o) noexcept = default;
  constexpr Pkcs1Encoding& operator=(Pkcs1Encoding const& o) noexcept = default;
                


// Fields

/// @brief Field StrictLengthEnabledProperty offset 0
static constexpr ::ConstString  StrictLengthEnabledProperty{u"Org.BouncyCastle.Pkcs1.Strict"};

/// @brief Field HeaderLength offset 0
static constexpr int32_t  HeaderLength{10};

static ::ArrayW<bool> __declspec(property(get=__get_strictLengthEnabled, put=__set_strictLengthEnabled))  strictLengthEnabled;

static void __set_strictLengthEnabled(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_strictLengthEnabled() ;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_engine() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 bool __declspec(property(get=__get_forPrivateKey, put=__set_forPrivateKey))  forPrivateKey;

constexpr void __set_forPrivateKey(bool value) ;

constexpr bool __get_forPrivateKey() const;

 bool __declspec(property(get=__get_useStrictLength, put=__set_useStrictLength))  useStrictLength;

constexpr void __set_useStrictLength(bool value) ;

constexpr bool __get_useStrictLength() const;

 int32_t __declspec(property(get=__get_pLen, put=__set_pLen))  pLen;

constexpr void __set_pLen(int32_t value) ;

constexpr int32_t __get_pLen() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fallback, put=__set_fallback))  fallback;

constexpr void __set_fallback(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fallback() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_blockBuffer, put=__set_blockBuffer))  blockBuffer;

constexpr void __set_blockBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_blockBuffer() const;


// Properties

static bool __declspec(property(get=get_StrictLengthEnabled, put=set_StrictLengthEnabled))  StrictLengthEnabled;

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_StrictLengthEnabled addr 0xe27fec size 0x70 virtual false final false
static bool get_StrictLengthEnabled() ;

/// @brief Method set_StrictLengthEnabled addr 0xe2805c size 0x78 virtual false final false
static void set_StrictLengthEnabled(bool value) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }]
explicit Pkcs1Encoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe281ec size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }, CppParam { name: "pLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit Pkcs1Encoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, int32_t pLen) ;

/// @brief Method .ctor addr 0xe28270 size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, int32_t pLen) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }, CppParam { name: "fallback", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Pkcs1Encoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, ::ArrayW<uint8_t> fallback) ;

/// @brief Method .ctor addr 0xe282fc size 0x9c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher, ::ArrayW<uint8_t> fallback) ;

/// @brief Method GetUnderlyingCipher addr 0xe28398 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher GetUnderlyingCipher() ;

/// @brief Method get_AlgorithmName addr 0xe283a0 size 0xc0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe28460 size 0x2dc virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetInputBlockSize addr 0xe2873c size 0xb8 virtual true final true
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe287f4 size 0xb8 virtual true final true
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0xe288ac size 0x10 virtual true final true
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method EncodeBlock addr 0xe28bac size 0x308 virtual false final false
 ::ArrayW<uint8_t> EncodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method CheckPkcs1Encoding addr 0xe28eb4 size 0xa0 virtual false final false
static int32_t CheckPkcs1Encoding(::ArrayW<uint8_t> encoded, int32_t pLen) ;

/// @brief Method DecodeBlockOrRandom addr 0xe28f54 size 0x2fc virtual false final false
 ::ArrayW<uint8_t> DecodeBlockOrRandom(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method DecodeBlock addr 0xe288bc size 0x2f0 virtual false final false
 ::ArrayW<uint8_t> DecodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method FindStart addr 0xe29250 size 0x98 virtual false final false
 int32_t FindStart(uint8_t type, ::ArrayW<uint8_t> block) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, "Org.BouncyCastle.Crypto.Encodings", "Pkcs1Encoding");
