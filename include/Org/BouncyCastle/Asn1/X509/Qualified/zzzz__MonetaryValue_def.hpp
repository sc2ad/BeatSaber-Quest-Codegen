#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Iso4217CurrencyCode;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class MonetaryValue;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::MonetaryValue
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(330))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.MonetaryValue
class CORDL_TYPE MonetaryValue : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MonetaryValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonetaryValue", modifiers: " const&", def_value: None }]
constexpr MonetaryValue(MonetaryValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonetaryValue", modifiers: "&&", def_value: None }]
constexpr MonetaryValue(MonetaryValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonetaryValue(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr MonetaryValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonetaryValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonetaryValue& operator=(MonetaryValue&& o) noexcept = default;
  constexpr MonetaryValue& operator=(MonetaryValue const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode __declspec(property(get=__get_currency, put=__set_currency))  currency;

constexpr void __set_currency(Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode value) ;

constexpr Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode __get_currency() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_amount, put=__set_amount))  amount;

constexpr void __set_amount(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_amount() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_exponent, put=__set_exponent))  exponent;

constexpr void __set_exponent(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_exponent() const;


// Properties

 Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode __declspec(property(get=get_Currency))  Currency;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Amount))  Amount;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Exponent))  Exponent;


// Methods

/// @brief Method GetInstance addr 0xff3f3c size 0x168 virtual false final false
static Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit MonetaryValue(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff40a4 size 0x13c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "currency", ty: "Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode", modifiers: "", def_value: None }, CppParam { name: "amount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "exponent", ty: "int32_t", modifiers: "", def_value: None }]
explicit MonetaryValue(Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode currency, int32_t amount, int32_t exponent) ;

/// @brief Method .ctor addr 0xff41e0 size 0xb0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode currency, int32_t amount, int32_t exponent) ;

/// @brief Method get_Currency addr 0xff4290 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode get_Currency() ;

/// @brief Method get_Amount addr 0xff4298 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Amount() ;

/// @brief Method get_Exponent addr 0xff42b4 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Exponent() ;

/// @brief Method ToAsn1Object addr 0xff42d0 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue, "Org.BouncyCastle.Asn1.X509.Qualified", "MonetaryValue");
