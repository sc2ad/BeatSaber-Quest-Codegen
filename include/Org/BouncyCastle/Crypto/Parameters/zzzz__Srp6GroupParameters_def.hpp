#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Srp6GroupParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1086))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Srp6GroupParameters
class CORDL_TYPE Srp6GroupParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Srp6GroupParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6GroupParameters", modifiers: " const&", def_value: None }]
constexpr Srp6GroupParameters(Srp6GroupParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6GroupParameters", modifiers: "&&", def_value: None }]
constexpr Srp6GroupParameters(Srp6GroupParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Srp6GroupParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Srp6GroupParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Srp6GroupParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Srp6GroupParameters& operator=(Srp6GroupParameters&& o) noexcept = default;
  constexpr Srp6GroupParameters& operator=(Srp6GroupParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_n() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_g() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_N))  N;


// Methods

static Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters New_ctor(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method .ctor addr 0xead6f8 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method get_G addr 0xead724 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_N addr 0xead72c size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_N() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, "Org.BouncyCastle.Crypto.Parameters", "Srp6GroupParameters");
