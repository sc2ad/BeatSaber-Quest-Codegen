#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::DHKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(894))
// CS Name: Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator
class CORDL_TYPE DHKeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DHKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr DHKeyPairGenerator(DHKeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr DHKeyPairGenerator(DHKeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHKeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHKeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHKeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHKeyPairGenerator& operator=(DHKeyPairGenerator&& o) noexcept = default;
  constexpr DHKeyPairGenerator& operator=(DHKeyPairGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters __get_param() const;


// Methods

/// @brief Method Init addr 0xe6b56c size 0xa4 virtual true final false
 void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6b610 size 0x13c virtual true final false
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

// Ctor Parameters []
explicit DHKeyPairGenerator() ;

/// @brief Method .ctor addr 0xe6b74c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHKeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "DHKeyPairGenerator");
