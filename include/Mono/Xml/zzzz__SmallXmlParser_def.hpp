#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__AttrListImpl;
}
namespace System::IO {
class TextReader;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IContentHandler;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections {
class Stack;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IAttrList;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__AttrListImpl;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IAttrList;
}
namespace Mono::Xml {
class Mono__Xml__SmallXmlParser__IContentHandler;
}
namespace Mono::Xml {
class SmallXmlParser;
}
// Type: ::IContentHandler
namespace Mono::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2251))
// CS Name: Mono.Xml.SmallXmlParser::IContentHandler
class CORDL_TYPE Mono__Xml__SmallXmlParser__IContentHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~Mono__Xml__SmallXmlParser__IContentHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Xml__SmallXmlParser__IContentHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnStartParsing addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnStartParsing(Mono::Xml::SmallXmlParser parser) ;

/// @brief Method OnEndParsing addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnEndParsing(Mono::Xml::SmallXmlParser parser) ;

/// @brief Method OnStartElement addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnStartElement(::StringW name, Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList attrs) ;

/// @brief Method OnEndElement addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnEndElement(::StringW name) ;

/// @brief Method OnProcessingInstruction addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method OnChars addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnChars(::StringW text) ;

/// @brief Method OnIgnorableWhitespace addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnIgnorableWhitespace(::StringW text) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Xml
// Type: ::IAttrList
namespace Mono::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2252))
// CS Name: Mono.Xml.SmallXmlParser::IAttrList
class CORDL_TYPE Mono__Xml__SmallXmlParser__IAttrList : public ::cordl_internals::InterfaceW {
public:
// Declarations
~Mono__Xml__SmallXmlParser__IAttrList() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Xml__SmallXmlParser__IAttrList(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 ::ArrayW<::StringW> __declspec(property(get=get_Names))  Names;

 ::ArrayW<::StringW> __declspec(property(get=get_Values))  Values;


// Methods

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Length() ;

/// @brief Method GetName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetName(int32_t i) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetValue(int32_t i) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetValue(::StringW name) ;

/// @brief Method get_Names addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::StringW> get_Names() ;

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::StringW> get_Values() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Xml
// Type: ::AttrListImpl
namespace Mono::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2253))
// CS Name: Mono.Xml.SmallXmlParser::AttrListImpl
class CORDL_TYPE Mono__Xml__SmallXmlParser__AttrListImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList
constexpr operator  Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Mono__Xml__SmallXmlParser__AttrListImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Xml__SmallXmlParser__AttrListImpl", modifiers: " const&", def_value: None }]
constexpr Mono__Xml__SmallXmlParser__AttrListImpl(Mono__Xml__SmallXmlParser__AttrListImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Xml__SmallXmlParser__AttrListImpl", modifiers: "&&", def_value: None }]
constexpr Mono__Xml__SmallXmlParser__AttrListImpl(Mono__Xml__SmallXmlParser__AttrListImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Xml__SmallXmlParser__AttrListImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Xml__SmallXmlParser__AttrListImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Xml__SmallXmlParser__AttrListImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Xml__SmallXmlParser__AttrListImpl& operator=(Mono__Xml__SmallXmlParser__AttrListImpl&& o) noexcept = default;
  constexpr Mono__Xml__SmallXmlParser__AttrListImpl& operator=(Mono__Xml__SmallXmlParser__AttrListImpl const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_attrNames, put=__set_attrNames))  attrNames;

constexpr void __set_attrNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_attrNames() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_attrValues, put=__set_attrValues))  attrValues;

constexpr void __set_attrValues(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_attrValues() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 ::ArrayW<::StringW> __declspec(property(get=get_Names))  Names;

 ::ArrayW<::StringW> __declspec(property(get=get_Values))  Values;


// Methods

/// @brief Method get_Length addr 0x22a7ac4 size 0x48 virtual true final true
 int32_t get_Length() ;

/// @brief Method GetName addr 0x22a7b0c size 0x58 virtual true final true
 ::StringW GetName(int32_t i) ;

/// @brief Method GetValue addr 0x22a7b64 size 0x58 virtual true final true
 ::StringW GetValue(int32_t i) ;

/// @brief Method GetValue addr 0x22a7bbc size 0xc0 virtual true final true
 ::StringW GetValue(::StringW name) ;

/// @brief Method get_Names addr 0x22a7c7c size 0x50 virtual true final true
 ::ArrayW<::StringW> get_Names() ;

/// @brief Method get_Values addr 0x22a7ccc size 0x50 virtual true final true
 ::ArrayW<::StringW> get_Values() ;

/// @brief Method Clear addr 0x22a7468 size 0x9c virtual false final false
 void Clear() ;

/// @brief Method Add addr 0x22a79b0 size 0x114 virtual false final false
 void Add(::StringW name, ::StringW value) ;

static Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl New_ctor() ;

/// @brief Method .ctor addr 0x22a60f0 size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Xml
// Type: Mono.Xml::SmallXmlParser
namespace Mono::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2254))
// CS Name: Mono.Xml.SmallXmlParser
class CORDL_TYPE SmallXmlParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AttrListImpl = Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl;

using IAttrList = Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList;

