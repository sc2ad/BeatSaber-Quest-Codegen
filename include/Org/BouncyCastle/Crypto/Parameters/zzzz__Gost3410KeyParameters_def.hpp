#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410KeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410KeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1052))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
class CORDL_TYPE Gost3410KeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Gost3410KeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410KeyParameters(Gost3410KeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410KeyParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410KeyParameters(Gost3410KeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410KeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr Gost3410KeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410KeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410KeyParameters& operator=(Gost3410KeyParameters&& o) noexcept = default;
  constexpr Gost3410KeyParameters& operator=(Gost3410KeyParameters const& o) noexcept = default;
                


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

// Ctor Parameters [CppParam { name: "isPrivate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters", modifiers: "", def_value: None }]
explicit Gost3410KeyParameters(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

/// @brief Method .ctor addr 0xea8e5c size 0x30 virtual false final false
 void _ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

// Ctor Parameters [CppParam { name: "isPrivate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit Gost3410KeyParameters(bool isPrivate, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea8e8c size 0x38 virtual false final false
 void _ctor(bool isPrivate, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method get_Parameters addr 0xea903c size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters get_Parameters() ;

/// @brief Method get_PublicKeyParamSet addr 0xea9044 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_PublicKeyParamSet() ;

/// @brief Method LookupParameters addr 0xea8ec4 size 0x178 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters LookupParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters, "Org.BouncyCastle.Crypto.Parameters", "Gost3410KeyParameters");
