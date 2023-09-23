#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedBlockCipher;
}
// Type: Org.BouncyCastle.Crypto::BufferedBlockCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(966))
// CS Name: Org.BouncyCastle.Crypto.BufferedBlockCipher
class CORDL_TYPE BufferedBlockCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BufferedBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedBlockCipher", modifiers: " const&", def_value: None }]
constexpr BufferedBlockCipher(BufferedBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedBlockCipher", modifiers: "&&", def_value: None }]
constexpr BufferedBlockCipher(BufferedBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedBlockCipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::BufferedCipherBase(ptr) {
}


  constexpr BufferedBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedBlockCipher& operator=(BufferedBlockCipher&& o) noexcept = default;
  constexpr BufferedBlockCipher& operator=(BufferedBlockCipher const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit BufferedBlockCipher() ;

/// @brief Method .ctor addr 0xe8de8c size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit BufferedBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe8dee4 size 0x158 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method get_AlgorithmName addr 0xe8e03c size 0xa0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe8e0dc size 0x120 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0xe8e1fc size 0xa4 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetUpdateOutputSize addr 0xe8e2a0 size 0x2c virtual true final false
 int32_t GetUpdateOutputSize(int32_t length) ;

/// @brief Method GetOutputSize addr 0xe8e2cc size 0xc virtual true final false
 int32_t GetOutputSize(int32_t length) ;

/// @brief Method ProcessByte addr 0xe8e2d8 size 0x184 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessByte addr 0xe8e45c size 0xf0 virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xe8e54c size 0x168 virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method ProcessBytes addr 0xe8e6b4 size 0x358 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe8ea0c size 0x120 virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0xe8eb2c size 0x1d0 virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method DoFinal addr 0xe8ecfc size 0x258 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe8ef54 size 0xc0 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::BufferedBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedBlockCipher, "Org.BouncyCastle.Crypto", "BufferedBlockCipher");
