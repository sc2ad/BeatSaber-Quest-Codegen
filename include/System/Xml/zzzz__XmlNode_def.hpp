#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class ICloneable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNodeList;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Xml {
class XmlLinkedNode;
}
// Forward declare root types
namespace System::Xml {
class XmlNode;
}
// Type: System.Xml::XmlNode
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11462))
// CS Name: System.Xml.XmlNode
class CORDL_TYPE XmlNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNode", modifiers: " const&", def_value: None }]
constexpr XmlNode(XmlNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNode", modifiers: "&&", def_value: None }]
constexpr XmlNode(XmlNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNode& operator=(XmlNode&& o) noexcept = default;
  constexpr XmlNode& operator=(XmlNode const& o) noexcept = default;
                


// Fields

 System::Xml::XmlNode __declspec(property(get=__get_parentNode, put=__set_parentNode))  parentNode;

constexpr void __set_parentNode(System::Xml::XmlNode value) ;

constexpr System::Xml::XmlNode __get_parentNode() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 System::Xml::XmlNodeList __declspec(property(get=get_ChildNodes))  ChildNodes;

 System::Xml::XmlNode __declspec(property(get=get_PreviousSibling))  PreviousSibling;

 System::Xml::XmlNode __declspec(property(get=get_NextSibling))  NextSibling;

 System::Xml::XmlAttributeCollection __declspec(property(get=get_Attributes))  Attributes;

 System::Xml::XmlDocument __declspec(property(get=get_OwnerDocument))  OwnerDocument;

 System::Xml::XmlNode __declspec(property(get=get_FirstChild))  FirstChild;

 System::Xml::XmlNode __declspec(property(get=get_LastChild))  LastChild;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 System::Xml::XmlLinkedNode __declspec(property(get=get_LastNode, put=set_LastNode))  LastNode;

 bool __declspec(property(get=get_HasChildNodes))  HasChildNodes;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::StringW __declspec(property(get=get_InnerText, put=set_InnerText))  InnerText;

 ::StringW __declspec(property(put=set_InnerXml))  InnerXml;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;

 System::Xml::XmlDocument __declspec(property(get=get_Document))  Document;

 bool __declspec(property(get=get_IsText))  IsText;


// Methods

static System::Xml::XmlNode New_ctor() ;

/// @brief Method .ctor addr 0x26f40ec size 0x8 virtual false final false
 void _ctor() ;

static System::Xml::XmlNode New_ctor(System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f5acc size 0x84 virtual false final false
 void _ctor(System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Value addr 0x26fc310 size 0x8 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x26fc318 size 0xd4 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_NodeType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x26fc3ec size 0xec virtual true final false
 System::Xml::XmlNode get_ParentNode() ;

/// @brief Method get_ChildNodes addr 0x26fc4d8 size 0x64 virtual true final false
 System::Xml::XmlNodeList get_ChildNodes() ;

/// @brief Method get_PreviousSibling addr 0x26fc53c size 0x8 virtual true final false
 System::Xml::XmlNode get_PreviousSibling() ;

/// @brief Method get_NextSibling addr 0x26fc544 size 0x8 virtual true final false
 System::Xml::XmlNode get_NextSibling() ;

/// @brief Method get_Attributes addr 0x26fc54c size 0x8 virtual true final false
 System::Xml::XmlAttributeCollection get_Attributes() ;

/// @brief Method get_OwnerDocument addr 0x26fc554 size 0xb8 virtual true final false
 System::Xml::XmlDocument get_OwnerDocument() ;

/// @brief Method get_FirstChild addr 0x26fc60c size 0x24 virtual true final false
 System::Xml::XmlNode get_FirstChild() ;

/// @brief Method get_LastChild addr 0x26fc630 size 0x10 virtual true final false
 System::Xml::XmlNode get_LastChild() ;

/// @brief Method get_IsContainer addr 0x26fc640 size 0x8 virtual true final false
 bool get_IsContainer() ;

/// @brief Method get_LastNode addr 0x26fc648 size 0x8 virtual true final false
 System::Xml::XmlLinkedNode get_LastNode() ;

/// @brief Method set_LastNode addr 0x26fc650 size 0x4 virtual true final false
 void set_LastNode(System::Xml::XmlLinkedNode value) ;

/// @brief Method AncestorNode addr 0x26fc654 size 0x58 virtual false final false
 bool AncestorNode(System::Xml::XmlNode node) ;

/// @brief Method RemoveChild addr 0x26fc6ac size 0x37c virtual true final false
 System::Xml::XmlNode RemoveChild(System::Xml::XmlNode oldChild) ;

/// @brief Method AppendChild addr 0x26fca54 size 0x4b8 virtual true final false
 System::Xml::XmlNode AppendChild(System::Xml::XmlNode newChild) ;

/// @brief Method AppendChildForLoad addr 0x26fcf0c size 0x19c virtual true final false
 System::Xml::XmlNode AppendChildForLoad(System::Xml::XmlNode newChild, System::Xml::XmlDocument doc) ;

/// @brief Method IsValidChildType addr 0x26fd0a8 size 0x8 virtual true final false
 bool IsValidChildType(System::Xml::XmlNodeType type) ;

/// @brief Method CanInsertAfter addr 0x26fd0b0 size 0x8 virtual true final false
 bool CanInsertAfter(System::Xml::XmlNode newChild, System::Xml::XmlNode refChild) ;

/// @brief Method get_HasChildNodes addr 0x26fd0b8 size 0x24 virtual true final false
 bool get_HasChildNodes() ;

/// @brief Method CloneNode addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method CopyChildren addr 0x26fd0dc size 0xa0 virtual true final false
 void CopyChildren(System::Xml::XmlDocument doc, System::Xml::XmlNode container, bool deep) ;

/// @brief Method get_NamespaceURI addr 0x26fd17c size 0x48 virtual true final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x26fd1c4 size 0x48 virtual true final false
 ::StringW get_Prefix() ;

/// @brief Method get_LocalName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_IsReadOnly addr 0x26fd20c size 0x24 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method HasReadOnlyParent addr 0x26fd230 size 0xcc virtual false final false
static bool HasReadOnlyParent(System::Xml::XmlNode n) ;

/// @brief Method System.ICloneable.Clone addr 0x26fd2fc size 0x14 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26fd310 size 0x64 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method AppendChildText addr 0x26fd374 size 0x104 virtual false final false
 void AppendChildText(System::Text::StringBuilder builder) ;

/// @brief Method get_InnerText addr 0x26f5848 size 0x108 virtual true final false
 ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x26fd478 size 0xd0 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method set_InnerXml addr 0x26fd548 size 0x60 virtual true final false
 void set_InnerXml(::StringW value) ;

/// @brief Method get_BaseURI addr 0x26fd5a8 size 0x124 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method RemoveAll addr 0x26f56ec size 0x68 virtual true final false
 void RemoveAll() ;

/// @brief Method get_Document addr 0x26fd6cc size 0xac virtual false final false
 System::Xml::XmlDocument get_Document() ;

/// @brief Method GetPrefixOfNamespace addr 0x26fd778 size 0x60 virtual true final false
 ::StringW GetPrefixOfNamespace(::StringW namespaceURI) ;

/// @brief Method GetPrefixOfNamespaceStrict addr 0x26fd7d8 size 0x34c virtual false final false
 ::StringW GetPrefixOfNamespaceStrict(::StringW namespaceURI) ;

/// @brief Method SetParent addr 0x26f6054 size 0x30 virtual true final false
 void SetParent(System::Xml::XmlNode node) ;

/// @brief Method SetParentForLoad addr 0x26fdb24 size 0x8 virtual true final false
 void SetParentForLoad(System::Xml::XmlNode node) ;

/// @brief Method SplitName addr 0x26fdb2c size 0xcc virtual false final false
static void SplitName(::StringW name, ByRef<::StringW> prefix, ByRef<::StringW> localName) ;

/// @brief Method FindChild addr 0x26fdbf8 size 0x64 virtual true final false
 System::Xml::XmlNode FindChild(System::Xml::XmlNodeType type) ;

/// @brief Method GetEventArgs addr 0x26fdc5c size 0x12c virtual true final false
 System::Xml::XmlNodeChangedEventArgs GetEventArgs(System::Xml::XmlNode node, System::Xml::XmlNode oldParent, System::Xml::XmlNode newParent, ::StringW oldValue, ::StringW newValue, System::Xml::XmlNodeChangedAction action) ;

/// @brief Method BeforeEvent addr 0x26fdd88 size 0x44 virtual true final false
 void BeforeEvent(System::Xml::XmlNodeChangedEventArgs args) ;

/// @brief Method AfterEvent addr 0x26fddcc size 0x44 virtual true final false
 void AfterEvent(System::Xml::XmlNodeChangedEventArgs args) ;

/// @brief Method get_IsText addr 0x26fde10 size 0x8 virtual true final false
 bool get_IsText() ;

/// @brief Method NestTextNodes addr 0x26f53b0 size 0x18 virtual false final false
static void NestTextNodes(System::Xml::XmlNode prevNode, System::Xml::XmlNode nextNode) ;

/// @brief Method UnnestTextNodes addr 0x26fca28 size 0x2c virtual false final false
static void UnnestTextNodes(System::Xml::XmlNode prevNode, System::Xml::XmlNode nextNode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlNode);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlNode, "System.Xml", "XmlNode");
