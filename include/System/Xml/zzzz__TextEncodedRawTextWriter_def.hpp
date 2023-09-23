#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
struct XmlStandalone;
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
// Forward declare root types
namespace System::Xml {
class TextEncodedRawTextWriter;
}
// Type: System.Xml::TextEncodedRawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11391))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11385))
// CS Name: System.Xml.TextEncodedRawTextWriter
class CORDL_TYPE TextEncodedRawTextWriter : public System::Xml::XmlEncodedRawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~TextEncodedRawTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEncodedRawTextWriter", modifiers: " const&", def_value: None }]
constexpr TextEncodedRawTextWriter(TextEncodedRawTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEncodedRawTextWriter", modifiers: "&&", def_value: None }]
constexpr TextEncodedRawTextWriter(TextEncodedRawTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextEncodedRawTextWriter(void* ptr) noexcept : System::Xml::XmlEncodedRawTextWriter(ptr) {
}


  constexpr TextEncodedRawTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextEncodedRawTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextEncodedRawTextWriter& operator=(TextEncodedRawTextWriter&& o) noexcept = default;
  constexpr TextEncodedRawTextWriter& operator=(TextEncodedRawTextWriter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_SupportsNamespaceDeclarationInChunks))  SupportsNamespaceDeclarationInChunks;


// Methods

// Ctor Parameters [CppParam { name: "writer", ty: "System::IO::TextWriter", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit TextEncodedRawTextWriter(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26c20a4 size 0x4 virtual false final false
 void _ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit TextEncodedRawTextWriter(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26c20a8 size 0x4 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteXmlDeclaration addr 0x26c20ac size 0x4 virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26c20b0 size 0x4 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26c20b4 size 0x4 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26c20b8 size 0x4 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndElement addr 0x26c20bc size 0x4 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26c20c0 size 0x4 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26c20c4 size 0x4 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteStartAttribute addr 0x26c20c8 size 0xc virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c20d4 size 0x8 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteNamespaceDeclaration addr 0x26c20dc size 0x4 virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26c20e0 size 0x8 virtual true final false
 bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteCData addr 0x26c20e8 size 0x4 virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26c2150 size 0x4 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26c2154 size 0x4 virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26c2158 size 0x4 virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c215c size 0x4 virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c2160 size 0x4 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteWhitespace addr 0x26c2164 size 0x10 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26c2174 size 0x10 virtual true final false
 void WriteString(::StringW textBlock) ;

/// @brief Method WriteChars addr 0x26c2184 size 0x10 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c2210 size 0x10 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c2220 size 0x10 virtual true final false
 void WriteRaw(::StringW data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::TextEncodedRawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::TextEncodedRawTextWriter, "System.Xml", "TextEncodedRawTextWriter");
