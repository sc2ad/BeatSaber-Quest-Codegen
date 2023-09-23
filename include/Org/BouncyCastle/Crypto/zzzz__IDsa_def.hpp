#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Type: Org.BouncyCastle.Crypto::IDsa
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1125))
// CS Name: Org.BouncyCastle.Crypto.IDsa
class CORDL_TYPE IDsa : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDsa() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDsa(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GenerateSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> GenerateSignature(::ArrayW<uint8_t> message) ;

/// @brief Method VerifySignature addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> message, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::IDsa);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IDsa, "Org.BouncyCastle.Crypto", "IDsa");
