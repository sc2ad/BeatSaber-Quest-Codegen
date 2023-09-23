#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaGroupRef;
}
// Type: System.Xml.Schema::XmlSchemaGroupRef
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11676))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11670))
// CS Name: System.Xml.Schema.XmlSchemaGroupRef
class CORDL_TYPE XmlSchemaGroupRef : public System::Xml::Schema::XmlSchemaParticle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlSchemaGroupRef() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupRef", modifiers: " const&", def_value: None }]
constexpr XmlSchemaGroupRef(XmlSchemaGroupRef const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupRef", modifiers: "&&", def_value: None }]
constexpr XmlSchemaGroupRef(XmlSchemaGroupRef&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaGroupRef(void* ptr) noexcept : System::Xml::Schema::XmlSchemaParticle(ptr) {
}


  constexpr XmlSchemaGroupRef& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaGroupRef& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaGroupRef& operator=(XmlSchemaGroupRef&& o) noexcept = default;
  constexpr XmlSchemaGroupRef& operator=(XmlSchemaGroupRef const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaGroupRef);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaGroupRef, "System.Xml.Schema", "XmlSchemaGroupRef");
