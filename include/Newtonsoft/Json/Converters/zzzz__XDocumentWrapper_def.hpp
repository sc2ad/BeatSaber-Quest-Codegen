#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace System::Xml::Linq {
class XDocument;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDocumentWrapper;
}
// Type: Newtonsoft.Json.Converters::XDocumentWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12002))
// CS Name: Newtonsoft.Json.Converters.XDocumentWrapper
class CORDL_TYPE XDocumentWrapper : public Newtonsoft::Json::Converters::XContainerWrapper {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlDocument
constexpr operator  Newtonsoft::Json::Converters::IXmlDocument() const noexcept;

/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XDocumentWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentWrapper", modifiers: " const&", def_value: None }]
constexpr XDocumentWrapper(XDocumentWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XDocumentWrapper", modifiers: "&&", def_value: None }]
constexpr XDocumentWrapper(XDocumentWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XDocumentWrapper(void* ptr) noexcept : Newtonsoft::Json::Converters::XContainerWrapper(ptr) {
}


  constexpr XDocumentWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XDocumentWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XDocumentWrapper& operator=(XDocumentWrapper&& o) noexcept = default;
  constexpr XDocumentWrapper& operator=(XDocumentWrapper const& o) noexcept = default;
                


// Properties

 System::Xml::Linq::XDocument __declspec(property(get=get_Document))  Document;

 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> __declspec(property(get=get_ChildNodes))  ChildNodes;

 Newtonsoft::Json::Converters::IXmlElement __declspec(property(get=get_DocumentElement))  DocumentElement;


// Methods

/// @brief Method get_Document addr 0x2543060 size 0x78 virtual false final false
 System::Xml::Linq::XDocument get_Document() ;

static Newtonsoft::Json::Converters::XDocumentWrapper New_ctor(System::Xml::Linq::XDocument document) ;

/// @brief Method .ctor addr 0x25430d8 size 0x4 virtual false final false
 void _ctor(System::Xml::Linq::XDocument document) ;

/// @brief Method get_ChildNodes addr 0x2543148 size 0x164 virtual true final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Converters::IXmlNode> get_ChildNodes() ;

/// @brief Method CreateComment addr 0x2543664 size 0x94 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateComment(::StringW text) ;

/// @brief Method CreateTextNode addr 0x25436f8 size 0x94 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateTextNode(::StringW text) ;

/// @brief Method CreateCDataSection addr 0x254378c size 0x94 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateCDataSection(::StringW data) ;

/// @brief Method CreateWhitespace addr 0x2543820 size 0x94 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateWhitespace(::StringW text) ;

/// @brief Method CreateSignificantWhitespace addr 0x25438b4 size 0x94 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateSignificantWhitespace(::StringW text) ;

/// @brief Method CreateXmlDeclaration addr 0x2543948 size 0xa8 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) ;

/// @brief Method CreateXmlDocumentType addr 0x25439f0 size 0xb8 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) ;

/// @brief Method CreateProcessingInstruction addr 0x2543aa8 size 0xa0 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateProcessingInstruction(::StringW target, ::StringW data) ;

/// @brief Method CreateElement addr 0x2543bb4 size 0xa4 virtual true final true
 Newtonsoft::Json::Converters::IXmlElement CreateElement(::StringW elementName) ;

/// @brief Method CreateElement addr 0x2543c5c size 0xbc virtual true final true
 Newtonsoft::Json::Converters::IXmlElement CreateElement(::StringW qualifiedName, ::StringW namespaceUri) ;

/// @brief Method CreateAttribute addr 0x2543d18 size 0xb4 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateAttribute(::StringW name, ::StringW value) ;

/// @brief Method CreateAttribute addr 0x2543e38 size 0xc4 virtual true final true
 Newtonsoft::Json::Converters::IXmlNode CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value) ;

/// @brief Method get_DocumentElement addr 0x2543efc size 0x9c virtual true final true
 Newtonsoft::Json::Converters::IXmlElement get_DocumentElement() ;

/// @brief Method AppendChild addr 0x2543f98 size 0xa4 virtual true final false
 Newtonsoft::Json::Converters::IXmlNode AppendChild(Newtonsoft::Json::Converters::IXmlNode newChild) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::XDocumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::XDocumentWrapper, "Newtonsoft.Json.Converters", "XDocumentWrapper");
