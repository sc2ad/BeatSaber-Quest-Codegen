#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
namespace {
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
// Type: System.Xml.Schema::XmlSchemaGroupBase
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11676))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11669))
// CS Name: System.Xml.Schema.XmlSchemaGroupBase
class CORDL_TYPE XmlSchemaGroupBase : public ::System::Xml::Schema::XmlSchemaParticle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XmlSchemaGroupBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupBase", modifiers: " const&", def_value: None }]
constexpr XmlSchemaGroupBase(XmlSchemaGroupBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupBase", modifiers: "&&", def_value: None }]
constexpr XmlSchemaGroupBase(XmlSchemaGroupBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaGroupBase(void* ptr) noexcept : ::System::Xml::Schema::XmlSchemaParticle(ptr) {
}


  constexpr XmlSchemaGroupBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaGroupBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaGroupBase& operator=(XmlSchemaGroupBase&& o) noexcept = default;
  constexpr XmlSchemaGroupBase& operator=(XmlSchemaGroupBase const& o) noexcept = default;
                


// Properties

 ::System::Xml::Schema::XmlSchemaObjectCollection __declspec(property(get=get_Items))  Items;


// Methods

/// @brief Method get_Items addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::Schema::XmlSchemaObjectCollection get_Items() ;

// Ctor Parameters []
explicit XmlSchemaGroupBase() ;

/// @brief Method .ctor addr 0x273519c size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaGroupBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaGroupBase, "System.Xml.Schema", "XmlSchemaGroupBase");
