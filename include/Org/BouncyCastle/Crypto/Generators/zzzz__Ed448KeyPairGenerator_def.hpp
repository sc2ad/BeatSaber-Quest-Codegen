#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Ed448KeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Ed448KeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(901))
// CS Name: Org.BouncyCastle.Crypto.Generators.Ed448KeyPairGenerator
class CORDL_TYPE Ed448KeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Ed448KeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448KeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr Ed448KeyPairGenerator(Ed448KeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448KeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr Ed448KeyPairGenerator(Ed448KeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed448KeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed448KeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed448KeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed448KeyPairGenerator& operator=(Ed448KeyPairGenerator&& o) noexcept = default;
  constexpr Ed448KeyPairGenerator& operator=(Ed448KeyPairGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

/// @brief Method Init addr 0xe6e154 size 0x1c virtual true final false
 void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6e170 size 0xb0 virtual true final false
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

// Ctor Parameters []
explicit Ed448KeyPairGenerator() ;

/// @brief Method .ctor addr 0xe6e220 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "Ed448KeyPairGenerator");
