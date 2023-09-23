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
class CbcBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::CbcBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(957))
// CS Name: Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
class CORDL_TYPE CbcBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CbcBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "CbcBlockCipher", modifiers: " const&", def_value: None }]
constexpr CbcBlockCipher(CbcBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CbcBlockCipher", modifiers: "&&", def_value: None }]
constexpr CbcBlockCipher(CbcBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CbcBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CbcBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CbcBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CbcBlockCipher& operator=(CbcBlockCipher&& o) noexcept = default;
  constexpr CbcBlockCipher& operator=(CbcBlockCipher const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

constexpr void __set_IV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cbcV, put=__set_cbcV))  cbcV;

constexpr void __set_cbcV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cbcV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cbcNextV, put=__set_cbcNextV))  cbcNextV;

constexpr void __set_cbcNextV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cbcNextV() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 bool __declspec(property(get=__get_encrypting, put=__set_encrypting))  encrypting;

constexpr void __set_encrypting(bool value) ;

constexpr bool __get_encrypting() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit CbcBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe7d33c size 0x100 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetUnderlyingCipher addr 0xe88bd4 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe88bdc size 0x1f4 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe88eac size 0xc0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe88f6c size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe88f74 size 0xa4 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe89018 size 0x10 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe88dd0 size 0xdc virtual true final true
 void Reset() ;

/// @brief Method EncryptBlock addr 0xe891f0 size 0x1d4 virtual false final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe89028 size 0x1c8 virtual false final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::CbcBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::CbcBlockCipher, "Org.BouncyCastle.Crypto.Modes", "CbcBlockCipher");
