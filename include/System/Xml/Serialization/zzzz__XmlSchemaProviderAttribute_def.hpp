#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSchemaProviderAttribute;
}
// Type: System.Xml.Serialization::XmlSchemaProviderAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11532))
// CS Name: System.Xml.Serialization.XmlSchemaProviderAttribute
class CORDL_TYPE XmlSchemaProviderAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlSchemaProviderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: " const&", def_value: None }]
constexpr XmlSchemaProviderAttribute(XmlSchemaProviderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: "&&", def_value: None }]
constexpr XmlSchemaProviderAttribute(XmlSchemaProviderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaProviderAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr XmlSchemaProviderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaProviderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaProviderAttribute& operator=(XmlSchemaProviderAttribute&& o) noexcept = default;
  constexpr XmlSchemaProviderAttribute& operator=(XmlSchemaProviderAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__methodName, put=__set__methodName))  _methodName;

constexpr void __set__methodName(::StringW value) ;

constexpr ::StringW __get__methodName() const;

 bool __declspec(property(get=__get__isAny, put=__set__isAny))  _isAny;

constexpr void __set__isAny(bool value) ;

constexpr bool __get__isAny() const;


// Properties

 bool __declspec(property(put=set_IsAny))  IsAny;


// Methods

// Ctor Parameters [CppParam { name: "methodName", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlSchemaProviderAttribute(::StringW methodName) ;

/// @brief Method .ctor addr 0x27185f0 size 0x28 virtual false final false
 void _ctor(::StringW methodName) ;

/// @brief Method set_IsAny addr 0x2718618 size 0xc virtual false final false
 void set_IsAny(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Serialization
NEED_NO_BOX(System::Xml::Serialization::XmlSchemaProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Serialization::XmlSchemaProviderAttribute, "System.Xml.Serialization", "XmlSchemaProviderAttribute");
