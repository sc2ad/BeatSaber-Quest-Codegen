#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
class XmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDocumentWrapper;
}
// Type: Newtonsoft.Json.Converters::XmlDocumentWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11990))
// CS Name: Newtonsoft.Json.Converters.XmlDocumentWrapper
class CORDL_TYPE XmlDocumentWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
// Declarations
/// @brief Convert operator to ::Newtonsoft::Json::Converters::IXmlDocument
constexpr operator  ::Newtonsoft::Json::Converters::IXmlDocument() const noexcept;

/// @brief Convert operator to ::Newtonsoft::Json::Converters::IXmlNode
constexpr operator  ::Newtonsoft::Json::Converters::IXmlNode() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XmlDocumentWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentWrapper", modifiers: " const&", def_value: None }]
constexpr XmlDocumentWrapper(XmlDocumentWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentWrapper", modifiers: "&&", def_value: None }]
constexpr XmlDocumentWrapper(XmlDocumentWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDocumentWrapper(void* ptr) noexcept : ::Newtonsoft::Json::Converters::XmlNodeWrapper(ptr) {
}


  constexpr XmlDocumentWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDocumentWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDocumentWrapper& operator=(XmlDocumentWrapper&& o) noexcept = default;
  constexpr XmlDocumentWrapper& operator=(XmlDocumentWrapper const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlDocument __declspec(property(get=__get__document, put=__set__document))  _document;

constexpr void __set__document(::System::Xml::XmlDocument value) ;

constexpr ::System::Xml::XmlDocument __get__document() const;


// Properties

 ::Newtonsoft::Json::Converters::IXmlElement __declspec(property(get=get_DocumentElement))  DocumentElement;


// Methods

// Ctor Parameters [CppParam { name: "document", ty: "::System::Xml::XmlDocument", modifiers: "", def_value: None }]
explicit XmlDocumentWrapper(::System::Xml::XmlDocument document) ;

/// @brief Method .ctor addr 0x2541794 size 0x2c virtual false final false
 void _ctor(::System::Xml::XmlDocument document) ;

/// @brief Method CreateComment addr 0x25417e8 size 0x8c virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateComment(::StringW data) ;

/// @brief Method CreateTextNode addr 0x2541874 size 0x8c virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateTextNode(::StringW text) ;

/// @brief Method CreateCDataSection addr 0x2541900 size 0x8c virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateCDataSection(::StringW data) ;

/// @brief Method CreateWhitespace addr 0x254198c size 0x8c virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateWhitespace(::StringW text) ;

/// @brief Method CreateSignificantWhitespace addr 0x2541a18 size 0x8c virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateSignificantWhitespace(::StringW text) ;

/// @brief Method CreateXmlDeclaration addr 0x2541aa4 size 0xa8 virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) ;

/// @brief Method CreateXmlDocumentType addr 0x2541b78 size 0xac virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) ;

/// @brief Method CreateProcessingInstruction addr 0x2541c50 size 0x9c virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateProcessingInstruction(::StringW target, ::StringW data) ;

/// @brief Method CreateElement addr 0x2541cec size 0x88 virtual true final true
 ::Newtonsoft::Json::Converters::IXmlElement CreateElement(::StringW elementName) ;

/// @brief Method CreateElement addr 0x2541da0 size 0x98 virtual true final true
 ::Newtonsoft::Json::Converters::IXmlElement CreateElement(::StringW qualifiedName, ::StringW namespaceUri) ;

/// @brief Method CreateAttribute addr 0x2541e38 size 0xa8 virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateAttribute(::StringW name, ::StringW value) ;

/// @brief Method CreateAttribute addr 0x2541f00 size 0xb0 virtual true final true
 ::Newtonsoft::Json::Converters::IXmlNode CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value) ;

/// @brief Method get_DocumentElement addr 0x2541fb0 size 0x9c virtual true final true
 ::Newtonsoft::Json::Converters::IXmlElement get_DocumentElement() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDocumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDocumentWrapper, "Newtonsoft.Json.Converters", "XmlDocumentWrapper");
