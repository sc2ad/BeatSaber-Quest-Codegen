#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct AttributeProperties;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
struct ElementProperties;
}
namespace System::Xml {
class TernaryTreeReadOnly;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
class ByteStack;
}
// Forward declare root types
namespace System::Xml {
class HtmlEncodedRawTextWriter;
}
// Type: System.Xml::HtmlEncodedRawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11391))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11358))
// CS Name: System.Xml.HtmlEncodedRawTextWriter
class CORDL_TYPE HtmlEncodedRawTextWriter : public System::Xml::XmlEncodedRawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~HtmlEncodedRawTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: " const&", def_value: None }]
constexpr HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriter", modifiers: "&&", def_value: None }]
constexpr HtmlEncodedRawTextWriter(HtmlEncodedRawTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlEncodedRawTextWriter(void* ptr) noexcept : System::Xml::XmlEncodedRawTextWriter(ptr) {
}


  constexpr HtmlEncodedRawTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlEncodedRawTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlEncodedRawTextWriter& operator=(HtmlEncodedRawTextWriter&& o) noexcept = default;
  constexpr HtmlEncodedRawTextWriter& operator=(HtmlEncodedRawTextWriter const& o) noexcept = default;
                


// Fields

 System::Xml::ByteStack __declspec(property(get=__get_elementScope, put=__set_elementScope))  elementScope;

constexpr void __set_elementScope(System::Xml::ByteStack value) ;

constexpr System::Xml::ByteStack __get_elementScope() const;

 System::Xml::ElementProperties __declspec(property(get=__get_currentElementProperties, put=__set_currentElementProperties))  currentElementProperties;

constexpr void __set_currentElementProperties(System::Xml::ElementProperties value) ;

constexpr System::Xml::ElementProperties __get_currentElementProperties() const;

 System::Xml::AttributeProperties __declspec(property(get=__get_currentAttributeProperties, put=__set_currentAttributeProperties))  currentAttributeProperties;

constexpr void __set_currentAttributeProperties(System::Xml::AttributeProperties value) ;

constexpr System::Xml::AttributeProperties __get_currentAttributeProperties() const;

 bool __declspec(property(get=__get_endsWithAmpersand, put=__set_endsWithAmpersand))  endsWithAmpersand;

constexpr void __set_endsWithAmpersand(bool value) ;

constexpr bool __get_endsWithAmpersand() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_uriEscapingBuffer, put=__set_uriEscapingBuffer))  uriEscapingBuffer;

constexpr void __set_uriEscapingBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_uriEscapingBuffer() const;

 ::StringW __declspec(property(get=__get_mediaType, put=__set_mediaType))  mediaType;

constexpr void __set_mediaType(::StringW value) ;

constexpr ::StringW __get_mediaType() const;

 bool __declspec(property(get=__get_doNotEscapeUriAttributes, put=__set_doNotEscapeUriAttributes))  doNotEscapeUriAttributes;

constexpr void __set_doNotEscapeUriAttributes(bool value) ;

constexpr bool __get_doNotEscapeUriAttributes() const;

static System::Xml::TernaryTreeReadOnly __declspec(property(get=__get_elementPropertySearch, put=__set_elementPropertySearch))  elementPropertySearch;

static void __set_elementPropertySearch(System::Xml::TernaryTreeReadOnly value) ;

static System::Xml::TernaryTreeReadOnly __get_elementPropertySearch() ;

static System::Xml::TernaryTreeReadOnly __declspec(property(get=__get_attributePropertySearch, put=__set_attributePropertySearch))  attributePropertySearch;

static void __set_attributePropertySearch(System::Xml::TernaryTreeReadOnly value) ;

static System::Xml::TernaryTreeReadOnly __get_attributePropertySearch() ;


// Methods

static System::Xml::HtmlEncodedRawTextWriter New_ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26bc704 size 0x28 virtual false final false
 void _ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

static System::Xml::HtmlEncodedRawTextWriter New_ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26bc978 size 0x28 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteXmlDeclaration addr 0x26bcc24 size 0x4 virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26bcc28 size 0x4 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26bcc2c size 0x228 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26bcf04 size 0x118 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26bd210 size 0x54 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26bd360 size 0xf8 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26bd5c8 size 0xf8 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26bd7c8 size 0x170 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26bda58 size 0x90 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteProcessingInstruction addr 0x26bdb7c size 0x128 virtual true final false
 void WriteProcessingInstruction(::StringW target, ::StringW text) ;

/// @brief Method WriteString addr 0x26bdfb8 size 0x6c virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26be074 size 0x60 virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26be0d4 size 0x60 virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26be134 size 0x60 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x26be194 size 0x88 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Init addr 0x26bc804 size 0x174 virtual false final false
 void Init(System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteMetaElement addr 0x26bd264 size 0xfc virtual false final false
 void WriteMetaElement() ;

/// @brief Method WriteHtmlElementTextBlock addr 0x26be064 size 0x10 virtual false final false
 void WriteHtmlElementTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteHtmlAttributeTextBlock addr 0x26be024 size 0x40 virtual false final false
 void WriteHtmlAttributeTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteHtmlAttributeText addr 0x26becd4 size 0x2d8 virtual false final false
 void WriteHtmlAttributeText(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteUriAttributeText addr 0x26be95c size 0x378 virtual false final false
 void WriteUriAttributeText(void* pSrc, void* pSrcEnd) ;

/// @brief Method OutputRestAmps addr 0x26bdae8 size 0x94 virtual false final false
 void OutputRestAmps() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::HtmlEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlEncodedRawTextWriter, "System.Xml", "HtmlEncodedRawTextWriter");
