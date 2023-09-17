#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
// Type: Org.BouncyCastle.Crypto::IBufferedCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(964))
// CS Name: Org.BouncyCastle.Crypto.IBufferedCipher
class CORDL_TYPE IBufferedCipher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBufferedCipher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBufferedCipher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetOutputSize(int32_t inputLen) ;

/// @brief Method GetUpdateOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetUpdateOutputSize(int32_t inputLen) ;

/// @brief Method ProcessByte addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessByte addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input) ;

/// @brief Method ProcessBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method ProcessBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IBufferedCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IBufferedCipher, "Org.BouncyCastle.Crypto", "IBufferedCipher");
