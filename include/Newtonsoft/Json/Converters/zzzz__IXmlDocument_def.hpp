#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
// Type: Newtonsoft.Json.Converters::IXmlDocument
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11995))
// CS Name: Newtonsoft.Json.Converters.IXmlDocument
class CORDL_TYPE IXmlDocument : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Converters::IXmlNode
constexpr operator  Newtonsoft::Json::Converters::IXmlNode() const noexcept;

~IXmlDocument() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXmlDocument(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Newtonsoft::Json::Converters::IXmlElement __declspec(property(get=get_DocumentElement))  DocumentElement;


// Methods

/// @brief Method CreateComment addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateComment(::StringW text) ;

/// @brief Method CreateTextNode addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateTextNode(::StringW text) ;

/// @brief Method CreateCDataSection addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateCDataSection(::StringW data) ;

/// @brief Method CreateWhitespace addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateWhitespace(::StringW text) ;

/// @brief Method CreateSignificantWhitespace addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateSignificantWhitespace(::StringW text) ;

/// @brief Method CreateXmlDeclaration addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone) ;

/// @brief Method CreateXmlDocumentType addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset) ;

/// @brief Method CreateProcessingInstruction addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateProcessingInstruction(::StringW target, ::StringW data) ;

/// @brief Method CreateElement addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlElement CreateElement(::StringW elementName) ;

/// @brief Method CreateElement addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlElement CreateElement(::StringW qualifiedName, ::StringW namespaceUri) ;

/// @brief Method CreateAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateAttribute(::StringW name, ::StringW value) ;

/// @brief Method CreateAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlNode CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value) ;

/// @brief Method get_DocumentElement addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Converters::IXmlElement get_DocumentElement() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::IXmlDocument);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::IXmlDocument, "Newtonsoft.Json.Converters", "IXmlDocument");
