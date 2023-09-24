#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
struct XmlCharType;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
struct NewLineHandling;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
struct XmlStandalone;
}
// Forward declare root types
namespace System::Xml {
class XmlUtf8RawTextWriter;
}
// Type: System.Xml::XmlUtf8RawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11397))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11417))
// CS Name: System.Xml.XmlUtf8RawTextWriter
class CORDL_TYPE XmlUtf8RawTextWriter : public System::Xml::XmlRawWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~XmlUtf8RawTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriter", modifiers: " const&", def_value: None }]
constexpr XmlUtf8RawTextWriter(XmlUtf8RawTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUtf8RawTextWriter", modifiers: "&&", def_value: None }]
constexpr XmlUtf8RawTextWriter(XmlUtf8RawTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlUtf8RawTextWriter(void* ptr) noexcept : System::Xml::XmlRawWriter(ptr) {
}


  constexpr XmlUtf8RawTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlUtf8RawTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlUtf8RawTextWriter& operator=(XmlUtf8RawTextWriter&& o) noexcept = default;
  constexpr XmlUtf8RawTextWriter& operator=(XmlUtf8RawTextWriter const& o) noexcept = default;
                


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

static System::Xml::XmlUtf8RawTextWriter New_ctor(System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26e1a84 size 0xdc virtual false final false
 void _ctor(System::Xml::XmlWriterSettings settings) ;

static System::Xml::XmlUtf8RawTextWriter New_ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26e1ec0 size 0x144 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteXmlDeclaration addr 0x26e2004 size 0x160 virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26e21a0 size 0x78 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26e2218 size 0x1f0 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26e2408 size 0xa4 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26e24ac size 0x48 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26e24f4 size 0x158 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26e264c size 0xf4 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26e2740 size 0x10c virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26e284c size 0x4c virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteNamespaceDeclaration addr 0x26e2898 size 0x54 virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW namespaceName) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26e28ec size 0x8 virtual true final false
 bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x26e28f4 size 0xf4 virtual true final false
 void WriteStartNamespaceDeclaration(::StringW prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x26e29e8 size 0x4c virtual true final false
 void WriteEndNamespaceDeclaration() ;

/// @brief Method WriteCData addr 0x26e2a34 size 0x25c virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26e2fb0 size 0x158 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26e343c size 0x128 virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26e3564 size 0xa0 virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26e3604 size 0x1cc virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteWhitespace addr 0x26e37d0 size 0x50 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26e3dd4 size 0x50 virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26e3e24 size 0x14c virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x26e3f70 size 0x40 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26e3fb0 size 0x40 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26e423c size 0x48 virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method Close addr 0x26e4284 size 0x74 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26e42fc size 0x3c virtual true final false
 void Flush() ;

/// @brief Method FlushBuffer addr 0x26e4338 size 0x17c virtual true final false
 void FlushBuffer() ;

/// @brief Method FlushEncoder addr 0x26e42f8 size 0x4 virtual false final false
 void FlushEncoder() ;

/// @brief Method WriteAttributeTextBlock addr 0x26e3820 size 0x2f4 virtual false final false
 void WriteAttributeTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method WriteElementTextBlock addr 0x26e3b14 size 0x2c0 virtual false final false
 void WriteElementTextBlock(void* pSrc, void* pSrcEnd) ;

/// @brief Method RawText addr 0x26e2164 size 0x3c virtual false final false
 void RawText(::StringW s) ;

/// @brief Method RawText addr 0x26e4854 size 0x18c virtual false final false
 void RawText(void* pSrcBegin, void* pSrcEnd) ;

/// @brief Method WriteRawWithCharChecking addr 0x26e3ff0 size 0x24c virtual false final false
 void WriteRawWithCharChecking(void* pSrcBegin, void* pSrcEnd) ;

/// @brief Method WriteCommentOrPi addr 0x26e3108 size 0x334 virtual false final false
 void WriteCommentOrPi(::StringW text, int32_t stopChar) ;

/// @brief Method WriteCDataSection addr 0x26e2c90 size 0x320 virtual false final false
 void WriteCDataSection(::StringW text) ;

/// @brief Method IsSurrogateByte addr 0x26e4a24 size 0x10 virtual false final false
static bool IsSurrogateByte(uint8_t b) ;

/// @brief Method EncodeSurrogate addr 0x26e4574 size 0x198 virtual false final false
static void* EncodeSurrogate(void* pSrc, void* pSrcEnd, void* pDst) ;

/// @brief Method InvalidXmlChar addr 0x26e470c size 0xb4 virtual false final false
 void* InvalidXmlChar(int32_t ch, void* pDst, bool entitize) ;

/// @brief Method EncodeChar addr 0x26e4ae0 size 0xdc virtual false final false
 void EncodeChar(ByRef<void*> pSrc, void* pSrcEnd, ByRef<void*> pDst) ;

/// @brief Method EncodeMultibyteUTF8 addr 0x26e47c0 size 0x40 virtual false final false
static void* EncodeMultibyteUTF8(int32_t ch, void* pDst) ;

/// @brief Method CharToUTF8 addr 0x26e4bbc size 0xd0 virtual false final false
static void CharToUTF8(ByRef<void*> pSrc, void* pSrcEnd, ByRef<void*> pDst) ;

/// @brief Method WriteNewLine addr 0x26e4800 size 0x54 virtual false final false
 void* WriteNewLine(void* pDst) ;

/// @brief Method LtEntity addr 0x26e44d4 size 0x10 virtual false final false
static void* LtEntity(void* pDst) ;

/// @brief Method GtEntity addr 0x26e44e4 size 0x10 virtual false final false
static void* GtEntity(void* pDst) ;

/// @brief Method AmpEntity addr 0x26e44b4 size 0x20 virtual false final false
static void* AmpEntity(void* pDst) ;

/// @brief Method QuoteEntity addr 0x26e44f4 size 0x20 virtual false final false
static void* QuoteEntity(void* pDst) ;

/// @brief Method TabEntity addr 0x26e4514 size 0x20 virtual false final false
static void* TabEntity(void* pDst) ;

/// @brief Method LineFeedEntity addr 0x26e4554 size 0x20 virtual false final false
static void* LineFeedEntity(void* pDst) ;

/// @brief Method CarriageReturnEntity addr 0x26e4534 size 0x20 virtual false final false
static void* CarriageReturnEntity(void* pDst) ;

/// @brief Method CharEntity addr 0x26e4a34 size 0xac virtual false final false
static void* CharEntity(void* pDst, char16_t ch) ;

/// @brief Method RawStartCData addr 0x26e49fc size 0x28 virtual false final false
static void* RawStartCData(void* pDst) ;

/// @brief Method RawEndCData addr 0x26e49e0 size 0x1c virtual false final false
static void* RawEndCData(void* pDst) ;

/// @brief Method ValidateContentChars addr 0x26e1b60 size 0x360 virtual false final false
 void ValidateContentChars(::StringW chars, ::StringW propertyName, bool allowOnlyWhitespace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUtf8RawTextWriter, "System.Xml", "XmlUtf8RawTextWriter");
