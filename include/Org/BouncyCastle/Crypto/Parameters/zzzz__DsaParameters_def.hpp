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
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaValidationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DsaParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1029))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaParameters
class CORDL_TYPE DsaParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DsaParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameters", modifiers: " const&", def_value: None }]
constexpr DsaParameters(DsaParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameters", modifiers: "&&", def_value: None }]
constexpr DsaParameters(DsaParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DsaParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaParameters& operator=(DsaParameters&& o) noexcept = default;
  constexpr DsaParameters& operator=(DsaParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_p() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_q() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_g() const;

 Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters __declspec(property(get=__get_validation, put=__set_validation))  validation;

constexpr void __set_validation(Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters __get_validation() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters __declspec(property(get=get_ValidationParameters))  ValidationParameters;


// Methods

static Org::BouncyCastle::Crypto::Parameters::DsaParameters New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method .ctor addr 0xea4a00 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g) ;

static Org::BouncyCastle::Crypto::Parameters::DsaParameters New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters parameters) ;

/// @brief Method .ctor addr 0xea4a08 size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters parameters) ;

/// @brief Method get_P addr 0xea4ae8 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0xea4af0 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_G addr 0xea4af8 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_ValidationParameters addr 0xea4b00 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters get_ValidationParameters() ;

/// @brief Method Equals addr 0xea4b08 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea4ba4 size 0x80 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::DsaParameters other) ;

/// @brief Method GetHashCode addr 0xea4c24 size 0x70 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DsaParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaParameters, "Org.BouncyCastle.Crypto.Parameters", "DsaParameters");
