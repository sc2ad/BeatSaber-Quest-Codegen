#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlComment;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlImplementation;
}
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
namespace System::Xml {
class XmlEntity;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml {
class EmptyEnumerator;
}
namespace System::Xml {
class XmlSignificantWhitespace;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml {
class XmlText;
}
namespace System::Xml {
class XmlDocumentFragment;
}
namespace System {
class WeakReference;
}
namespace System::Xml {
class XmlProcessingInstruction;
}
namespace System::Xml {
class DomNameTable;
}
namespace System::Xml {
class XmlNodeChangedEventHandler;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlTextReader;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class XmlWhitespace;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlEntityReference;
}
namespace System::Xml {
class XmlCDataSection;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml {
class XmlName;
}
// Forward declare root types
namespace System::Xml {
class XmlDocument;
}
// Type: System.Xml::XmlDocument
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11462))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11447))
// CS Name: System.Xml.XmlDocument
class CORDL_TYPE XmlDocument : public ::System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x138};

virtual ~XmlDocument() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocument", modifiers: " const&", def_value: None }]
constexpr XmlDocument(XmlDocument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocument", modifiers: "&&", def_value: None }]
constexpr XmlDocument(XmlDocument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDocument(void* ptr) noexcept : ::System::Xml::XmlNode(ptr) {
}


  constexpr XmlDocument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDocument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDocument& operator=(XmlDocument&& o) noexcept = default;
  constexpr XmlDocument& operator=(XmlDocument const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlImplementation __declspec(property(get=__get_implementation, put=__set_implementation))  implementation;

constexpr void __set_implementation(::System::Xml::XmlImplementation value) ;

constexpr ::System::Xml::XmlImplementation __get_implementation() const;

 ::System::Xml::DomNameTable __declspec(property(get=__get_domNameTable, put=__set_domNameTable))  domNameTable;

constexpr void __set_domNameTable(::System::Xml::DomNameTable value) ;

constexpr ::System::Xml::DomNameTable __get_domNameTable() const;

 ::System::Xml::XmlLinkedNode __declspec(property(get=__get_lastChild, put=__set_lastChild))  lastChild;

constexpr void __set_lastChild(::System::Xml::XmlLinkedNode value) ;

constexpr ::System::Xml::XmlLinkedNode __get_lastChild() const;

 ::System::Xml::XmlNamedNodeMap __declspec(property(get=__get_entities, put=__set_entities))  entities;

constexpr void __set_entities(::System::Xml::XmlNamedNodeMap value) ;

constexpr ::System::Xml::XmlNamedNodeMap __get_entities() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_htElementIdMap, put=__set_htElementIdMap))  htElementIdMap;

constexpr void __set_htElementIdMap(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_htElementIdMap() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_htElementIDAttrDecl, put=__set_htElementIDAttrDecl))  htElementIDAttrDecl;

