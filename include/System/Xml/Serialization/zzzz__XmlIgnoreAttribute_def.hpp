#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Xml::Serialization {
class XmlIgnoreAttribute;
}
// Type: System.Xml.Serialization::XmlIgnoreAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11531))
// CS Name: System.Xml.Serialization.XmlIgnoreAttribute
class CORDL_TYPE XmlIgnoreAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlIgnoreAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlIgnoreAttribute", modifiers: " const&", def_value: None }]
constexpr XmlIgnoreAttribute(XmlIgnoreAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlIgnoreAttribute", modifiers: "&&", def_value: None }]
constexpr XmlIgnoreAttribute(XmlIgnoreAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlIgnoreAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr XmlIgnoreAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlIgnoreAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlIgnoreAttribute& operator=(XmlIgnoreAttribute&& o) noexcept = default;
  constexpr XmlIgnoreAttribute& operator=(XmlIgnoreAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit XmlIgnoreAttribute() ;

/// @brief Method .ctor addr 0x27185e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Serialization
NEED_NO_BOX(System::Xml::Serialization::XmlIgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Serialization::XmlIgnoreAttribute, "System.Xml.Serialization", "XmlIgnoreAttribute");
