#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DHPublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1024))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
class CORDL_TYPE DHPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DHPublicKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKeyParameters", modifiers: " const&", def_value: None }]
constexpr DHPublicKeyParameters(DHPublicKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKeyParameters", modifiers: "&&", def_value: None }]
constexpr DHPublicKeyParameters(DHPublicKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHPublicKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters(ptr) {
}


  constexpr DHPublicKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHPublicKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHPublicKeyParameters& operator=(DHPublicKeyParameters&& o) noexcept = default;
  constexpr DHPublicKeyParameters& operator=(DHPublicKeyParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_y() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Y))  Y;


// Methods

/// @brief Method Validate addr 0xea3e70 size 0x258 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger Validate(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams) ;

// Ctor Parameters [CppParam { name: "y", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
explicit DHPublicKeyParameters(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

/// @brief Method .ctor addr 0xea4280 size 0x38 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

// Ctor Parameters [CppParam { name: "y", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }, CppParam { name: "algorithmOid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit DHPublicKeyParameters(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid) ;

/// @brief Method .ctor addr 0xea42b8 size 0x4c virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid) ;

/// @brief Method get_Y addr 0xea4304 size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Y() ;

/// @brief Method Equals addr 0xea430c size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea43a8 size 0x58 virtual false final false
 bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea4400 size 0x40 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Legendre addr 0xea40c8 size 0x1b8 virtual false final false
static int32_t Legendre(::Org::BouncyCastle::Math::BigInteger a, ::Org::BouncyCastle::Math::BigInteger b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "DHPublicKeyParameters");
