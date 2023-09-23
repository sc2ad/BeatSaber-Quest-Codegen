#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSequence;
}
// Type: System.Xml.Schema::XmlSchemaSequence
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11669))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11677))
// CS Name: System.Xml.Schema.XmlSchemaSequence
class CORDL_TYPE XmlSchemaSequence : public System::Xml::Schema::XmlSchemaGroupBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XmlSchemaSequence() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: " const&", def_value: None }]
constexpr XmlSchemaSequence(XmlSchemaSequence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: "&&", def_value: None }]
constexpr XmlSchemaSequence(XmlSchemaSequence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaSequence(void* ptr) noexcept : System::Xml::Schema::XmlSchemaGroupBase(ptr) {
}


  constexpr XmlSchemaSequence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaSequence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaSequence& operator=(XmlSchemaSequence&& o) noexcept = default;
  constexpr XmlSchemaSequence& operator=(XmlSchemaSequence const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaObjectCollection __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(System::Xml::Schema::XmlSchemaObjectCollection value) ;

constexpr System::Xml::Schema::XmlSchemaObjectCollection __get_items() const;


// Properties

 System::Xml::Schema::XmlSchemaObjectCollection __declspec(property(get=get_Items))  Items;


// Methods

/// @brief Method get_Items addr 0x273543c size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaObjectCollection get_Items() ;

// Ctor Parameters []
explicit XmlSchemaSequence() ;

/// @brief Method .ctor addr 0x27341f4 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaSequence);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaSequence, "System.Xml.Schema", "XmlSchemaSequence");
