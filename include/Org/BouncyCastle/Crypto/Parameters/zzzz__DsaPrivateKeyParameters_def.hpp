#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaPrivateKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DsaPrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1027))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1030))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters
class CORDL_TYPE DsaPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DsaPrivateKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaPrivateKeyParameters", modifiers: " const&", def_value: None }]
constexpr DsaPrivateKeyParameters(DsaPrivateKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaPrivateKeyParameters", modifiers: "&&", def_value: None }]
constexpr DsaPrivateKeyParameters(DsaPrivateKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaPrivateKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters(ptr) {
}


  constexpr DsaPrivateKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaPrivateKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaPrivateKeyParameters& operator=(DsaPrivateKeyParameters&& o) noexcept = default;
  constexpr DsaPrivateKeyParameters& operator=(DsaPrivateKeyParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_x() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_X))  X;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DsaParameters", modifiers: "", def_value: None }]
explicit DsaPrivateKeyParameters(::Org::BouncyCastle::Math::BigInteger x, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method .ctor addr 0xea4c94 size 0x88 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger x, ::Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method get_X addr 0xea4d1c size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_X() ;

/// @brief Method Equals addr 0xea4d24 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea4dc0 size 0x58 virtual false final false
 bool Equals(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea4e18 size 0x40 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaPrivateKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "DsaPrivateKeyParameters");
