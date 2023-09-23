#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
struct WebHeaderCollectionType;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class HeaderInfoTable;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Net {
struct HttpRequestHeader;
}
// Forward declare root types
namespace System::Net {
struct System__Net__WebHeaderCollection__RfcChar;
}
namespace System::Net {
class WebHeaderCollection;
}
// Type: ::RfcChar
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7941))
// CS Name: System.Net.WebHeaderCollection::RfcChar
struct CORDL_TYPE System__Net__WebHeaderCollection__RfcChar : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr System__Net__WebHeaderCollection__RfcChar(uint8_t value__) noexcept;


                    constexpr System__Net__WebHeaderCollection__RfcChar(System__Net__WebHeaderCollection__RfcChar const&) = default;
                    constexpr System__Net__WebHeaderCollection__RfcChar(System__Net__WebHeaderCollection__RfcChar&&) = default;
                    constexpr System__Net__WebHeaderCollection__RfcChar& operator=(System__Net__WebHeaderCollection__RfcChar const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebHeaderCollection__RfcChar& operator=(System__Net__WebHeaderCollection__RfcChar&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebHeaderCollection__RfcChar(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__WebHeaderCollection__RfcChar_Unwrapped : uint8_t {
__High = 0u,
__Reg = 1u,
__Ctl = 2u,
__CR = 3u,
__LF = 4u,
__WS = 5u,
__Colon = 6u,
__Delim = 7u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__WebHeaderCollection__RfcChar_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__WebHeaderCollection__RfcChar_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field High offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const High;

/// @brief Field Reg offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const Reg;

/// @brief Field Ctl offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const Ctl;

/// @brief Field CR offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const CR;

/// @brief Field LF offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const LF;

/// @brief Field WS offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const WS;

/// @brief Field Colon offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const Colon;

/// @brief Field Delim offset 0
static System::Net::System__Net__WebHeaderCollection__RfcChar const Delim;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebHeaderCollection
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7942))
// CS Name: System.Net.WebHeaderCollection
class CORDL_TYPE WebHeaderCollection : public System::Collections::Specialized::NameValueCollection {
public:
// Declarations
using RfcChar = System::Net::System__Net__WebHeaderCollection__RfcChar;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~WebHeaderCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: " const&", def_value: None }]
constexpr WebHeaderCollection(WebHeaderCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebHeaderCollection", modifiers: "&&", def_value: None }]
constexpr WebHeaderCollection(WebHeaderCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebHeaderCollection(void* ptr) noexcept : System::Collections::Specialized::NameValueCollection(ptr) {
}


  constexpr WebHeaderCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebHeaderCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebHeaderCollection& operator=(WebHeaderCollection&& o) noexcept = default;
  constexpr WebHeaderCollection& operator=(WebHeaderCollection const& o) noexcept = default;
                


// Fields

static System::Net::HeaderInfoTable __declspec(property(get=__get_HInfo, put=__set_HInfo))  HInfo;

static void __set_HInfo(System::Net::HeaderInfoTable value) ;

static System::Net::HeaderInfoTable __get_HInfo() ;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_CommonHeaders, put=__set_m_CommonHeaders))  m_CommonHeaders;

constexpr void __set_m_CommonHeaders(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_CommonHeaders() const;

 int32_t __declspec(property(get=__get_m_NumCommonHeaders, put=__set_m_NumCommonHeaders))  m_NumCommonHeaders;

constexpr void __set_m_NumCommonHeaders(int32_t value) ;

constexpr int32_t __get_m_NumCommonHeaders() const;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_CommonHeaderNames, put=__set_s_CommonHeaderNames))  s_CommonHeaderNames;

static void __set_s_CommonHeaderNames(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_CommonHeaderNames() ;

static ::ArrayW<int8_t> __declspec(property(get=__get_s_CommonHeaderHints, put=__set_s_CommonHeaderHints))  s_CommonHeaderHints;

static void __set_s_CommonHeaderHints(::ArrayW<int8_t> value) ;

static ::ArrayW<int8_t> __get_s_CommonHeaderHints() ;

 System::Collections::Specialized::NameValueCollection __declspec(property(get=__get_m_InnerCollection, put=__set_m_InnerCollection))  m_InnerCollection;

constexpr void __set_m_InnerCollection(System::Collections::Specialized::NameValueCollection value) ;

constexpr System::Collections::Specialized::NameValueCollection __get_m_InnerCollection() const;

 System::Net::WebHeaderCollectionType __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(System::Net::WebHeaderCollectionType value) ;

constexpr System::Net::WebHeaderCollectionType __get_m_Type() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_HttpTrimCharacters, put=__set_HttpTrimCharacters))  HttpTrimCharacters;

