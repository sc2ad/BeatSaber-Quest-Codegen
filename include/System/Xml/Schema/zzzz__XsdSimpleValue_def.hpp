#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Forward declare root types
namespace System::Xml::Schema {
class XsdSimpleValue;
}
// Type: System.Xml.Schema::XsdSimpleValue
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11558))
// CS Name: System.Xml.Schema.XsdSimpleValue
class CORDL_TYPE XsdSimpleValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XsdSimpleValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "XsdSimpleValue", modifiers: " const&", def_value: None }]
constexpr XsdSimpleValue(XsdSimpleValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XsdSimpleValue", modifiers: "&&", def_value: None }]
constexpr XsdSimpleValue(XsdSimpleValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XsdSimpleValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XsdSimpleValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XsdSimpleValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XsdSimpleValue& operator=(XsdSimpleValue&& o) noexcept = default;
  constexpr XsdSimpleValue& operator=(XsdSimpleValue const& o) noexcept = default;
                


// Fields

 ::System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_xmlType, put=__set_xmlType))  xmlType;

constexpr void __set_xmlType(::System::Xml::Schema::XmlSchemaSimpleType value) ;

constexpr ::System::Xml::Schema::XmlSchemaSimpleType __get_xmlType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_typedValue, put=__set_typedValue))  typedValue;

constexpr void __set_typedValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_typedValue() const;


// Properties

 ::System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_XmlType))  XmlType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypedValue))  TypedValue;


// Methods

/// @brief Method get_XmlType addr 0x271d3bc size 0x8 virtual false final false
 ::System::Xml::Schema::XmlSchemaSimpleType get_XmlType() ;

/// @brief Method get_TypedValue addr 0x271d3c4 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_TypedValue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XsdSimpleValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdSimpleValue, "System.Xml.Schema", "XsdSimpleValue");
