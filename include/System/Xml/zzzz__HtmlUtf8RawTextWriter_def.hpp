#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class TernaryTreeReadOnly;
}
namespace System::Xml {
struct ElementProperties;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct AttributeProperties;
}
namespace System::Xml {
class ByteStack;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class HtmlUtf8RawTextWriter;
}
// Type: System.Xml::HtmlUtf8RawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11361))
// CS Name: System.Xml.HtmlUtf8RawTextWriter
class CORDL_TYPE HtmlUtf8RawTextWriter : public ::System::Xml::XmlUtf8RawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~HtmlUtf8RawTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriter", modifiers: " const&", def_value: None }]
constexpr HtmlUtf8RawTextWriter(HtmlUtf8RawTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriter", modifiers: "&&", def_value: None }]
constexpr HtmlUtf8RawTextWriter(HtmlUtf8RawTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlUtf8RawTextWriter(void* ptr) noexcept : ::System::Xml::XmlUtf8RawTextWriter(ptr) {
}


  constexpr HtmlUtf8RawTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlUtf8RawTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlUtf8RawTextWriter& operator=(HtmlUtf8RawTextWriter&& o) noexcept = default;
  constexpr HtmlUtf8RawTextWriter& operator=(HtmlUtf8RawTextWriter const& o) noexcept = default;
                


// Fields

 ::System::Xml::ByteStack __declspec(property(get=__get_elementScope, put=__set_elementScope))  elementScope;

constexpr void __set_elementScope(::System::Xml::ByteStack value) ;

constexpr ::System::Xml::ByteStack __get_elementScope() const;

 ::System::Xml::ElementProperties __declspec(property(get=__get_currentElementProperties, put=__set_currentElementProperties))  currentElementProperties;

constexpr void __set_currentElementProperties(::System::Xml::ElementProperties value) ;

constexpr ::System::Xml::ElementProperties __get_currentElementProperties() const;

 ::System::Xml::AttributeProperties __declspec(property(get=__get_currentAttributeProperties, put=__set_currentAttributeProperties))  currentAttributeProperties;

constexpr void __set_currentAttributeProperties(::System::Xml::AttributeProperties value) ;

constexpr ::System::Xml::AttributeProperties __get_currentAttributeProperties() const;

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

static ::System::Xml::TernaryTreeReadOnly __declspec(property(get=__get_elementPropertySearch, put=__set_elementPropertySearch))  elementPropertySearch;

static void __set_elementPropertySearch(::System::Xml::TernaryTreeReadOnly value) ;

static ::System::Xml::TernaryTreeReadOnly __get_elementPropertySearch() ;

static ::System::Xml::TernaryTreeReadOnly __declspec(property(get=__get_attributePropertySearch, put=__set_attributePropertySearch))  attributePropertySearch;

static void __set_attributePropertySearch(::System::Xml::TernaryTreeReadOnly value) ;

static ::System::Xml::TernaryTreeReadOnly __get_attributePropertySearch() ;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit HtmlUtf8RawTextWriter(::System::IO::Stream stream, ::System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26bf834 size 0x2c virtual false final false
 void _ctor(::System::IO::Stream stream, ::System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteXmlDeclaration addr 0x26bf9d4 size 0x4 virtual true final false
 void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26bf9d8 size 0x4 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26bf9dc size 0x248 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26bfc24 size 0x108 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26bfd2c size 0x58 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26bfe98 size 0xe4 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26bff7c size 0xe4 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26c0060 size 0x170 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c01d0 size 0x78 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteProcessingInstruction addr 0x26c030c size 0x120 virtual true final false
 void WriteProcessingInstruction(::StringW target, ::StringW text) ;

/// @brief Method WriteString addr 0x26c042c size 0x50 virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26c04d8 size 0x60 virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c0538 size 0x60 virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c0598 size 0x60 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x26c05f8 size 0x44 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Init addr 0x26bf860 size 0x174 virtual false final false
 void Init(::System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteMetaElement addr 0x26bfd84 size 0x114 virtual false final false
 void WriteMetaElement() ;

/// @brief Method WriteHtmlElementTextBlock addr 0x26c04c0 size 0x18 virtual false final false
 void WriteHtmlElementTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteHtmlAttributeTextBlock addr 0x26c047c size 0x44 virtual false final false
 void WriteHtmlAttributeTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteHtmlAttributeText addr 0x26c0978 size 0x260 virtual false final false
 void WriteHtmlAttributeText(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteUriAttributeText addr 0x26c063c size 0x33c virtual false final false
 void WriteUriAttributeText(void* pSrc, void* pSrcEnd) ;

/// @brief Method OutputRestAmps addr 0x26c0248 size 0xc4 virtual false final false
 void OutputRestAmps() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::HtmlUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlUtf8RawTextWriter, "System.Xml", "HtmlUtf8RawTextWriter");
