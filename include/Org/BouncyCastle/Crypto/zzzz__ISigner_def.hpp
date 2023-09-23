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
class ISigner;
}
// Type: Org.BouncyCastle.Crypto::ISigner
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1123))
// CS Name: Org.BouncyCastle.Crypto.ISigner
class CORDL_TYPE ISigner : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISigner() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISigner(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method GenerateSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::ISigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::ISigner, "Org.BouncyCastle.Crypto", "ISigner");
