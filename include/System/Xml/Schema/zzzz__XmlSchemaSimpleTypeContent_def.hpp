#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeContent;
}
// Type: System.Xml.Schema::XmlSchemaSimpleTypeContent
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11680))
// CS Name: System.Xml.Schema.XmlSchemaSimpleTypeContent
class CORDL_TYPE XmlSchemaSimpleTypeContent : public System::Xml::Schema::XmlSchemaAnnotated {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlSchemaSimpleTypeContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeContent", modifiers: " const&", def_value: None }]
constexpr XmlSchemaSimpleTypeContent(XmlSchemaSimpleTypeContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeContent", modifiers: "&&", def_value: None }]
constexpr XmlSchemaSimpleTypeContent(XmlSchemaSimpleTypeContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaSimpleTypeContent(void* ptr) noexcept : System::Xml::Schema::XmlSchemaAnnotated(ptr) {
}


  constexpr XmlSchemaSimpleTypeContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeContent& operator=(XmlSchemaSimpleTypeContent&& o) noexcept = default;
  constexpr XmlSchemaSimpleTypeContent& operator=(XmlSchemaSimpleTypeContent const& o) noexcept = default;
                


// Methods

static System::Xml::Schema::XmlSchemaSimpleTypeContent New_ctor() ;

/// @brief Method .ctor addr 0x2735788 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaSimpleTypeContent);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaSimpleTypeContent, "System.Xml.Schema", "XmlSchemaSimpleTypeContent");
