#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Uri;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net {
struct System__Net__HttpListenerRequestUriBuilder__EncodingType;
}
namespace System::Net {
struct System__Net__HttpListenerRequestUriBuilder__ParsingResult;
}
namespace System::Net {
class HttpListenerRequestUriBuilder;
}
// Type: ::ParsingResult
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7915))
// CS Name: System.Net.HttpListenerRequestUriBuilder::ParsingResult
struct CORDL_TYPE System__Net__HttpListenerRequestUriBuilder__ParsingResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__HttpListenerRequestUriBuilder__ParsingResult(int32_t value__) noexcept;


                    constexpr System__Net__HttpListenerRequestUriBuilder__ParsingResult(System__Net__HttpListenerRequestUriBuilder__ParsingResult const&) = default;
                    constexpr System__Net__HttpListenerRequestUriBuilder__ParsingResult(System__Net__HttpListenerRequestUriBuilder__ParsingResult&&) = default;
                    constexpr System__Net__HttpListenerRequestUriBuilder__ParsingResult& operator=(System__Net__HttpListenerRequestUriBuilder__ParsingResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpListenerRequestUriBuilder__ParsingResult& operator=(System__Net__HttpListenerRequestUriBuilder__ParsingResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpListenerRequestUriBuilder__ParsingResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__HttpListenerRequestUriBuilder__ParsingResult_Unwrapped : int32_t {
__Success = 0,
__InvalidString = 1,
__EncodingError = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__HttpListenerRequestUriBuilder__ParsingResult_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__HttpListenerRequestUriBuilder__ParsingResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult const Success;

/// @brief Field InvalidString offset 0
static System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult const InvalidString;

/// @brief Field EncodingError offset 0
static System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult const EncodingError;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::EncodingType
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7916))
// CS Name: System.Net.HttpListenerRequestUriBuilder::EncodingType
struct CORDL_TYPE System__Net__HttpListenerRequestUriBuilder__EncodingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__HttpListenerRequestUriBuilder__EncodingType(int32_t value__) noexcept;


                    constexpr System__Net__HttpListenerRequestUriBuilder__EncodingType(System__Net__HttpListenerRequestUriBuilder__EncodingType const&) = default;
                    constexpr System__Net__HttpListenerRequestUriBuilder__EncodingType(System__Net__HttpListenerRequestUriBuilder__EncodingType&&) = default;
                    constexpr System__Net__HttpListenerRequestUriBuilder__EncodingType& operator=(System__Net__HttpListenerRequestUriBuilder__EncodingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpListenerRequestUriBuilder__EncodingType& operator=(System__Net__HttpListenerRequestUriBuilder__EncodingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpListenerRequestUriBuilder__EncodingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__HttpListenerRequestUriBuilder__EncodingType_Unwrapped : int32_t {
__Primary = 0,
__Secondary = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__HttpListenerRequestUriBuilder__EncodingType_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__HttpListenerRequestUriBuilder__EncodingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Primary offset 0
static System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType const Primary;

/// @brief Field Secondary offset 0
static System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType const Secondary;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::HttpListenerRequestUriBuilder
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7917))
// CS Name: System.Net.HttpListenerRequestUriBuilder
class CORDL_TYPE HttpListenerRequestUriBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EncodingType = System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType;

using ParsingResult = System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HttpListenerRequestUriBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: " const&", def_value: None }]
constexpr HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequestUriBuilder", modifiers: "&&", def_value: None }]
constexpr HttpListenerRequestUriBuilder(HttpListenerRequestUriBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListenerRequestUriBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpListenerRequestUriBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListenerRequestUriBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListenerRequestUriBuilder& operator=(HttpListenerRequestUriBuilder&& o) noexcept = default;
  constexpr HttpListenerRequestUriBuilder& operator=(HttpListenerRequestUriBuilder const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_useCookedRequestUrl, put=__set_useCookedRequestUrl))  useCookedRequestUrl;

static void __set_useCookedRequestUrl(bool value) ;

static bool __get_useCookedRequestUrl() ;

static System::Text::Encoding __declspec(property(get=__get_utf8Encoding, put=__set_utf8Encoding))  utf8Encoding;

static void __set_utf8Encoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_utf8Encoding() ;

static System::Text::Encoding __declspec(property(get=__get_ansiEncoding, put=__set_ansiEncoding))  ansiEncoding;

static void __set_ansiEncoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_ansiEncoding() ;

 ::StringW __declspec(property(get=__get_rawUri, put=__set_rawUri))  rawUri;

constexpr void __set_rawUri(::StringW value) ;

constexpr ::StringW __get_rawUri() const;

 ::StringW __declspec(property(get=__get_cookedUriScheme, put=__set_cookedUriScheme))  cookedUriScheme;

constexpr void __set_cookedUriScheme(::StringW value) ;

constexpr ::StringW __get_cookedUriScheme() const;

 ::StringW __declspec(property(get=__get_cookedUriHost, put=__set_cookedUriHost))  cookedUriHost;

constexpr void __set_cookedUriHost(::StringW value) ;

