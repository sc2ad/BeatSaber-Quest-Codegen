#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlName;
}
// Forward declare root types
namespace System::Xml {
class XmlAttribute;
}
// Type: System.Xml::XmlAttribute
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11462))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11439))
// CS Name: System.Xml.XmlAttribute
class CORDL_TYPE XmlAttribute : public System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttribute", modifiers: " const&", def_value: None }]
constexpr XmlAttribute(XmlAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttribute", modifiers: "&&", def_value: None }]
constexpr XmlAttribute(XmlAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAttribute(void* ptr) noexcept : System::Xml::XmlNode(ptr) {
}


  constexpr XmlAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAttribute& operator=(XmlAttribute&& o) noexcept = default;
  constexpr XmlAttribute& operator=(XmlAttribute const& o) noexcept = default;
                


// Fields

 System::Xml::XmlName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::Xml::XmlName value) ;

constexpr System::Xml::XmlName __get_name() const;

 System::Xml::XmlLinkedNode __declspec(property(get=__get_lastChild, put=__set_lastChild))  lastChild;

constexpr void __set_lastChild(System::Xml::XmlLinkedNode value) ;

constexpr System::Xml::XmlLinkedNode __get_lastChild() const;


// Properties

 System::Xml::XmlName __declspec(property(get=get_XmlName, put=set_XmlName))  XmlName;

 System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::XmlDocument __declspec(property(get=get_OwnerDocument))  OwnerDocument;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 ::StringW __declspec(property(put=set_InnerText))  InnerText;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 System::Xml::XmlLinkedNode __declspec(property(get=get_LastNode, put=set_LastNode))  LastNode;

 bool __declspec(property(get=get_Specified))  Specified;

 System::Xml::XmlElement __declspec(property(get=get_OwnerElement))  OwnerElement;

 ::StringW __declspec(property(put=set_InnerXml))  InnerXml;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "System::Xml::XmlName", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlAttribute(System::Xml::XmlName name, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26ee03c size 0x110 virtual false final false
 void _ctor(System::Xml::XmlName name, System::Xml::XmlDocument doc) ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceURI", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26ee224 size 0x3c virtual false final false
 void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, System::Xml::XmlDocument doc) ;

/// @brief Method get_XmlName addr 0x26ee37c size 0x8 virtual false final false
 System::Xml::XmlName get_XmlName() ;

/// @brief Method set_XmlName addr 0x26ee384 size 0x8 virtual false final false
 void set_XmlName(System::Xml::XmlName value) ;

/// @brief Method CloneNode addr 0x26ee38c size 0xc8 virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_ParentNode addr 0x26ee454 size 0x8 virtual true final false
 System::Xml::XmlNode get_ParentNode() ;

/// @brief Method get_Name addr 0x26ee45c size 0x1c virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26ee478 size 0x1c virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x26ee494 size 0x1c virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x26ee4b0 size 0x1c virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_NodeType addr 0x26ee4cc size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_OwnerDocument addr 0x26ee4d4 size 0x1c virtual true final false
 System::Xml::XmlDocument get_OwnerDocument() ;

/// @brief Method get_Value addr 0x26ee4f0 size 0x10 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26ee500 size 0x10 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method set_InnerText addr 0x26ee510 size 0x64 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method PrepareOwnerElementInElementIdAttrMap addr 0x26ee574 size 0xb0 virtual false final false
 bool PrepareOwnerElementInElementIdAttrMap() ;

/// @brief Method ResetOwnerElementInElementIdAttrMap addr 0x26ee624 size 0x7c virtual false final false
 void ResetOwnerElementInElementIdAttrMap(::StringW oldInnerText) ;

/// @brief Method get_IsContainer addr 0x26ee854 size 0x8 virtual true final false
 bool get_IsContainer() ;

/// @brief Method AppendChildForLoad addr 0x26ee85c size 0x168 virtual true final false
 System::Xml::XmlNode AppendChildForLoad(System::Xml::XmlNode newChild, System::Xml::XmlDocument doc) ;

/// @brief Method get_LastNode addr 0x26eea80 size 0x8 virtual true final false
 System::Xml::XmlLinkedNode get_LastNode() ;

/// @brief Method set_LastNode addr 0x26eea88 size 0x8 virtual true final false
 void set_LastNode(System::Xml::XmlLinkedNode value) ;

/// @brief Method IsValidChildType addr 0x26eea90 size 0x18 virtual true final false
 bool IsValidChildType(System::Xml::XmlNodeType type) ;

/// @brief Method get_Specified addr 0x26eeaa8 size 0x8 virtual true final false
 bool get_Specified() ;

/// @brief Method RemoveChild addr 0x26eeab0 size 0x78 virtual true final false
 System::Xml::XmlNode RemoveChild(System::Xml::XmlNode oldChild) ;

/// @brief Method AppendChild addr 0x26eeb28 size 0x78 virtual true final false
 System::Xml::XmlNode AppendChild(System::Xml::XmlNode newChild) ;

/// @brief Method get_OwnerElement addr 0x26eeba0 size 0x7c virtual true final false
 System::Xml::XmlElement get_OwnerElement() ;

/// @brief Method set_InnerXml addr 0x26eec1c size 0x8c virtual true final false
 void set_InnerXml(::StringW value) ;

/// @brief Method get_BaseURI addr 0x26eeca8 size 0x98 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method SetParent addr 0x26eed40 size 0x8 virtual true final false
 void SetParent(System::Xml::XmlNode node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlAttribute, "System.Xml", "XmlAttribute");
