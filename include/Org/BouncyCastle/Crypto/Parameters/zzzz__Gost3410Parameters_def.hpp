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
class Gost3410ValidationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1053))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
class CORDL_TYPE Gost3410Parameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Gost3410Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410Parameters", modifiers: " const&", def_value: None }]
constexpr Gost3410Parameters(Gost3410Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410Parameters", modifiers: "&&", def_value: None }]
constexpr Gost3410Parameters(Gost3410Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410Parameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3410Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410Parameters& operator=(Gost3410Parameters&& o) noexcept = default;
  constexpr Gost3410Parameters& operator=(Gost3410Parameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_p() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_q() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_a() const;

 Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters __declspec(property(get=__get_validation, put=__set_validation))  validation;

constexpr void __set_validation(Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters __get_validation() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_A))  A;

 Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters __declspec(property(get=get_ValidationParameters))  ValidationParameters;


// Methods

static Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a) ;

/// @brief Method .ctor addr 0xea8e54 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a) ;

static Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters validation) ;

/// @brief Method .ctor addr 0xea904c size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger a, Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters validation) ;

/// @brief Method get_P addr 0xea912c size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0xea9134 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_A addr 0xea913c size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_A() ;

/// @brief Method get_ValidationParameters addr 0xea9144 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters get_ValidationParameters() ;

/// @brief Method Equals addr 0xea914c size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea91e8 size 0x80 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters other) ;

/// @brief Method GetHashCode addr 0xea9268 size 0x70 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters, "Org.BouncyCastle.Crypto.Parameters", "Gost3410Parameters");
