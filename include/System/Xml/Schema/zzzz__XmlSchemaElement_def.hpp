#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
namespace {
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaElement;
}
// Type: System.Xml.Schema::XmlSchemaElement
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11676))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11667))
// CS Name: System.Xml.Schema.XmlSchemaElement
class CORDL_TYPE XmlSchemaElement : public ::System::Xml::Schema::XmlSchemaParticle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlSchemaElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaElement", modifiers: " const&", def_value: None }]
constexpr XmlSchemaElement(XmlSchemaElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaElement", modifiers: "&&", def_value: None }]
constexpr XmlSchemaElement(XmlSchemaElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaElement(void* ptr) noexcept : ::System::Xml::Schema::XmlSchemaParticle(ptr) {
}


  constexpr XmlSchemaElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaElement& operator=(XmlSchemaElement&& o) noexcept = default;
  constexpr XmlSchemaElement& operator=(XmlSchemaElement const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaElement, "System.Xml.Schema", "XmlSchemaElement");
