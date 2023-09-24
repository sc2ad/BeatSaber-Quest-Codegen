#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Engines {
class IesEngine;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedIesCipher;
}
// Type: Org.BouncyCastle.Crypto::BufferedIesCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1344))
// CS Name: Org.BouncyCastle.Crypto.BufferedIesCipher
class CORDL_TYPE BufferedIesCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BufferedIesCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedIesCipher", modifiers: " const&", def_value: None }]
constexpr BufferedIesCipher(BufferedIesCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedIesCipher", modifiers: "&&", def_value: None }]
constexpr BufferedIesCipher(BufferedIesCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedIesCipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::BufferedCipherBase(ptr) {
}


  constexpr BufferedIesCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedIesCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedIesCipher& operator=(BufferedIesCipher&& o) noexcept = default;
  constexpr BufferedIesCipher& operator=(BufferedIesCipher const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Engines::IesEngine __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Engines::IesEngine value) ;

constexpr Org::BouncyCastle::Crypto::Engines::IesEngine __get_engine() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 System::IO::MemoryStream __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get_buffer() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::BufferedIesCipher New_ctor(Org::BouncyCastle::Crypto::Engines::IesEngine engine) ;

/// @brief Method .ctor addr 0xf378e4 size 0xf0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Engines::IesEngine engine) ;

/// @brief Method get_AlgorithmName addr 0xf379d4 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf37a14 size 0x4c virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0xf37a60 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetOutputSize addr 0xf37a68 size 0xa0 virtual true final false
 int32_t GetOutputSize(int32_t inputLen) ;

/// @brief Method GetUpdateOutputSize addr 0xf37b08 size 0x8 virtual true final false
 int32_t GetUpdateOutputSize(int32_t inputLen) ;

/// @brief Method ProcessByte addr 0xf37b10 size 0x2c virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xf37b3c size 0x114 virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method DoFinal addr 0xf37c50 size 0x6c virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0xf37cbc size 0x30 virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Reset addr 0xf37cec size 0x28 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::BufferedIesCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedIesCipher, "Org.BouncyCastle.Crypto", "BufferedIesCipher");
