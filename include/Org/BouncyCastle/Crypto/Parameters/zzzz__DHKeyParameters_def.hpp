#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DHKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1021))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
class CORDL_TYPE DHKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DHKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyParameters", modifiers: " const&", def_value: None }]
constexpr DHKeyParameters(DHKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyParameters", modifiers: "&&", def_value: None }]
constexpr DHKeyParameters(DHKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr DHKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHKeyParameters& operator=(DHKeyParameters&& o) noexcept = default;
  constexpr DHKeyParameters& operator=(DHKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHParameters __get_parameters() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_algorithmOid, put=__set_algorithmOid))  algorithmOid;

constexpr void __set_algorithmOid(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_algorithmOid() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=get_Parameters))  Parameters;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_AlgorithmOid))  AlgorithmOid;


// Methods

static Org::BouncyCastle::Crypto::Parameters::DHKeyParameters New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

/// @brief Method .ctor addr 0xea3360 size 0x84 virtual false final false
 void _ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

static Org::BouncyCastle::Crypto::Parameters::DHKeyParameters New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid) ;

/// @brief Method .ctor addr 0xea33e4 size 0x3c virtual false final false
 void _ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid) ;

/// @brief Method get_Parameters addr 0xea3420 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::DHParameters get_Parameters() ;

/// @brief Method get_AlgorithmOid addr 0xea3428 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_AlgorithmOid() ;

/// @brief Method Equals addr 0xea3430 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea34cc size 0x50 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::DHKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea351c size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DHKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "DHKeyParameters");