static void __set_HttpTrimCharacters(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_HttpTrimCharacters() ;

static ::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar> __declspec(property(get=__get_RfcCharMap, put=__set_RfcCharMap))  RfcCharMap;

static void __set_RfcCharMap(::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar> value) ;

static ::ArrayW<System::Net::System__Net__WebHeaderCollection__RfcChar> __get_RfcCharMap() ;


// Properties

 System::Collections::Specialized::NameValueCollection __declspec(property(get=get_InnerCollection))  InnerCollection;

 bool __declspec(property(get=get_AllowHttpRequestHeader))  AllowHttpRequestHeader;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method NormalizeCommonHeaders addr 0x280e670 size 0x100 virtual false final false
 void NormalizeCommonHeaders() ;

/// @brief Method get_InnerCollection addr 0x280e770 size 0xa4 virtual false final false
 System::Collections::Specialized::NameValueCollection get_InnerCollection() ;

/// @brief Method AllowMultiValues addr 0x280e814 size 0xa8 virtual false final false
static bool AllowMultiValues(::StringW name) ;

/// @brief Method get_AllowHttpRequestHeader addr 0x280e998 size 0x38 virtual false final false
 bool get_AllowHttpRequestHeader() ;

/// @brief Method Remove addr 0x280e9d0 size 0xf8 virtual false final false
 void Remove(System::Net::HttpRequestHeader header) ;

/// @brief Method AddInternal addr 0x280eac8 size 0x54 virtual false final false
 void AddInternal(::StringW name, ::StringW value) ;

/// @brief Method ChangeInternal addr 0x280eb1c size 0x54 virtual false final false
 void ChangeInternal(::StringW name, ::StringW value) ;

/// @brief Method RemoveInternal addr 0x280eb70 size 0x5c virtual false final false
 void RemoveInternal(::StringW name) ;

/// @brief Method CheckBadChars addr 0x280ebcc size 0x394 virtual false final false
static ::StringW CheckBadChars(::StringW name, bool isHeaderValue) ;

/// @brief Method ContainsNonAsciiChars addr 0x280ef60 size 0x84 virtual false final false
static bool ContainsNonAsciiChars(::StringW token) ;

/// @brief Method ThrowOnRestrictedHeader addr 0x280efe4 size 0x168 virtual false final false
 void ThrowOnRestrictedHeader(::StringW headerName) ;

/// @brief Method Add addr 0x280f14c size 0x1b4 virtual true final false
 void Add(::StringW name, ::StringW value) ;

/// @brief Method Add addr 0x280f300 size 0x2dc virtual false final false
 void Add(::StringW header) ;

/// @brief Method Set addr 0x280f5dc size 0x230 virtual true final false
 void Set(::StringW name, ::StringW value) ;

/// @brief Method SetInternal addr 0x280f80c size 0x224 virtual false final false
 void SetInternal(::StringW name, ::StringW value) ;

/// @brief Method Remove addr 0x280fa30 size 0x13c virtual true final false
 void Remove(::StringW name) ;

/// @brief Method GetValues addr 0x280fb6c size 0x208 virtual true final false
 ::ArrayW<::StringW> GetValues(::StringW header) ;

/// @brief Method ToString addr 0x280fd74 size 0x5c virtual true final false
 ::StringW ToString() ;

/// @brief Method GetAsString addr 0x280fdd0 size 0x2a4 virtual false final false
static ::StringW GetAsString(System::Collections::Specialized::NameValueCollection cc, bool winInetCompat, bool forTrace) ;

// Ctor Parameters []
explicit WebHeaderCollection() ;

/// @brief Method .ctor addr 0x2810074 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "type", ty: "System::Net::WebHeaderCollectionType", modifiers: "", def_value: None }]
explicit WebHeaderCollection(System::Net::WebHeaderCollectionType type) ;

/// @brief Method .ctor addr 0x28100d8 size 0xe4 virtual false final false
 void _ctor(System::Net::WebHeaderCollectionType type) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit WebHeaderCollection(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x28101bc size 0x1c4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method OnDeserialization addr 0x2810380 size 0x4 virtual true final false
 void OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method GetObjectData addr 0x2810384 size 0x180 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2810504 size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method Get addr 0x2810510 size 0x328 virtual true final false
 ::StringW Get(::StringW name) ;

/// @brief Method GetEnumerator addr 0x2810838 size 0x7c virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_Count addr 0x28108b4 size 0x30 virtual true final false
 int32_t get_Count() ;

/// @brief Method Get addr 0x28108e4 size 0x40 virtual true final false
 ::StringW Get(int32_t index) ;

/// @brief Method GetValues addr 0x2810924 size 0x40 virtual true final false
 ::ArrayW<::StringW> GetValues(int32_t index) ;

/// @brief Method GetKey addr 0x2810964 size 0x40 virtual true final false
 ::StringW GetKey(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__WebHeaderCollection__RfcChar, "System.Net", "WebHeaderCollection/RfcChar");
NEED_NO_BOX(System::Net::WebHeaderCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollection, "System.Net", "WebHeaderCollection");
