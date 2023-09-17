#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
namespace {
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaChoice;
}
// Type: System.Xml.Schema::XmlSchemaChoice
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11669))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11660))
// CS Name: System.Xml.Schema.XmlSchemaChoice
class CORDL_TYPE XmlSchemaChoice : public ::System::Xml::Schema::XmlSchemaGroupBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XmlSchemaChoice() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaChoice", modifiers: " const&", def_value: None }]
constexpr XmlSchemaChoice(XmlSchemaChoice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaChoice", modifiers: "&&", def_value: None }]
constexpr XmlSchemaChoice(XmlSchemaChoice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaChoice(void* ptr) noexcept : ::System::Xml::Schema::XmlSchemaGroupBase(ptr) {
}


  constexpr XmlSchemaChoice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaChoice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaChoice& operator=(XmlSchemaChoice&& o) noexcept = default;
  constexpr XmlSchemaChoice& operator=(XmlSchemaChoice const& o) noexcept = default;
                


// Fields

 ::System::Xml::Schema::XmlSchemaObjectCollection __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::System::Xml::Schema::XmlSchemaObjectCollection value) ;

constexpr ::System::Xml::Schema::XmlSchemaObjectCollection __get_items() const;


// Properties

 ::System::Xml::Schema::XmlSchemaObjectCollection __declspec(property(get=get_Items))  Items;


// Methods

/// @brief Method get_Items addr 0x2733970 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaObjectCollection get_Items() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaChoice);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaChoice, "System.Xml.Schema", "XmlSchemaChoice");
