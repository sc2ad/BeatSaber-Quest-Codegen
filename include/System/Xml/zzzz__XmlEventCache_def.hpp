#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
struct System__Xml__XmlEventCache__XmlEventType;
}
namespace System::Xml {
struct System__Xml__XmlEventCache__XmlEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml::Xsl::Runtime {
struct StringConcat;
}
// Forward declare root types
namespace System::Xml {
struct System__Xml__XmlEventCache__XmlEventType;
}
namespace System::Xml {
class XmlEventCache;
}
namespace System::Xml {
struct System__Xml__XmlEventCache__XmlEvent;
}
// Type: ::XmlEventType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11393))
// CS Name: System.Xml.XmlEventCache::XmlEventType
struct CORDL_TYPE System__Xml__XmlEventCache__XmlEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlEventCache__XmlEventType(int32_t value__) noexcept;


                    constexpr System__Xml__XmlEventCache__XmlEventType(System__Xml__XmlEventCache__XmlEventType const&) = default;
                    constexpr System__Xml__XmlEventCache__XmlEventType(System__Xml__XmlEventCache__XmlEventType&&) = default;
                    constexpr System__Xml__XmlEventCache__XmlEventType& operator=(System__Xml__XmlEventCache__XmlEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlEventCache__XmlEventType& operator=(System__Xml__XmlEventCache__XmlEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlEventCache__XmlEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__XmlEventCache__XmlEventType_Unwrapped : int32_t {
__Unknown = 0,
__DocType = 1,
__StartElem = 2,
__StartAttr = 3,
__EndAttr = 4,
__CData = 5,
__Comment = 6,
__PI = 7,
__Whitespace = 8,
__String = 9,
__Raw = 10,
__EntRef = 11,
__CharEnt = 12,
__SurrCharEnt = 13,
__Base64 = 14,
__BinHex = 15,
__XmlDecl1 = 16,
__XmlDecl2 = 17,
__StartContent = 18,
__EndElem = 19,
__FullEndElem = 20,
__Nmsp = 21,
__EndBase64 = 22,
__Close = 23,
__Flush = 24,
__Dispose = 25,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__XmlEventCache__XmlEventType_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__XmlEventCache__XmlEventType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Unknown;

/// @brief Field DocType offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const DocType;

/// @brief Field StartElem offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const StartElem;

/// @brief Field StartAttr offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const StartAttr;

/// @brief Field EndAttr offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const EndAttr;

/// @brief Field CData offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const CData;

/// @brief Field Comment offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Comment;

/// @brief Field PI offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const PI;

/// @brief Field Whitespace offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Whitespace;

/// @brief Field String offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const String;

/// @brief Field Raw offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Raw;

/// @brief Field EntRef offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const EntRef;

/// @brief Field CharEnt offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const CharEnt;

/// @brief Field SurrCharEnt offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const SurrCharEnt;

/// @brief Field Base64 offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Base64;

/// @brief Field BinHex offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const BinHex;

/// @brief Field XmlDecl1 offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const XmlDecl1;

/// @brief Field XmlDecl2 offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const XmlDecl2;

/// @brief Field StartContent offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const StartContent;

/// @brief Field EndElem offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const EndElem;

/// @brief Field FullEndElem offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const FullEndElem;

/// @brief Field Nmsp offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Nmsp;

/// @brief Field EndBase64 offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const EndBase64;

/// @brief Field Close offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Close;

/// @brief Field Flush offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Flush;

/// @brief Field Dispose offset 0
static System::Xml::System__Xml__XmlEventCache__XmlEventType const Dispose;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::XmlEvent
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11394))
// CS Name: System.Xml.XmlEventCache::XmlEvent
struct CORDL_TYPE System__Xml__XmlEventCache__XmlEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "eventType", ty: "System::Xml::System__Xml__XmlEventCache__XmlEventType", modifiers: "", def_value: None }, CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "o", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr System__Xml__XmlEventCache__XmlEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::bs_hook::Il2CppWrapperType o) noexcept;


                    constexpr System__Xml__XmlEventCache__XmlEvent(System__Xml__XmlEventCache__XmlEvent const&) = default;
                    constexpr System__Xml__XmlEventCache__XmlEvent(System__Xml__XmlEventCache__XmlEvent&&) = default;
                    constexpr System__Xml__XmlEventCache__XmlEvent& operator=(System__Xml__XmlEventCache__XmlEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlEventCache__XmlEvent& operator=(System__Xml__XmlEventCache__XmlEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlEventCache__XmlEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Xml::System__Xml__XmlEventCache__XmlEventType __declspec(property(get=__get_eventType, put=__set_eventType))  eventType;

constexpr void __set_eventType(System::Xml::System__Xml__XmlEventCache__XmlEventType value) ;

constexpr System::Xml::System__Xml__XmlEventCache__XmlEventType __get_eventType() const;

 ::StringW __declspec(property(get=__get_s1, put=__set_s1))  s1;

constexpr void __set_s1(::StringW value) ;

constexpr ::StringW __get_s1() const;

 ::StringW __declspec(property(get=__get_s2, put=__set_s2))  s2;

constexpr void __set_s2(::StringW value) ;

constexpr ::StringW __get_s2() const;

 ::StringW __declspec(property(get=__get_s3, put=__set_s3))  s3;

constexpr void __set_s3(::StringW value) ;

constexpr ::StringW __get_s3() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_o, put=__set_o))  o;

