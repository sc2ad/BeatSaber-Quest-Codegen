#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeConvertorAttribute;
}
// Type: System.Xml.Serialization::XmlTypeConvertorAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11527))
// CS Name: System.Xml.Serialization.XmlTypeConvertorAttribute
class CORDL_TYPE XmlTypeConvertorAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlTypeConvertorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTypeConvertorAttribute", modifiers: " const&", def_value: None }]
constexpr XmlTypeConvertorAttribute(XmlTypeConvertorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlTypeConvertorAttribute", modifiers: "&&", def_value: None }]
constexpr XmlTypeConvertorAttribute(XmlTypeConvertorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlTypeConvertorAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr XmlTypeConvertorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlTypeConvertorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlTypeConvertorAttribute& operator=(XmlTypeConvertorAttribute&& o) noexcept = default;
  constexpr XmlTypeConvertorAttribute& operator=(XmlTypeConvertorAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Method_k__BackingField, put=__set__Method_k__BackingField))  _Method_k__BackingField;

constexpr void __set__Method_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Method_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Method))  Method;


// Methods

/// @brief Method set_Method addr 0x2718534 size 0x8 virtual false final false
 void set_Method(::StringW value) ;

// Ctor Parameters [CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlTypeConvertorAttribute(::StringW method) ;

/// @brief Method .ctor addr 0x271853c size 0x28 virtual false final false
 void _ctor(::StringW method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Serialization
NEED_NO_BOX(System::Xml::Serialization::XmlTypeConvertorAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Serialization::XmlTypeConvertorAttribute, "System.Xml.Serialization", "XmlTypeConvertorAttribute");
