#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace System::Xml::Linq {
class XElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XElementWrapper;
}
// Type: Newtonsoft.Json.Converters::XElementWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12009))
// CS Name: Newtonsoft.Json.Converters.XElementWrapper
class CORDL_TYPE XElementWrapper : public Newtonsoft::Json::Converters::XContainerWrapper {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlElement
constexpr operator  Newtonsoft::Json::Converters::IXmlElement() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XElementWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XElementWrapper", modifiers: " const&", def_value: None }]
constexpr XElementWrapper(XElementWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XElementWrapper", modifiers: "&&", def_value: None }]
constexpr XElementWrapper(XElementWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XElementWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XContainerWrapper(ptr) {
}


  constexpr XElementWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XElementWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XElementWrapper& operator=(XElementWrapper&& o) noexcept = default;
  constexpr XElementWrapper& operator=(XElementWrapper const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=__get__attributes, put=__set__attributes))  _attributes;

constexpr void __set__attributes(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __get__attributes() const;


// Properties

 System::Xml::Linq::XElement __declspec(property(get=get_Element))  Element;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_Attributes))  Attributes;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceUri))  NamespaceUri;

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;


// Methods

/// @brief Method get_Element addr 0x2544cf4 size 0x78 virtual false final false
 System::Xml::Linq::XElement get_Element() ;

static Newtonsoft::Json::Converters::XElementWrapper New_ctor(System::Xml::Linq::XElement element) ;

/// @brief Method .ctor addr 0x2543c58 size 0x4 virtual false final false
 void _ctor(System::Xml::Linq::XElement element) ;

/// @brief Method SetAttributeNode addr 0x2544d6c size 0xa4 virtual true final true
 void SetAttributeNode(Newtonsoft::Json::Converters::IXmlNode attribute) ;

/// @brief Method get_Attributes addr 0x2544e10 size 0x808 virtual true final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_Attributes() ;

/// @brief Method AppendChild addr 0x2545658 size 0x18 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode AppendChild(Newtonsoft::Json::Converters::IXmlNode newChild) ;

/// @brief Method get_Value addr 0x2545670 size 0x1c virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x254568c size 0x24 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_LocalName addr 0x25456b0 size 0x24 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceUri addr 0x25456d4 size 0x24 virtual true final false
 ::StringW get_NamespaceUri() ;

/// @brief Method GetPrefixOfNamespace addr 0x2545618 size 0x40 virtual true final true
 ::StringW GetPrefixOfNamespace(::StringW namespaceUri) ;

/// @brief Method get_IsEmpty addr 0x25456f8 size 0x1c virtual true final true
 bool get_IsEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XElementWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XElementWrapper, "Newtonsoft.Json.Converters", "XElementWrapper");
