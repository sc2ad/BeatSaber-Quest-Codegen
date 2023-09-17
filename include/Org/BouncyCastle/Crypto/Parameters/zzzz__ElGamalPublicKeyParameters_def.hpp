#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalPublicKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalPublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1047))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1050))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters
class CORDL_TYPE ElGamalPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ElGamalPublicKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicKeyParameters", modifiers: " const&", def_value: None }]
constexpr ElGamalPublicKeyParameters(ElGamalPublicKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalPublicKeyParameters", modifiers: "&&", def_value: None }]
constexpr ElGamalPublicKeyParameters(ElGamalPublicKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalPublicKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters(ptr) {
}


  constexpr ElGamalPublicKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalPublicKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalPublicKeyParameters& operator=(ElGamalPublicKeyParameters&& o) noexcept = default;
  constexpr ElGamalPublicKeyParameters& operator=(ElGamalPublicKeyParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_y() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Y))  Y;


// Methods

// Ctor Parameters [CppParam { name: "y", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters", modifiers: "", def_value: None }]
explicit ElGamalPublicKeyParameters(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters) ;

/// @brief Method .ctor addr 0xea8a84 size 0x84 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters) ;

/// @brief Method get_Y addr 0xea8b08 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Y() ;

/// @brief Method Equals addr 0xea8b10 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea8bac size 0x58 virtual false final false
 bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea8c04 size 0x40 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPublicKeyParameters");
