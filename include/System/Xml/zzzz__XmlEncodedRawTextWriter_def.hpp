#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class CharEntityEncoderFallback;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoder;
}
namespace System::Xml {
struct NewLineHandling;
}
namespace System::Xml {
struct XmlCharType;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
struct XmlStandalone;
}
// Forward declare root types
namespace System::Xml {
class XmlEncodedRawTextWriter;
}
// Type: System.Xml::XmlEncodedRawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11397))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11391))
// CS Name: System.Xml.XmlEncodedRawTextWriter
class CORDL_TYPE XmlEncodedRawTextWriter : public System::Xml::XmlRawWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~XmlEncodedRawTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriter", modifiers: " const&", def_value: None }]
constexpr XmlEncodedRawTextWriter(XmlEncodedRawTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEncodedRawTextWriter", modifiers: "&&", def_value: None }]
constexpr XmlEncodedRawTextWriter(XmlEncodedRawTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlEncodedRawTextWriter(void* ptr) noexcept : System::Xml::XmlRawWriter(ptr) {
}


  constexpr XmlEncodedRawTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlEncodedRawTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlEncodedRawTextWriter& operator=(XmlEncodedRawTextWriter&& o) noexcept = default;
  constexpr XmlEncodedRawTextWriter& operator=(XmlEncodedRawTextWriter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useAsync, put=__set_useAsync))  useAsync;

constexpr void __set_useAsync(bool value) ;

constexpr bool __get_useAsync() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_bufBytes, put=__set_bufBytes))  bufBytes;

constexpr void __set_bufBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bufBytes() const;

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

 System::Text::Encoding __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get_encoding() const;

 System::Xml::XmlCharType __declspec(property(get=__get_xmlCharType, put=__set_xmlCharType))  xmlCharType;

constexpr void __set_xmlCharType(System::Xml::XmlCharType value) ;

constexpr System::Xml::XmlCharType __get_xmlCharType() const;

 int32_t __declspec(property(get=__get_bufPos, put=__set_bufPos))  bufPos;

constexpr void __set_bufPos(int32_t value) ;

constexpr int32_t __get_bufPos() const;

 int32_t __declspec(property(get=__get_textPos, put=__set_textPos))  textPos;

constexpr void __set_textPos(int32_t value) ;

constexpr int32_t __get_textPos() const;

 int32_t __declspec(property(get=__get_contentPos, put=__set_contentPos))  contentPos;

constexpr void __set_contentPos(int32_t value) ;

constexpr int32_t __get_contentPos() const;

 int32_t __declspec(property(get=__get_cdataPos, put=__set_cdataPos))  cdataPos;

constexpr void __set_cdataPos(int32_t value) ;

constexpr int32_t __get_cdataPos() const;

 int32_t __declspec(property(get=__get_attrEndPos, put=__set_attrEndPos))  attrEndPos;

constexpr void __set_attrEndPos(int32_t value) ;

constexpr int32_t __get_attrEndPos() const;

 int32_t __declspec(property(get=__get_bufLen, put=__set_bufLen))  bufLen;

constexpr void __set_bufLen(int32_t value) ;

constexpr int32_t __get_bufLen() const;

 bool __declspec(property(get=__get_writeToNull, put=__set_writeToNull))  writeToNull;

constexpr void __set_writeToNull(bool value) ;

constexpr bool __get_writeToNull() const;

 bool __declspec(property(get=__get_hadDoubleBracket, put=__set_hadDoubleBracket))  hadDoubleBracket;

constexpr void __set_hadDoubleBracket(bool value) ;

constexpr bool __get_hadDoubleBracket() const;

 bool __declspec(property(get=__get_inAttributeValue, put=__set_inAttributeValue))  inAttributeValue;

constexpr void __set_inAttributeValue(bool value) ;

constexpr bool __get_inAttributeValue() const;

 int32_t __declspec(property(get=__get_bufBytesUsed, put=__set_bufBytesUsed))  bufBytesUsed;

constexpr void __set_bufBytesUsed(int32_t value) ;

constexpr int32_t __get_bufBytesUsed() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_bufChars, put=__set_bufChars))  bufChars;

constexpr void __set_bufChars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_bufChars() const;

 System::Text::Encoder __declspec(property(get=__get_encoder, put=__set_encoder))  encoder;

constexpr void __set_encoder(System::Text::Encoder value) ;

constexpr System::Text::Encoder __get_encoder() const;

 System::IO::TextWriter __declspec(property(get=__get_writer, put=__set_writer))  writer;

constexpr void __set_writer(System::IO::TextWriter value) ;

constexpr System::IO::TextWriter __get_writer() const;

 bool __declspec(property(get=__get_trackTextContent, put=__set_trackTextContent))  trackTextContent;

