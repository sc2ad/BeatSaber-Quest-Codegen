#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
namespace {
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
// Type: System.Xml.Schema::XmlSchemaAttribute
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11659))
// CS Name: System.Xml.Schema.XmlSchemaAttribute
class CORDL_TYPE XmlSchemaAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlSchemaAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttribute", modifiers: " const&", def_value: None }]
constexpr XmlSchemaAttribute(XmlSchemaAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttribute", modifiers: "&&", def_value: None }]
constexpr XmlSchemaAttribute(XmlSchemaAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaAttribute(void* ptr) noexcept : ::System::Xml::Schema::XmlSchemaAnnotated(ptr) {
}


  constexpr XmlSchemaAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaAttribute& operator=(XmlSchemaAttribute&& o) noexcept = default;
  constexpr XmlSchemaAttribute& operator=(XmlSchemaAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAttribute, "System.Xml.Schema", "XmlSchemaAttribute");
