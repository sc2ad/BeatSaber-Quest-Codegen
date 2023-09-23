#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_def.hpp"
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410PublicKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410PublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1055))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters
class CORDL_TYPE Gost3410PublicKeyParameters : public Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Gost3410PublicKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410PublicKeyParameters(Gost3410PublicKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410PublicKeyParameters(Gost3410PublicKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410PublicKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters(ptr) {
}


  constexpr Gost3410PublicKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410PublicKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410PublicKeyParameters& operator=(Gost3410PublicKeyParameters&& o) noexcept = default;
  constexpr Gost3410PublicKeyParameters& operator=(Gost3410PublicKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_y() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Y))  Y;


// Methods

// Ctor Parameters [CppParam { name: "y", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters", modifiers: "", def_value: None }]
explicit Gost3410PublicKeyParameters(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

/// @brief Method .ctor addr 0xea94a0 size 0xc0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

// Ctor Parameters [CppParam { name: "y", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit Gost3410PublicKeyParameters(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea9560 size 0xc8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method get_Y addr 0xea9628 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Y() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "Gost3410PublicKeyParameters");
