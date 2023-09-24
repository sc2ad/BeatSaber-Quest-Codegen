#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__HtmlEncodedRawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace System::Xml {
class HtmlEncodedRawTextWriterIndent;
}
// Type: System.Xml::HtmlEncodedRawTextWriterIndent
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11359))
// CS Name: System.Xml.HtmlEncodedRawTextWriterIndent
class CORDL_TYPE HtmlEncodedRawTextWriterIndent : public System::Xml::HtmlEncodedRawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~HtmlEncodedRawTextWriterIndent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: " const&", def_value: None }]
constexpr HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlEncodedRawTextWriterIndent", modifiers: "&&", def_value: None }]
constexpr HtmlEncodedRawTextWriterIndent(HtmlEncodedRawTextWriterIndent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlEncodedRawTextWriterIndent(void* ptr) noexcept : System::Xml::HtmlEncodedRawTextWriter(ptr) {
}


  constexpr HtmlEncodedRawTextWriterIndent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlEncodedRawTextWriterIndent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlEncodedRawTextWriterIndent& operator=(HtmlEncodedRawTextWriterIndent&& o) noexcept = default;
  constexpr HtmlEncodedRawTextWriterIndent& operator=(HtmlEncodedRawTextWriterIndent const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_indentLevel, put=__set_indentLevel))  indentLevel;

constexpr void __set_indentLevel(int32_t value) ;

constexpr int32_t __get_indentLevel() const;

 int32_t __declspec(property(get=__get_endBlockPos, put=__set_endBlockPos))  endBlockPos;

constexpr void __set_endBlockPos(int32_t value) ;

constexpr int32_t __get_endBlockPos() const;

 ::StringW __declspec(property(get=__get_indentChars, put=__set_indentChars))  indentChars;

constexpr void __set_indentChars(::StringW value) ;

constexpr ::StringW __get_indentChars() const;

 bool __declspec(property(get=__get_newLineOnAttributes, put=__set_newLineOnAttributes))  newLineOnAttributes;

constexpr void __set_newLineOnAttributes(bool value) ;

constexpr bool __get_newLineOnAttributes() const;


// Methods

static System::Xml::HtmlEncodedRawTextWriterIndent New_ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26bf0f4 size 0x48 virtual false final false
 void _ctor(System::IO::TextWriter writer, System::Xml::XmlWriterSettings settings) ;

static System::Xml::HtmlEncodedRawTextWriterIndent New_ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26bf164 size 0x48 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteDocType addr 0x26bf1ac size 0x1c virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26bf1c8 size 0x1b4 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26bf3c4 size 0x70 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26bf434 size 0xa0 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26bf4d4 size 0x70 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method FlushBuffer addr 0x26bf544 size 0x28 virtual true final false
 void FlushBuffer() ;

/// @brief Method Init addr 0x26bf13c size 0x28 virtual false final false
 void Init(System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteIndent addr 0x26bf37c size 0x48 virtual false final false
 void WriteIndent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::HtmlEncodedRawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlEncodedRawTextWriterIndent, "System.Xml", "HtmlEncodedRawTextWriterIndent");
