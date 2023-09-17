#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Iso4217CurrencyCode;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::Iso4217CurrencyCode
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(329))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.Iso4217CurrencyCode
class CORDL_TYPE Iso4217CurrencyCode : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Iso4217CurrencyCode() = default;

// Ctor Parameters [CppParam { name: "", ty: "Iso4217CurrencyCode", modifiers: " const&", def_value: None }]
constexpr Iso4217CurrencyCode(Iso4217CurrencyCode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Iso4217CurrencyCode", modifiers: "&&", def_value: None }]
constexpr Iso4217CurrencyCode(Iso4217CurrencyCode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Iso4217CurrencyCode(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Iso4217CurrencyCode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Iso4217CurrencyCode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Iso4217CurrencyCode& operator=(Iso4217CurrencyCode&& o) noexcept = default;
  constexpr Iso4217CurrencyCode& operator=(Iso4217CurrencyCode const& o) noexcept = default;
                


// Fields

/// @brief Field AlphabeticMaxSize offset 0
static constexpr int32_t  AlphabeticMaxSize{3};

/// @brief Field NumericMinSize offset 0
static constexpr int32_t  NumericMinSize{1};

/// @brief Field NumericMaxSize offset 0
static constexpr int32_t  NumericMaxSize{999};

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_obj() const;


// Properties

 bool __declspec(property(get=get_IsAlphabetic))  IsAlphabetic;

 ::StringW __declspec(property(get=get_Alphabetic))  Alphabetic;

 int32_t __declspec(property(get=get_Numeric))  Numeric;


// Methods

/// @brief Method GetInstance addr 0xff385c size 0x1ec virtual false final false
static ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "numeric", ty: "int32_t", modifiers: "", def_value: None }]
explicit Iso4217CurrencyCode(int32_t numeric) ;

/// @brief Method .ctor addr 0xff3a48 size 0x228 virtual false final false
 void _ctor(int32_t numeric) ;

// Ctor Parameters [CppParam { name: "alphabetic", ty: "::StringW", modifiers: "", def_value: None }]
explicit Iso4217CurrencyCode(::StringW alphabetic) ;

/// @brief Method .ctor addr 0xff3c70 size 0x108 virtual false final false
 void _ctor(::StringW alphabetic) ;

/// @brief Method get_IsAlphabetic addr 0xff3d78 size 0x7c virtual false final false
 bool get_IsAlphabetic() ;

/// @brief Method get_Alphabetic addr 0xff3df4 size 0xa8 virtual false final false
 ::StringW get_Alphabetic() ;

/// @brief Method get_Numeric addr 0xff3e9c size 0x80 virtual false final false
 int32_t get_Numeric() ;

/// @brief Method ToAsn1Object addr 0xff3f1c size 0x20 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, "Org.BouncyCastle.Asn1.X509.Qualified", "Iso4217CurrencyCode");