constexpr void __set_htElementIDAttrDecl(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_htElementIDAttrDecl() const;

 ::System::Xml::Schema::SchemaInfo __declspec(property(get=__get_schemaInfo, put=__set_schemaInfo))  schemaInfo;

constexpr void __set_schemaInfo(::System::Xml::Schema::SchemaInfo value) ;

constexpr ::System::Xml::Schema::SchemaInfo __get_schemaInfo() const;

 ::System::Xml::Schema::XmlSchemaSet __declspec(property(get=__get_schemas, put=__set_schemas))  schemas;

constexpr void __set_schemas(::System::Xml::Schema::XmlSchemaSet value) ;

constexpr ::System::Xml::Schema::XmlSchemaSet __get_schemas() const;

 bool __declspec(property(get=__get_reportValidity, put=__set_reportValidity))  reportValidity;

constexpr void __set_reportValidity(bool value) ;

constexpr bool __get_reportValidity() const;

 bool __declspec(property(get=__get_actualLoadingStatus, put=__set_actualLoadingStatus))  actualLoadingStatus;

constexpr void __set_actualLoadingStatus(bool value) ;

constexpr bool __get_actualLoadingStatus() const;

 ::System::Xml::XmlNodeChangedEventHandler __declspec(property(get=__get_onNodeInsertingDelegate, put=__set_onNodeInsertingDelegate))  onNodeInsertingDelegate;

constexpr void __set_onNodeInsertingDelegate(::System::Xml::XmlNodeChangedEventHandler value) ;

constexpr ::System::Xml::XmlNodeChangedEventHandler __get_onNodeInsertingDelegate() const;

 ::System::Xml::XmlNodeChangedEventHandler __declspec(property(get=__get_onNodeInsertedDelegate, put=__set_onNodeInsertedDelegate))  onNodeInsertedDelegate;

constexpr void __set_onNodeInsertedDelegate(::System::Xml::XmlNodeChangedEventHandler value) ;

constexpr ::System::Xml::XmlNodeChangedEventHandler __get_onNodeInsertedDelegate() const;

 ::System::Xml::XmlNodeChangedEventHandler __declspec(property(get=__get_onNodeRemovingDelegate, put=__set_onNodeRemovingDelegate))  onNodeRemovingDelegate;

constexpr void __set_onNodeRemovingDelegate(::System::Xml::XmlNodeChangedEventHandler value) ;

constexpr ::System::Xml::XmlNodeChangedEventHandler __get_onNodeRemovingDelegate() const;

 ::System::Xml::XmlNodeChangedEventHandler __declspec(property(get=__get_onNodeRemovedDelegate, put=__set_onNodeRemovedDelegate))  onNodeRemovedDelegate;

constexpr void __set_onNodeRemovedDelegate(::System::Xml::XmlNodeChangedEventHandler value) ;

constexpr ::System::Xml::XmlNodeChangedEventHandler __get_onNodeRemovedDelegate() const;

 ::System::Xml::XmlNodeChangedEventHandler __declspec(property(get=__get_onNodeChangingDelegate, put=__set_onNodeChangingDelegate))  onNodeChangingDelegate;

constexpr void __set_onNodeChangingDelegate(::System::Xml::XmlNodeChangedEventHandler value) ;

constexpr ::System::Xml::XmlNodeChangedEventHandler __get_onNodeChangingDelegate() const;

 ::System::Xml::XmlNodeChangedEventHandler __declspec(property(get=__get_onNodeChangedDelegate, put=__set_onNodeChangedDelegate))  onNodeChangedDelegate;

constexpr void __set_onNodeChangedDelegate(::System::Xml::XmlNodeChangedEventHandler value) ;

constexpr ::System::Xml::XmlNodeChangedEventHandler __get_onNodeChangedDelegate() const;

 bool __declspec(property(get=__get_fEntRefNodesPresent, put=__set_fEntRefNodesPresent))  fEntRefNodesPresent;

constexpr void __set_fEntRefNodesPresent(bool value) ;

constexpr bool __get_fEntRefNodesPresent() const;

 bool __declspec(property(get=__get_fCDataNodesPresent, put=__set_fCDataNodesPresent))  fCDataNodesPresent;

constexpr void __set_fCDataNodesPresent(bool value) ;

constexpr bool __get_fCDataNodesPresent() const;

 bool __declspec(property(get=__get_preserveWhitespace, put=__set_preserveWhitespace))  preserveWhitespace;

constexpr void __set_preserveWhitespace(bool value) ;

constexpr bool __get_preserveWhitespace() const;

 bool __declspec(property(get=__get_isLoading, put=__set_isLoading))  isLoading;

constexpr void __set_isLoading(bool value) ;

constexpr bool __get_isLoading() const;

 ::StringW __declspec(property(get=__get_strDocumentName, put=__set_strDocumentName))  strDocumentName;

constexpr void __set_strDocumentName(::StringW value) ;

constexpr ::StringW __get_strDocumentName() const;

 ::StringW __declspec(property(get=__get_strDocumentFragmentName, put=__set_strDocumentFragmentName))  strDocumentFragmentName;

constexpr void __set_strDocumentFragmentName(::StringW value) ;

constexpr ::StringW __get_strDocumentFragmentName() const;

 ::StringW __declspec(property(get=__get_strCommentName, put=__set_strCommentName))  strCommentName;

constexpr void __set_strCommentName(::StringW value) ;

constexpr ::StringW __get_strCommentName() const;

 ::StringW __declspec(property(get=__get_strTextName, put=__set_strTextName))  strTextName;

constexpr void __set_strTextName(::StringW value) ;

constexpr ::StringW __get_strTextName() const;

 ::StringW __declspec(property(get=__get_strCDataSectionName, put=__set_strCDataSectionName))  strCDataSectionName;

constexpr void __set_strCDataSectionName(::StringW value) ;

constexpr ::StringW __get_strCDataSectionName() const;

 ::StringW __declspec(property(get=__get_strEntityName, put=__set_strEntityName))  strEntityName;

constexpr void __set_strEntityName(::StringW value) ;

constexpr ::StringW __get_strEntityName() const;

 ::StringW __declspec(property(get=__get_strID, put=__set_strID))  strID;

constexpr void __set_strID(::StringW value) ;

constexpr ::StringW __get_strID() const;

 ::StringW __declspec(property(get=__get_strXmlns, put=__set_strXmlns))  strXmlns;

constexpr void __set_strXmlns(::StringW value) ;

constexpr ::StringW __get_strXmlns() const;

 ::StringW __declspec(property(get=__get_strXml, put=__set_strXml))  strXml;

constexpr void __set_strXml(::StringW value) ;

constexpr ::StringW __get_strXml() const;

 ::StringW __declspec(property(get=__get_strSpace, put=__set_strSpace))  strSpace;

constexpr void __set_strSpace(::StringW value) ;

constexpr ::StringW __get_strSpace() const;

 ::StringW __declspec(property(get=__get_strLang, put=__set_strLang))  strLang;

constexpr void __set_strLang(::StringW value) ;

constexpr ::StringW __get_strLang() const;

 ::StringW __declspec(property(get=__get_strEmpty, put=__set_strEmpty))  strEmpty;

constexpr void __set_strEmpty(::StringW value) ;

constexpr ::StringW __get_strEmpty() const;

 ::StringW __declspec(property(get=__get_strNonSignificantWhitespaceName, put=__set_strNonSignificantWhitespaceName))  strNonSignificantWhitespaceName;

constexpr void __set_strNonSignificantWhitespaceName(::StringW value) ;

constexpr ::StringW __get_strNonSignificantWhitespaceName() const;

 ::StringW __declspec(property(get=__get_strSignificantWhitespaceName, put=__set_strSignificantWhitespaceName))  strSignificantWhitespaceName;

constexpr void __set_strSignificantWhitespaceName(::StringW value) ;

constexpr ::StringW __get_strSignificantWhitespaceName() const;

 ::StringW __declspec(property(get=__get_strReservedXmlns, put=__set_strReservedXmlns))  strReservedXmlns;

constexpr void __set_strReservedXmlns(::StringW value) ;

constexpr ::StringW __get_strReservedXmlns() const;

 ::StringW __declspec(property(get=__get_strReservedXml, put=__set_strReservedXml))  strReservedXml;

constexpr void __set_strReservedXml(::StringW value) ;

constexpr ::StringW __get_strReservedXml() const;

 ::StringW __declspec(property(get=__get_baseURI, put=__set_baseURI))  baseURI;

constexpr void __set_baseURI(::StringW value) ;

constexpr ::StringW __get_baseURI() const;

 ::System::Xml::XmlResolver __declspec(property(get=__get_resolver, put=__set_resolver))  resolver;

constexpr void __set_resolver(::System::Xml::XmlResolver value) ;

constexpr ::System::Xml::XmlResolver __get_resolver() const;

 bool __declspec(property(get=__get_bSetResolver, put=__set_bSetResolver))  bSetResolver;

constexpr void __set_bSetResolver(bool value) ;

constexpr bool __get_bSetResolver() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_objLock, put=__set_objLock))  objLock;

