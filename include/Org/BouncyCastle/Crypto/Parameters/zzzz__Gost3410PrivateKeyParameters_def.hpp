#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_def.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410PrivateKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410PrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1054))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters
class CORDL_TYPE Gost3410PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Gost3410PrivateKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PrivateKeyParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410PrivateKeyParameters(Gost3410PrivateKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PrivateKeyParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410PrivateKeyParameters(Gost3410PrivateKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410PrivateKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters(ptr) {
}


  constexpr Gost3410PrivateKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410PrivateKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410PrivateKeyParameters& operator=(Gost3410PrivateKeyParameters&& o) noexcept = default;
  constexpr Gost3410PrivateKeyParameters& operator=(Gost3410PrivateKeyParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_x() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_X))  X;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters", modifiers: "", def_value: None }]
explicit Gost3410PrivateKeyParameters(::Org::BouncyCastle::Math::BigInteger x, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

/// @brief Method .ctor addr 0xea92d8 size 0xdc virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger x, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters) ;

// Ctor Parameters [CppParam { name: "x", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit Gost3410PrivateKeyParameters(::Org::BouncyCastle::Math::BigInteger x, ::Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea93b4 size 0xe4 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger x, ::Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method get_X addr 0xea9498 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_X() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "Gost3410PrivateKeyParameters");
