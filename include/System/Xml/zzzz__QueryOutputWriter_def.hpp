#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class BitStack;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlWriterSettings;
}
// Forward declare root types
namespace System::Xml {
class QueryOutputWriter;
}
// Type: System.Xml::QueryOutputWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11397))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11378))
// CS Name: System.Xml.QueryOutputWriter
class CORDL_TYPE QueryOutputWriter : public System::Xml::XmlRawWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~QueryOutputWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "QueryOutputWriter", modifiers: " const&", def_value: None }]
constexpr QueryOutputWriter(QueryOutputWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QueryOutputWriter", modifiers: "&&", def_value: None }]
constexpr QueryOutputWriter(QueryOutputWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QueryOutputWriter(void* ptr) noexcept : System::Xml::XmlRawWriter(ptr) {
}


  constexpr QueryOutputWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QueryOutputWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QueryOutputWriter& operator=(QueryOutputWriter&& o) noexcept = default;
  constexpr QueryOutputWriter& operator=(QueryOutputWriter const& o) noexcept = default;
                


// Fields

 System::Xml::XmlRawWriter __declspec(property(get=__get_wrapped, put=__set_wrapped))  wrapped;

constexpr void __set_wrapped(System::Xml::XmlRawWriter value) ;

constexpr System::Xml::XmlRawWriter __get_wrapped() const;

 bool __declspec(property(get=__get_inCDataSection, put=__set_inCDataSection))  inCDataSection;

constexpr void __set_inCDataSection(bool value) ;

constexpr bool __get_inCDataSection() const;

 System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,int32_t> __declspec(property(get=__get_lookupCDataElems, put=__set_lookupCDataElems))  lookupCDataElems;

constexpr void __set_lookupCDataElems(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName,int32_t> __get_lookupCDataElems() const;

 System::Xml::BitStack __declspec(property(get=__get_bitsCData, put=__set_bitsCData))  bitsCData;

constexpr void __set_bitsCData(System::Xml::BitStack value) ;

constexpr System::Xml::BitStack __get_bitsCData() const;

 System::Xml::XmlQualifiedName __declspec(property(get=__get_qnameCData, put=__set_qnameCData))  qnameCData;

constexpr void __set_qnameCData(System::Xml::XmlQualifiedName value) ;

constexpr System::Xml::XmlQualifiedName __get_qnameCData() const;

 bool __declspec(property(get=__get_outputDocType, put=__set_outputDocType))  outputDocType;

constexpr void __set_outputDocType(bool value) ;

constexpr bool __get_outputDocType() const;

 bool __declspec(property(get=__get_checkWellFormedDoc, put=__set_checkWellFormedDoc))  checkWellFormedDoc;

constexpr void __set_checkWellFormedDoc(bool value) ;

constexpr bool __get_checkWellFormedDoc() const;

 bool __declspec(property(get=__get_hasDocElem, put=__set_hasDocElem))  hasDocElem;

constexpr void __set_hasDocElem(bool value) ;

constexpr bool __get_hasDocElem() const;

 bool __declspec(property(get=__get_inAttr, put=__set_inAttr))  inAttr;

constexpr void __set_inAttr(bool value) ;

constexpr bool __get_inAttr() const;

 ::StringW __declspec(property(get=__get_systemId, put=__set_systemId))  systemId;

constexpr void __set_systemId(::StringW value) ;

constexpr ::StringW __get_systemId() const;

 ::StringW __declspec(property(get=__get_publicId, put=__set_publicId))  publicId;

constexpr void __set_publicId(::StringW value) ;

constexpr ::StringW __get_publicId() const;

 int32_t __declspec(property(get=__get_depth, put=__set_depth))  depth;

constexpr void __set_depth(int32_t value) ;

constexpr int32_t __get_depth() const;


// Properties

 System::Xml::IXmlNamespaceResolver __declspec(property(put=set_NamespaceResolver))  NamespaceResolver;

 bool __declspec(property(get=get_SupportsNamespaceDeclarationInChunks))  SupportsNamespaceDeclarationInChunks;


// Methods

static System::Xml::QueryOutputWriter New_ctor(System::Xml::XmlRawWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26c1170 size 0x2d4 virtual false final false
 void _ctor(System::Xml::XmlRawWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method set_NamespaceResolver addr 0x26c144c size 0x2c virtual true final false
 void set_NamespaceResolver(System::Xml::IXmlNamespaceResolver value) ;

/// @brief Method WriteXmlDeclaration addr 0x26c1478 size 0x24 virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26c149c size 0x24 virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method WriteDocType addr 0x26c14c0 size 0x38 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26c14f8 size 0x1c8 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndElement addr 0x26c16c8 size 0x70 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26c1738 size 0x70 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method StartElementContent addr 0x26c17a8 size 0x24 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteStartAttribute addr 0x26c17cc size 0x2c virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c17f8 size 0x2c virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteNamespaceDeclaration addr 0x26c1824 size 0x24 virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x26c1848 size 0x24 virtual true final false
 bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x26c186c size 0x24 virtual true final false
 void WriteStartNamespaceDeclaration(::StringW prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x26c1890 size 0x24 virtual true final false
 void WriteEndNamespaceDeclaration() ;

/// @brief Method WriteCData addr 0x26c18b4 size 0x24 virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26c18d8 size 0x2c virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26c1904 size 0x2c virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteWhitespace addr 0x26c1930 size 0x70 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26c19dc size 0x70 virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteChars addr 0x26c1a4c size 0x88 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteEntityRef addr 0x26c1ad4 size 0x2c virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c1b00 size 0x2c virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c1b2c size 0x2c virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteRaw addr 0x26c1b58 size 0x88 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c1be0 size 0x70 virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method Close addr 0x26c1c50 size 0xa8 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26c1cf8 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method StartCDataSection addr 0x26c19a0 size 0x3c virtual false final false
 bool StartCDataSection() ;

/// @brief Method EndCDataSection addr 0x26c16c0 size 0x8 virtual false final false
 void EndCDataSection() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::QueryOutputWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::QueryOutputWriter, "System.Xml", "QueryOutputWriter");