constexpr void __set_objLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_objLock() const;

static ::System::Xml::EmptyEnumerator __declspec(property(get=__get_EmptyEnumerator, put=__set_EmptyEnumerator))  EmptyEnumerator;

static void __set_EmptyEnumerator(::System::Xml::EmptyEnumerator value) ;

static ::System::Xml::EmptyEnumerator __get_EmptyEnumerator() ;

static ::System::Xml::Schema::IXmlSchemaInfo __declspec(property(get=__get_NotKnownSchemaInfo, put=__set_NotKnownSchemaInfo))  NotKnownSchemaInfo;

static void __set_NotKnownSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo value) ;

static ::System::Xml::Schema::IXmlSchemaInfo __get_NotKnownSchemaInfo() ;

static ::System::Xml::Schema::IXmlSchemaInfo __declspec(property(get=__get_ValidSchemaInfo, put=__set_ValidSchemaInfo))  ValidSchemaInfo;

static void __set_ValidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo value) ;

static ::System::Xml::Schema::IXmlSchemaInfo __get_ValidSchemaInfo() ;

static ::System::Xml::Schema::IXmlSchemaInfo __declspec(property(get=__get_InvalidSchemaInfo, put=__set_InvalidSchemaInfo))  InvalidSchemaInfo;

static void __set_InvalidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo value) ;

