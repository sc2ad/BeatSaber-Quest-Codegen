#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Type: Newtonsoft.Json.Converters::IXmlNode
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11999))
// CS Name: Newtonsoft.Json.Converters.IXmlNode
class CORDL_TYPE IXmlNode : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IXmlNode() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXmlNode(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_ChildNodes))  ChildNodes;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_Attributes))  Attributes;

 Newtonsoft::Json::Converters::IXmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_NamespaceUri))  NamespaceUri;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_WrappedNode))  WrappedNode;


// Methods

/// @brief Method get_NodeType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_LocalName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_ChildNodes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_ChildNodes() ;

/// @brief Method get_Attributes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_Attributes() ;

/// @brief Method get_ParentNode addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode get_ParentNode() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method AppendChild addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode AppendChild(Newtonsoft::Json::Converters::IXmlNode newChild) ;

/// @brief Method get_NamespaceUri addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_NamespaceUri() ;

/// @brief Method get_WrappedNode addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_WrappedNode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::IXmlNode);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::IXmlNode, "Newtonsoft.Json.Converters", "IXmlNode");
