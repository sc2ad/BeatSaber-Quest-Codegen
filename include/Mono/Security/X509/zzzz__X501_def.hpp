#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Mono::Security {
class ASN1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X501;
}
// Type: Mono.Security.X509::X501
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13959))
// CS Name: Mono.Security.X509.X501
class CORDL_TYPE X501 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X501() = default;

// Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: " const&", def_value: None }]
constexpr X501(X501 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: "&&", def_value: None }]
constexpr X501(X501&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X501(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X501& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X501& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X501& operator=(X501&& o) noexcept = default;
  constexpr X501& operator=(X501 const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_countryName, put=__set_countryName))  countryName;

static void __set_countryName(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_countryName() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_organizationName, put=__set_organizationName))  organizationName;

static void __set_organizationName(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_organizationName() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_organizationalUnitName, put=__set_organizationalUnitName))  organizationalUnitName;

static void __set_organizationalUnitName(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_organizationalUnitName() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_commonName, put=__set_commonName))  commonName;

static void __set_commonName(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_commonName() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_localityName, put=__set_localityName))  localityName;

static void __set_localityName(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_localityName() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_stateOrProvinceName, put=__set_stateOrProvinceName))  stateOrProvinceName;

static void __set_stateOrProvinceName(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_stateOrProvinceName() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_streetAddress, put=__set_streetAddress))  streetAddress;

static void __set_streetAddress(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_streetAddress() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

static void __set_serialNumber(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_serialNumber() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_domainComponent, put=__set_domainComponent))  domainComponent;

static void __set_domainComponent(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_domainComponent() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_userid, put=__set_userid))  userid;

static void __set_userid(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_userid() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_email, put=__set_email))  email;

static void __set_email(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_email() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_dnQualifier, put=__set_dnQualifier))  dnQualifier;

static void __set_dnQualifier(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_dnQualifier() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_title, put=__set_title))  title;

static void __set_title(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_title() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_surname, put=__set_surname))  surname;

static void __set_surname(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_surname() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_givenName, put=__set_givenName))  givenName;

static void __set_givenName(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_givenName() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_initial, put=__set_initial))  initial;

static void __set_initial(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_initial() ;


// Methods

/// @brief Method ToString addr 0x2282cd8 size 0x138 virtual false final false
static ::StringW ToString(::Mono::Security::ASN1 seq) ;

/// @brief Method ToString addr 0x228acac size 0x1a8 virtual false final false
static ::StringW ToString(::Mono::Security::ASN1 seq, bool reversed, ::StringW separator, bool quotes) ;

/// @brief Method AppendEntry addr 0x228a4e8 size 0x7c4 virtual false final false
static void AppendEntry(::System::Text::StringBuilder sb, ::Mono::Security::ASN1 entry, bool quotes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::X509::X501);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X501, "Mono.Security.X509", "X501");
