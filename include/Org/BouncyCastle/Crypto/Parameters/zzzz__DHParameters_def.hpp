#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHValidationParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DHParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1022))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHParameters
class CORDL_TYPE DHParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DHParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParameters", modifiers: " const&", def_value: None }]
constexpr DHParameters(DHParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParameters", modifiers: "&&", def_value: None }]
constexpr DHParameters(DHParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHParameters& operator=(DHParameters&& o) noexcept = default;
  constexpr DHParameters& operator=(DHParameters const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultMinimumLength offset 0
static constexpr int32_t  DefaultMinimumLength{160};

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_p() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_g() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_q() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_j, put=__set_j))  j;

constexpr void __set_j(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_j() const;

 int32_t __declspec(property(get=__get_m, put=__set_m))  m;

constexpr void __set_m(int32_t value) ;

constexpr int32_t __get_m() const;

 int32_t __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(int32_t value) ;

constexpr int32_t __get_l() const;

 ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters __declspec(property(get=__get_validation, put=__set_validation))  validation;

constexpr void __set_validation(::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters __get_validation() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_J))  J;

 int32_t __declspec(property(get=get_M))  M;

 int32_t __declspec(property(get=get_L))  L;

 ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters __declspec(property(get=get_ValidationParameters))  ValidationParameters;


// Methods

/// @brief Method GetDefaultMParam addr 0xea356c size 0x70 virtual false final false
static int32_t GetDefaultMParam(int32_t lParam) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit DHParameters(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method .ctor addr 0xea35dc size 0x74 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit DHParameters(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q) ;

/// @brief Method .ctor addr 0xea36b4 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "l", ty: "int32_t", modifiers: "", def_value: None }]
explicit DHParameters(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, int32_t l) ;

/// @brief Method .ctor addr 0xea3650 size 0x64 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, int32_t l) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "l", ty: "int32_t", modifiers: "", def_value: None }]
explicit DHParameters(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, int32_t m, int32_t l) ;

/// @brief Method .ctor addr 0xea3abc size 0x20 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, int32_t m, int32_t l) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "j", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "validation", ty: "::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters", modifiers: "", def_value: None }]
explicit DHParameters(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger j, ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters validation) ;

/// @brief Method .ctor addr 0xea3adc size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger j, ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters validation) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "l", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "j", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "validation", ty: "::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters", modifiers: "", def_value: None }]
explicit DHParameters(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, int32_t m, int32_t l, ::Org::BouncyCastle::Math::BigInteger j, ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters validation) ;

/// @brief Method .ctor addr 0xea372c size 0x390 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger q, int32_t m, int32_t l, ::Org::BouncyCastle::Math::BigInteger j, ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters validation) ;

/// @brief Method get_P addr 0xea3b04 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_G addr 0xea3b0c size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_Q addr 0xea3b14 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_J addr 0xea3b1c size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_J() ;

/// @brief Method get_M addr 0xea3b24 size 0x8 virtual false final false
 int32_t get_M() ;

/// @brief Method get_L addr 0xea3b2c size 0x8 virtual false final false
 int32_t get_L() ;

/// @brief Method get_ValidationParameters addr 0xea3b34 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters get_ValidationParameters() ;

/// @brief Method Equals addr 0xea3b3c size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea3be0 size 0x78 virtual true final false
 bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHParameters other) ;

/// @brief Method GetHashCode addr 0xea3c58 size 0x70 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHParameters, "Org.BouncyCastle.Crypto.Parameters", "DHParameters");