constexpr ::StringW __get_cookedUriHost() const;

 ::StringW __declspec(property(get=__get_cookedUriPath, put=__set_cookedUriPath))  cookedUriPath;

constexpr void __set_cookedUriPath(::StringW value) ;

constexpr ::StringW __get_cookedUriPath() const;

 ::StringW __declspec(property(get=__get_cookedUriQuery, put=__set_cookedUriQuery))  cookedUriQuery;

constexpr void __set_cookedUriQuery(::StringW value) ;

constexpr ::StringW __get_cookedUriQuery() const;

 System::Text::StringBuilder __declspec(property(get=__get_requestUriString, put=__set_requestUriString))  requestUriString;

constexpr void __set_requestUriString(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_requestUriString() const;

 System::Collections::Generic::List_1<uint8_t> __declspec(property(get=__get_rawOctets, put=__set_rawOctets))  rawOctets;

constexpr void __set_rawOctets(System::Collections::Generic::List_1<uint8_t> value) ;

constexpr System::Collections::Generic::List_1<uint8_t> __get_rawOctets() const;

 ::StringW __declspec(property(get=__get_rawPath, put=__set_rawPath))  rawPath;

constexpr void __set_rawPath(::StringW value) ;

constexpr ::StringW __get_rawPath() const;

 System::Uri __declspec(property(get=__get_requestUri, put=__set_requestUri))  requestUri;

constexpr void __set_requestUri(System::Uri value) ;

constexpr System::Uri __get_requestUri() const;


// Methods

// Ctor Parameters [CppParam { name: "rawUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cookedUriScheme", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cookedUriHost", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cookedUriPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cookedUriQuery", ty: "::StringW", modifiers: "", def_value: None }]
explicit HttpListenerRequestUriBuilder(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery) ;

/// @brief Method .ctor addr 0x280a26c size 0xcc virtual false final false
 void _ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery) ;

/// @brief Method GetRequestUri addr 0x280a3b4 size 0x90 virtual false final false
static System::Uri GetRequestUri(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery) ;

/// @brief Method Build addr 0x280a444 size 0xe8 virtual false final false
 System::Uri Build() ;

/// @brief Method BuildRequestUriUsingCookedPath addr 0x280a52c size 0x294 virtual false final false
 void BuildRequestUriUsingCookedPath() ;

/// @brief Method BuildRequestUriUsingRawPath addr 0x280a7c0 size 0x384 virtual false final false
 void BuildRequestUriUsingRawPath() ;

/// @brief Method GetEncoding addr 0x280acbc size 0x6c virtual false final false
static System::Text::Encoding GetEncoding(System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType type) ;

/// @brief Method BuildRequestUriUsingRawPath addr 0x280ad28 size 0x250 virtual false final false
 System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult BuildRequestUriUsingRawPath(System::Text::Encoding encoding) ;

/// @brief Method ParseRawPath addr 0x280af78 size 0x150 virtual false final false
 System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult ParseRawPath(System::Text::Encoding encoding) ;

/// @brief Method AppendUnicodeCodePointValuePercentEncoded addr 0x280b470 size 0x314 virtual false final false
 bool AppendUnicodeCodePointValuePercentEncoded(::StringW codePoint) ;

/// @brief Method AddPercentEncodedOctetToRawOctetsList addr 0x280b784 size 0x154 virtual false final false
 bool AddPercentEncodedOctetToRawOctetsList(System::Text::Encoding encoding, ::StringW escapedCharacter) ;

/// @brief Method EmptyDecodeAndAppendRawOctetsList addr 0x280b0c8 size 0x3a8 virtual false final false
 bool EmptyDecodeAndAppendRawOctetsList(System::Text::Encoding encoding) ;

/// @brief Method AppendOctetsPercentEncoded addr 0x280b8d8 size 0x36c virtual false final false
static void AppendOctetsPercentEncoded(System::Text::StringBuilder target, System::Collections::Generic::IEnumerable_1<uint8_t> octets) ;

/// @brief Method GetOctetsAsString addr 0x280bc44 size 0x3d8 virtual false final false
static ::StringW GetOctetsAsString(System::Collections::Generic::IEnumerable_1<uint8_t> octets) ;

/// @brief Method GetPath addr 0x280ab4c size 0x170 virtual false final false
static ::StringW GetPath(::StringW uriString) ;

/// @brief Method AddSlashToAsteriskOnlyPath addr 0x280a338 size 0x7c virtual false final false
static ::StringW AddSlashToAsteriskOnlyPath(::StringW path) ;

/// @brief Method LogWarning addr 0x280ab44 size 0x8 virtual false final false
 void LogWarning(::StringW methodName, ::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpListenerRequestUriBuilder__EncodingType, "System.Net", "HttpListenerRequestUriBuilder/EncodingType");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpListenerRequestUriBuilder__ParsingResult, "System.Net", "HttpListenerRequestUriBuilder/ParsingResult");
NEED_NO_BOX(System::Net::HttpListenerRequestUriBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerRequestUriBuilder, "System.Net", "HttpListenerRequestUriBuilder");
