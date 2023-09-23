#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerPrintableString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class MonetaryLimit;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::MonetaryLimit
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(187))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.MonetaryLimit
class CORDL_TYPE MonetaryLimit : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MonetaryLimit() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonetaryLimit", modifiers: " const&", def_value: None }]
constexpr MonetaryLimit(MonetaryLimit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonetaryLimit", modifiers: "&&", def_value: None }]
constexpr MonetaryLimit(MonetaryLimit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonetaryLimit(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr MonetaryLimit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonetaryLimit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonetaryLimit& operator=(MonetaryLimit&& o) noexcept = default;
  constexpr MonetaryLimit& operator=(MonetaryLimit const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerPrintableString __declspec(property(get=__get_currency, put=__set_currency))  currency;

constexpr void __set_currency(Org::BouncyCastle::Asn1::DerPrintableString value) ;

constexpr Org::BouncyCastle::Asn1::DerPrintableString __get_currency() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_amount, put=__set_amount))  amount;

constexpr void __set_amount(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_amount() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_exponent, put=__set_exponent))  exponent;

constexpr void __set_exponent(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_exponent() const;


// Properties

 ::StringW __declspec(property(get=get_Currency))  Currency;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Amount))  Amount;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Exponent))  Exponent;


// Methods

/// @brief Method GetInstance addr 0xeea37c size 0x168 virtual false final false
static Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit MonetaryLimit(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeea4e4 size 0x130 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "currency", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "amount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "exponent", ty: "int32_t", modifiers: "", def_value: None }]
explicit MonetaryLimit(::StringW currency, int32_t amount, int32_t exponent) ;

/// @brief Method .ctor addr 0xeea614 size 0xe4 virtual false final false
 void _ctor(::StringW currency, int32_t amount, int32_t exponent) ;

/// @brief Method get_Currency addr 0xeea6f8 size 0x20 virtual true final false
 ::StringW get_Currency() ;

/// @brief Method get_Amount addr 0xeea718 size 0x1c virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Amount() ;

/// @brief Method get_Exponent addr 0xeea734 size 0x1c virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Exponent() ;

/// @brief Method ToAsn1Object addr 0xeea750 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::X509::MonetaryLimit, "Org.BouncyCastle.Asn1.IsisMtt.X509", "MonetaryLimit");
