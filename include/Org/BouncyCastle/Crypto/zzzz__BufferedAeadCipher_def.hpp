#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedAeadCipher;
}
// Type: Org.BouncyCastle.Crypto::BufferedAeadCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1342))
// CS Name: Org.BouncyCastle.Crypto.BufferedAeadCipher
class CORDL_TYPE BufferedAeadCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BufferedAeadCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAeadCipher", modifiers: " const&", def_value: None }]
constexpr BufferedAeadCipher(BufferedAeadCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAeadCipher", modifiers: "&&", def_value: None }]
constexpr BufferedAeadCipher(BufferedAeadCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedAeadCipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::BufferedCipherBase(ptr) {
}


  constexpr BufferedAeadCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedAeadCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedAeadCipher& operator=(BufferedAeadCipher&& o) noexcept = default;
  constexpr BufferedAeadCipher& operator=(BufferedAeadCipher const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Modes::IAeadCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::Modes::IAeadCipher value) ;

constexpr Org::BouncyCastle::Crypto::Modes::IAeadCipher __get_cipher() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::Modes::IAeadCipher", modifiers: "", def_value: None }]
explicit BufferedAeadCipher(Org::BouncyCastle::Crypto::Modes::IAeadCipher cipher) ;

/// @brief Method .ctor addr 0xf366b0 size 0xbc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Modes::IAeadCipher cipher) ;

/// @brief Method get_AlgorithmName addr 0xf3676c size 0xa0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf3680c size 0x104 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0xf36910 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetUpdateOutputSize addr 0xf36918 size 0xac virtual true final false
 int32_t GetUpdateOutputSize(int32_t length) ;

/// @brief Method GetOutputSize addr 0xf369c4 size 0xac virtual true final false
 int32_t GetOutputSize(int32_t length) ;

/// @brief Method ProcessByte addr 0xf36a70 size 0xc4 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessByte addr 0xf36b34 size 0xf0 virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xf36c24 size 0x168 virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method ProcessBytes addr 0xf36d8c size 0xdc virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xf36e68 size 0xd4 virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0xf36f3c size 0x17c virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method DoFinal addr 0xf370b8 size 0xbc virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xf37174 size 0xa4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::BufferedAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedAeadCipher, "Org.BouncyCastle.Crypto", "BufferedAeadCipher");
