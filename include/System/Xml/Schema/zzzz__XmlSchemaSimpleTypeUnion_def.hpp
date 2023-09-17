#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
namespace {
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeUnion;
}
// Type: System.Xml.Schema::XmlSchemaSimpleTypeUnion
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11680))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11683))
// CS Name: System.Xml.Schema.XmlSchemaSimpleTypeUnion
class CORDL_TYPE XmlSchemaSimpleTypeUnion : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlSchemaSimpleTypeUnion() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeUnion", modifiers: " const&", def_value: None }]
constexpr XmlSchemaSimpleTypeUnion(XmlSchemaSimpleTypeUnion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeUnion", modifiers: "&&", def_value: None }]
constexpr XmlSchemaSimpleTypeUnion(XmlSchemaSimpleTypeUnion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaSimpleTypeUnion(void* ptr) noexcept : ::System::Xml::Schema::XmlSchemaSimpleTypeContent(ptr) {
}


  constexpr XmlSchemaSimpleTypeUnion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeUnion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeUnion& operator=(XmlSchemaSimpleTypeUnion&& o) noexcept = default;
  constexpr XmlSchemaSimpleTypeUnion& operator=(XmlSchemaSimpleTypeUnion const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeUnion);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeUnion, "System.Xml.Schema", "XmlSchemaSimpleTypeUnion");
