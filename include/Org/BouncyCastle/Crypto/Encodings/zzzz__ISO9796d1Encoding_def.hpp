#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Encodings {
class ISO9796d1Encoding;
}
// Type: Org.BouncyCastle.Crypto.Encodings::ISO9796d1Encoding
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(819))
// CS Name: Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
class CORDL_TYPE ISO9796d1Encoding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ISO9796d1Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO9796d1Encoding", modifiers: " const&", def_value: None }]
constexpr ISO9796d1Encoding(ISO9796d1Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO9796d1Encoding", modifiers: "&&", def_value: None }]
constexpr ISO9796d1Encoding(ISO9796d1Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISO9796d1Encoding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ISO9796d1Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ISO9796d1Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ISO9796d1Encoding& operator=(ISO9796d1Encoding&& o) noexcept = default;
  constexpr ISO9796d1Encoding& operator=(ISO9796d1Encoding const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Sixteen, put=__set_Sixteen))  Sixteen;

static void __set_Sixteen(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Sixteen() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Six, put=__set_Six))  Six;

static void __set_Six(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Six() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_shadows, put=__set_shadows))  shadows;

static void __set_shadows(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_shadows() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_inverse, put=__set_inverse))  inverse;

static void __set_inverse(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_inverse() ;

 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_engine() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 int32_t __declspec(property(get=__get_bitSize, put=__set_bitSize))  bitSize;

constexpr void __set_bitSize(int32_t value) ;

constexpr int32_t __get_bitSize() const;

 int32_t __declspec(property(get=__get_padBits, put=__set_padBits))  padBits;

constexpr void __set_padBits(int32_t value) ;

constexpr int32_t __get_padBits() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_modulus, put=__set_modulus))  modulus;

constexpr void __set_modulus(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_modulus() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }]
explicit ISO9796d1Encoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe25ee8 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

/// @brief Method get_AlgorithmName addr 0xe25f14 size 0xc0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetUnderlyingCipher addr 0xe25fd4 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IAsymmetricBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe25fdc size 0x1ac virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetInputBlockSize addr 0xe26188 size 0xc4 virtual true final true
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe2624c size 0xc4 virtual true final true
 int32_t GetOutputBlockSize() ;

/// @brief Method SetPadBits addr 0xe26310 size 0x64 virtual false final false
 void SetPadBits(int32_t padBits) ;

/// @brief Method GetPadBits addr 0xe26374 size 0x8 virtual false final false
 int32_t GetPadBits() ;

/// @brief Method ProcessBlock addr 0xe2637c size 0x10 virtual true final true
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method EncodeBlock addr 0xe2638c size 0x34c virtual false final false
 ::ArrayW<uint8_t> EncodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method DecodeBlock addr 0xe266d8 size 0x4e0 virtual false final false
 ::ArrayW<uint8_t> DecodeBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, "Org.BouncyCastle.Crypto.Encodings", "ISO9796d1Encoding");
