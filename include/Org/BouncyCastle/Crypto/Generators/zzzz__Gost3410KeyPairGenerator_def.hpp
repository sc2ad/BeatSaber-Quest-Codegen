#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Gost3410KeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Gost3410KeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(904))
// CS Name: Org.BouncyCastle.Crypto.Generators.Gost3410KeyPairGenerator
class CORDL_TYPE Gost3410KeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Gost3410KeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr Gost3410KeyPairGenerator(Gost3410KeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr Gost3410KeyPairGenerator(Gost3410KeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410KeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3410KeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410KeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410KeyPairGenerator& operator=(Gost3410KeyPairGenerator&& o) noexcept = default;
  constexpr Gost3410KeyPairGenerator& operator=(Gost3410KeyPairGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters __get_param() const;


// Methods

/// @brief Method Init addr 0xe6e55c size 0x120 virtual true final true
 void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6e67c size 0x224 virtual true final true
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

// Ctor Parameters []
explicit Gost3410KeyPairGenerator() ;

/// @brief Method .ctor addr 0xe6e8a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "Gost3410KeyPairGenerator");
