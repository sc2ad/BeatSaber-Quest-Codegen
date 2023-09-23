#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XAttribute;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XAttributeWrapper;
}
// Type: Newtonsoft.Json.Converters::XAttributeWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12007))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12008))
// CS Name: Newtonsoft.Json.Converters.XAttributeWrapper
class CORDL_TYPE XAttributeWrapper : public Newtonsoft::Json::Converters::XObjectWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XAttributeWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XAttributeWrapper", modifiers: " const&", def_value: None }]
constexpr XAttributeWrapper(XAttributeWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XAttributeWrapper", modifiers: "&&", def_value: None }]
constexpr XAttributeWrapper(XAttributeWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XAttributeWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XObjectWrapper(ptr) {
}


  constexpr XAttributeWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XAttributeWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XAttributeWrapper& operator=(XAttributeWrapper&& o) noexcept = default;
  constexpr XAttributeWrapper& operator=(XAttributeWrapper const& o) noexcept = default;
                


// Properties

 System::Xml::Linq::XAttribute __declspec(property(get=get_Attribute))  Attribute;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceUri))  NamespaceUri;

 Newtonsoft::Json::Converters::IXmlNode __declspec(property(get=get_ParentNode))  ParentNode;


// Methods

/// @brief Method get_Attribute addr 0x2544bb0 size 0x78 virtual false final false
 System::Xml::Linq::XAttribute get_Attribute() ;

// Ctor Parameters [CppParam { name: "attribute", ty: "System::Xml::Linq::XAttribute", modifiers: "", def_value: None }]
explicit XAttributeWrapper(System::Xml::Linq::XAttribute attribute) ;

/// @brief Method .ctor addr 0x2543dcc size 0x6c virtual false final false
 void _ctor(System::Xml::Linq::XAttribute attribute) ;

/// @brief Method get_Value addr 0x2544c28 size 0x1c virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2544c44 size 0x24 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_LocalName addr 0x2544c68 size 0x24 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceUri addr 0x2544c8c size 0x24 virtual true final false
 ::StringW get_NamespaceUri() ;

/// @brief Method get_ParentNode addr 0x2544cb0 size 0x44 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode get_ParentNode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XAttributeWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XAttributeWrapper, "Newtonsoft.Json.Converters", "XAttributeWrapper");