constexpr void __set_o(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_o() const;


// Properties

 System::Xml::System__Xml__XmlEventCache__XmlEventType __declspec(property(get=get_EventType))  EventType;

 ::StringW __declspec(property(get=get_String1))  String1;

 ::StringW __declspec(property(get=get_String2))  String2;

 ::StringW __declspec(property(get=get_String3))  String3;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Object))  Object;


// Methods

/// @brief Method InitEvent addr 0x26c6c5c size 0x8 virtual false final false
 void InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType) ;

/// @brief Method InitEvent addr 0x26c6c18 size 0xc virtual false final false
 void InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1) ;

/// @brief Method InitEvent addr 0x26c6c24 size 0xc virtual false final false
 void InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2) ;

/// @brief Method InitEvent addr 0x26c6c30 size 0x10 virtual false final false
 void InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3) ;

/// @brief Method InitEvent addr 0x26c6c40 size 0x10 virtual false final false
 void InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method InitEvent addr 0x26c6c50 size 0xc virtual false final false
 void InitEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_EventType addr 0x26c6c64 size 0x8 virtual false final false
 System::Xml::System__Xml__XmlEventCache__XmlEventType get_EventType() ;

/// @brief Method get_String1 addr 0x26c6c6c size 0x8 virtual false final false
 ::StringW get_String1() ;

/// @brief Method get_String2 addr 0x26c6c74 size 0x8 virtual false final false
 ::StringW get_String2() ;

/// @brief Method get_String3 addr 0x26c6c7c size 0x8 virtual false final false
 ::StringW get_String3() ;

