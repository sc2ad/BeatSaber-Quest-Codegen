#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Text {
class StringBuilder;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509NameEntryConverter;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
// Type: Org.BouncyCastle.Asn1.X509::X509Name
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(408))
// CS Name: Org.BouncyCastle.Asn1.X509.X509Name
class CORDL_TYPE X509Name : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509Name() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Name", modifiers: " const&", def_value: None }]
constexpr X509Name(X509Name const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Name", modifiers: "&&", def_value: None }]
constexpr X509Name(X509Name&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Name(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X509Name& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Name& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Name& operator=(X509Name&& o) noexcept = default;
  constexpr X509Name& operator=(X509Name const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_C, put=__set_C))  C;

static void __set_C(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_C() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_O, put=__set_O))  O;

static void __set_O(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_O() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_OU, put=__set_OU))  OU;

static void __set_OU(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_OU() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_T, put=__set_T))  T;

static void __set_T(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_T() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CN, put=__set_CN))  CN;

static void __set_CN(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CN() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Street, put=__set_Street))  Street;

static void __set_Street(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Street() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SerialNumber, put=__set_SerialNumber))  SerialNumber;

static void __set_SerialNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SerialNumber() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_L, put=__set_L))  L;

static void __set_L(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_L() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ST, put=__set_ST))  ST;

static void __set_ST(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ST() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Surname, put=__set_Surname))  Surname;

static void __set_Surname(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Surname() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_GivenName, put=__set_GivenName))  GivenName;

static void __set_GivenName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_GivenName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Initials, put=__set_Initials))  Initials;

static void __set_Initials(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Initials() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Generation, put=__set_Generation))  Generation;

static void __set_Generation(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Generation() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_UniqueIdentifier, put=__set_UniqueIdentifier))  UniqueIdentifier;

static void __set_UniqueIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_UniqueIdentifier() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_BusinessCategory, put=__set_BusinessCategory))  BusinessCategory;

static void __set_BusinessCategory(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_BusinessCategory() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PostalCode, put=__set_PostalCode))  PostalCode;

static void __set_PostalCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PostalCode() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DnQualifier, put=__set_DnQualifier))  DnQualifier;

static void __set_DnQualifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DnQualifier() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Pseudonym, put=__set_Pseudonym))  Pseudonym;

static void __set_Pseudonym(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Pseudonym() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DateOfBirth, put=__set_DateOfBirth))  DateOfBirth;

static void __set_DateOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DateOfBirth() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PlaceOfBirth, put=__set_PlaceOfBirth))  PlaceOfBirth;

static void __set_PlaceOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PlaceOfBirth() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Gender, put=__set_Gender))  Gender;

static void __set_Gender(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Gender() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CountryOfCitizenship, put=__set_CountryOfCitizenship))  CountryOfCitizenship;

static void __set_CountryOfCitizenship(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CountryOfCitizenship() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CountryOfResidence, put=__set_CountryOfResidence))  CountryOfResidence;

static void __set_CountryOfResidence(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CountryOfResidence() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_NameAtBirth, put=__set_NameAtBirth))  NameAtBirth;

static void __set_NameAtBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_NameAtBirth() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PostalAddress, put=__set_PostalAddress))  PostalAddress;

static void __set_PostalAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PostalAddress() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DmdName, put=__set_DmdName))  DmdName;

static void __set_DmdName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DmdName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_TelephoneNumber, put=__set_TelephoneNumber))  TelephoneNumber;

static void __set_TelephoneNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_TelephoneNumber() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_OrganizationIdentifier, put=__set_OrganizationIdentifier))  OrganizationIdentifier;

static void __set_OrganizationIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_OrganizationIdentifier() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Name, put=__set_Name))  Name;

static void __set_Name(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Name() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EmailAddress, put=__set_EmailAddress))  EmailAddress;

static void __set_EmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EmailAddress() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_UnstructuredName, put=__set_UnstructuredName))  UnstructuredName;

static void __set_UnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_UnstructuredName() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_UnstructuredAddress, put=__set_UnstructuredAddress))  UnstructuredAddress;

