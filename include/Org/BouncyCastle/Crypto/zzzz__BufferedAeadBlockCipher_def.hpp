#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedAeadBlockCipher;
}
// Type: Org.BouncyCastle.Crypto::BufferedAeadBlockCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1341))
// CS Name: Org.BouncyCastle.Crypto.BufferedAeadBlockCipher
class CORDL_TYPE BufferedAeadBlockCipher : public ::Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BufferedAeadBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAeadBlockCipher", modifiers: " const&", def_value: None }]
constexpr BufferedAeadBlockCipher(BufferedAeadBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAeadBlockCipher", modifiers: "&&", def_value: None }]
constexpr BufferedAeadBlockCipher(BufferedAeadBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedAeadBlockCipher(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::BufferedCipherBase(ptr) {
}


  constexpr BufferedAeadBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedAeadBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedAeadBlockCipher& operator=(BufferedAeadBlockCipher&& o) noexcept = default;
  constexpr BufferedAeadBlockCipher& operator=(BufferedAeadBlockCipher const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher __get_cipher() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher", modifiers: "", def_value: None }]
explicit BufferedAeadBlockCipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher cipher) ;

/// @brief Method .ctor addr 0xf35ab0 size 0xbc virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher cipher) ;

/// @brief Method get_AlgorithmName addr 0xf35b6c size 0xa0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf35c0c size 0x104 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0xf35d10 size 0xa0 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetUpdateOutputSize addr 0xf35db0 size 0xac virtual true final false
 int32_t GetUpdateOutputSize(int32_t length) ;

/// @brief Method GetOutputSize addr 0xf35e5c size 0xac virtual true final false
 int32_t GetOutputSize(int32_t length) ;

/// @brief Method ProcessByte addr 0xf35f08 size 0xc4 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessByte addr 0xf35fcc size 0xf0 virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xf360bc size 0x168 virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method ProcessBytes addr 0xf36224 size 0xdc virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xf36300 size 0xd4 virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0xf363d4 size 0x17c virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method DoFinal addr 0xf36550 size 0xbc virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xf3660c size 0xa4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::BufferedAeadBlockCipher, "Org.BouncyCastle.Crypto", "BufferedAeadBlockCipher");
