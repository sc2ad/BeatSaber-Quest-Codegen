#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Xml {
class XmlAsyncCheckWriter;
}
// Type: System.Xml::XmlAsyncCheckWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11433))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11389))
// CS Name: System.Xml.XmlAsyncCheckWriter
class CORDL_TYPE XmlAsyncCheckWriter : public ::System::Xml::XmlWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XmlAsyncCheckWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: " const&", def_value: None }]
constexpr XmlAsyncCheckWriter(XmlAsyncCheckWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlAsyncCheckWriter", modifiers: "&&", def_value: None }]
constexpr XmlAsyncCheckWriter(XmlAsyncCheckWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlAsyncCheckWriter(void* ptr) noexcept : ::System::Xml::XmlWriter(ptr) {
}


  constexpr XmlAsyncCheckWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlAsyncCheckWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlAsyncCheckWriter& operator=(XmlAsyncCheckWriter&& o) noexcept = default;
  constexpr XmlAsyncCheckWriter& operator=(XmlAsyncCheckWriter const& o) noexcept = default;
                


// Fields

 ::System::Xml::XmlWriter __declspec(property(get=__get_coreWriter, put=__set_coreWriter))  coreWriter;

constexpr void __set_coreWriter(::System::Xml::XmlWriter value) ;

constexpr ::System::Xml::XmlWriter __get_coreWriter() const;

 ::System::Threading::Tasks::Task __declspec(property(get=__get_lastTask, put=__set_lastTask))  lastTask;

constexpr void __set_lastTask(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get_lastTask() const;


// Properties

 ::System::Xml::WriteState __declspec(property(get=get_WriteState))  WriteState;


// Methods

// Ctor Parameters [CppParam { name: "writer", ty: "::System::Xml::XmlWriter", modifiers: "", def_value: None }]
explicit XmlAsyncCheckWriter(::System::Xml::XmlWriter writer) ;

/// @brief Method .ctor addr 0x26c22f4 size 0x7c virtual false final false
 void _ctor(::System::Xml::XmlWriter writer) ;

/// @brief Method CheckAsync addr 0x26c2370 size 0x84 virtual false final false
 void CheckAsync() ;

/// @brief Method WriteStartDocument addr 0x26c23f4 size 0x28 virtual true final false
 void WriteStartDocument() ;

/// @brief Method WriteStartDocument addr 0x26c241c size 0x38 virtual true final false
 void WriteStartDocument(bool standalone) ;

/// @brief Method WriteEndDocument addr 0x26c2454 size 0x28 virtual true final false
 void WriteEndDocument() ;

/// @brief Method WriteDocType addr 0x26c247c size 0x58 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26c24d4 size 0x50 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndElement addr 0x26c2524 size 0x28 virtual true final false
 void WriteEndElement() ;

/// @brief Method WriteFullEndElement addr 0x26c254c size 0x28 virtual true final false
 void WriteFullEndElement() ;

/// @brief Method WriteStartAttribute addr 0x26c2574 size 0x50 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c25c4 size 0x2c virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteCData addr 0x26c25f0 size 0x3c virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26c262c size 0x3c virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26c2668 size 0x44 virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26c26ac size 0x3c virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c26e8 size 0x3c virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteWhitespace addr 0x26c2724 size 0x3c virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26c2760 size 0x3c virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c279c size 0x44 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteChars addr 0x26c27e0 size 0x54 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c2834 size 0x54 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c2888 size 0x3c virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteBase64 addr 0x26c28c4 size 0x54 virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteBinHex addr 0x26c2918 size 0x54 virtual true final false
 void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method get_WriteState addr 0x26c296c size 0x2c virtual true final false
 ::System::Xml::WriteState get_WriteState() ;

/// @brief Method Close addr 0x26c2998 size 0x2c virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26c29c4 size 0x2c virtual true final false
 void Flush() ;

/// @brief Method LookupPrefix addr 0x26c29f0 size 0x3c virtual true final false
 ::StringW LookupPrefix(::StringW ns) ;

/// @brief Method WriteValue addr 0x26c2a2c size 0x3c virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method Dispose addr 0x26c2a68 size 0x24 virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlAsyncCheckWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAsyncCheckWriter, "System.Xml", "XmlAsyncCheckWriter");
