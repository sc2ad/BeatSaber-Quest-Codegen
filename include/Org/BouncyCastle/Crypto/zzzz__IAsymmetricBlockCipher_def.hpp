#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
// Type: Org.BouncyCastle.Crypto::IAsymmetricBlockCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(818))
// CS Name: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
class CORDL_TYPE IAsymmetricBlockCipher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsymmetricBlockCipher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsymmetricBlockCipher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetInputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher, "Org.BouncyCastle.Crypto", "IAsymmetricBlockCipher");