static ::System::Xml::Schema::IXmlSchemaInfo __get_InvalidSchemaInfo() ;


// Properties

 ::System::Xml::Schema::SchemaInfo __declspec(property(get=get_DtdSchemaInfo, put=set_DtdSchemaInfo))  DtdSchemaInfo;

 ::System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 ::System::Xml::XmlNode __declspec(property(get=get_ParentNode))  ParentNode;

 ::System::Xml::XmlDocumentType __declspec(property(get=get_DocumentType))  DocumentType;

 ::System::Xml::XmlDeclaration __declspec(property(get=get_Declaration))  Declaration;

 ::System::Xml::XmlImplementation __declspec(property(get=get_Implementation))  Implementation;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::System::Xml::XmlElement __declspec(property(get=get_DocumentElement))  DocumentElement;

 bool __declspec(property(get=get_IsContainer))  IsContainer;

 ::System::Xml::XmlLinkedNode __declspec(property(get=get_LastNode, put=set_LastNode))  LastNode;

 ::System::Xml::XmlDocument __declspec(property(get=get_OwnerDocument))  OwnerDocument;

 ::System::Xml::Schema::XmlSchemaSet __declspec(property(put=set_Schemas))  Schemas;

 bool __declspec(property(get=get_CanReportValidity))  CanReportValidity;

 bool __declspec(property(get=get_HasSetResolver))  HasSetResolver;

 ::System::Xml::XmlResolver __declspec(property(put=set_XmlResolver))  XmlResolver;

 ::System::Xml::XmlNameTable __declspec(property(get=get_NameTable))  NameTable;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::System::Xml::XmlNamedNodeMap __declspec(property(get=get_Entities, put=set_Entities))  Entities;

 bool __declspec(property(get=get_IsLoading, put=set_IsLoading))  IsLoading;

 bool __declspec(property(get=get_ActualLoadingStatus))  ActualLoadingStatus;

 ::StringW __declspec(property(put=set_InnerText))  InnerText;

 ::StringW __declspec(property(put=set_InnerXml))  InnerXml;

 ::StringW __declspec(property(get=get_BaseURI))  BaseURI;


// Methods

// Ctor Parameters []
explicit XmlDocument() ;

/// @brief Method .ctor addr 0x26f0f04 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "imp", ty: "::System::Xml::XmlImplementation", modifiers: "", def_value: None }]
explicit XmlDocument(::System::Xml::XmlImplementation imp) ;

/// @brief Method .ctor addr 0x26f0f68 size 0x3c8 virtual false final false
 void _ctor(::System::Xml::XmlImplementation imp) ;

/// @brief Method get_DtdSchemaInfo addr 0x26f1330 size 0x8 virtual false final false
 ::System::Xml::Schema::SchemaInfo get_DtdSchemaInfo() ;

/// @brief Method set_DtdSchemaInfo addr 0x26f1338 size 0x8 virtual false final false
 void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo value) ;

/// @brief Method CheckName addr 0x26ee14c size 0xd8 virtual false final false
static void CheckName(::StringW name) ;

/// @brief Method AddXmlName addr 0x26f1340 size 0x18 virtual false final false
 ::System::Xml::XmlName AddXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method GetXmlName addr 0x26f1358 size 0x18 virtual false final false
 ::System::Xml::XmlName GetXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method AddAttrXmlName addr 0x26ee260 size 0x11c virtual false final false
 ::System::Xml::XmlName AddAttrXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method AddIdInfo addr 0x26f1370 size 0xc0 virtual false final false
 bool AddIdInfo(::System::Xml::XmlName eleName, ::System::Xml::XmlName attrName) ;

