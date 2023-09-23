#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeRestriction;
}
// Type: System.Xml.Schema::XmlSchemaSimpleTypeRestriction
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11680))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11682))
// CS Name: System.Xml.Schema.XmlSchemaSimpleTypeRestriction
class CORDL_TYPE XmlSchemaSimpleTypeRestriction : public System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlSchemaSimpleTypeRestriction() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeRestriction", modifiers: " const&", def_value: None }]
constexpr XmlSchemaSimpleTypeRestriction(XmlSchemaSimpleTypeRestriction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeRestriction", modifiers: "&&", def_value: None }]
constexpr XmlSchemaSimpleTypeRestriction(XmlSchemaSimpleTypeRestriction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaSimpleTypeRestriction(void* ptr) noexcept : System::Xml::Schema::XmlSchemaSimpleTypeContent(ptr) {
}


  constexpr XmlSchemaSimpleTypeRestriction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeRestriction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeRestriction& operator=(XmlSchemaSimpleTypeRestriction&& o) noexcept = default;
  constexpr XmlSchemaSimpleTypeRestriction& operator=(XmlSchemaSimpleTypeRestriction const& o) noexcept = default;
                


// Fields

 System::Xml::XmlQualifiedName __declspec(property(get=__get_baseTypeName, put=__set_baseTypeName))  baseTypeName;

constexpr void __set_baseTypeName(System::Xml::XmlQualifiedName value) ;

constexpr System::Xml::XmlQualifiedName __get_baseTypeName() const;

 System::Xml::Schema::XmlSchemaObjectCollection __declspec(property(get=__get_facets, put=__set_facets))  facets;

constexpr void __set_facets(System::Xml::Schema::XmlSchemaObjectCollection value) ;

constexpr System::Xml::Schema::XmlSchemaObjectCollection __get_facets() const;


// Properties

 System::Xml::XmlQualifiedName __declspec(property(put=set_BaseTypeName))  BaseTypeName;


// Methods

/// @brief Method set_BaseTypeName addr 0x2735810 size 0x98 virtual false final false
 void set_BaseTypeName(System::Xml::XmlQualifiedName value) ;

// Ctor Parameters []
explicit XmlSchemaSimpleTypeRestriction() ;

/// @brief Method .ctor addr 0x27358a8 size 0x9c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaSimpleTypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaSimpleTypeRestriction, "System.Xml.Schema", "XmlSchemaSimpleTypeRestriction");
