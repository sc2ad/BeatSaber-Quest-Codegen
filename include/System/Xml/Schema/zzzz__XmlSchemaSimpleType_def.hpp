#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeContent;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Type: System.Xml.Schema::XmlSchemaSimpleType
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11684))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11679))
// CS Name: System.Xml.Schema.XmlSchemaSimpleType
class CORDL_TYPE XmlSchemaSimpleType : public System::Xml::Schema::XmlSchemaType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~XmlSchemaSimpleType() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleType", modifiers: " const&", def_value: None }]
constexpr XmlSchemaSimpleType(XmlSchemaSimpleType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleType", modifiers: "&&", def_value: None }]
constexpr XmlSchemaSimpleType(XmlSchemaSimpleType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaSimpleType(void* ptr) noexcept : System::Xml::Schema::XmlSchemaType(ptr) {
}


  constexpr XmlSchemaSimpleType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaSimpleType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaSimpleType& operator=(XmlSchemaSimpleType&& o) noexcept = default;
  constexpr XmlSchemaSimpleType& operator=(XmlSchemaSimpleType const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaSimpleTypeContent __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(System::Xml::Schema::XmlSchemaSimpleTypeContent value) ;

constexpr System::Xml::Schema::XmlSchemaSimpleTypeContent __get_content() const;


// Properties

 System::Xml::Schema::XmlSchemaSimpleTypeContent __declspec(property(get=get_Content, put=set_Content))  Content;


// Methods

// Ctor Parameters []
explicit XmlSchemaSimpleType() ;

/// @brief Method .ctor addr 0x2735774 size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method get_Content addr 0x2735778 size 0x8 virtual false final false
 System::Xml::Schema::XmlSchemaSimpleTypeContent get_Content() ;

/// @brief Method set_Content addr 0x2735780 size 0x8 virtual false final false
 void set_Content(System::Xml::Schema::XmlSchemaSimpleTypeContent value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaSimpleType);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaSimpleType, "System.Xml.Schema", "XmlSchemaSimpleType");