/// @brief Method GetIDInfoByElement_ addr 0x26f1430 size 0xd4 virtual false final false
 ::System::Xml::XmlName GetIDInfoByElement_(::System::Xml::XmlName eleName) ;

/// @brief Method GetIDInfoByElement addr 0x26efdcc size 0x14 virtual false final false
 ::System::Xml::XmlName GetIDInfoByElement(::System::Xml::XmlName eleName) ;

/// @brief Method GetElement addr 0x26f1504 size 0x650 virtual false final false
 ::System::WeakReference GetElement(::System::Collections::ArrayList elementList, ::System::Xml::XmlElement elem) ;

/// @brief Method AddElementWithId addr 0x26efde0 size 0x1f4 virtual false final false
 void AddElementWithId(::StringW id, ::System::Xml::XmlElement elem) ;

/// @brief Method RemoveElementWithId addr 0x26effd4 size 0x138 virtual false final false
 void RemoveElementWithId(::StringW id, ::System::Xml::XmlElement elem) ;

/// @brief Method CloneNode addr 0x26f1b54 size 0x60 virtual true final false
 ::System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_NodeType addr 0x26f1c50 size 0x8 virtual true final false
 ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_ParentNode addr 0x26f1c58 size 0x8 virtual true final false
 ::System::Xml::XmlNode get_ParentNode() ;

/// @brief Method get_DocumentType addr 0x26f1c60 size 0x8c virtual true final false
 ::System::Xml::XmlDocumentType get_DocumentType() ;

/// @brief Method get_Declaration addr 0x26f1cec size 0xa4 virtual true final false
 ::System::Xml::XmlDeclaration get_Declaration() ;

/// @brief Method get_Implementation addr 0x26f1d90 size 0x8 virtual false final false
 ::System::Xml::XmlImplementation get_Implementation() ;

/// @brief Method get_Name addr 0x26f1d98 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26f1da0 size 0x8 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_DocumentElement addr 0x26f1da8 size 0x8c virtual false final false
 ::System::Xml::XmlElement get_DocumentElement() ;

/// @brief Method get_IsContainer addr 0x26f1e34 size 0x8 virtual true final false
 bool get_IsContainer() ;

/// @brief Method get_LastNode addr 0x26f1e3c size 0x8 virtual true final false
 ::System::Xml::XmlLinkedNode get_LastNode() ;

/// @brief Method set_LastNode addr 0x26f1e44 size 0x8 virtual true final false
 void set_LastNode(::System::Xml::XmlLinkedNode value) ;

/// @brief Method get_OwnerDocument addr 0x26f1e4c size 0x8 virtual true final false
 ::System::Xml::XmlDocument get_OwnerDocument() ;

/// @brief Method set_Schemas addr 0x26f1e54 size 0x8 virtual false final false
 void set_Schemas(::System::Xml::Schema::XmlSchemaSet value) ;

/// @brief Method get_CanReportValidity addr 0x26f1e5c size 0x8 virtual false final false
 bool get_CanReportValidity() ;

/// @brief Method get_HasSetResolver addr 0x26f1e64 size 0x8 virtual false final false
 bool get_HasSetResolver() ;

/// @brief Method GetResolver addr 0x26f1e6c size 0x8 virtual false final false
 ::System::Xml::XmlResolver GetResolver() ;

/// @brief Method set_XmlResolver addr 0x26f1e74 size 0x188 virtual true final false
 void set_XmlResolver(::System::Xml::XmlResolver value) ;

/// @brief Method IsValidChildType addr 0x26f1ffc size 0xf0 virtual true final false
 bool IsValidChildType(::System::Xml::XmlNodeType type) ;

/// @brief Method HasNodeTypeInPrevSiblings addr 0x26f20ec size 0xb0 virtual false final false
 bool HasNodeTypeInPrevSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode refNode) ;

/// @brief Method HasNodeTypeInNextSiblings addr 0x26f219c size 0x64 virtual false final false
 bool HasNodeTypeInNextSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode refNode) ;

/// @brief Method CanInsertAfter addr 0x26f2200 size 0xf8 virtual true final false
 bool CanInsertAfter(::System::Xml::XmlNode newChild, ::System::Xml::XmlNode refChild) ;

