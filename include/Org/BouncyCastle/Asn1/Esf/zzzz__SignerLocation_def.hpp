#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignerLocation;
}
// Type: Org.BouncyCastle.Asn1.Esf::SignerLocation
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(158))
// CS Name: Org.BouncyCastle.Asn1.Esf.SignerLocation
class CORDL_TYPE SignerLocation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SignerLocation() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerLocation", modifiers: " const&", def_value: None }]
constexpr SignerLocation(SignerLocation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerLocation", modifiers: "&&", def_value: None }]
constexpr SignerLocation(SignerLocation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerLocation(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SignerLocation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerLocation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerLocation& operator=(SignerLocation&& o) noexcept = default;
  constexpr SignerLocation& operator=(SignerLocation const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_countryName, put=__set_countryName))  countryName;

constexpr void __set_countryName(::Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString __get_countryName() const;

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_localityName, put=__set_localityName))  localityName;

constexpr void __set_localityName(::Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString __get_localityName() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_postalAddress, put=__set_postalAddress))  postalAddress;

constexpr void __set_postalAddress(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_postalAddress() const;


// Properties

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_Country))  Country;

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_Locality))  Locality;

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=get_CountryName))  CountryName;

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=get_LocalityName))  LocalityName;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_PostalAddress))  PostalAddress;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SignerLocation(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0aa28 size 0x3fc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "countryName", ty: "::Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }, CppParam { name: "localityName", ty: "::Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }, CppParam { name: "postalAddress", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SignerLocation(::Org::BouncyCastle::Asn1::X500::DirectoryString countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString localityName, ::Org::BouncyCastle::Asn1::Asn1Sequence postalAddress) ;

/// @brief Method .ctor addr 0xe0ae24 size 0xa8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString localityName, ::Org::BouncyCastle::Asn1::Asn1Sequence postalAddress) ;

// Ctor Parameters [CppParam { name: "countryName", ty: "::Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }, CppParam { name: "localityName", ty: "::Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }, CppParam { name: "postalAddress", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString>", modifiers: "", def_value: None }]
explicit SignerLocation(::Org::BouncyCastle::Asn1::X500::DirectoryString countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString localityName, ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString> postalAddress) ;

/// @brief Method .ctor addr 0xe0aecc size 0x8c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString localityName, ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString> postalAddress) ;

// Ctor Parameters [CppParam { name: "countryName", ty: "::Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }, CppParam { name: "localityName", ty: "::Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }, CppParam { name: "postalAddress", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SignerLocation(::Org::BouncyCastle::Asn1::DerUtf8String countryName, ::Org::BouncyCastle::Asn1::DerUtf8String localityName, ::Org::BouncyCastle::Asn1::Asn1Sequence postalAddress) ;

/// @brief Method .ctor addr 0xe0af58 size 0x54 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String countryName, ::Org::BouncyCastle::Asn1::DerUtf8String localityName, ::Org::BouncyCastle::Asn1::Asn1Sequence postalAddress) ;

/// @brief Method GetInstance addr 0xe0afac size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::SignerLocation GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Country addr 0xe0b050 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X500::DirectoryString get_Country() ;

/// @brief Method get_Locality addr 0xe0b058 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X500::DirectoryString get_Locality() ;

/// @brief Method GetPostal addr 0xe0b060 size 0x100 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString> GetPostal() ;

/// @brief Method get_CountryName addr 0xe0b160 size 0x84 virtual false final false
 ::Org::BouncyCastle::Asn1::DerUtf8String get_CountryName() ;

/// @brief Method get_LocalityName addr 0xe0b1e4 size 0x84 virtual false final false
 ::Org::BouncyCastle::Asn1::DerUtf8String get_LocalityName() ;

/// @brief Method get_PostalAddress addr 0xe0b268 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Sequence get_PostalAddress() ;

/// @brief Method ToAsn1Object addr 0xe0b270 size 0xd8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignerLocation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignerLocation, "Org.BouncyCastle.Asn1.Esf", "SignerLocation");