/// @brief Method get_Object addr 0x26c6c84 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlEventCache
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11397))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11395))
// CS Name: System.Xml.XmlEventCache
class CORDL_TYPE XmlEventCache : public System::Xml::XmlRawWriter {
public:
// Declarations
using XmlEvent = System::Xml::System__Xml__XmlEventCache__XmlEvent;

using XmlEventType = System::Xml::System__Xml__XmlEventCache__XmlEventType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~XmlEventCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: " const&", def_value: None }]
constexpr XmlEventCache(XmlEventCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: "&&", def_value: None }]
constexpr XmlEventCache(XmlEventCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlEventCache(void* ptr) noexcept : System::Xml::XmlRawWriter(ptr) {
}


  constexpr XmlEventCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlEventCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlEventCache& operator=(XmlEventCache&& o) noexcept = default;
  constexpr XmlEventCache& operator=(XmlEventCache const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>> __declspec(property(get=__get_pages, put=__set_pages))  pages;

constexpr void __set_pages(System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>> value) ;

constexpr System::Collections::Generic::List_1<::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent>> __get_pages() const;

 ::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent> __declspec(property(get=__get_pageCurr, put=__set_pageCurr))  pageCurr;

constexpr void __set_pageCurr(::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent> value) ;

constexpr ::ArrayW<System::Xml::System__Xml__XmlEventCache__XmlEvent> __get_pageCurr() const;

 int32_t __declspec(property(get=__get_pageSize, put=__set_pageSize))  pageSize;

constexpr void __set_pageSize(int32_t value) ;

constexpr int32_t __get_pageSize() const;

 bool __declspec(property(get=__get_hasRootNode, put=__set_hasRootNode))  hasRootNode;

constexpr void __set_hasRootNode(bool value) ;

constexpr bool __get_hasRootNode() const;

 System::Xml::Xsl::Runtime::StringConcat __declspec(property(get=__get_singleText, put=__set_singleText))  singleText;

constexpr void __set_singleText(System::Xml::Xsl::Runtime::StringConcat value) ;

constexpr System::Xml::Xsl::Runtime::StringConcat __get_singleText() const;

 ::StringW __declspec(property(get=__get_baseUri, put=__set_baseUri))  baseUri;

constexpr void __set_baseUri(::StringW value) ;

constexpr ::StringW __get_baseUri() const;


// Methods

static System::Xml::XmlEventCache New_ctor(::StringW baseUri, bool hasRootNode) ;

/// @brief Method .ctor addr 0x26c2b4c size 0x30 virtual false final false
 void _ctor(::StringW baseUri, bool hasRootNode) ;

/// @brief Method EndEvents addr 0x26c365c size 0x14 virtual false final false
 void EndEvents() ;

/// @brief Method EventsToWriter addr 0x26c3670 size 0x6f4 virtual false final false
 void EventsToWriter(System::Xml::XmlWriter writer) ;

/// @brief Method WriteDocType addr 0x26c6394 size 0x18 virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26c641c size 0x14 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteStartAttribute addr 0x26c6494 size 0x14 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndAttribute addr 0x26c64a8 size 0x8 virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteCData addr 0x26c64b0 size 0xc virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26c650c size 0xc virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26c6518 size 0x10 virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteWhitespace addr 0x26c6584 size 0xc virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26c6590 size 0x24 virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteChars addr 0x26c65b4 size 0x30 virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c65e4 size 0x30 virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26c6614 size 0xc virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteEntityRef addr 0x26c6620 size 0xc virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26c662c size 0x6c virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26c66e8 size 0x8c virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteBase64 addr 0x26c6774 size 0x2c virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteBinHex addr 0x26c6854 size 0x2c virtual true final false
 void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Close addr 0x26c6880 size 0x8 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26c6888 size 0x8 virtual true final false
 void Flush() ;

/// @brief Method WriteValue addr 0x26c6890 size 0x10 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method Dispose addr 0x26c68a0 size 0xb0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method WriteXmlDeclaration addr 0x26c6950 size 0x6c virtual true final false
 void WriteXmlDeclaration(System::Xml::XmlStandalone standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x26c69bc size 0xc virtual true final false
 void WriteXmlDeclaration(::StringW xmldecl) ;

/// @brief Method StartElementContent addr 0x26c69c8 size 0x8 virtual true final false
 void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x26c69d0 size 0x14 virtual true final false
 void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteFullEndElement addr 0x26c69e4 size 0x14 virtual true final false
 void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteNamespaceDeclaration addr 0x26c69f8 size 0x10 virtual true final false
 void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns) ;

/// @brief Method WriteEndBase64 addr 0x26c6a08 size 0x8 virtual true final false
 void WriteEndBase64() ;

/// @brief Method AddEvent addr 0x26c634c size 0x48 virtual false final false
 void AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType) ;

/// @brief Method AddEvent addr 0x26c64bc size 0x50 virtual false final false
 void AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1) ;

/// @brief Method AddEvent addr 0x26c6528 size 0x5c virtual false final false
 void AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2) ;

/// @brief Method AddEvent addr 0x26c6430 size 0x64 virtual false final false
 void AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3) ;

/// @brief Method AddEvent addr 0x26c63ac size 0x70 virtual false final false
 void AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::StringW s1, ::StringW s2, ::StringW s3, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method AddEvent addr 0x26c6698 size 0x50 virtual false final false
 void AddEvent(System::Xml::System__Xml__XmlEventCache__XmlEventType eventType, ::bs_hook::Il2CppWrapperType o) ;

/// @brief Method NewEvent addr 0x26c6a10 size 0x208 virtual false final false
 int32_t NewEvent() ;

/// @brief Method ToBytes addr 0x26c67a0 size 0xb4 virtual false final false
static ::ArrayW<uint8_t> ToBytes(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlEventCache__XmlEventType, "System.Xml", "XmlEventCache/XmlEventType");
NEED_NO_BOX(System::Xml::XmlEventCache);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEventCache, "System.Xml", "XmlEventCache");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlEventCache__XmlEvent, "System.Xml", "XmlEventCache/XmlEvent");
