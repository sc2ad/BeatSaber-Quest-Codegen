#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Ed25519KeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Ed25519KeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(900))
// CS Name: Org.BouncyCastle.Crypto.Generators.Ed25519KeyPairGenerator
class CORDL_TYPE Ed25519KeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Ed25519KeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519KeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr Ed25519KeyPairGenerator(Ed25519KeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519KeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr Ed25519KeyPairGenerator(Ed25519KeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed25519KeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed25519KeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed25519KeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed25519KeyPairGenerator& operator=(Ed25519KeyPairGenerator&& o) noexcept = default;
  constexpr Ed25519KeyPairGenerator& operator=(Ed25519KeyPairGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

/// @brief Method Init addr 0xe6e080 size 0x1c virtual true final false
 void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6e09c size 0xb0 virtual true final false
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

// Ctor Parameters []
explicit Ed25519KeyPairGenerator() ;

/// @brief Method .ctor addr 0xe6e14c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Ed25519KeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Ed25519KeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "Ed25519KeyPairGenerator");
