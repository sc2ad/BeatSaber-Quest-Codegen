#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto::IAsymmetricCipherKeyPairGenerator
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(891))
// CS Name: Org.BouncyCastle.Crypto.IAsymmetricCipherKeyPairGenerator
class CORDL_TYPE IAsymmetricCipherKeyPairGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsymmetricCipherKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsymmetricCipherKeyPairGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator, "Org.BouncyCastle.Crypto", "IAsymmetricCipherKeyPairGenerator");
