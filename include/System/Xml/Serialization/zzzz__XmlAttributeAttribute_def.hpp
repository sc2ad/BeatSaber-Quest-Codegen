#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAttributeAttribute;
}
// Type: System.Xml.Serialization::XmlAttributeAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11528))
// CS Name: System.Xml.Serialization.XmlAttributeAttribute
class CORDL_TYPE XmlAttributeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlAttributeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: " const&", def_value: None }]
constexpr XmlAttributeAttribute(XmlAttributeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: "&&", def_value: None }]
constexpr XmlAttributeAttribute(XmlAttributeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAttributeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr XmlAttributeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAttributeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAttributeAttribute& operator=(XmlAttributeAttribute&& o) noexcept = default;
  constexpr XmlAttributeAttribute& operator=(XmlAttributeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_attributeName, put=__set_attributeName))  attributeName;

constexpr void __set_attributeName(::StringW value) ;

constexpr ::StringW __get_attributeName() const;


// Methods

static System::Xml::Serialization::XmlAttributeAttribute New_ctor(::StringW attributeName) ;

/// @brief Method .ctor addr 0x2718564 size 0x28 virtual false final false
 void _ctor(::StringW attributeName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Serialization
NEED_NO_BOX(System::Xml::Serialization::XmlAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Serialization::XmlAttributeAttribute, "System.Xml.Serialization", "XmlAttributeAttribute");