/// @brief Method CreateAttribute addr 0x26f22f8 size 0xc0 virtual false final false
 ::System::Xml::XmlAttribute CreateAttribute(::StringW name) ;

/// @brief Method SetDefaultNamespace addr 0x26f23b8 size 0x90 virtual false final false
 void SetDefaultNamespace(::StringW prefix, ::StringW localName, ByRef<::StringW> namespaceURI) ;

/// @brief Method CreateCDataSection addr 0x26f2448 size 0x7c virtual true final false
 ::System::Xml::XmlCDataSection CreateCDataSection(::StringW data) ;

/// @brief Method CreateComment addr 0x26f24c4 size 0x74 virtual true final false
 ::System::Xml::XmlComment CreateComment(::StringW data) ;

/// @brief Method CreateDocumentType addr 0x26f2538 size 0x94 virtual true final false
 ::System::Xml::XmlDocumentType CreateDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) ;

/// @brief Method CreateDocumentFragment addr 0x26f25cc size 0x64 virtual true final false
 ::System::Xml::XmlDocumentFragment CreateDocumentFragment() ;

/// @brief Method CreateElement addr 0x26f2630 size 0xb0 virtual false final false
 ::System::Xml::XmlElement CreateElement(::StringW name) ;

/// @brief Method AddDefaultAttributes addr 0x26f26e0 size 0x288 virtual false final false
 void AddDefaultAttributes(::System::Xml::XmlElement elem) ;

/// @brief Method GetSchemaElementDecl addr 0x26f2968 size 0x110 virtual false final false
 ::System::Xml::Schema::SchemaElementDecl GetSchemaElementDecl(::System::Xml::XmlElement elem) ;

/// @brief Method PrepareDefaultAttribute addr 0x26f2a78 size 0xfc virtual false final false
 ::System::Xml::XmlAttribute PrepareDefaultAttribute(::System::Xml::Schema::SchemaAttDef attdef, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI) ;

/// @brief Method CreateEntityReference addr 0x26f2b74 size 0x74 virtual true final false
 ::System::Xml::XmlEntityReference CreateEntityReference(::StringW name) ;

/// @brief Method CreateProcessingInstruction addr 0x26f2be8 size 0x7c virtual true final false
 ::System::Xml::XmlProcessingInstruction CreateProcessingInstruction(::StringW target, ::StringW data) ;

/// @brief Method CreateXmlDeclaration addr 0x26f2c64 size 0x88 virtual true final false
 ::System::Xml::XmlDeclaration CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) ;

/// @brief Method CreateTextNode addr 0x26f2cec size 0x74 virtual true final false
 ::System::Xml::XmlText CreateTextNode(::StringW text) ;

/// @brief Method CreateSignificantWhitespace addr 0x26f2d60 size 0x74 virtual true final false
 ::System::Xml::XmlSignificantWhitespace CreateSignificantWhitespace(::StringW text) ;

/// @brief Method CreateWhitespace addr 0x26f2dd4 size 0x74 virtual true final false
 ::System::Xml::XmlWhitespace CreateWhitespace(::StringW text) ;

/// @brief Method CreateAttribute addr 0x26f2e48 size 0xa4 virtual false final false
 ::System::Xml::XmlAttribute CreateAttribute(::StringW qualifiedName, ::StringW namespaceURI) ;

/// @brief Method CreateElement addr 0x26f2eec size 0xa4 virtual false final false
 ::System::Xml::XmlElement CreateElement(::StringW qualifiedName, ::StringW namespaceURI) ;

/// @brief Method ImportNodeInternal addr 0x26f2f90 size 0x4b0 virtual false final false
 ::System::Xml::XmlNode ImportNodeInternal(::System::Xml::XmlNode node, bool deep) ;

/// @brief Method ImportAttributes addr 0x26f3440 size 0x114 virtual false final false
 void ImportAttributes(::System::Xml::XmlNode fromElem, ::System::Xml::XmlNode toElem) ;

/// @brief Method ImportChildren addr 0x26f1bb4 size 0x9c virtual false final false
 void ImportChildren(::System::Xml::XmlNode fromNode, ::System::Xml::XmlNode toNode, bool deep) ;