using IContentHandler = Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SmallXmlParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser", modifiers: " const&", def_value: None }]
constexpr SmallXmlParser(SmallXmlParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser", modifiers: "&&", def_value: None }]
constexpr SmallXmlParser(SmallXmlParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmallXmlParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SmallXmlParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmallXmlParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmallXmlParser& operator=(SmallXmlParser&& o) noexcept = default;
  constexpr SmallXmlParser& operator=(SmallXmlParser const& o) noexcept = default;
                


// Fields

 Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler __declspec(property(get=__get_handler, put=__set_handler))  handler;

constexpr void __set_handler(Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler value) ;

constexpr Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler __get_handler() const;

 System::IO::TextReader __declspec(property(get=__get_reader, put=__set_reader))  reader;

constexpr void __set_reader(System::IO::TextReader value) ;

constexpr System::IO::TextReader __get_reader() const;

 System::Collections::Stack __declspec(property(get=__get_elementNames, put=__set_elementNames))  elementNames;

constexpr void __set_elementNames(System::Collections::Stack value) ;

constexpr System::Collections::Stack __get_elementNames() const;

 System::Collections::Stack __declspec(property(get=__get_xmlSpaces, put=__set_xmlSpaces))  xmlSpaces;

constexpr void __set_xmlSpaces(System::Collections::Stack value) ;

constexpr System::Collections::Stack __get_xmlSpaces() const;

 ::StringW __declspec(property(get=__get_xmlSpace, put=__set_xmlSpace))  xmlSpace;

constexpr void __set_xmlSpace(::StringW value) ;

constexpr ::StringW __get_xmlSpace() const;

 System::Text::StringBuilder __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_buffer() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_nameBuffer, put=__set_nameBuffer))  nameBuffer;

constexpr void __set_nameBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_nameBuffer() const;

 bool __declspec(property(get=__get_isWhitespace, put=__set_isWhitespace))  isWhitespace;

constexpr void __set_isWhitespace(bool value) ;

constexpr bool __get_isWhitespace() const;

 Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl value) ;

constexpr Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl __get_attributes() const;

 int32_t __declspec(property(get=__get_line, put=__set_line))  line;

constexpr void __set_line(int32_t value) ;

constexpr int32_t __get_line() const;

 int32_t __declspec(property(get=__get_column, put=__set_column))  column;

constexpr void __set_column(int32_t value) ;

constexpr int32_t __get_column() const;

 bool __declspec(property(get=__get_resetColumn, put=__set_resetColumn))  resetColumn;

constexpr void __set_resetColumn(bool value) ;

constexpr bool __get_resetColumn() const;


// Methods

static Mono::Xml::SmallXmlParser New_ctor() ;

/// @brief Method .ctor addr 0x22a59e8 size 0x118 virtual false final false
 void _ctor() ;

/// @brief Method Error addr 0x22a6190 size 0x78 virtual false final false
 System::Exception Error(::StringW msg) ;

/// @brief Method UnexpectedEndError addr 0x22a62d4 size 0xec virtual false final false
 System::Exception UnexpectedEndError() ;

/// @brief Method IsNameChar addr 0x22a63c0 size 0xfc virtual false final false
 bool IsNameChar(char16_t c, bool start) ;

/// @brief Method IsWhitespace addr 0x22a64bc size 0x30 virtual false final false
 bool IsWhitespace(int32_t c) ;

/// @brief Method SkipWhitespaces addr 0x22a64ec size 0x8 virtual false final false
 void SkipWhitespaces() ;

/// @brief Method HandleWhitespaces addr 0x22a65a0 size 0xc0 virtual false final false
 void HandleWhitespaces() ;

/// @brief Method SkipWhitespaces addr 0x22a64f4 size 0xac virtual false final false
 void SkipWhitespaces(bool expected) ;

/// @brief Method Peek addr 0x22a66c8 size 0x20 virtual false final false
 int32_t Peek() ;

/// @brief Method Read addr 0x22a6660 size 0x68 virtual false final false
 int32_t Read() ;

/// @brief Method Expect addr 0x22a66e8 size 0xc0 virtual false final false
 void Expect(int32_t c) ;

/// @brief Method ReadUntil addr 0x22a67a8 size 0xdc virtual false final false
 ::StringW ReadUntil(char16_t until, bool handleReferences) ;

/// @brief Method ReadName addr 0x22a6a4c size 0x1a4 virtual false final false
 ::StringW ReadName() ;

/// @brief Method Parse addr 0x22a5b8c size 0x1c8 virtual false final false
 void Parse(System::IO::TextReader input, Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler handler) ;

/// @brief Method Cleanup addr 0x22a73ec size 0x7c virtual false final false
 void Cleanup() ;

/// @brief Method ReadContent addr 0x22a6bf0 size 0x6c4 virtual false final false
 void ReadContent() ;

/// @brief Method HandleBufferedContent addr 0x22a72b4 size 0x138 virtual false final false
 void HandleBufferedContent() ;

/// @brief Method ReadCharacters addr 0x22a77f0 size 0x88 virtual false final false
 void ReadCharacters() ;

/// @brief Method ReadReference addr 0x22a6884 size 0x1c8 virtual false final false
 void ReadReference() ;

/// @brief Method ReadCharacterReference addr 0x22a7878 size 0x138 virtual false final false
 int32_t ReadCharacterReference() ;

/// @brief Method ReadAttribute addr 0x22a768c size 0x164 virtual false final false
 void ReadAttribute(Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl a) ;

/// @brief Method ReadCDATASection addr 0x22a7504 size 0x100 virtual false final false
 void ReadCDATASection() ;

/// @brief Method ReadComment addr 0x22a7604 size 0x88 virtual false final false
 void ReadComment() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Xml
NEED_NO_BOX(Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl);
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::Mono__Xml__SmallXmlParser__AttrListImpl, "Mono.Xml", "SmallXmlParser/AttrListImpl");
NEED_NO_BOX(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList);
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::Mono__Xml__SmallXmlParser__IAttrList, "Mono.Xml", "SmallXmlParser/IAttrList");
NEED_NO_BOX(Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler);
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::Mono__Xml__SmallXmlParser__IContentHandler, "Mono.Xml", "SmallXmlParser/IContentHandler");
NEED_NO_BOX(Mono::Xml::SmallXmlParser);
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser, "Mono.Xml", "SmallXmlParser");
