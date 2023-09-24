#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::RsaKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1080))
// CS Name: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
class CORDL_TYPE RsaKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RsaKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyParameters", modifiers: " const&", def_value: None }]
constexpr RsaKeyParameters(RsaKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyParameters", modifiers: "&&", def_value: None }]
constexpr RsaKeyParameters(RsaKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr RsaKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaKeyParameters& operator=(RsaKeyParameters&& o) noexcept = default;
  constexpr RsaKeyParameters& operator=(RsaKeyParameters const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_SmallPrimesProduct, put=__set_SmallPrimesProduct))  SmallPrimesProduct;

static void __set_SmallPrimesProduct(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_SmallPrimesProduct() ;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_modulus, put=__set_modulus))  modulus;

constexpr void __set_modulus(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_modulus() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_exponent, put=__set_exponent))  exponent;

constexpr void __set_exponent(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_exponent() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Modulus))  Modulus;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Exponent))  Exponent;


// Methods

/// @brief Method Validate addr 0xeab5ac size 0x16c virtual false final false
static Org::BouncyCastle::Math::BigInteger Validate(Org::BouncyCastle::Math::BigInteger modulus) ;

static Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters New_ctor(bool isPrivate, Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger exponent) ;

/// @brief Method .ctor addr 0xeab718 size 0x1c8 virtual false final false
 void _ctor(bool isPrivate, Org::BouncyCastle::Math::BigInteger modulus, Org::BouncyCastle::Math::BigInteger exponent) ;

/// @brief Method get_Modulus addr 0xeab8e0 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Modulus() ;

/// @brief Method get_Exponent addr 0xeab8e8 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Exponent() ;

/// @brief Method Equals addr 0xeab8f0 size 0xe0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xeab9d0 size 0x78 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "RsaKeyParameters");
