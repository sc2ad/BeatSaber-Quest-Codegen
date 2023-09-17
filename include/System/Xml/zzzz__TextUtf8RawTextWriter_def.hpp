#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct XmlStandalone;
}
// Forward declare root types
namespace System::Xml {
class TextUtf8RawTextWriter;
}
// Type: System.Xml::TextUtf8RawTextWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11417))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11386))
// CS Name: System.Xml.TextUtf8RawTextWriter
class CORDL_TYPE TextUtf8RawTextWriter : public ::System::Xml::XmlUtf8RawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~TextUtf8RawTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextUtf8RawTextWriter", modifiers: " const&", def_value: None }]
constexpr TextUtf8RawTextWriter(TextUtf8RawTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextUtf8RawTextWriter", modifiers: "&&", def_value: None }]
constexpr TextUtf8RawTextWriter(TextUtf8RawTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextUtf8RawTextWriter(void* ptr) noexcept : ::System::Xml::XmlUtf8RawTextWriter(ptr) {
}


  constexpr TextUtf8RawTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextUtf8RawTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextUtf8RawTextWriter& operator=(TextUtf8RawTextWriter&& o) noexcept = default;
  constexpr TextUtf8RawTextWriter& operator=(TextUtf8RawTextWriter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_SupportsNamespaceDeclarationInChunks))  SupportsNamespaceDeclarationInChunks;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit TextUtf8RawTextWriter(::System::IO::Stream stream, ::System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26c2230 size 0x8 virtual false final false
 void _ctor(::System::IO::Stream stream, ::System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteXmlDeclaration addr 0x26c2238 size 0x4 virtual true final false
 void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26c223c size 0x4 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26c2240 size 0x4 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26c2244 size 0x4 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndElement addr 0x26c2248 size 0x4 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26c224c size 0x4 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26c2250 size 0x4 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteStartAttribute addr 0x26c2254 size 0xc virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c2260 size 0x8 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteNamespaceDeclaration addr 0x26c2268 size 0x4 virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26c226c size 0x8 virtual true final false
 bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteCData addr 0x26c2274 size 0x8 virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26c227c size 0x4 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26c2280 size 0x4 virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26c2284 size 0x4 virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c2288 size 0x4 virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c228c size 0x4 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteWhitespace addr 0x26c2290 size 0x14 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26c22a4 size 0x14 virtual true final false
 void WriteString(::StringW textBlock) ;

/// @brief Method WriteChars addr 0x26c22b8 size 0x14 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c22cc size 0x14 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c22e0 size 0x14 virtual true final false
 void WriteRaw(::StringW data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::TextUtf8RawTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TextUtf8RawTextWriter, "System.Xml", "TextUtf8RawTextWriter");
