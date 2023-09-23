#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlNodeWrapper;
}
// Type: Newtonsoft.Json.Converters::XmlNodeWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11994))
// CS Name: Newtonsoft.Json.Converters.XmlNodeWrapper
class CORDL_TYPE XmlNodeWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlNodeWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeWrapper", modifiers: " const&", def_value: None }]
constexpr XmlNodeWrapper(XmlNodeWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeWrapper", modifiers: "&&", def_value: None }]
constexpr XmlNodeWrapper(XmlNodeWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNodeWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlNodeWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNodeWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNodeWrapper& operator=(XmlNodeWrapper&& o) noexcept = default;
  constexpr XmlNodeWrapper& operator=(XmlNodeWrapper const& o) noexcept = default;
                


// Fields

 System::Xml::XmlNode __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(System::Xml::XmlNode value) ;

constexpr System::Xml::XmlNode __get__node() const;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=__get__childNodes, put=__set__childNodes))  _childNodes;

constexpr void __set__childNodes(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __get__childNodes() const;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=__get__attributes, put=__set__attributes))  _attributes;

constexpr void __set__attributes(System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __get__attributes() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_WrappedNode))  WrappedNode;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_ChildNodes))  ChildNodes;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_Attributes))  Attributes;

 Newtonsoft::Json::Converters::IXmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(get=get_NamespaceUri))  NamespaceUri;


// Methods

// Ctor Parameters [CppParam { name: "node", ty: "System::Xml::XmlNode", modifiers: "", def_value: None }]
explicit XmlNodeWrapper(System::Xml::XmlNode node) ;

/// @brief Method .ctor addr 0x25417c0 size 0x28 virtual false final false
 void _ctor(System::Xml::XmlNode node) ;

/// @brief Method get_WrappedNode addr 0x25422b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_WrappedNode() ;

/// @brief Method get_NodeType addr 0x25422bc size 0x20 virtual true final true
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_LocalName addr 0x25422dc size 0x24 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_ChildNodes addr 0x2542300 size 0x3dc virtual true final true
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_ChildNodes() ;

/// @brief Method WrapNode addr 0x25426dc size 0x184 virtual false final false
static Newtonsoft::Json::Converters::IXmlNode WrapNode(System::Xml::XmlNode node) ;

/// @brief Method get_Attributes addr 0x2542860 size 0x424 virtual true final true
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_Attributes() ;

/// @brief Method get_ParentNode addr 0x2542c84 size 0xa0 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode get_ParentNode() ;

/// @brief Method get_Value addr 0x2542d24 size 0x20 virtual true final true
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2541ee0 size 0x20 virtual true final true
 void set_Value(::StringW value) ;

/// @brief Method AppendChild addr 0x2542d44 size 0xa4 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode AppendChild(Newtonsoft::Json::Converters::IXmlNode newChild) ;

/// @brief Method get_NamespaceUri addr 0x2542de8 size 0x24 virtual true final true
 ::StringW get_NamespaceUri() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XmlNodeWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XmlNodeWrapper, "Newtonsoft.Json.Converters", "XmlNodeWrapper");
