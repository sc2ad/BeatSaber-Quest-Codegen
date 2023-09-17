#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlElementAttribute;
}
// Type: System.Xml.Serialization::XmlElementAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11529))
// CS Name: System.Xml.Serialization.XmlElementAttribute
class CORDL_TYPE XmlElementAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlElementAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlElementAttribute", modifiers: " const&", def_value: None }]
constexpr XmlElementAttribute(XmlElementAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlElementAttribute", modifiers: "&&", def_value: None }]
constexpr XmlElementAttribute(XmlElementAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlElementAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr XmlElementAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlElementAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlElementAttribute& operator=(XmlElementAttribute&& o) noexcept = default;
  constexpr XmlElementAttribute& operator=(XmlElementAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_elementName, put=__set_elementName))  elementName;

constexpr void __set_elementName(::StringW value) ;

constexpr ::StringW __get_elementName() const;

 ::System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::System::Type value) ;

constexpr ::System::Type __get_type() const;

 int32_t __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(int32_t value) ;

constexpr int32_t __get_order() const;


// Methods

// Ctor Parameters [CppParam { name: "elementName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
explicit XmlElementAttribute(::StringW elementName, ::System::Type type) ;

/// @brief Method .ctor addr 0x271858c size 0x34 virtual false final false
 void _ctor(::StringW elementName, ::System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Serialization::XmlElementAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementAttribute, "System.Xml.Serialization", "XmlElementAttribute");
