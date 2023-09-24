#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlEntityReference;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System {
class Exception;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlEntity;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlParserContext;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class XmlAttribute;
}
// Forward declare root types
namespace System::Xml {
class XmlLoader;
}
// Type: System.Xml::XmlLoader
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11456))
// CS Name: System.Xml.XmlLoader
class CORDL_TYPE XmlLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: " const&", def_value: None }]
constexpr XmlLoader(XmlLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: "&&", def_value: None }]
constexpr XmlLoader(XmlLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlLoader& operator=(XmlLoader&& o) noexcept = default;
  constexpr XmlLoader& operator=(XmlLoader const& o) noexcept = default;
                


// Fields

 System::Xml::XmlDocument __declspec(property(get=__get_doc, put=__set_doc))  doc;

constexpr void __set_doc(System::Xml::XmlDocument value) ;

constexpr System::Xml::XmlDocument __get_doc() const;

 System::Xml::XmlReader __declspec(property(get=__get_reader, put=__set_reader))  reader;

constexpr void __set_reader(System::Xml::XmlReader value) ;

constexpr System::Xml::XmlReader __get_reader() const;

 bool __declspec(property(get=__get_preserveWhitespace, put=__set_preserveWhitespace))  preserveWhitespace;

constexpr void __set_preserveWhitespace(bool value) ;

constexpr bool __get_preserveWhitespace() const;


// Methods

static System::Xml::XmlLoader New_ctor() ;

/// @brief Method .ctor addr 0x26f4258 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Load addr 0x26f6aec size 0x23c virtual false final false
 void Load(System::Xml::XmlDocument doc, System::Xml::XmlReader reader, bool preserveWhitespace) ;

/// @brief Method LoadDocSequence addr 0x26f6d28 size 0x6c virtual false final false
 void LoadDocSequence(System::Xml::XmlDocument parentDoc) ;

/// @brief Method LoadNode addr 0x26f6d94 size 0x594 virtual false final false
 System::Xml::XmlNode LoadNode(bool skipOverWhitespace) ;

/// @brief Method LoadAttributeNode addr 0x26f7328 size 0x330 virtual false final false
 System::Xml::XmlAttribute LoadAttributeNode() ;

/// @brief Method LoadDefaultAttribute addr 0x26f7cc4 size 0x19c virtual false final false
 System::Xml::XmlAttribute LoadDefaultAttribute() ;

/// @brief Method LoadAttributeValue addr 0x26f7e60 size 0x31c virtual false final false
 void LoadAttributeValue(System::Xml::XmlNode parent, bool direct) ;

/// @brief Method LoadEntityReferenceNode addr 0x26f7658 size 0x1f4 virtual false final false
 System::Xml::XmlEntityReference LoadEntityReferenceNode(bool direct) ;

/// @brief Method LoadDeclarationNode addr 0x26f784c size 0x1b4 virtual false final false
 System::Xml::XmlDeclaration LoadDeclarationNode() ;

/// @brief Method LoadDocumentTypeNode addr 0x26f7a00 size 0x1ac virtual false final false
 System::Xml::XmlDocumentType LoadDocumentTypeNode() ;

/// @brief Method LoadNodeDirect addr 0x26f8190 size 0x4a0 virtual false final false
 System::Xml::XmlNode LoadNodeDirect() ;

/// @brief Method LoadAttributeNodeDirect addr 0x26f936c size 0x148 virtual false final false
 System::Xml::XmlAttribute LoadAttributeNodeDirect() ;

/// @brief Method ParseDocumentType addr 0x26f46b8 size 0x68 virtual false final false
 void ParseDocumentType(System::Xml::XmlDocumentType dtNode) ;

/// @brief Method ParseDocumentType addr 0x26f9634 size 0x2c8 virtual false final false
 void ParseDocumentType(System::Xml::XmlDocumentType dtNode, bool bUseResolver, System::Xml::XmlResolver resolver) ;

/// @brief Method LoadDocumentType addr 0x26f8838 size 0xb34 virtual false final false
 void LoadDocumentType(System::Xml::IDtdInfo dtdInfo, System::Xml::XmlDocumentType dtNode) ;

/// @brief Method GetContext addr 0x26f99bc size 0x8d8 virtual false final false
 System::Xml::XmlParserContext GetContext(System::Xml::XmlNode node) ;

/// @brief Method ParsePartialContent addr 0x26f4260 size 0x204 virtual false final false
 System::Xml::XmlNamespaceManager ParsePartialContent(System::Xml::XmlNode parentNode, ::StringW innerxmltext, System::Xml::XmlNodeType nt) ;

/// @brief Method LoadInnerXmlElement addr 0x26f57d0 size 0x74 virtual false final false
 void LoadInnerXmlElement(System::Xml::XmlElement node, ::StringW innerxmltext) ;

/// @brief Method LoadInnerXmlAttribute addr 0x26fa79c size 0x8 virtual false final false
 void LoadInnerXmlAttribute(System::Xml::XmlAttribute node, ::StringW innerxmltext) ;

/// @brief Method RemoveDuplicateNamespace addr 0x26fa50c size 0x290 virtual false final false
 void RemoveDuplicateNamespace(System::Xml::XmlElement elem, System::Xml::XmlNamespaceManager mgr, bool fCheckElemAttrs) ;

/// @brief Method EntitizeName addr 0x26fa7a4 size 0x6c virtual false final false
 ::StringW EntitizeName(::StringW name) ;

/// @brief Method ExpandEntity addr 0x26f5cc0 size 0x4c virtual false final false
 void ExpandEntity(System::Xml::XmlEntity ent) ;

/// @brief Method ExpandEntityReference addr 0x26f6084 size 0x628 virtual false final false
 void ExpandEntityReference(System::Xml::XmlEntityReference eref) ;

/// @brief Method CreateInnerXmlReader addr 0x26fa294 size 0x278 virtual false final false
 System::Xml::XmlReader CreateInnerXmlReader(::StringW xmlFragment, System::Xml::XmlNodeType nt, System::Xml::XmlParserContext context, System::Xml::XmlDocument doc) ;

/// @brief Method ParseXmlDeclarationValue addr 0x26f8630 size 0x208 virtual false final false
static void ParseXmlDeclarationValue(::StringW strValue, ByRef<::StringW> version, ByRef<::StringW> encoding, ByRef<::StringW> standalone) ;

/// @brief Method UnexpectedNodeType addr 0x26f7bac size 0x118 virtual false final false
static System::Exception UnexpectedNodeType(System::Xml::XmlNodeType nodetype) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlLoader);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlLoader, "System.Xml", "XmlLoader");
