#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHBasicKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::DHBasicKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(892))
// CS Name: Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
class CORDL_TYPE DHBasicKeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DHBasicKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHBasicKeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr DHBasicKeyPairGenerator(DHBasicKeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHBasicKeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr DHBasicKeyPairGenerator(DHBasicKeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHBasicKeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHBasicKeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHBasicKeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHBasicKeyPairGenerator& operator=(DHBasicKeyPairGenerator&& o) noexcept = default;
  constexpr DHBasicKeyPairGenerator& operator=(DHBasicKeyPairGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters __get_param() const;


// Methods

/// @brief Method Init addr 0xe6b128 size 0xa4 virtual true final false
 void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6b1cc size 0x13c virtual true final false
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

static Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator New_ctor() ;

/// @brief Method .ctor addr 0xe6b4f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "DHBasicKeyPairGenerator");