static void __set_UnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_UnstructuredAddress() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_E, put=__set_E))  E;

static void __set_E(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_E() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DC, put=__set_DC))  DC;

static void __set_DC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DC() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_UID, put=__set_UID))  UID;

static void __set_UID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_UID() ;

static ::ArrayW<bool> __declspec(property(get=__get_defaultReverse, put=__set_defaultReverse))  defaultReverse;

static void __set_defaultReverse(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_defaultReverse() ;

static ::System::Collections::Hashtable __declspec(property(get=__get_DefaultSymbols, put=__set_DefaultSymbols))  DefaultSymbols;

static void __set_DefaultSymbols(::System::Collections::Hashtable value) ;

static ::System::Collections::Hashtable __get_DefaultSymbols() ;

static ::System::Collections::Hashtable __declspec(property(get=__get_RFC2253Symbols, put=__set_RFC2253Symbols))  RFC2253Symbols;

static void __set_RFC2253Symbols(::System::Collections::Hashtable value) ;

static ::System::Collections::Hashtable __get_RFC2253Symbols() ;

static ::System::Collections::Hashtable __declspec(property(get=__get_RFC1779Symbols, put=__set_RFC1779Symbols))  RFC1779Symbols;

static void __set_RFC1779Symbols(::System::Collections::Hashtable value) ;

static ::System::Collections::Hashtable __get_RFC1779Symbols() ;

static ::System::Collections::Hashtable __declspec(property(get=__get_DefaultLookup, put=__set_DefaultLookup))  DefaultLookup;

static void __set_DefaultLookup(::System::Collections::Hashtable value) ;

static ::System::Collections::Hashtable __get_DefaultLookup() ;

 ::System::Collections::IList __declspec(property(get=__get_ordering, put=__set_ordering))  ordering;

constexpr void __set_ordering(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_ordering() const;

 ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter __declspec(property(get=__get_converter, put=__set_converter))  converter;

constexpr void __set_converter(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter __get_converter() const;

 ::System::Collections::IList __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_values() const;

 ::System::Collections::IList __declspec(property(get=__get_added, put=__set_added))  added;

constexpr void __set_added(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_added() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;


// Properties

static bool __declspec(property(get=get_DefaultReverse, put=set_DefaultReverse))  DefaultReverse;


// Methods

/// @brief Method get_DefaultReverse addr 0x111748c size 0x70 virtual false final false
static bool get_DefaultReverse() ;

/// @brief Method set_DefaultReverse addr 0x11174fc size 0x78 virtual false final false
static void set_DefaultReverse(bool value) ;

/// @brief Method GetInstance addr 0x1104584 size 0x78 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::X509Name GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x1104750 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::X509Name GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit X509Name() ;

/// @brief Method .ctor addr 0x1119840 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit X509Name(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1118f14 size 0x92c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "ordering", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit X509Name(::System::Collections::IList ordering, ::System::Collections::IDictionary attributes) ;

/// @brief Method .ctor addr 0x11198bc size 0x7c virtual false final false
 void _ctor(::System::Collections::IList ordering, ::System::Collections::IDictionary attributes) ;

// Ctor Parameters [CppParam { name: "ordering", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter", modifiers: "", def_value: None }]
explicit X509Name(::System::Collections::IList ordering, ::System::Collections::IDictionary attributes, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

/// @brief Method .ctor addr 0x1119938 size 0x654 virtual false final false
 void _ctor(::System::Collections::IList ordering, ::System::Collections::IDictionary attributes, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

// Ctor Parameters [CppParam { name: "oids", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "values", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit X509Name(::System::Collections::IList oids, ::System::Collections::IList values) ;

/// @brief Method .ctor addr 0x1119f8c size 0x7c virtual false final false
 void _ctor(::System::Collections::IList oids, ::System::Collections::IList values) ;

// Ctor Parameters [CppParam { name: "oids", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "values", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter", modifiers: "", def_value: None }]
explicit X509Name(::System::Collections::IList oids, ::System::Collections::IList values, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

/// @brief Method .ctor addr 0x111a008 size 0x484 virtual false final false
 void _ctor(::System::Collections::IList oids, ::System::Collections::IList values, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

// Ctor Parameters [CppParam { name: "dirName", ty: "::StringW", modifiers: "", def_value: None }]
explicit X509Name(::StringW dirName) ;

/// @brief Method .ctor addr 0x1103ed0 size 0x78 virtual false final false
 void _ctor(::StringW dirName) ;

// Ctor Parameters [CppParam { name: "dirName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter", modifiers: "", def_value: None }]
explicit X509Name(::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

/// @brief Method .ctor addr 0x111a518 size 0x80 virtual false final false
 void _ctor(::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

// Ctor Parameters [CppParam { name: "reverse", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dirName", ty: "::StringW", modifiers: "", def_value: None }]
explicit X509Name(bool reverse, ::StringW dirName) ;

/// @brief Method .ctor addr 0x111afe4 size 0x78 virtual false final false
 void _ctor(bool reverse, ::StringW dirName) ;

// Ctor Parameters [CppParam { name: "reverse", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dirName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter", modifiers: "", def_value: None }]
explicit X509Name(bool reverse, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

/// @brief Method .ctor addr 0x111b05c size 0x88 virtual false final false
 void _ctor(bool reverse, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

// Ctor Parameters [CppParam { name: "reverse", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lookUp", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "dirName", ty: "::StringW", modifiers: "", def_value: None }]
explicit X509Name(bool reverse, ::System::Collections::IDictionary lookUp, ::StringW dirName) ;

/// @brief Method .ctor addr 0x111a48c size 0x8c virtual false final false
 void _ctor(bool reverse, ::System::Collections::IDictionary lookUp, ::StringW dirName) ;

/// @brief Method DecodeOid addr 0x111b0e4 size 0x268 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier DecodeOid(::StringW name, ::System::Collections::IDictionary lookUp) ;

// Ctor Parameters [CppParam { name: "reverse", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lookUp", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "dirName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter", modifiers: "", def_value: None }]
explicit X509Name(bool reverse, ::System::Collections::IDictionary lookUp, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

/// @brief Method .ctor addr 0x111a598 size 0xa4c virtual false final false
 void _ctor(bool reverse, ::System::Collections::IDictionary lookUp, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter converter) ;

/// @brief Method GetOidList addr 0x111b5d4 size 0x5c virtual false final false
 ::System::Collections::IList GetOidList() ;

/// @brief Method GetValueList addr 0x111b630 size 0x8 virtual false final false
 ::System::Collections::IList GetValueList() ;

/// @brief Method GetValueList addr 0x111b638 size 0x2f4 virtual false final false
 ::System::Collections::IList GetValueList(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method ToAsn1Object addr 0x111b92c size 0x4d8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method Equivalent addr 0x111be04 size 0x460 virtual false final false
 bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Name other, bool inOrder) ;

/// @brief Method Equivalent addr 0x111c264 size 0x5dc virtual false final false
 bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Name other) ;

/// @brief Method equivalentStrings addr 0x111c840 size 0xd8 virtual false final false
static bool equivalentStrings(::StringW s1, ::StringW s2) ;

/// @brief Method canonicalize addr 0x111c918 size 0x1cc virtual false final false
static ::StringW canonicalize(::StringW s) ;

/// @brief Method decodeObject addr 0x111cbdc size 0x170 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Object decodeObject(::StringW v) ;

/// @brief Method stripInternalSpaces addr 0x111cae4 size 0xf8 virtual false final false
static ::StringW stripInternalSpaces(::StringW str) ;

/// @brief Method AppendValue addr 0x111cd4c size 0x2d4 virtual false final false
 void AppendValue(::System::Text::StringBuilder buf, ::System::Collections::IDictionary oidSymbols, ::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW val) ;

/// @brief Method ToString addr 0x111d020 size 0x5d8 virtual false final false
 ::StringW ToString(bool reverse, ::System::Collections::IDictionary oidSymbols) ;

/// @brief Method ToString addr 0x111d5f8 size 0x68 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Name);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Name, "Org.BouncyCastle.Asn1.X509", "X509Name");
