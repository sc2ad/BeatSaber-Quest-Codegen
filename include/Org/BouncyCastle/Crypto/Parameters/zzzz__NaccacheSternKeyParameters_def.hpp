#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::NaccacheSternKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1069))
// CS Name: Org.BouncyCastle.Crypto.Parameters.NaccacheSternKeyParameters
class CORDL_TYPE NaccacheSternKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NaccacheSternKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyParameters", modifiers: " const&", def_value: None }]
constexpr NaccacheSternKeyParameters(NaccacheSternKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyParameters", modifiers: "&&", def_value: None }]
constexpr NaccacheSternKeyParameters(NaccacheSternKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NaccacheSternKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr NaccacheSternKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NaccacheSternKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NaccacheSternKeyParameters& operator=(NaccacheSternKeyParameters&& o) noexcept = default;
  constexpr NaccacheSternKeyParameters& operator=(NaccacheSternKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_g() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_n() const;

 int32_t __declspec(property(get=__get_lowerSigmaBound, put=__set_lowerSigmaBound))  lowerSigmaBound;

constexpr void __set_lowerSigmaBound(int32_t value) ;

constexpr int32_t __get_lowerSigmaBound() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 int32_t __declspec(property(get=get_LowerSigmaBound))  LowerSigmaBound;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Modulus))  Modulus;


// Methods

static Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters New_ctor(bool privateKey, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound) ;

/// @brief Method .ctor addr 0xeaac08 size 0x40 virtual false final false
 void _ctor(bool privateKey, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound) ;

/// @brief Method get_G addr 0xeaac48 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_LowerSigmaBound addr 0xeaac50 size 0x8 virtual false final false
 int32_t get_LowerSigmaBound() ;

/// @brief Method get_Modulus addr 0xeaac58 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Modulus() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternKeyParameters");
