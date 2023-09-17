#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedAsymmetricBlockCipher;
}
// Type: Org.BouncyCastle.Crypto::BufferedAsymmetricBlockCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1343))
// CS Name: Org.BouncyCastle.Crypto.BufferedAsymmetricBlockCipher
class CORDL_TYPE BufferedAsymmetricBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BufferedAsymmetricBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAsymmetricBlockCipher", modifiers: " const&", def_value: None }]
constexpr BufferedAsymmetricBlockCipher(BufferedAsymmetricBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAsymmetricBlockCipher", modifiers: "&&", def_value: None }]
constexpr BufferedAsymmetricBlockCipher(BufferedAsymmetricBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedAsymmetricBlockCipher(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::BufferedCipherBase(ptr) {
}


  constexpr BufferedAsymmetricBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedAsymmetricBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedAsymmetricBlockCipher& operator=(BufferedAsymmetricBlockCipher&& o) noexcept = default;
  constexpr BufferedAsymmetricBlockCipher& operator=(BufferedAsymmetricBlockCipher const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher __get_cipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher", modifiers: "", def_value: None }]
explicit BufferedAsymmetricBlockCipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

/// @brief Method .ctor addr 0xf37218 size 0x6c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher cipher) ;

/// @brief Method GetBufferPosition addr 0xf37284 size 0x8 virtual false final false
 int32_t GetBufferPosition() ;

/// @brief Method get_AlgorithmName addr 0xf3728c size 0xa0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetBlockSize addr 0xf3732c size 0xa4 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetOutputSize addr 0xf373d0 size 0xa4 virtual true final false
 int32_t GetOutputSize(int32_t length) ;

/// @brief Method GetUpdateOutputSize addr 0xf37474 size 0x8 virtual true final false
 int32_t GetUpdateOutputSize(int32_t length) ;

/// @brief Method Init addr 0xf3747c size 0x16c virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessByte addr 0xf375e8 size 0x90 virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xf3767c size 0xf0 virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method DoFinal addr 0xf3776c size 0x11c virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0xf37888 size 0x30 virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Reset addr 0xf378b8 size 0x2c virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedAsymmetricBlockCipher, "Org.BouncyCastle.Crypto", "BufferedAsymmetricBlockCipher");
