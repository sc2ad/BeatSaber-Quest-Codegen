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
class IBlockCipher;
}
// Type: Org.BouncyCastle.Crypto::IBlockCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(822))
// CS Name: Org.BouncyCastle.Crypto.IBlockCipher
class CORDL_TYPE IBlockCipher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBlockCipher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBlockCipher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method get_IsPartialBlockOkay addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method ProcessBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, ::ArrayW<uint8_t> outBuf, int32_t outOff) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IBlockCipher, "Org.BouncyCastle.Crypto", "IBlockCipher");