constexpr void __set_trackTextContent(bool value) ;

constexpr bool __get_trackTextContent() const;

 bool __declspec(property(get=__get_inTextContent, put=__set_inTextContent))  inTextContent;

constexpr void __set_inTextContent(bool value) ;

constexpr bool __get_inTextContent() const;

 int32_t __declspec(property(get=__get_lastMarkPos, put=__set_lastMarkPos))  lastMarkPos;

constexpr void __set_lastMarkPos(int32_t value) ;

constexpr int32_t __get_lastMarkPos() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_textContentMarks, put=__set_textContentMarks))  textContentMarks;

constexpr void __set_textContentMarks(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_textContentMarks() const;

 System::Xml::CharEntityEncoderFallback __declspec(property(get=__get_charEntityFallback, put=__set_charEntityFallback))  charEntityFallback;

constexpr void __set_charEntityFallback(System::Xml::CharEntityEncoderFallback value) ;

constexpr System::Xml::CharEntityEncoderFallback __get_charEntityFallback() const;

 System::Xml::NewLineHandling __declspec(property(get=__get_newLineHandling, put=__set_newLineHandling))  newLineHandling;

constexpr void __set_newLineHandling(System::Xml::NewLineHandling value) ;

constexpr System::Xml::NewLineHandling __get_newLineHandling() const;

 bool __declspec(property(get=__get_closeOutput, put=__set_closeOutput))  closeOutput;

constexpr void __set_closeOutput(bool value) ;

constexpr bool __get_closeOutput() const;

 bool __declspec(property(get=__get_omitXmlDeclaration, put=__set_omitXmlDeclaration))  omitXmlDeclaration;

constexpr void __set_omitXmlDeclaration(bool value) ;

constexpr bool __get_omitXmlDeclaration() const;

 ::StringW __declspec(property(get=__get_newLineChars, put=__set_newLineChars))  newLineChars;

constexpr void __set_newLineChars(::StringW value) ;

constexpr ::StringW __get_newLineChars() const;

 bool __declspec(property(get=__get_checkCharacters, put=__set_checkCharacters))  checkCharacters;

constexpr void __set_checkCharacters(bool value) ;

constexpr bool __get_checkCharacters() const;

 System::Xml::XmlStandalone __declspec(property(get=__get_standalone, put=__set_standalone))  standalone;

constexpr void __set_standalone(System::Xml::XmlStandalone value) ;

constexpr System::Xml::XmlStandalone __get_standalone() const;

 System::Xml::XmlOutputMethod __declspec(property(get=__get_outputMethod, put=__set_outputMethod))  outputMethod;

constexpr void __set_outputMethod(System::Xml::XmlOutputMethod value) ;

constexpr System::Xml::XmlOutputMethod __get_outputMethod() const;

 bool __declspec(property(get=__get_autoXmlDeclaration, put=__set_autoXmlDeclaration))  autoXmlDeclaration;

constexpr void __set_autoXmlDeclaration(bool value) ;

constexpr bool __get_autoXmlDeclaration() const;

 bool __declspec(property(get=__get_mergeCDataSections, put=__set_mergeCDataSections))  mergeCDataSections;

constexpr void __set_mergeCDataSections(bool value) ;

constexpr bool __get_mergeCDataSections() const;


// Properties

 bool __declspec(property(get=get_SupportsNamespaceDeclarationInChunks))  SupportsNamespaceDeclarationInChunks;


// Methods

static System::Xml::XmlEncodedRawTextWriter New_ctor(System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26c3d64 size 0xdc virtual false final false
 void _ctor(System::Xml::XmlWriterSettings settings) ;

static System::Xml::XmlEncodedRawTextWriter New_ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26bc72c size 0xd8 virtual false final false
 void _ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

static System::Xml::XmlEncodedRawTextWriter New_ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26bc9a0 size 0x284 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteXmlDeclaration addr 0x26c41a0 size 0x17c virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26c431c size 0x78 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26c4394 size 0x1ec virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26bd148 size 0xc8 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26c4580 size 0x44 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26bd458 size 0x170 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26bd6c0 size 0x108 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26bd938 size 0x120 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c45c4 size 0x68 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteNamespaceDeclaration addr 0x26c462c size 0x54 virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW namespaceName) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26c4680 size 0x8 virtual true final false
 bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x26c4688 size 0x124 virtual true final false
 void WriteStartNamespaceDeclaration(::StringW prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x26c47ac size 0x68 virtual true final false
 void WriteEndNamespaceDeclaration() ;

/// @brief Method WriteCData addr 0x26c4814 size 0x1e0 virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26c4d04 size 0x12c virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26c4e30 size 0x12c virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26c4f5c size 0xcc virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c5028 size 0x1c4 virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteWhitespace addr 0x26c51ec size 0x6c virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26c5258 size 0x6c virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c52c4 size 0x148 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x26c540c size 0x88 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c2194 size 0x7c virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c20ec size 0x64 virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method Close addr 0x26c56b8 size 0x7c virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26c57d0 size 0x58 virtual true final false
 void Flush() ;

/// @brief Method FlushBuffer addr 0x26bf56c size 0x1f8 virtual true final false
 void FlushBuffer() ;

/// @brief Method EncodeChars addr 0x26c5828 size 0x134 virtual false final false
 void EncodeChars(int32_t startOffset, int32_t endOffset, bool writeAllToStream) ;

/// @brief Method FlushEncoder addr 0x26c5734 size 0x9c virtual false final false
 void FlushEncoder() ;

/// @brief Method WriteAttributeTextBlock addr 0x26be21c size 0x2f4 virtual false final false
 void WriteAttributeTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteElementTextBlock addr 0x26be510 size 0x2b0 virtual false final false
 void WriteElementTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method RawText addr 0x26bcec8 size 0x3c virtual false final false
 void RawText(::StringW s) ;

/// @brief Method RawText addr 0x26be7e8 size 0x174 virtual false final false
 void RawText(void* pSrcBegin, void* pSrcEnd) ;

/// @brief Method WriteRawWithCharChecking addr 0x26c5494 size 0x224 virtual false final false
 void WriteRawWithCharChecking(void* pSrcBegin, void* pSrcEnd) ;

/// @brief Method WriteCommentOrPi addr 0x26bdca4 size 0x314 virtual false final false
 void WriteCommentOrPi(::StringW text, int32_t stopChar) ;

/// @brief Method WriteCDataSection addr 0x26c49f4 size 0x310 virtual false final false
 void WriteCDataSection(::StringW text) ;

/// @brief Method EncodeSurrogate addr 0x26c59b4 size 0x160 virtual false final false
static void* EncodeSurrogate(void* pSrc, void* pSrcEnd, void* pDst) ;

/// @brief Method InvalidXmlChar addr 0x26c5b14 size 0x6c virtual false final false
 void* InvalidXmlChar(int32_t ch, void* pDst, bool entitize) ;

/// @brief Method EncodeChar addr 0x26bf050 size 0xa4 virtual false final false
 void EncodeChar(ByRef<void*> pSrc, void* pSrcEnd, ByRef<void*> pDst) ;

/// @brief Method ChangeTextContentMark addr 0x26bce54 size 0x74 virtual false final false
 void ChangeTextContentMark(bool value) ;

/// @brief Method GrowTextContentMarks addr 0x26c5ce4 size 0x80 virtual false final false
 void GrowTextContentMarks() ;

/// @brief Method WriteNewLine addr 0x26c5b80 size 0x5c virtual false final false
 void* WriteNewLine(void* pDst) ;

/// @brief Method LtEntity addr 0x26c595c size 0x18 virtual false final false
static void* LtEntity(void* pDst) ;

/// @brief Method GtEntity addr 0x26c5974 size 0x18 virtual false final false
static void* GtEntity(void* pDst) ;

/// @brief Method AmpEntity addr 0x26befac size 0x28 virtual false final false
static void* AmpEntity(void* pDst) ;

/// @brief Method QuoteEntity addr 0x26befd4 size 0x2c virtual false final false
static void* QuoteEntity(void* pDst) ;

/// @brief Method TabEntity addr 0x26c598c size 0x28 virtual false final false
static void* TabEntity(void* pDst) ;

/// @brief Method LineFeedEntity addr 0x26bf028 size 0x28 virtual false final false
static void* LineFeedEntity(void* pDst) ;

/// @brief Method CarriageReturnEntity addr 0x26bf000 size 0x28 virtual false final false
static void* CarriageReturnEntity(void* pDst) ;

/// @brief Method CharEntity addr 0x26c5c34 size 0xb0 virtual false final false
static void* CharEntity(void* pDst, char16_t ch) ;

/// @brief Method RawStartCData addr 0x26c5bfc size 0x38 virtual false final false
static void* RawStartCData(void* pDst) ;

/// @brief Method RawEndCData addr 0x26c5bdc size 0x20 virtual false final false
static void* RawEndCData(void* pDst) ;

/// @brief Method ValidateContentChars addr 0x26c3e40 size 0x360 virtual false final false
 void ValidateContentChars(::StringW chars, ::StringW propertyName, bool allowOnlyWhitespace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEncodedRawTextWriter, "System.Xml", "XmlEncodedRawTextWriter");
