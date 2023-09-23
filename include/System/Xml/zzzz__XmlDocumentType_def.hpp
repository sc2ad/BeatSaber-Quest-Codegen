#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlDocumentType;
}
// Type: System.Xml::XmlDocumentType
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11449))
// CS Name: System.Xml.XmlDocumentType
class CORDL_TYPE XmlDocumentType : public System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~XmlDocumentType() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentType", modifiers: " const&", def_value: None }]
constexpr XmlDocumentType(XmlDocumentType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentType", modifiers: "&&", def_value: None }]
constexpr XmlDocumentType(XmlDocumentType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDocumentType(void* ptr) noexcept : System::Xml::XmlLinkedNode(ptr) {
}


  constexpr XmlDocumentType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDocumentType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDocumentType& operator=(XmlDocumentType&& o) noexcept = default;
  constexpr XmlDocumentType& operator=(XmlDocumentType const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_publicId, put=__set_publicId))  publicId;

constexpr void __set_publicId(::StringW value) ;

constexpr ::StringW __get_publicId() const;

 ::StringW __declspec(property(get=__get_systemId, put=__set_systemId))  systemId;

constexpr void __set_systemId(::StringW value) ;

constexpr ::StringW __get_systemId() const;

 ::StringW __declspec(property(get=__get_internalSubset, put=__set_internalSubset))  internalSubset;

constexpr void __set_internalSubset(::StringW value) ;

constexpr ::StringW __get_internalSubset() const;

 bool __declspec(property(get=__get_namespaces, put=__set_namespaces))  namespaces;

constexpr void __set_namespaces(bool value) ;

constexpr bool __get_namespaces() const;

 System::Xml::XmlNamedNodeMap __declspec(property(get=__get_entities, put=__set_entities))  entities;

constexpr void __set_entities(System::Xml::XmlNamedNodeMap value) ;

constexpr System::Xml::XmlNamedNodeMap __get_entities() const;

 System::Xml::XmlNamedNodeMap __declspec(property(get=__get_notations, put=__set_notations))  notations;

constexpr void __set_notations(System::Xml::XmlNamedNodeMap value) ;

constexpr System::Xml::XmlNamedNodeMap __get_notations() const;

 System::Xml::Schema::SchemaInfo __declspec(property(get=__get_schemaInfo, put=__set_schemaInfo))  schemaInfo;

constexpr void __set_schemaInfo(System::Xml::Schema::SchemaInfo value) ;

constexpr System::Xml::Schema::SchemaInfo __get_schemaInfo() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 System::Xml::XmlNodeType __declspec(property(get=get_NodeType))  NodeType;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 System::Xml::XmlNamedNodeMap __declspec(property(get=get_Entities))  Entities;

 System::Xml::XmlNamedNodeMap __declspec(property(get=get_Notations))  Notations;

 ::StringW __declspec(property(get=get_PublicId))  PublicId;

 ::StringW __declspec(property(get=get_SystemId))  SystemId;

 ::StringW __declspec(property(get=get_InternalSubset))  InternalSubset;

 bool __declspec(property(get=get_ParseWithNamespaces))  ParseWithNamespaces;

 System::Xml::Schema::SchemaInfo __declspec(property(get=get_DtdSchemaInfo, put=set_DtdSchemaInfo))  DtdSchemaInfo;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "publicId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "systemId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "internalSubset", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::XmlDocument doc) ;

/// @brief Method .ctor addr 0x26f45dc size 0xc4 virtual false final false
 void _ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::XmlDocument doc) ;

/// @brief Method get_Name addr 0x26f4720 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x26f4728 size 0x8 virtual true final false
 ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x26f4730 size 0x8 virtual true final false
 System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x26f4738 size 0x3c virtual true final false
 System::Xml::XmlNode CloneNode(bool deep) ;

/// @brief Method get_IsReadOnly addr 0x26f4774 size 0x8 virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method get_Entities addr 0x26f477c size 0x70 virtual false final false
 System::Xml::XmlNamedNodeMap get_Entities() ;

/// @brief Method get_Notations addr 0x26f4814 size 0x70 virtual false final false
 System::Xml::XmlNamedNodeMap get_Notations() ;

/// @brief Method get_PublicId addr 0x26f4884 size 0x8 virtual false final false
 ::StringW get_PublicId() ;

/// @brief Method get_SystemId addr 0x26f488c size 0x8 virtual false final false
 ::StringW get_SystemId() ;

/// @brief Method get_InternalSubset addr 0x26f4894 size 0x8 virtual false final false
 ::StringW get_InternalSubset() ;

/// @brief Method get_ParseWithNamespaces addr 0x26f489c size 0x8 virtual false final false
 bool get_ParseWithNamespaces() ;

/// @brief Method get_DtdSchemaInfo addr 0x26f48a4 size 0x8 virtual false final false
 System::Xml::Schema::SchemaInfo get_DtdSchemaInfo() ;

/// @brief Method set_DtdSchemaInfo addr 0x26f48ac size 0x8 virtual false final false
 void set_DtdSchemaInfo(System::Xml::Schema::SchemaInfo value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlDocumentType);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlDocumentType, "System.Xml", "XmlDocumentType");
