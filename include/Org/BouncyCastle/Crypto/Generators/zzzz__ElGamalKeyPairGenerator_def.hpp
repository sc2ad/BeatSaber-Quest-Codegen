#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class ElGamalKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::ElGamalKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(902))
// CS Name: Org.BouncyCastle.Crypto.Generators.ElGamalKeyPairGenerator
class CORDL_TYPE ElGamalKeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ElGamalKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr ElGamalKeyPairGenerator(ElGamalKeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr ElGamalKeyPairGenerator(ElGamalKeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalKeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ElGamalKeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalKeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalKeyPairGenerator& operator=(ElGamalKeyPairGenerator&& o) noexcept = default;
  constexpr ElGamalKeyPairGenerator& operator=(ElGamalKeyPairGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters __get_param() const;


// Methods

/// @brief Method Init addr 0xe6e228 size 0xa4 virtual true final true
 void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6e2cc size 0x198 virtual true final true
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

// Ctor Parameters []
explicit ElGamalKeyPairGenerator() ;

/// @brief Method .ctor addr 0xe6e464 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::ElGamalKeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "ElGamalKeyPairGenerator");
