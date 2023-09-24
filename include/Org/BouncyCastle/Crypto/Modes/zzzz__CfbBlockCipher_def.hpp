#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class CfbBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::CfbBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(961))
// CS Name: Org.BouncyCastle.Crypto.Modes.CfbBlockCipher
class CORDL_TYPE CfbBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CfbBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipher", modifiers: " const&", def_value: None }]
constexpr CfbBlockCipher(CfbBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipher", modifiers: "&&", def_value: None }]
constexpr CfbBlockCipher(CfbBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CfbBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CfbBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CfbBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CfbBlockCipher& operator=(CfbBlockCipher&& o) noexcept = default;
  constexpr CfbBlockCipher& operator=(CfbBlockCipher const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

constexpr void __set_IV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cfbV, put=__set_cfbV))  cfbV;

constexpr void __set_cfbV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cfbV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cfbOutV, put=__set_cfbOutV))  cfbOutV;

constexpr void __set_cfbOutV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cfbOutV() const;

 bool __declspec(property(get=__get_encrypting, put=__set_encrypting))  encrypting;

constexpr void __set_encrypting(bool value) ;

constexpr bool __get_encrypting() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

static Org::BouncyCastle::Crypto::Modes::CfbBlockCipher New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t bitBlockSize) ;

/// @brief Method .ctor addr 0xe8afec size 0x284 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t bitBlockSize) ;

/// @brief Method GetUnderlyingCipher addr 0xe8b270 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe8b278 size 0x188 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe8b4c4 size 0x104 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe8b5c8 size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe8b5d0 size 0x8 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe8b5d8 size 0x10 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method EncryptBlock addr 0xe8b840 size 0x258 virtual false final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe8b5e8 size 0x258 virtual false final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe8b400 size 0xc4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::CfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::CfbBlockCipher, "Org.BouncyCastle.Crypto.Modes", "CfbBlockCipher");
