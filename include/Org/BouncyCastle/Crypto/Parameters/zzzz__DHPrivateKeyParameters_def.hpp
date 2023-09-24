#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DHPrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1023))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
class CORDL_TYPE DHPrivateKeyParameters : public Org::BouncyCastle::Crypto::Parameters::DHKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DHPrivateKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHPrivateKeyParameters", modifiers: " const&", def_value: None }]
constexpr DHPrivateKeyParameters(DHPrivateKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHPrivateKeyParameters", modifiers: "&&", def_value: None }]
constexpr DHPrivateKeyParameters(DHPrivateKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHPrivateKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::DHKeyParameters(ptr) {
}


  constexpr DHPrivateKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHPrivateKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHPrivateKeyParameters& operator=(DHPrivateKeyParameters&& o) noexcept = default;
  constexpr DHPrivateKeyParameters& operator=(DHPrivateKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_x() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_X))  X;


// Methods

static Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters New_ctor(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

/// @brief Method .ctor addr 0xea3cc8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

static Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters New_ctor(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid) ;

/// @brief Method .ctor addr 0xea3cf0 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid) ;

/// @brief Method get_X addr 0xea3d34 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_X() ;

/// @brief Method Equals addr 0xea3d3c size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea3dd8 size 0x58 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea3e30 size 0x40 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "DHPrivateKeyParameters");
