#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class ECKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::ECKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(899))
// CS Name: Org.BouncyCastle.Crypto.Generators.ECKeyPairGenerator
class CORDL_TYPE ECKeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ECKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr ECKeyPairGenerator(ECKeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr ECKeyPairGenerator(ECKeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECKeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECKeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECKeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECKeyPairGenerator& operator=(ECKeyPairGenerator&& o) noexcept = default;
  constexpr ECKeyPairGenerator& operator=(ECKeyPairGenerator const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __get_parameters() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_publicKeyParamSet, put=__set_publicKeyParamSet))  publicKeyParamSet;

constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_publicKeyParamSet() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

// Ctor Parameters []
explicit ECKeyPairGenerator() ;

/// @brief Method .ctor addr 0xe6d7f0 size 0x48 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }]
explicit ECKeyPairGenerator(::StringW algorithm) ;

/// @brief Method .ctor addr 0xe6d838 size 0xc0 virtual false final false
 void _ctor(::StringW algorithm) ;

/// @brief Method Init addr 0xe6d8f8 size 0x2a8 virtual true final true
 void Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe6dc14 size 0x314 virtual true final true
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

/// @brief Method CreateBasePointMultiplier addr 0xe6df28 size 0x5c virtual true final false
 ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier CreateBasePointMultiplier() ;

/// @brief Method FindECCurveByOid addr 0xe6dba0 size 0x74 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::X9ECParameters FindECCurveByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetCorrespondingPublicKey addr 0xe6df84 size 0xfc virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters GetCorrespondingPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters privKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::ECKeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "ECKeyPairGenerator");
