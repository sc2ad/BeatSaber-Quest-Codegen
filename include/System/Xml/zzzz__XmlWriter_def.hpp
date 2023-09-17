#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace System::Xml {
struct WriteState;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Xml {
class XmlWriter;
}
// Type: System.Xml::XmlWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11433))
// CS Name: System.Xml.XmlWriter
class CORDL_TYPE XmlWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWriter", modifiers: " const&", def_value: None }]
constexpr XmlWriter(XmlWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWriter", modifiers: "&&", def_value: None }]
constexpr XmlWriter(XmlWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlWriter& operator=(XmlWriter&& o) noexcept = default;
  constexpr XmlWriter& operator=(XmlWriter const& o) noexcept = default;
                


// Properties

 ::System::Xml::WriteState __declspec(property(get=get_WriteState))  WriteState;


// Methods

/// @brief Method WriteStartDocument addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteStartDocument() ;

/// @brief Method WriteStartDocument addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteStartDocument(bool standalone) ;

/// @brief Method WriteEndDocument addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteEndDocument() ;

/// @brief Method WriteDocType addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndElement addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteEndElement() ;

/// @brief Method WriteFullEndElement addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteFullEndElement() ;

/// @brief Method WriteAttributeString addr 0x26ecb04 size 0x50 virtual false final false
 void WriteAttributeString(::StringW prefix, ::StringW localName, ::StringW ns, ::StringW value) ;

/// @brief Method WriteStartAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteCData addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteWhitespace addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteSurrogateCharEntity addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteBase64 addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteBinHex addr 0x26eb2dc size 0x1c virtual true final false
 void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method get_WriteState addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Xml::WriteState get_WriteState() ;

/// @brief Method Close addr 0x26ecb54 size 0x4 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x0 size 0xffffffffffffffff virtual true final false
 void Flush() ;

/// @brief Method LookupPrefix addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW LookupPrefix(::StringW ns) ;

/// @brief Method WriteValue addr 0x26ecb58 size 0x18 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method Dispose addr 0x26ecb70 size 0x14 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x26ecb84 size 0x44 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Create addr 0x26ecbc8 size 0x68 virtual false final false
static ::System::Xml::XmlWriter Create(::System::IO::Stream output, ::System::Xml::XmlWriterSettings settings) ;

/// @brief Method Create addr 0x26ed168 size 0x68 virtual false final false
static ::System::Xml::XmlWriter Create(::System::IO::TextWriter output, ::System::Xml::XmlWriterSettings settings) ;

// Ctor Parameters []
explicit XmlWriter() ;

/// @brief Method .ctor addr 0x26e5550 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWriter, "System.Xml", "XmlWriter");
