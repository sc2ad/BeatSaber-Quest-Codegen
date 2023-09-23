#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::IAeadCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(958))
// CS Name: Org.BouncyCastle.Crypto.Modes.IAeadCipher
class CORDL_TYPE IAeadCipher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAeadCipher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAeadCipher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessAadByte addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessAadByte(uint8_t input) ;

/// @brief Method ProcessAadBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method ProcessByte addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method GetMac addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetUpdateOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetUpdateOutputSize(int32_t len) ;

/// @brief Method GetOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetOutputSize(int32_t len) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::IAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::IAeadCipher, "Org.BouncyCastle.Crypto.Modes", "IAeadCipher");
