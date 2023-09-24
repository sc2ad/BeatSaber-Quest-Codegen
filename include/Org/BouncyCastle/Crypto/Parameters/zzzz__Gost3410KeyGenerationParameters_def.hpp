#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410KeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410KeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1051))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410KeyGenerationParameters
class CORDL_TYPE Gost3410KeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Gost3410KeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410KeyGenerationParameters(Gost3410KeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410KeyGenerationParameters(Gost3410KeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410KeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr Gost3410KeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410KeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410KeyGenerationParameters& operator=(Gost3410KeyGenerationParameters&& o) noexcept = default;
  constexpr Gost3410KeyGenerationParameters& operator=(Gost3410KeyGenerationParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters __get_parameters() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_publicKeyParamSet, put=__set_publicKeyParamSet))  publicKeyParamSet;

constexpr void __set_publicKeyParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_publicKeyParamSet() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters __declspec(property(get=get_Parameters))  Parameters;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_PublicKeyParamSet))  PublicKeyParamSet;


// Methods

static Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters New_ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

/// @brief Method .ctor addr 0xea8c44 size 0x4c virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

static Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters New_ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea8c90 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method get_Parameters addr 0xea8e44 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters get_Parameters() ;

/// @brief Method get_PublicKeyParamSet addr 0xea8e4c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_PublicKeyParamSet() ;

/// @brief Method LookupParameters addr 0xea8ccc size 0x178 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters LookupParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "Gost3410KeyGenerationParameters");
