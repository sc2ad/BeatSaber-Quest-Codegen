#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Exception;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Xml::Schema {
class StringFacetsChecker;
}
// Type: System.Xml.Schema::StringFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11633))
// CS Name: System.Xml.Schema.StringFacetsChecker
class CORDL_TYPE StringFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringFacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: " const&", def_value: None }]
constexpr StringFacetsChecker(StringFacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: "&&", def_value: None }]
constexpr StringFacetsChecker(StringFacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringFacetsChecker(void* ptr) noexcept : ::System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr StringFacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringFacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringFacetsChecker& operator=(StringFacetsChecker&& o) noexcept = default;
  constexpr StringFacetsChecker& operator=(StringFacetsChecker const& o) noexcept = default;
                


// Fields

static ::System::Text::RegularExpressions::Regex __declspec(property(get=__get_languagePattern, put=__set_languagePattern))  languagePattern;

static void __set_languagePattern(::System::Text::RegularExpressions::Regex value) ;

static ::System::Text::RegularExpressions::Regex __get_languagePattern() ;


// Properties

static ::System::Text::RegularExpressions::Regex __declspec(property(get=get_LanguagePattern))  LanguagePattern;


// Methods

/// @brief Method get_LanguagePattern addr 0x272ee48 size 0xb8 virtual false final false
static ::System::Text::RegularExpressions::Regex get_LanguagePattern() ;

/// @brief Method CheckValueFacets addr 0x272ef00 size 0x60 virtual true final false
 ::System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, ::System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272ef60 size 0x8 virtual true final false
 ::System::Exception CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x2727560 size 0x200 virtual false final false
 ::System::Exception CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype datatype, bool verifyUri) ;

/// @brief Method MatchEnumeration addr 0x272f354 size 0x5c virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, ::System::Collections::ArrayList enumeration, ::System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272f180 size 0x1d4 virtual false final false
 bool MatchEnumeration(::StringW value, ::System::Collections::ArrayList enumeration, ::System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckBuiltInFacets addr 0x272ef68 size 0x218 virtual false final false
 ::System::Exception CheckBuiltInFacets(::StringW s, ::System::Xml::Schema::XmlTypeCode typeCode, bool verifyUri) ;

// Ctor Parameters []
explicit StringFacetsChecker() ;

/// @brief Method .ctor addr 0x272f3b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::StringFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::StringFacetsChecker, "System.Xml.Schema", "StringFacetsChecker");
