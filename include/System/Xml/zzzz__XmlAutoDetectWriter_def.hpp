#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class OnRemoveWriter;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
class XmlEventCache;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlRawWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlAutoDetectWriter;
}
// Type: System.Xml::XmlAutoDetectWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11397))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11390))
// CS Name: System.Xml.XmlAutoDetectWriter
class CORDL_TYPE XmlAutoDetectWriter : public System::Xml::XmlRawWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~XmlAutoDetectWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAutoDetectWriter", modifiers: " const&", def_value: None }]
constexpr XmlAutoDetectWriter(XmlAutoDetectWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAutoDetectWriter", modifiers: "&&", def_value: None }]
constexpr XmlAutoDetectWriter(XmlAutoDetectWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAutoDetectWriter(void* ptr) noexcept : System::Xml::XmlRawWriter(ptr) {
}


  constexpr XmlAutoDetectWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAutoDetectWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAutoDetectWriter& operator=(XmlAutoDetectWriter&& o) noexcept = default;
  constexpr XmlAutoDetectWriter& operator=(XmlAutoDetectWriter const& o) noexcept = default;
                


// Fields

 System::Xml::XmlRawWriter __declspec(property(get=__get_wrapped, put=__set_wrapped))  wrapped;

constexpr void __set_wrapped(System::Xml::XmlRawWriter value) ;

constexpr System::Xml::XmlRawWriter __get_wrapped() const;

 System::Xml::OnRemoveWriter __declspec(property(get=__get_onRemove, put=__set_onRemove))  onRemove;

constexpr void __set_onRemove(System::Xml::OnRemoveWriter value) ;

constexpr System::Xml::OnRemoveWriter __get_onRemove() const;

 System::Xml::XmlWriterSettings __declspec(property(get=__get_writerSettings, put=__set_writerSettings))  writerSettings;

constexpr void __set_writerSettings(System::Xml::XmlWriterSettings value) ;

constexpr System::Xml::XmlWriterSettings __get_writerSettings() const;

 System::Xml::XmlEventCache __declspec(property(get=__get_eventCache, put=__set_eventCache))  eventCache;

constexpr void __set_eventCache(System::Xml::XmlEventCache value) ;

constexpr System::Xml::XmlEventCache __get_eventCache() const;

 System::IO::TextWriter __declspec(property(get=__get_textWriter, put=__set_textWriter))  textWriter;

constexpr void __set_textWriter(System::IO::TextWriter value) ;

constexpr System::IO::TextWriter __get_textWriter() const;

 System::IO::Stream __declspec(property(get=__get_strm, put=__set_strm))  strm;

constexpr void __set_strm(System::IO::Stream value) ;

constexpr System::IO::Stream __get_strm() const;


// Properties

 System::Xml::IXmlNamespaceResolver __declspec(property(put=set_NamespaceResolver))  NamespaceResolver;

 bool __declspec(property(get=get_SupportsNamespaceDeclarationInChunks))  SupportsNamespaceDeclarationInChunks;


// Methods

static System::Xml::XmlAutoDetectWriter New_ctor(System::Xml::XmlWriterSettings writerSettings) ;

/// @brief Method .ctor addr 0x26c2a8c size 0xc0 virtual false final false
 void _ctor(System::Xml::XmlWriterSettings writerSettings) ;

static System::Xml::XmlAutoDetectWriter New_ctor(System::IO::TextWriter textWriter, System::Xml::XmlWriterSettings writerSettings) ;

/// @brief Method .ctor addr 0x26c2b7c size 0x28 virtual false final false
 void _ctor(System::IO::TextWriter textWriter, System::Xml::XmlWriterSettings writerSettings) ;

static System::Xml::XmlAutoDetectWriter New_ctor(System::IO::Stream strm, System::Xml::XmlWriterSettings writerSettings) ;

/// @brief Method .ctor addr 0x26c2ba4 size 0x28 virtual false final false
 void _ctor(System::IO::Stream strm, System::Xml::XmlWriterSettings writerSettings) ;

/// @brief Method WriteDocType addr 0x26c2bcc size 0x68 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26c2c44 size 0x80 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26c2f18 size 0x60 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c2f78 size 0x24 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteCData addr 0x26c2f9c size 0x48 virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26c3044 size 0x30 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26c3074 size 0x30 virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteWhitespace addr 0x26c30a4 size 0x30 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26c30d4 size 0x48 virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteChars addr 0x26c311c size 0x30 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c314c size 0x30 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c317c size 0x48 virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteEntityRef addr 0x26c31c4 size 0x4c virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c3210 size 0x4c virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c325c size 0x54 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteBase64 addr 0x26c32b0 size 0x64 virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteBinHex addr 0x26c3314 size 0x64 virtual true final false
 void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Close addr 0x26c3378 size 0x3c virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26c33b4 size 0x3c virtual true final false
 void Flush() ;

/// @brief Method WriteValue addr 0x26c33f0 size 0x4c virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method set_NamespaceResolver addr 0x26c343c size 0x34 virtual true final false
 void set_NamespaceResolver(System::Xml::IXmlNamespaceResolver value) ;

/// @brief Method WriteXmlDeclaration addr 0x26c3470 size 0x4c virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26c34bc size 0x4c virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method StartElementContent addr 0x26c3508 size 0x24 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26c352c size 0x24 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26c3550 size 0x24 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteNamespaceDeclaration addr 0x26c3574 size 0x54 virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26c35c8 size 0x24 virtual true final false
 bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x26c35ec size 0x4c virtual true final false
 void WriteStartNamespaceDeclaration(::StringW prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x26c3638 size 0x24 virtual true final false
 void WriteEndNamespaceDeclaration() ;

/// @brief Method IsHtmlTag addr 0x26c2cc4 size 0x114 virtual false final false
static bool IsHtmlTag(::StringW tagName) ;

/// @brief Method EnsureWrappedWriter addr 0x26c2c34 size 0x10 virtual false final false
 void EnsureWrappedWriter(System::Xml::XmlOutputMethod outMethod) ;

/// @brief Method TextBlockCreatesWriter addr 0x26c2fe4 size 0x60 virtual false final false
 bool TextBlockCreatesWriter(::StringW textBlock) ;

/// @brief Method CreateWrappedWriter addr 0x26c2dd8 size 0x140 virtual false final false
 void CreateWrappedWriter(System::Xml::XmlOutputMethod outMethod) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlAutoDetectWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlAutoDetectWriter, "System.Xml", "XmlAutoDetectWriter");
