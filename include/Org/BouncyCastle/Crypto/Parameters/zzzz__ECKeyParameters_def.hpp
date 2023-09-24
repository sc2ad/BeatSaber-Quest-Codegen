#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ECKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1037))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
class CORDL_TYPE ECKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ECKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyParameters", modifiers: " const&", def_value: None }]
constexpr ECKeyParameters(ECKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECKeyParameters", modifiers: "&&", def_value: None }]
constexpr ECKeyParameters(ECKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr ECKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECKeyParameters& operator=(ECKeyParameters&& o) noexcept = default;
  constexpr ECKeyParameters& operator=(ECKeyParameters const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_algorithms() ;

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __get_parameters() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_publicKeyParamSet, put=__set_publicKeyParamSet))  publicKeyParamSet;

constexpr void __set_publicKeyParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_publicKeyParamSet() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=get_Parameters))  Parameters;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_PublicKeyParamSet))  PublicKeyParamSet;


// Methods

static Org::BouncyCastle::Crypto::Parameters::ECKeyParameters New_ctor(::StringW algorithm, bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

/// @brief Method .ctor addr 0xea6090 size 0xfc virtual false final false
 void _ctor(::StringW algorithm, bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

static Org::BouncyCastle::Crypto::Parameters::ECKeyParameters New_ctor(::StringW algorithm, bool isPrivate, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea62b0 size 0x108 virtual false final false
 void _ctor(::StringW algorithm, bool isPrivate, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method get_AlgorithmName addr 0xea63b8 size 0x8 virtual false final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_Parameters addr 0xea63c0 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters get_Parameters() ;

/// @brief Method get_PublicKeyParamSet addr 0xea63c8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_PublicKeyParamSet() ;

/// @brief Method Equals addr 0xea63d0 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea6474 size 0x58 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea64cc size 0x4c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method CreateKeyGenerationParameters addr 0xea6518 size 0x94 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters CreateKeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method VerifyAlgorithmName addr 0xea618c size 0x124 virtual false final false
static ::StringW VerifyAlgorithmName(::StringW algorithm) ;

/// @brief Method LookupParameters addr 0xea5f70 size 0x110 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters LookupParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "ECKeyParameters");
