#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__HtmlUtf8RawTextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class HtmlUtf8RawTextWriterIndent;
}
// Type: System.Xml::HtmlUtf8RawTextWriterIndent
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11362))
// CS Name: System.Xml.HtmlUtf8RawTextWriterIndent
class CORDL_TYPE HtmlUtf8RawTextWriterIndent : public System::Xml::HtmlUtf8RawTextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~HtmlUtf8RawTextWriterIndent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: " const&", def_value: None }]
constexpr HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HtmlUtf8RawTextWriterIndent", modifiers: "&&", def_value: None }]
constexpr HtmlUtf8RawTextWriterIndent(HtmlUtf8RawTextWriterIndent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HtmlUtf8RawTextWriterIndent(void* ptr) noexcept : System::Xml::HtmlUtf8RawTextWriter(ptr) {
}


  constexpr HtmlUtf8RawTextWriterIndent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HtmlUtf8RawTextWriterIndent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HtmlUtf8RawTextWriterIndent& operator=(HtmlUtf8RawTextWriterIndent&& o) noexcept = default;
  constexpr HtmlUtf8RawTextWriterIndent& operator=(HtmlUtf8RawTextWriterIndent const& o) noexcept = default;
                


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

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
explicit HtmlUtf8RawTextWriterIndent(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26c0bd8 size 0x4c virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteDocType addr 0x26c0c4c size 0x1c virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26c0c68 size 0x1a4 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26c0e5c size 0x74 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26c0ed0 size 0xa0 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26c0f70 size 0x74 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method FlushBuffer addr 0x26c0fe4 size 0x2c virtual true final false
 void FlushBuffer() ;

/// @brief Method Init addr 0x26c0c24 size 0x28 virtual false final false
 void Init(System::Xml::XmlWriterSettings settings) ;

/// @brief Method WriteIndent addr 0x26c0e0c size 0x50 virtual false final false
 void WriteIndent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::HtmlUtf8RawTextWriterIndent);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlUtf8RawTextWriterIndent, "System.Xml", "HtmlUtf8RawTextWriterIndent");
