#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
class System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk;
}
namespace GlobalNamespace {
class System__Xml__XmlWellFormedWriter__AttributeValueCache__Item;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__NamespaceKind;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__State;
}
namespace System::Xml {
struct XmlCharType;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__SpecialAttribute;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Exception;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__Token;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__Namespace;
}
namespace System::Xml {
class XmlException;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__AttrName;
}
namespace System::Xml {
class SecureStringHasher;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
class System__Xml__XmlWellFormedWriter__AttributeValueCache;
}
namespace System::Xml {
class System__Xml__XmlWellFormedWriter__NamespaceResolverProxy;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__ElementScope;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace GlobalNamespace {
struct System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__NamespaceKind;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__SpecialAttribute;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__State;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__Token;
}
namespace GlobalNamespace {
class System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk;
}
namespace GlobalNamespace {
class System__Xml__XmlWellFormedWriter__AttributeValueCache__Item;
}
namespace System::Xml {
class System__Xml__XmlWellFormedWriter__AttributeValueCache;
}
namespace System::Xml {
class System__Xml__XmlWellFormedWriter__NamespaceResolverProxy;
}
namespace System::Xml {
class XmlWellFormedWriter;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__AttrName;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__ElementScope;
}
namespace System::Xml {
struct System__Xml__XmlWellFormedWriter__Namespace;
}
// Type: ::State
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11419))
// CS Name: System.Xml.XmlWellFormedWriter::State
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__State(int32_t value__) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__State(System__Xml__XmlWellFormedWriter__State const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__State(System__Xml__XmlWellFormedWriter__State&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__State& operator=(System__Xml__XmlWellFormedWriter__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__State& operator=(System__Xml__XmlWellFormedWriter__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__XmlWellFormedWriter__State_Unwrapped : int32_t {
__Start = 0,
__TopLevel = 1,
__Document = 2,
__Element = 3,
__Content = 4,
__B64Content = 5,
__B64Attribute = 6,
__AfterRootEle = 7,
__Attribute = 8,
__SpecialAttr = 9,
__EndDocument = 10,
__RootLevelAttr = 11,
__RootLevelSpecAttr = 12,
__RootLevelB64Attr = 13,
__AfterRootLevelAttr = 14,
__Closed = 15,
__Error = 16,
__StartContent = 101,
__StartContentEle = 102,
__StartContentB64 = 103,
__StartDoc = 104,
__StartDocEle = 106,
__EndAttrSEle = 107,
__EndAttrEEle = 108,
__EndAttrSCont = 109,
__EndAttrSAttr = 111,
__PostB64Cont = 112,
__PostB64Attr = 113,
__PostB64RootAttr = 114,
__StartFragEle = 115,
__StartFragCont = 116,
__StartFragB64 = 117,
__StartRootLevelAttr = 118,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__XmlWellFormedWriter__State_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__XmlWellFormedWriter__State_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Start offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const Start;

/// @brief Field TopLevel offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const TopLevel;

/// @brief Field Document offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const Document;

/// @brief Field Element offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const Element;

/// @brief Field Content offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const Content;

/// @brief Field B64Content offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const B64Content;

/// @brief Field B64Attribute offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const B64Attribute;

/// @brief Field AfterRootEle offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const AfterRootEle;

/// @brief Field Attribute offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const Attribute;

/// @brief Field SpecialAttr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const SpecialAttr;

/// @brief Field EndDocument offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const EndDocument;

/// @brief Field RootLevelAttr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const RootLevelAttr;

/// @brief Field RootLevelSpecAttr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const RootLevelSpecAttr;

/// @brief Field RootLevelB64Attr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const RootLevelB64Attr;

/// @brief Field AfterRootLevelAttr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const AfterRootLevelAttr;

/// @brief Field Closed offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const Closed;

/// @brief Field Error offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const Error;

/// @brief Field StartContent offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartContent;

/// @brief Field StartContentEle offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartContentEle;

/// @brief Field StartContentB64 offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartContentB64;

/// @brief Field StartDoc offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartDoc;

/// @brief Field StartDocEle offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartDocEle;

/// @brief Field EndAttrSEle offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const EndAttrSEle;

/// @brief Field EndAttrEEle offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const EndAttrEEle;

/// @brief Field EndAttrSCont offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const EndAttrSCont;

/// @brief Field EndAttrSAttr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const EndAttrSAttr;

/// @brief Field PostB64Cont offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const PostB64Cont;

/// @brief Field PostB64Attr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const PostB64Attr;

/// @brief Field PostB64RootAttr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const PostB64RootAttr;

/// @brief Field StartFragEle offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartFragEle;

/// @brief Field StartFragCont offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartFragCont;

/// @brief Field StartFragB64 offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartFragB64;

/// @brief Field StartRootLevelAttr offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__State const StartRootLevelAttr;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::Token
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11420))
// CS Name: System.Xml.XmlWellFormedWriter::Token
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__Token : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__Token(int32_t value__) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__Token(System__Xml__XmlWellFormedWriter__Token const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__Token(System__Xml__XmlWellFormedWriter__Token&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__Token& operator=(System__Xml__XmlWellFormedWriter__Token const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__Token& operator=(System__Xml__XmlWellFormedWriter__Token&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__Token(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__XmlWellFormedWriter__Token_Unwrapped : int32_t {
__StartDocument = 0,
__EndDocument = 1,
__PI = 2,
__Comment = 3,
__Dtd = 4,
__StartElement = 5,
__EndElement = 6,
__StartAttribute = 7,
__EndAttribute = 8,
__Text = 9,
__CData = 10,
__AtomicValue = 11,
__Base64 = 12,
__RawData = 13,
__Whitespace = 14,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__XmlWellFormedWriter__Token_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__XmlWellFormedWriter__Token_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field StartDocument offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const StartDocument;

/// @brief Field EndDocument offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const EndDocument;

/// @brief Field PI offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const PI;

/// @brief Field Comment offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const Comment;

/// @brief Field Dtd offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const Dtd;

/// @brief Field StartElement offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const StartElement;

/// @brief Field EndElement offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const EndElement;

/// @brief Field StartAttribute offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const StartAttribute;

/// @brief Field EndAttribute offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const EndAttribute;

/// @brief Field Text offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const Text;

/// @brief Field CData offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const CData;

/// @brief Field AtomicValue offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const AtomicValue;

/// @brief Field Base64 offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const Base64;

/// @brief Field RawData offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const RawData;

/// @brief Field Whitespace offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__Token const Whitespace;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::NamespaceResolverProxy
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11421))
// CS Name: System.Xml.XmlWellFormedWriter::NamespaceResolverProxy
class CORDL_TYPE System__Xml__XmlWellFormedWriter__NamespaceResolverProxy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr operator  System::Xml::IXmlNamespaceResolver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Xml__XmlWellFormedWriter__NamespaceResolverProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__NamespaceResolverProxy", modifiers: " const&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__NamespaceResolverProxy(System__Xml__XmlWellFormedWriter__NamespaceResolverProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__NamespaceResolverProxy", modifiers: "&&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__NamespaceResolverProxy(System__Xml__XmlWellFormedWriter__NamespaceResolverProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__NamespaceResolverProxy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__XmlWellFormedWriter__NamespaceResolverProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__NamespaceResolverProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__NamespaceResolverProxy& operator=(System__Xml__XmlWellFormedWriter__NamespaceResolverProxy&& o) noexcept = default;
  constexpr System__Xml__XmlWellFormedWriter__NamespaceResolverProxy& operator=(System__Xml__XmlWellFormedWriter__NamespaceResolverProxy const& o) noexcept = default;
                


// Fields

 System::Xml::XmlWellFormedWriter __declspec(property(get=__get_wfWriter, put=__set_wfWriter))  wfWriter;

constexpr void __set_wfWriter(System::Xml::XmlWellFormedWriter value) ;

constexpr System::Xml::XmlWellFormedWriter __get_wfWriter() const;


// Methods

static System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy New_ctor(System::Xml::XmlWellFormedWriter wfWriter) ;

/// @brief Method .ctor addr 0x26e5558 size 0x28 virtual false final false
 void _ctor(System::Xml::XmlWellFormedWriter wfWriter) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace addr 0x26ec8c8 size 0x18 virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix) ;

/// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix addr 0x26ec8e0 size 0x24 virtual true final true
 ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::ElementScope
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11422))
// CS Name: System.Xml.XmlWellFormedWriter::ElementScope
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__ElementScope : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "xmlSpace", ty: "System::Xml::XmlSpace", modifiers: "", def_value: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__ElementScope(int32_t prevNSTop, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, System::Xml::XmlSpace xmlSpace, ::StringW xmlLang) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__ElementScope(System__Xml__XmlWellFormedWriter__ElementScope const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__ElementScope(System__Xml__XmlWellFormedWriter__ElementScope&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__ElementScope& operator=(System__Xml__XmlWellFormedWriter__ElementScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__ElementScope& operator=(System__Xml__XmlWellFormedWriter__ElementScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__ElementScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_prevNSTop, put=__set_prevNSTop))  prevNSTop;

constexpr void __set_prevNSTop(int32_t value) ;

constexpr int32_t __get_prevNSTop() const;

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 ::StringW __declspec(property(get=__get_localName, put=__set_localName))  localName;

constexpr void __set_localName(::StringW value) ;

constexpr ::StringW __get_localName() const;

 ::StringW __declspec(property(get=__get_namespaceUri, put=__set_namespaceUri))  namespaceUri;

constexpr void __set_namespaceUri(::StringW value) ;

constexpr ::StringW __get_namespaceUri() const;

 System::Xml::XmlSpace __declspec(property(get=__get_xmlSpace, put=__set_xmlSpace))  xmlSpace;

constexpr void __set_xmlSpace(System::Xml::XmlSpace value) ;

constexpr System::Xml::XmlSpace __get_xmlSpace() const;

 ::StringW __declspec(property(get=__get_xmlLang, put=__set_xmlLang))  xmlLang;

constexpr void __set_xmlLang(::StringW value) ;

constexpr ::StringW __get_xmlLang() const;


// Methods

/// @brief Method Set addr 0x26e5590 size 0x1c virtual false final false
 void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t prevNSTop) ;

/// @brief Method WriteEndElement addr 0x26e6d70 size 0x30 virtual false final false
 void WriteEndElement(System::Xml::XmlRawWriter rawWriter) ;

/// @brief Method WriteFullEndElement addr 0x26e7060 size 0x30 virtual false final false
 void WriteFullEndElement(System::Xml::XmlRawWriter rawWriter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::NamespaceKind
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11423))
// CS Name: System.Xml.XmlWellFormedWriter::NamespaceKind
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__NamespaceKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__NamespaceKind(int32_t value__) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__NamespaceKind(System__Xml__XmlWellFormedWriter__NamespaceKind const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__NamespaceKind(System__Xml__XmlWellFormedWriter__NamespaceKind&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__NamespaceKind& operator=(System__Xml__XmlWellFormedWriter__NamespaceKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__NamespaceKind& operator=(System__Xml__XmlWellFormedWriter__NamespaceKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__NamespaceKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__XmlWellFormedWriter__NamespaceKind_Unwrapped : int32_t {
__Written = 0,
__NeedToWrite = 1,
__Implied = 2,
__Special = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__XmlWellFormedWriter__NamespaceKind_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__XmlWellFormedWriter__NamespaceKind_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Written offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind const Written;

/// @brief Field NeedToWrite offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind const NeedToWrite;

/// @brief Field Implied offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind const Implied;

/// @brief Field Special offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind const Special;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::Namespace
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11424))
// CS Name: System.Xml.XmlWellFormedWriter::Namespace
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__Namespace : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "kind", ty: "System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind", modifiers: "", def_value: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__Namespace(::StringW prefix, ::StringW namespaceUri, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind kind, int32_t prevNsIndex) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__Namespace(System__Xml__XmlWellFormedWriter__Namespace const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__Namespace(System__Xml__XmlWellFormedWriter__Namespace&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__Namespace& operator=(System__Xml__XmlWellFormedWriter__Namespace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__Namespace& operator=(System__Xml__XmlWellFormedWriter__Namespace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__Namespace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 ::StringW __declspec(property(get=__get_namespaceUri, put=__set_namespaceUri))  namespaceUri;

constexpr void __set_namespaceUri(::StringW value) ;

constexpr ::StringW __get_namespaceUri() const;

 System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind __declspec(property(get=__get_kind, put=__set_kind))  kind;

constexpr void __set_kind(System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind value) ;

constexpr System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind __get_kind() const;

 int32_t __declspec(property(get=__get_prevNsIndex, put=__set_prevNsIndex))  prevNsIndex;

constexpr void __set_prevNsIndex(int32_t value) ;

constexpr int32_t __get_prevNsIndex() const;


// Methods

/// @brief Method Set addr 0x26e5580 size 0x10 virtual false final false
 void Set(::StringW prefix, ::StringW namespaceUri, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind kind) ;

/// @brief Method WriteDecl addr 0x26ebb04 size 0x12c virtual false final false
 void WriteDecl(System::Xml::XmlWriter writer, System::Xml::XmlRawWriter rawWriter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::AttrName
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11425))
// CS Name: System.Xml.XmlWellFormedWriter::AttrName
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__AttrName : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttrName(::StringW prefix, ::StringW namespaceUri, ::StringW localName, int32_t prev) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__AttrName(System__Xml__XmlWellFormedWriter__AttrName const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__AttrName(System__Xml__XmlWellFormedWriter__AttrName&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__AttrName& operator=(System__Xml__XmlWellFormedWriter__AttrName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__AttrName& operator=(System__Xml__XmlWellFormedWriter__AttrName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__AttrName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 ::StringW __declspec(property(get=__get_namespaceUri, put=__set_namespaceUri))  namespaceUri;

constexpr void __set_namespaceUri(::StringW value) ;

constexpr ::StringW __get_namespaceUri() const;

 ::StringW __declspec(property(get=__get_localName, put=__set_localName))  localName;

constexpr void __set_localName(::StringW value) ;

constexpr ::StringW __get_localName() const;

 int32_t __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(int32_t value) ;

constexpr int32_t __get_prev() const;


// Methods

/// @brief Method Set addr 0x26ebdb0 size 0x10 virtual false final false
 void Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri) ;

/// @brief Method IsDuplicate addr 0x26ebdc0 size 0x6c virtual false final false
 bool IsDuplicate(::StringW prefix, ::StringW localName, ::StringW namespaceUri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::SpecialAttribute
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11426))
// CS Name: System.Xml.XmlWellFormedWriter::SpecialAttribute
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__SpecialAttribute : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__SpecialAttribute(int32_t value__) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__SpecialAttribute(System__Xml__XmlWellFormedWriter__SpecialAttribute const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__SpecialAttribute(System__Xml__XmlWellFormedWriter__SpecialAttribute&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__SpecialAttribute& operator=(System__Xml__XmlWellFormedWriter__SpecialAttribute const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__SpecialAttribute& operator=(System__Xml__XmlWellFormedWriter__SpecialAttribute&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__SpecialAttribute(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__XmlWellFormedWriter__SpecialAttribute_Unwrapped : int32_t {
__No = 0,
__DefaultXmlns = 1,
__PrefixedXmlns = 2,
__XmlSpace = 3,
__XmlLang = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__XmlWellFormedWriter__SpecialAttribute_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__XmlWellFormedWriter__SpecialAttribute_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field No offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute const No;

/// @brief Field DefaultXmlns offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute const DefaultXmlns;

/// @brief Field PrefixedXmlns offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute const PrefixedXmlns;

/// @brief Field XmlSpace offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute const XmlSpace;

/// @brief Field XmlLang offset 0
static System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute const XmlLang;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::ItemType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11427))
// CS Name: System.Xml.XmlWellFormedWriter::AttributeValueCache::ItemType
struct CORDL_TYPE System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType(int32_t value__) noexcept;


                    constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType(System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType(System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType&&) = default;
                    constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped : int32_t {
__EntityRef = 0,
__CharEntity = 1,
__SurrogateCharEntity = 2,
__Whitespace = 3,
__String = 4,
__StringChars = 5,
__Raw = 6,
__RawChars = 7,
__ValueString = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field EntityRef offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const EntityRef;

/// @brief Field CharEntity offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const CharEntity;

/// @brief Field SurrogateCharEntity offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const SurrogateCharEntity;

/// @brief Field Whitespace offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const Whitespace;

/// @brief Field String offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const String;

/// @brief Field StringChars offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const StringChars;

/// @brief Field Raw offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const Raw;

/// @brief Field RawChars offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const RawChars;

/// @brief Field ValueString offset 0
static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType const ValueString;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Item
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11428))
// CS Name: System.Xml.XmlWellFormedWriter::AttributeValueCache::Item
class CORDL_TYPE System__Xml__XmlWellFormedWriter__AttributeValueCache__Item : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Xml__XmlWellFormedWriter__AttributeValueCache__Item() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__AttributeValueCache__Item", modifiers: " const&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__Item(System__Xml__XmlWellFormedWriter__AttributeValueCache__Item const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__AttributeValueCache__Item", modifiers: "&&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__Item(System__Xml__XmlWellFormedWriter__AttributeValueCache__Item&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__AttributeValueCache__Item(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__Item& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__Item& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__Item& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache__Item&& o) noexcept = default;
  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__Item& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache__Item const& o) noexcept = default;
                


// Fields

 GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType value) ;

constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType __get_type() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_data() const;


// Methods

static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item New_ctor() ;

/// @brief Method .ctor addr 0x26ecaf0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Set addr 0x26ecaf8 size 0xc virtual false final false
 void Set(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::bs_hook::Il2CppWrapperType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BufferChunk
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11429))
// CS Name: System.Xml.XmlWellFormedWriter::AttributeValueCache::BufferChunk
class CORDL_TYPE System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk", modifiers: " const&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk(System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk", modifiers: "&&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk(System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk&& o) noexcept = default;
  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk const& o) noexcept = default;
                


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

static GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk New_ctor(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method .ctor addr 0x26ecab4 size 0x3c virtual false final false
 void _ctor(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AttributeValueCache
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11430))
// CS Name: System.Xml.XmlWellFormedWriter::AttributeValueCache
class CORDL_TYPE System__Xml__XmlWellFormedWriter__AttributeValueCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BufferChunk = GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk;

using Item = GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item;

using ItemType = GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Xml__XmlWellFormedWriter__AttributeValueCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__AttributeValueCache", modifiers: " const&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache(System__Xml__XmlWellFormedWriter__AttributeValueCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlWellFormedWriter__AttributeValueCache", modifiers: "&&", def_value: None }]
constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache(System__Xml__XmlWellFormedWriter__AttributeValueCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlWellFormedWriter__AttributeValueCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache&& o) noexcept = default;
  constexpr System__Xml__XmlWellFormedWriter__AttributeValueCache& operator=(System__Xml__XmlWellFormedWriter__AttributeValueCache const& o) noexcept = default;
                


// Fields

 System::Text::StringBuilder __declspec(property(get=__get_stringValue, put=__set_stringValue))  stringValue;

constexpr void __set_stringValue(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_stringValue() const;

 ::StringW __declspec(property(get=__get_singleStringValue, put=__set_singleStringValue))  singleStringValue;

constexpr void __set_singleStringValue(::StringW value) ;

constexpr ::StringW __get_singleStringValue() const;

 ::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item> value) ;

constexpr ::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item> __get_items() const;

 int32_t __declspec(property(get=__get_firstItem, put=__set_firstItem))  firstItem;

constexpr void __set_firstItem(int32_t value) ;

constexpr int32_t __get_firstItem() const;

 int32_t __declspec(property(get=__get_lastItem, put=__set_lastItem))  lastItem;

constexpr void __set_lastItem(int32_t value) ;

constexpr int32_t __get_lastItem() const;


// Properties

 ::StringW __declspec(property(get=get_StringValue))  StringValue;


// Methods

/// @brief Method get_StringValue addr 0x26e8498 size 0x34 virtual false final false
 ::StringW get_StringValue() ;

/// @brief Method WriteEntityRef addr 0x26e9790 size 0x19c virtual false final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26e9ad8 size 0x94 virtual false final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26e9d10 size 0xc4 virtual false final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteWhitespace addr 0x26e9f94 size 0x50 virtual false final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26ea0d4 size 0x70 virtual false final false
 void WriteString(::StringW text) ;

/// @brief Method WriteChars addr 0x26ea3c0 size 0xb0 virtual false final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26ea6ec size 0xb0 virtual false final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26ea88c size 0x50 virtual false final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteValue addr 0x26eb148 size 0x50 virtual false final false
 void WriteValue(::StringW value) ;

/// @brief Method Replay addr 0x26e89a8 size 0x324 virtual false final false
 void Replay(System::Xml::XmlWriter writer) ;

/// @brief Method Trim addr 0x26e8ccc size 0x454 virtual false final false
 void Trim() ;

/// @brief Method Clear addr 0x26e9120 size 0x30 virtual false final false
 void Clear() ;

/// @brief Method StartComplexValue addr 0x26ec904 size 0x3c virtual false final false
 void StartComplexValue() ;

/// @brief Method AddItem addr 0x26ec940 size 0x174 virtual false final false
 void AddItem(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::bs_hook::Il2CppWrapperType data) ;

static System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache New_ctor() ;

/// @brief Method .ctor addr 0x26eb300 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlWellFormedWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11433))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11431))
// CS Name: System.Xml.XmlWellFormedWriter
class CORDL_TYPE XmlWellFormedWriter : public System::Xml::XmlWriter {
public:
// Declarations
using AttributeValueCache = System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache;

using SpecialAttribute = System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute;

using AttrName = System::Xml::System__Xml__XmlWellFormedWriter__AttrName;

using Namespace = System::Xml::System__Xml__XmlWellFormedWriter__Namespace;

using NamespaceKind = System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind;

using ElementScope = System::Xml::System__Xml__XmlWellFormedWriter__ElementScope;

using NamespaceResolverProxy = System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy;

using Token = System::Xml::System__Xml__XmlWellFormedWriter__Token;

using State = System::Xml::System__Xml__XmlWellFormedWriter__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~XmlWellFormedWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter", modifiers: " const&", def_value: None }]
constexpr XmlWellFormedWriter(XmlWellFormedWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlWellFormedWriter", modifiers: "&&", def_value: None }]
constexpr XmlWellFormedWriter(XmlWellFormedWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlWellFormedWriter(void* ptr) noexcept : System::Xml::XmlWriter(ptr) {
}


  constexpr XmlWellFormedWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlWellFormedWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlWellFormedWriter& operator=(XmlWellFormedWriter&& o) noexcept = default;
  constexpr XmlWellFormedWriter& operator=(XmlWellFormedWriter const& o) noexcept = default;
                


// Fields

 System::Xml::XmlWriter __declspec(property(get=__get_writer, put=__set_writer))  writer;

constexpr void __set_writer(System::Xml::XmlWriter value) ;

constexpr System::Xml::XmlWriter __get_writer() const;

 System::Xml::XmlRawWriter __declspec(property(get=__get_rawWriter, put=__set_rawWriter))  rawWriter;

constexpr void __set_rawWriter(System::Xml::XmlRawWriter value) ;

constexpr System::Xml::XmlRawWriter __get_rawWriter() const;

 System::Xml::IXmlNamespaceResolver __declspec(property(get=__get_predefinedNamespaces, put=__set_predefinedNamespaces))  predefinedNamespaces;

constexpr void __set_predefinedNamespaces(System::Xml::IXmlNamespaceResolver value) ;

constexpr System::Xml::IXmlNamespaceResolver __get_predefinedNamespaces() const;

 ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace> __declspec(property(get=__get_nsStack, put=__set_nsStack))  nsStack;

constexpr void __set_nsStack(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace> value) ;

constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace> __get_nsStack() const;

 int32_t __declspec(property(get=__get_nsTop, put=__set_nsTop))  nsTop;

constexpr void __set_nsTop(int32_t value) ;

constexpr int32_t __get_nsTop() const;

 System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get_nsHashtable, put=__set_nsHashtable))  nsHashtable;

constexpr void __set_nsHashtable(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get_nsHashtable() const;

 bool __declspec(property(get=__get_useNsHashtable, put=__set_useNsHashtable))  useNsHashtable;

constexpr void __set_useNsHashtable(bool value) ;

constexpr bool __get_useNsHashtable() const;

 ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope> __declspec(property(get=__get_elemScopeStack, put=__set_elemScopeStack))  elemScopeStack;

constexpr void __set_elemScopeStack(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope> value) ;

constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope> __get_elemScopeStack() const;

 int32_t __declspec(property(get=__get_elemTop, put=__set_elemTop))  elemTop;

constexpr void __set_elemTop(int32_t value) ;

constexpr int32_t __get_elemTop() const;

 ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName> __declspec(property(get=__get_attrStack, put=__set_attrStack))  attrStack;

constexpr void __set_attrStack(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName> value) ;

constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName> __get_attrStack() const;

 int32_t __declspec(property(get=__get_attrCount, put=__set_attrCount))  attrCount;

constexpr void __set_attrCount(int32_t value) ;

constexpr int32_t __get_attrCount() const;

 System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get_attrHashTable, put=__set_attrHashTable))  attrHashTable;

constexpr void __set_attrHashTable(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get_attrHashTable() const;

 System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute __declspec(property(get=__get_specAttr, put=__set_specAttr))  specAttr;

constexpr void __set_specAttr(System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute value) ;

constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute __get_specAttr() const;

 System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache __declspec(property(get=__get_attrValueCache, put=__set_attrValueCache))  attrValueCache;

constexpr void __set_attrValueCache(System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache value) ;

constexpr System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache __get_attrValueCache() const;

 ::StringW __declspec(property(get=__get_curDeclPrefix, put=__set_curDeclPrefix))  curDeclPrefix;

constexpr void __set_curDeclPrefix(::StringW value) ;

constexpr ::StringW __get_curDeclPrefix() const;

 ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> __declspec(property(get=__get_stateTable, put=__set_stateTable))  stateTable;

constexpr void __set_stateTable(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> value) ;

constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> __get_stateTable() const;

 System::Xml::System__Xml__XmlWellFormedWriter__State __declspec(property(get=__get_currentState, put=__set_currentState))  currentState;

constexpr void __set_currentState(System::Xml::System__Xml__XmlWellFormedWriter__State value) ;

constexpr System::Xml::System__Xml__XmlWellFormedWriter__State __get_currentState() const;

 bool __declspec(property(get=__get_checkCharacters, put=__set_checkCharacters))  checkCharacters;

constexpr void __set_checkCharacters(bool value) ;

constexpr bool __get_checkCharacters() const;

 bool __declspec(property(get=__get_omitDuplNamespaces, put=__set_omitDuplNamespaces))  omitDuplNamespaces;

constexpr void __set_omitDuplNamespaces(bool value) ;

constexpr bool __get_omitDuplNamespaces() const;

 bool __declspec(property(get=__get_writeEndDocumentOnClose, put=__set_writeEndDocumentOnClose))  writeEndDocumentOnClose;

constexpr void __set_writeEndDocumentOnClose(bool value) ;

constexpr bool __get_writeEndDocumentOnClose() const;

 System::Xml::ConformanceLevel __declspec(property(get=__get_conformanceLevel, put=__set_conformanceLevel))  conformanceLevel;

constexpr void __set_conformanceLevel(System::Xml::ConformanceLevel value) ;

constexpr System::Xml::ConformanceLevel __get_conformanceLevel() const;

 bool __declspec(property(get=__get_dtdWritten, put=__set_dtdWritten))  dtdWritten;

constexpr void __set_dtdWritten(bool value) ;

constexpr bool __get_dtdWritten() const;

 bool __declspec(property(get=__get_xmlDeclFollows, put=__set_xmlDeclFollows))  xmlDeclFollows;

constexpr void __set_xmlDeclFollows(bool value) ;

constexpr bool __get_xmlDeclFollows() const;

 System::Xml::XmlCharType __declspec(property(get=__get_xmlCharType, put=__set_xmlCharType))  xmlCharType;

constexpr void __set_xmlCharType(System::Xml::XmlCharType value) ;

constexpr System::Xml::XmlCharType __get_xmlCharType() const;

 System::Xml::SecureStringHasher __declspec(property(get=__get_hasher, put=__set_hasher))  hasher;

constexpr void __set_hasher(System::Xml::SecureStringHasher value) ;

constexpr System::Xml::SecureStringHasher __get_hasher() const;

static ::ArrayW<::StringW> __declspec(property(get=__get_stateName, put=__set_stateName))  stateName;

static void __set_stateName(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_stateName() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_tokenName, put=__set_tokenName))  tokenName;

static void __set_tokenName(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_tokenName() ;

static ::ArrayW<System::Xml::WriteState> __declspec(property(get=__get_state2WriteState, put=__set_state2WriteState))  state2WriteState;

static void __set_state2WriteState(::ArrayW<System::Xml::WriteState> value) ;

static ::ArrayW<System::Xml::WriteState> __get_state2WriteState() ;

static ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> __declspec(property(get=__get_StateTableDocument, put=__set_StateTableDocument))  StateTableDocument;

static void __set_StateTableDocument(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> value) ;

static ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> __get_StateTableDocument() ;

static ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> __declspec(property(get=__get_StateTableAuto, put=__set_StateTableAuto))  StateTableAuto;

static void __set_StateTableAuto(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> value) ;

static ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> __get_StateTableAuto() ;


// Properties

 System::Xml::WriteState __declspec(property(get=get_WriteState))  WriteState;

 System::Xml::XmlRawWriter __declspec(property(get=get_RawWriter))  RawWriter;

 bool __declspec(property(get=get_SaveAttrValue))  SaveAttrValue;

 bool __declspec(property(get=get_InBase64))  InBase64;

 bool __declspec(property(get=get_IsClosedOrErrorState))  IsClosedOrErrorState;


// Methods

static System::Xml::XmlWellFormedWriter New_ctor(System::Xml::XmlWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method .ctor addr 0x26e516c size 0x3e4 virtual false final false
 void _ctor(System::Xml::XmlWriter writer, System::Xml::XmlWriterSettings settings) ;

/// @brief Method get_WriteState addr 0x26e55ac size 0x94 virtual true final false
 System::Xml::WriteState get_WriteState() ;

/// @brief Method WriteStartDocument addr 0x26e5640 size 0x8 virtual true final false
 void WriteStartDocument() ;

/// @brief Method WriteStartDocument addr 0x26e57fc size 0x1c virtual true final false
 void WriteStartDocument(bool standalone) ;

/// @brief Method WriteEndDocument addr 0x26e5818 size 0x15c virtual true final false
 void WriteEndDocument() ;

/// @brief Method WriteDocType addr 0x26e5c80 size 0x4ec virtual true final false
 void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset) ;

/// @brief Method WriteStartElement addr 0x26e616c size 0x3b8 virtual true final false
 void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns) ;

/// @brief Method WriteEndElement addr 0x26e6b84 size 0x1ec virtual true final false
 void WriteEndElement() ;

/// @brief Method WriteFullEndElement addr 0x26e6e74 size 0x1ec virtual true final false
 void WriteFullEndElement() ;

/// @brief Method WriteStartAttribute addr 0x26e7090 size 0x6d4 virtual true final false
 void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName) ;

/// @brief Method WriteEndAttribute addr 0x26e7c6c size 0x82c virtual true final false
 void WriteEndAttribute() ;

/// @brief Method WriteCData addr 0x26e9150 size 0x104 virtual true final false
 void WriteCData(::StringW text) ;

/// @brief Method WriteComment addr 0x26e9254 size 0x104 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteProcessingInstruction addr 0x26e9358 size 0x2bc virtual true final false
 void WriteProcessingInstruction(::StringW name, ::StringW text) ;

/// @brief Method WriteEntityRef addr 0x26e9614 size 0x16c virtual true final false
 void WriteEntityRef(::StringW name) ;

/// @brief Method WriteCharEntity addr 0x26e992c size 0x1ac virtual true final false
 void WriteCharEntity(char16_t ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x26e9b6c size 0x1a4 virtual true final false
 void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar) ;

/// @brief Method WriteWhitespace addr 0x26e9dd4 size 0x1c0 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method WriteString addr 0x26e9fe4 size 0xf0 virtual true final false
 void WriteString(::StringW text) ;

/// @brief Method WriteChars addr 0x26ea144 size 0x27c virtual true final false
 void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26ea470 size 0x27c virtual true final false
 void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteRaw addr 0x26ea79c size 0xf0 virtual true final false
 void WriteRaw(::StringW data) ;

/// @brief Method WriteBase64 addr 0x26ea8dc size 0x250 virtual true final false
 void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Close addr 0x26eab2c size 0x1bc virtual true final false
 void Close() ;

/// @brief Method Flush addr 0x26ead14 size 0xb4 virtual true final false
 void Flush() ;

/// @brief Method LookupPrefix addr 0x26eadc8 size 0x280 virtual true final false
 ::StringW LookupPrefix(::StringW ns) ;

/// @brief Method WriteValue addr 0x26eb048 size 0x100 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteBinHex addr 0x26eb198 size 0x134 virtual true final false
 void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method get_RawWriter addr 0x26eb2f8 size 0x8 virtual false final false
 System::Xml::XmlRawWriter get_RawWriter() ;

/// @brief Method get_SaveAttrValue addr 0x26e9780 size 0x10 virtual false final false
 bool get_SaveAttrValue() ;

/// @brief Method get_InBase64 addr 0x26eace8 size 0x2c virtual false final false
 bool get_InBase64() ;

/// @brief Method SetSpecialAttribute addr 0x26e7764 size 0x90 virtual false final false
 void SetSpecialAttribute(System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute special) ;

/// @brief Method WriteStartDocumentImpl addr 0x26e5648 size 0x1b4 virtual false final false
 void WriteStartDocumentImpl(System::Xml::XmlStandalone standalone) ;

/// @brief Method StartFragment addr 0x26eb370 size 0xc virtual false final false
 void StartFragment() ;

/// @brief Method PushNamespaceImplicit addr 0x26e6758 size 0x42c virtual false final false
 void PushNamespaceImplicit(::StringW prefix, ::StringW ns) ;

/// @brief Method PushNamespaceExplicit addr 0x26e84cc size 0x4dc virtual false final false
 bool PushNamespaceExplicit(::StringW prefix, ::StringW ns) ;

/// @brief Method AddNamespace addr 0x26eb458 size 0x17c virtual false final false
 void AddNamespace(::StringW prefix, ::StringW ns, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind kind) ;

/// @brief Method AddToNamespaceHashtable addr 0x26eb6e0 size 0xe8 virtual false final false
 void AddToNamespaceHashtable(int32_t namespaceIndex) ;

/// @brief Method LookupNamespaceIndex addr 0x26eb37c size 0xdc virtual false final false
 int32_t LookupNamespaceIndex(::StringW prefix) ;

/// @brief Method PopNamespaces addr 0x26e6da0 size 0xd4 virtual false final false
 void PopNamespaces(int32_t indexFrom, int32_t indexTo) ;

/// @brief Method DupAttrException addr 0x26eb5d4 size 0x10c virtual false final false
static System::Xml::XmlException DupAttrException(::StringW prefix, ::StringW localName) ;

/// @brief Method AdvanceState addr 0x26e5974 size 0x30c virtual false final false
 void AdvanceState(System::Xml::System__Xml__XmlWellFormedWriter__Token token) ;

/// @brief Method StartElementContent addr 0x26eba3c size 0xc8 virtual false final false
 void StartElementContent() ;

/// @brief Method GetStateName addr 0x26eb7c8 size 0xa0 virtual false final false
static ::StringW GetStateName(System::Xml::System__Xml__XmlWellFormedWriter__State state) ;

/// @brief Method LookupNamespace addr 0x26e6624 size 0x134 virtual false final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method LookupLocalNamespace addr 0x26e7928 size 0xd0 virtual false final false
 ::StringW LookupLocalNamespace(::StringW prefix) ;

/// @brief Method GeneratePrefix addr 0x26e77f4 size 0x134 virtual false final false
 ::StringW GeneratePrefix() ;

/// @brief Method CheckNCName addr 0x26e6524 size 0x100 virtual false final false
 void CheckNCName(::StringW ncname) ;

/// @brief Method InvalidCharsException addr 0x26ebc30 size 0x180 virtual false final false
static System::Exception InvalidCharsException(::StringW name, int32_t badCharIndex) ;

/// @brief Method ThrowInvalidStateTransition addr 0x26eb868 size 0x1d4 virtual false final false
 void ThrowInvalidStateTransition(System::Xml::System__Xml__XmlWellFormedWriter__Token token, System::Xml::System__Xml__XmlWellFormedWriter__State currentState) ;

/// @brief Method get_IsClosedOrErrorState addr 0x26eb2cc size 0x10 virtual false final false
 bool get_IsClosedOrErrorState() ;

/// @brief Method AddAttribute addr 0x26e79f8 size 0x274 virtual false final false
 void AddAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName) ;

/// @brief Method AddToAttrHashTable addr 0x26ebe2c size 0x13c virtual false final false
 void AddToAttrHashTable(int32_t attributeIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/ItemType");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind, "System.Xml", "XmlWellFormedWriter/NamespaceKind");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute, "System.Xml", "XmlWellFormedWriter/SpecialAttribute");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__State, "System.Xml", "XmlWellFormedWriter/State");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__Token, "System.Xml", "XmlWellFormedWriter/Token");
NEED_NO_BOX(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/BufferChunk");
NEED_NO_BOX(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item, "System.Xml", "XmlWellFormedWriter/AttributeValueCache/Item");
NEED_NO_BOX(System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache, "System.Xml", "XmlWellFormedWriter/AttributeValueCache");
NEED_NO_BOX(System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy, "System.Xml", "XmlWellFormedWriter/NamespaceResolverProxy");
NEED_NO_BOX(System::Xml::XmlWellFormedWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter, "System.Xml", "XmlWellFormedWriter");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__AttrName, "System.Xml", "XmlWellFormedWriter/AttrName");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__ElementScope, "System.Xml", "XmlWellFormedWriter/ElementScope");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlWellFormedWriter__Namespace, "System.Xml", "XmlWellFormedWriter/Namespace");
