#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ECKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1036))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
class CORDL_TYPE ECKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ECKeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr ECKeyGenerationParameters(ECKeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr ECKeyGenerationParameters(ECKeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECKeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr ECKeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECKeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECKeyGenerationParameters& operator=(ECKeyGenerationParameters&& o) noexcept = default;
  constexpr ECKeyGenerationParameters& operator=(ECKeyGenerationParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=__get_domainParams, put=__set_domainParams))  domainParams;

constexpr void __set_domainParams(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __get_domainParams() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_publicKeyParamSet, put=__set_publicKeyParamSet))  publicKeyParamSet;

constexpr void __set_publicKeyParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_publicKeyParamSet() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=get_DomainParameters))  DomainParameters;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_PublicKeyParamSet))  PublicKeyParamSet;


// Methods

// Ctor Parameters [CppParam { name: "domainParameters", ty: "Org::BouncyCastle::Crypto::Parameters::ECDomainParameters", modifiers: "", def_value: None }, CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit ECKeyGenerationParameters(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters domainParameters, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xea5ea8 size 0x4c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters domainParameters, Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters [CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit ECKeyGenerationParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xea5ef4 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_DomainParameters addr 0xea6080 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters get_DomainParameters() ;

/// @brief Method get_PublicKeyParamSet addr 0xea6088 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_PublicKeyParamSet() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "ECKeyGenerationParameters");
