#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ECPrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1037))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1038))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
class CORDL_TYPE ECPrivateKeyParameters : public Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ECPrivateKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyParameters", modifiers: " const&", def_value: None }]
constexpr ECPrivateKeyParameters(ECPrivateKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyParameters", modifiers: "&&", def_value: None }]
constexpr ECPrivateKeyParameters(ECPrivateKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPrivateKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::ECKeyParameters(ptr) {
}


  constexpr ECPrivateKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECPrivateKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECPrivateKeyParameters& operator=(ECPrivateKeyParameters&& o) noexcept = default;
  constexpr ECPrivateKeyParameters& operator=(ECPrivateKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_d() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_D))  D;


// Methods

// Ctor Parameters [CppParam { name: "d", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::ECDomainParameters", modifiers: "", def_value: None }]
explicit ECPrivateKeyParameters(Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

/// @brief Method .ctor addr 0xea67ac size 0x60 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

// Ctor Parameters [CppParam { name: "d", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit ECPrivateKeyParameters(Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea68a4 size 0xa0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "d", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::ECDomainParameters", modifiers: "", def_value: None }]
explicit ECPrivateKeyParameters(::StringW algorithm, Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

/// @brief Method .ctor addr 0xea680c size 0x98 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "d", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit ECPrivateKeyParameters(::StringW algorithm, Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea6944 size 0x98 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Math::BigInteger d, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method get_D addr 0xea69dc size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_D() ;

/// @brief Method Equals addr 0xea69e4 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea6a80 size 0x58 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea6ad8 size 0x40 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "ECPrivateKeyParameters");
