#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaPublicKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DsaPublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1027))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1031))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters
class CORDL_TYPE DsaPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DsaPublicKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaPublicKeyParameters", modifiers: " const&", def_value: None }]
constexpr DsaPublicKeyParameters(DsaPublicKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaPublicKeyParameters", modifiers: "&&", def_value: None }]
constexpr DsaPublicKeyParameters(DsaPublicKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaPublicKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters(ptr) {
}


  constexpr DsaPublicKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaPublicKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaPublicKeyParameters& operator=(DsaPublicKeyParameters&& o) noexcept = default;
  constexpr DsaPublicKeyParameters& operator=(DsaPublicKeyParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_y() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Y))  Y;


// Methods

/// @brief Method Validate addr 0xea4e58 size 0x168 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger Validate(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

// Ctor Parameters [CppParam { name: "y", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DsaParameters", modifiers: "", def_value: None }]
explicit DsaPublicKeyParameters(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method .ctor addr 0xea4fc0 size 0x90 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger y, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method get_Y addr 0xea5050 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Y() ;

/// @brief Method Equals addr 0xea5058 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea50f4 size 0x58 virtual false final false
 bool Equals(::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea514c size 0x40 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "DsaPublicKeyParameters");
