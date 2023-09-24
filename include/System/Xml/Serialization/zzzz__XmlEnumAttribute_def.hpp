#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Xml::Serialization {
class XmlEnumAttribute;
}
// Type: System.Xml.Serialization::XmlEnumAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11530))
// CS Name: System.Xml.Serialization.XmlEnumAttribute
class CORDL_TYPE XmlEnumAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlEnumAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEnumAttribute", modifiers: " const&", def_value: None }]
constexpr XmlEnumAttribute(XmlEnumAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEnumAttribute", modifiers: "&&", def_value: None }]
constexpr XmlEnumAttribute(XmlEnumAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlEnumAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr XmlEnumAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlEnumAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlEnumAttribute& operator=(XmlEnumAttribute&& o) noexcept = default;
  constexpr XmlEnumAttribute& operator=(XmlEnumAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;


// Methods

static System::Xml::Serialization::XmlEnumAttribute New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x27185c0 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Serialization
NEED_NO_BOX(System::Xml::Serialization::XmlEnumAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Serialization::XmlEnumAttribute, "System.Xml.Serialization", "XmlEnumAttribute");
