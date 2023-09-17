#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyGenerationParameters;
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
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DsaKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::DsaKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(897))
// CS Name: Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator
class CORDL_TYPE DsaKeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DsaKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr DsaKeyPairGenerator(DsaKeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr DsaKeyPairGenerator(DsaKeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaKeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DsaKeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaKeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaKeyPairGenerator& operator=(DsaKeyPairGenerator&& o) noexcept = default;
  constexpr DsaKeyPairGenerator& operator=(DsaKeyPairGenerator const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_One, put=__set_One))  One;

static void __set_One(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_One() ;

 ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters __get_param() const;


// Methods

/// @brief Method Init addr 0xe6c00c size 0xec virtual true final true
 void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6c0f8 size 0x148 virtual true final true
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

/// @brief Method GeneratePrivateKey addr 0xe6c240 size 0xf0 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger GeneratePrivateKey(::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CalculatePublicKey addr 0xe6c330 size 0x24 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger CalculatePublicKey(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit DsaKeyPairGenerator() ;

/// @brief Method .ctor addr 0xe6c3cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DsaKeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "DsaKeyPairGenerator");
