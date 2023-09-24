#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1048))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ElGamalParameters
class CORDL_TYPE ElGamalParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ElGamalParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParameters", modifiers: " const&", def_value: None }]
constexpr ElGamalParameters(ElGamalParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParameters", modifiers: "&&", def_value: None }]
constexpr ElGamalParameters(ElGamalParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ElGamalParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalParameters& operator=(ElGamalParameters&& o) noexcept = default;
  constexpr ElGamalParameters& operator=(ElGamalParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_p() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_g() const;

 int32_t __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(int32_t value) ;

constexpr int32_t __get_l() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 int32_t __declspec(property(get=get_L))  L;


// Methods

static Org::BouncyCastle::Crypto::Parameters::ElGamalParameters New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method .ctor addr 0xea8684 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g) ;

static Org::BouncyCastle::Crypto::Parameters::ElGamalParameters New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g, int32_t l) ;

/// @brief Method .ctor addr 0xea868c size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g, int32_t l) ;

/// @brief Method get_P addr 0xea8740 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_G addr 0xea8748 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_L addr 0xea8750 size 0x8 virtual false final false
 int32_t get_L() ;

/// @brief Method Equals addr 0xea8758 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea87f4 size 0x74 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters other) ;

/// @brief Method GetHashCode addr 0xea8868 size 0x58 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, "Org.BouncyCastle.Crypto.Parameters", "ElGamalParameters");
