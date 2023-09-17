#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
struct TriState;
}
namespace System::Xml {
struct NamespaceHandling;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml {
struct NewLineHandling;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Xml {
class XmlWriterSettings;
}
// Type: System.Xml::XmlWriterSettings
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11437))
// CS Name: System.Xml.XmlWriterSettings
class CORDL_TYPE XmlWriterSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~XmlWriterSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWriterSettings", modifiers: " const&", def_value: None }]
constexpr XmlWriterSettings(XmlWriterSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWriterSettings", modifiers: "&&", def_value: None }]
constexpr XmlWriterSettings(XmlWriterSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlWriterSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlWriterSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlWriterSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlWriterSettings& operator=(XmlWriterSettings&& o) noexcept = default;
  constexpr XmlWriterSettings& operator=(XmlWriterSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useAsync, put=__set_useAsync))  useAsync;

constexpr void __set_useAsync(bool value) ;

constexpr bool __get_useAsync() const;

 ::System::Text::Encoding __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get_encoding() const;

 bool __declspec(property(get=__get_omitXmlDecl, put=__set_omitXmlDecl))  omitXmlDecl;

constexpr void __set_omitXmlDecl(bool value) ;

constexpr bool __get_omitXmlDecl() const;

 ::System::Xml::NewLineHandling __declspec(property(get=__get_newLineHandling, put=__set_newLineHandling))  newLineHandling;

constexpr void __set_newLineHandling(::System::Xml::NewLineHandling value) ;

constexpr ::System::Xml::NewLineHandling __get_newLineHandling() const;

 ::StringW __declspec(property(get=__get_newLineChars, put=__set_newLineChars))  newLineChars;

constexpr void __set_newLineChars(::StringW value) ;

constexpr ::StringW __get_newLineChars() const;

 ::System::Xml::TriState __declspec(property(get=__get_indent, put=__set_indent))  indent;

constexpr void __set_indent(::System::Xml::TriState value) ;

constexpr ::System::Xml::TriState __get_indent() const;

 ::StringW __declspec(property(get=__get_indentChars, put=__set_indentChars))  indentChars;

constexpr void __set_indentChars(::StringW value) ;

constexpr ::StringW __get_indentChars() const;

 bool __declspec(property(get=__get_newLineOnAttributes, put=__set_newLineOnAttributes))  newLineOnAttributes;

constexpr void __set_newLineOnAttributes(bool value) ;

constexpr bool __get_newLineOnAttributes() const;

 bool __declspec(property(get=__get_closeOutput, put=__set_closeOutput))  closeOutput;

constexpr void __set_closeOutput(bool value) ;

constexpr bool __get_closeOutput() const;

 ::System::Xml::NamespaceHandling __declspec(property(get=__get_namespaceHandling, put=__set_namespaceHandling))  namespaceHandling;

constexpr void __set_namespaceHandling(::System::Xml::NamespaceHandling value) ;

constexpr ::System::Xml::NamespaceHandling __get_namespaceHandling() const;

 ::System::Xml::ConformanceLevel __declspec(property(get=__get_conformanceLevel, put=__set_conformanceLevel))  conformanceLevel;

constexpr void __set_conformanceLevel(::System::Xml::ConformanceLevel value) ;

constexpr ::System::Xml::ConformanceLevel __get_conformanceLevel() const;

 bool __declspec(property(get=__get_checkCharacters, put=__set_checkCharacters))  checkCharacters;

constexpr void __set_checkCharacters(bool value) ;

constexpr bool __get_checkCharacters() const;

 bool __declspec(property(get=__get_writeEndDocumentOnClose, put=__set_writeEndDocumentOnClose))  writeEndDocumentOnClose;

constexpr void __set_writeEndDocumentOnClose(bool value) ;

constexpr bool __get_writeEndDocumentOnClose() const;

 ::System::Xml::XmlOutputMethod __declspec(property(get=__get_outputMethod, put=__set_outputMethod))  outputMethod;

constexpr void __set_outputMethod(::System::Xml::XmlOutputMethod value) ;

constexpr ::System::Xml::XmlOutputMethod __get_outputMethod() const;

 ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName> __declspec(property(get=__get_cdataSections, put=__set_cdataSections))  cdataSections;

constexpr void __set_cdataSections(::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName> __get_cdataSections() const;

 bool __declspec(property(get=__get_doNotEscapeUriAttributes, put=__set_doNotEscapeUriAttributes))  doNotEscapeUriAttributes;

constexpr void __set_doNotEscapeUriAttributes(bool value) ;

constexpr bool __get_doNotEscapeUriAttributes() const;

 bool __declspec(property(get=__get_mergeCDataSections, put=__set_mergeCDataSections))  mergeCDataSections;

constexpr void __set_mergeCDataSections(bool value) ;

constexpr bool __get_mergeCDataSections() const;

 ::StringW __declspec(property(get=__get_mediaType, put=__set_mediaType))  mediaType;

constexpr void __set_mediaType(::StringW value) ;

constexpr ::StringW __get_mediaType() const;

 ::StringW __declspec(property(get=__get_docTypeSystem, put=__set_docTypeSystem))  docTypeSystem;

constexpr void __set_docTypeSystem(::StringW value) ;

constexpr ::StringW __get_docTypeSystem() const;

 ::StringW __declspec(property(get=__get_docTypePublic, put=__set_docTypePublic))  docTypePublic;

constexpr void __set_docTypePublic(::StringW value) ;

constexpr ::StringW __get_docTypePublic() const;

 ::System::Xml::XmlStandalone __declspec(property(get=__get_standalone, put=__set_standalone))  standalone;

constexpr void __set_standalone(::System::Xml::XmlStandalone value) ;

constexpr ::System::Xml::XmlStandalone __get_standalone() const;

 bool __declspec(property(get=__get_autoXmlDecl, put=__set_autoXmlDecl))  autoXmlDecl;

constexpr void __set_autoXmlDecl(bool value) ;

constexpr bool __get_autoXmlDecl() const;

 bool __declspec(property(get=__get_isReadOnly, put=__set_isReadOnly))  isReadOnly;

constexpr void __set_isReadOnly(bool value) ;

constexpr bool __get_isReadOnly() const;


// Properties

 bool __declspec(property(get=get_Async))  Async;

 ::System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;

 bool __declspec(property(get=get_OmitXmlDeclaration, put=set_OmitXmlDeclaration))  OmitXmlDeclaration;

 ::System::Xml::NewLineHandling __declspec(property(get=get_NewLineHandling))  NewLineHandling;

 ::StringW __declspec(property(get=get_NewLineChars))  NewLineChars;

 bool __declspec(property(get=get_Indent, put=set_Indent))  Indent;

 ::StringW __declspec(property(get=get_IndentChars))  IndentChars;

 bool __declspec(property(get=get_NewLineOnAttributes))  NewLineOnAttributes;

 bool __declspec(property(get=get_CloseOutput))  CloseOutput;

 ::System::Xml::ConformanceLevel __declspec(property(get=get_ConformanceLevel, put=set_ConformanceLevel))  ConformanceLevel;

 bool __declspec(property(get=get_CheckCharacters))  CheckCharacters;

 ::System::Xml::NamespaceHandling __declspec(property(get=get_NamespaceHandling, put=set_NamespaceHandling))  NamespaceHandling;

 bool __declspec(property(get=get_WriteEndDocumentOnClose))  WriteEndDocumentOnClose;

 ::System::Xml::XmlOutputMethod __declspec(property(get=get_OutputMethod, put=set_OutputMethod))  OutputMethod;

 ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName> __declspec(property(get=get_CDataSectionElements))  CDataSectionElements;

 bool __declspec(property(get=get_DoNotEscapeUriAttributes))  DoNotEscapeUriAttributes;

 bool __declspec(property(get=get_MergeCDataSections))  MergeCDataSections;

 ::StringW __declspec(property(get=get_MediaType))  MediaType;

 ::StringW __declspec(property(get=get_DocTypeSystem))  DocTypeSystem;

 ::StringW __declspec(property(get=get_DocTypePublic))  DocTypePublic;

 ::System::Xml::XmlStandalone __declspec(property(get=get_Standalone))  Standalone;

 bool __declspec(property(get=get_AutoXmlDeclaration))  AutoXmlDeclaration;

 ::System::Xml::TriState __declspec(property(get=get_IndentInternal))  IndentInternal;

 bool __declspec(property(get=get_IsQuerySpecific))  IsQuerySpecific;

 bool __declspec(property(put=set_ReadOnly))  ReadOnly;


// Methods

// Ctor Parameters []
explicit XmlWriterSettings() ;

/// @brief Method .ctor addr 0x26ecc30 size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method get_Async addr 0x26ed5cc size 0x8 virtual false final false
 bool get_Async() ;

/// @brief Method get_Encoding addr 0x26ed5d4 size 0x8 virtual false final false
 ::System::Text::Encoding get_Encoding() ;

/// @brief Method get_OmitXmlDeclaration addr 0x26ed5dc size 0x8 virtual false final false
 bool get_OmitXmlDeclaration() ;

/// @brief Method set_OmitXmlDeclaration addr 0x26ed5e4 size 0x5c virtual false final false
 void set_OmitXmlDeclaration(bool value) ;

/// @brief Method get_NewLineHandling addr 0x26ed6f8 size 0x8 virtual false final false
 ::System::Xml::NewLineHandling get_NewLineHandling() ;

/// @brief Method get_NewLineChars addr 0x26ed700 size 0x8 virtual false final false
 ::StringW get_NewLineChars() ;

/// @brief Method get_Indent addr 0x26ed708 size 0x10 virtual false final false
 bool get_Indent() ;

/// @brief Method set_Indent addr 0x26ed718 size 0x68 virtual false final false
 void set_Indent(bool value) ;

/// @brief Method get_IndentChars addr 0x26ed780 size 0x8 virtual false final false
 ::StringW get_IndentChars() ;

/// @brief Method get_NewLineOnAttributes addr 0x26ed788 size 0x8 virtual false final false
 bool get_NewLineOnAttributes() ;

/// @brief Method get_CloseOutput addr 0x26ed790 size 0x8 virtual false final false
 bool get_CloseOutput() ;

/// @brief Method get_ConformanceLevel addr 0x26ed798 size 0x8 virtual false final false
 ::System::Xml::ConformanceLevel get_ConformanceLevel() ;

/// @brief Method set_ConformanceLevel addr 0x26ed7a0 size 0xb0 virtual false final false
 void set_ConformanceLevel(::System::Xml::ConformanceLevel value) ;

/// @brief Method get_CheckCharacters addr 0x26ed850 size 0x8 virtual false final false
 bool get_CheckCharacters() ;

/// @brief Method get_NamespaceHandling addr 0x26ed858 size 0x8 virtual false final false
 ::System::Xml::NamespaceHandling get_NamespaceHandling() ;

/// @brief Method set_NamespaceHandling addr 0x26ed860 size 0xb0 virtual false final false
 void set_NamespaceHandling(::System::Xml::NamespaceHandling value) ;

/// @brief Method get_WriteEndDocumentOnClose addr 0x26ed910 size 0x8 virtual false final false
 bool get_WriteEndDocumentOnClose() ;

/// @brief Method get_OutputMethod addr 0x26ed918 size 0x8 virtual false final false
 ::System::Xml::XmlOutputMethod get_OutputMethod() ;

/// @brief Method set_OutputMethod addr 0x26ed920 size 0x8 virtual false final false
 void set_OutputMethod(::System::Xml::XmlOutputMethod value) ;

/// @brief Method Clone addr 0x26ed928 size 0xcc virtual false final false
 ::System::Xml::XmlWriterSettings Clone() ;

/// @brief Method get_CDataSectionElements addr 0x26ed9f4 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName> get_CDataSectionElements() ;

/// @brief Method get_DoNotEscapeUriAttributes addr 0x26ed9fc size 0x8 virtual false final false
 bool get_DoNotEscapeUriAttributes() ;

/// @brief Method get_MergeCDataSections addr 0x26eda04 size 0x8 virtual false final false
 bool get_MergeCDataSections() ;

/// @brief Method get_MediaType addr 0x26eda0c size 0x8 virtual false final false
 ::StringW get_MediaType() ;

/// @brief Method get_DocTypeSystem addr 0x26eda14 size 0x8 virtual false final false
 ::StringW get_DocTypeSystem() ;

/// @brief Method get_DocTypePublic addr 0x26eda1c size 0x8 virtual false final false
 ::StringW get_DocTypePublic() ;

/// @brief Method get_Standalone addr 0x26eda24 size 0x8 virtual false final false
 ::System::Xml::XmlStandalone get_Standalone() ;

/// @brief Method get_AutoXmlDeclaration addr 0x26eda2c size 0x8 virtual false final false
 bool get_AutoXmlDeclaration() ;

/// @brief Method get_IndentInternal addr 0x26eda34 size 0x8 virtual false final false
 ::System::Xml::TriState get_IndentInternal() ;

/// @brief Method get_IsQuerySpecific addr 0x26eda3c size 0x70 virtual false final false
 bool get_IsQuerySpecific() ;

/// @brief Method CreateWriter addr 0x26eccb4 size 0x4b4 virtual false final false
 ::System::Xml::XmlWriter CreateWriter(::System::IO::Stream output) ;

/// @brief Method CreateWriter addr 0x26ed1d0 size 0x31c virtual false final false
 ::System::Xml::XmlWriter CreateWriter(::System::IO::TextWriter output) ;

/// @brief Method set_ReadOnly addr 0x26edaac size 0xc virtual false final false
 void set_ReadOnly(bool value) ;

/// @brief Method CheckReadOnly addr 0x26ed640 size 0xb8 virtual false final false
 void CheckReadOnly(::StringW propertyName) ;

/// @brief Method Initialize addr 0x26ed4ec size 0xe0 virtual false final false
 void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlWriterSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWriterSettings, "System.Xml", "XmlWriterSettings");
