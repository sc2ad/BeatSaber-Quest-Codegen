#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class ContentValidator;
}
// Type: System.Xml.Schema::ContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11552))
// CS Name: System.Xml.Schema.ContentValidator
class CORDL_TYPE ContentValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ContentValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: " const&", def_value: None }]
constexpr ContentValidator(ContentValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: "&&", def_value: None }]
constexpr ContentValidator(ContentValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContentValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentValidator& operator=(ContentValidator&& o) noexcept = default;
  constexpr ContentValidator& operator=(ContentValidator const& o) noexcept = default;
                


// Fields

 ::System::Xml::Schema::XmlSchemaContentType __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(::System::Xml::Schema::XmlSchemaContentType value) ;

constexpr ::System::Xml::Schema::XmlSchemaContentType __get_contentType() const;

 bool __declspec(property(get=__get_isOpen, put=__set_isOpen))  isOpen;

constexpr void __set_isOpen(bool value) ;

constexpr bool __get_isOpen() const;

 bool __declspec(property(get=__get_isEmptiable, put=__set_isEmptiable))  isEmptiable;

constexpr void __set_isEmptiable(bool value) ;

constexpr bool __get_isEmptiable() const;

static ::System::Xml::Schema::ContentValidator __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(::System::Xml::Schema::ContentValidator value) ;

static ::System::Xml::Schema::ContentValidator __get_Empty() ;

static ::System::Xml::Schema::ContentValidator __declspec(property(get=__get_TextOnly, put=__set_TextOnly))  TextOnly;

static void __set_TextOnly(::System::Xml::Schema::ContentValidator value) ;

static ::System::Xml::Schema::ContentValidator __get_TextOnly() ;

static ::System::Xml::Schema::ContentValidator __declspec(property(get=__get_Mixed, put=__set_Mixed))  Mixed;

static void __set_Mixed(::System::Xml::Schema::ContentValidator value) ;

static ::System::Xml::Schema::ContentValidator __get_Mixed() ;

static ::System::Xml::Schema::ContentValidator __declspec(property(get=__get_Any, put=__set_Any))  Any;

static void __set_Any(::System::Xml::Schema::ContentValidator value) ;

static ::System::Xml::Schema::ContentValidator __get_Any() ;


// Properties

 ::System::Xml::Schema::XmlSchemaContentType __declspec(property(get=get_ContentType))  ContentType;

 bool __declspec(property(get=get_IsOpen))  IsOpen;


// Methods

// Ctor Parameters [CppParam { name: "contentType", ty: "::System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }]
explicit ContentValidator(::System::Xml::Schema::XmlSchemaContentType contentType) ;

/// @brief Method .ctor addr 0x271b3bc size 0x30 virtual false final false
 void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType) ;

// Ctor Parameters [CppParam { name: "contentType", ty: "::System::Xml::Schema::XmlSchemaContentType", modifiers: "", def_value: None }, CppParam { name: "isOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isEmptiable", ty: "bool", modifiers: "", def_value: None }]
explicit ContentValidator(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) ;

/// @brief Method .ctor addr 0x271b3ec size 0x40 virtual false final false
 void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) ;

/// @brief Method get_ContentType addr 0x271b42c size 0x8 virtual false final false
 ::System::Xml::Schema::XmlSchemaContentType get_ContentType() ;

/// @brief Method get_IsOpen addr 0x271b434 size 0x24 virtual false final false
 bool get_IsOpen() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::ContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ContentValidator, "System.Xml.Schema", "ContentValidator");