/// @brief Method get_NameTable addr 0x26edb3c size 0x1c virtual false final false
 ::System::Xml::XmlNameTable get_NameTable() ;

/// @brief Method CreateAttribute addr 0x26f3554 size 0xa0 virtual true final false
 ::System::Xml::XmlAttribute CreateAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI) ;

/// @brief Method CreateDefaultAttribute addr 0x26f35f4 size 0x8c virtual true final false
 ::System::Xml::XmlAttribute CreateDefaultAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI) ;

/// @brief Method CreateElement addr 0x26f3680 size 0xb8 virtual true final false
 ::System::Xml::XmlElement CreateElement(::StringW prefix, ::StringW localName, ::StringW namespaceURI) ;

/// @brief Method get_IsReadOnly addr 0x26f3738 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_Entities addr 0x26f3740 size 0x70 virtual false final false
 ::System::Xml::XmlNamedNodeMap get_Entities() ;

/// @brief Method set_Entities addr 0x26f37b0 size 0x8 virtual false final false
 void set_Entities(::System::Xml::XmlNamedNodeMap value) ;

/// @brief Method get_IsLoading addr 0x26f37b8 size 0x8 virtual false final false
 bool get_IsLoading() ;

/// @brief Method set_IsLoading addr 0x26f37c0 size 0xc virtual false final false
 void set_IsLoading(bool value) ;

/// @brief Method get_ActualLoadingStatus addr 0x26f37cc size 0x8 virtual false final false
 bool get_ActualLoadingStatus() ;

/// @brief Method SetupReader addr 0x26f37d4 size 0x6c virtual false final false
 ::System::Xml::XmlTextReader SetupReader(::System::Xml::XmlTextReader tr) ;

/// @brief Method Load addr 0x26f3840 size 0x114 virtual true final false
 void Load(::System::Xml::XmlReader reader) ;

/// @brief Method LoadXml addr 0x26f3954 size 0x14c virtual true final false
 void LoadXml(::StringW xml) ;

/// @brief Method set_InnerText addr 0x26f3aa0 size 0x60 virtual true final false
 void set_InnerText(::StringW value) ;

/// @brief Method set_InnerXml addr 0x26f3b00 size 0x10 virtual true final false
 void set_InnerXml(::StringW value) ;

/// @brief Method GetEventArgs addr 0x26f3b10 size 0x100 virtual true final false
 ::System::Xml::XmlNodeChangedEventArgs GetEventArgs(::System::Xml::XmlNode node, ::System::Xml::XmlNode oldParent, ::System::Xml::XmlNode newParent, ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action) ;

/// @brief Method GetInsertEventArgsForLoad addr 0x26ee9c4 size 0xbc virtual false final false
 ::System::Xml::XmlNodeChangedEventArgs GetInsertEventArgsForLoad(::System::Xml::XmlNode node, ::System::Xml::XmlNode newParent) ;

/// @brief Method BeforeEvent addr 0x26f3c10 size 0x54 virtual true final false
 void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs args) ;

/// @brief Method AfterEvent addr 0x26f3c64 size 0x54 virtual true final false
 void AfterEvent(::System::Xml::XmlNodeChangedEventArgs args) ;

/// @brief Method GetDefaultAttribute addr 0x26efb38 size 0x294 virtual false final false
 ::System::Xml::XmlAttribute GetDefaultAttribute(::System::Xml::XmlElement elem, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI) ;

/// @brief Method GetEntityNode addr 0x26f3cb8 size 0xc8 virtual false final false
 ::System::Xml::XmlEntity GetEntityNode(::StringW name) ;

/// @brief Method get_BaseURI addr 0x26f3d80 size 0x8 virtual true final false
 ::StringW get_BaseURI() ;

/// @brief Method SetBaseURI addr 0x26f3d88 size 0x8 virtual false final false
 void SetBaseURI(::StringW inBaseURI) ;

/// @brief Method AppendChildForLoad addr 0x26f3d90 size 0x1d4 virtual true final false
 ::System::Xml::XmlNode AppendChildForLoad(::System::Xml::XmlNode newChild, ::System::Xml::XmlDocument doc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocument, "System.Xml", "XmlDocument");
