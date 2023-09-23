#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net {
struct HttpRequestHeader;
}
// Type: System.Net::HttpRequestHeader
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7918))
// CS Name: System.Net.HttpRequestHeader
struct CORDL_TYPE HttpRequestHeader : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HttpRequestHeader(int32_t value__) noexcept;


                    constexpr HttpRequestHeader(HttpRequestHeader const&) = default;
                    constexpr HttpRequestHeader(HttpRequestHeader&&) = default;
                    constexpr HttpRequestHeader& operator=(HttpRequestHeader const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HttpRequestHeader& operator=(HttpRequestHeader&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HttpRequestHeader(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HttpRequestHeader_Unwrapped : int32_t {
__CacheControl = 0,
__Connection = 1,
__Date = 2,
__KeepAlive = 3,
__Pragma = 4,
__Trailer = 5,
__TransferEncoding = 6,
__Upgrade = 7,
__Via = 8,
__Warning = 9,
__Allow = 10,
__ContentLength = 11,
__ContentType = 12,
__ContentEncoding = 13,
__ContentLanguage = 14,
__ContentLocation = 15,
__ContentMd5 = 16,
__ContentRange = 17,
__Expires = 18,
__LastModified = 19,
__Accept = 20,
__AcceptCharset = 21,
__AcceptEncoding = 22,
__AcceptLanguage = 23,
__Authorization = 24,
__Cookie = 25,
__Expect = 26,
__From = 27,
__Host = 28,
__IfMatch = 29,
__IfModifiedSince = 30,
__IfNoneMatch = 31,
__IfRange = 32,
__IfUnmodifiedSince = 33,
__MaxForwards = 34,
__ProxyAuthorization = 35,
__Referer = 36,
__Range = 37,
__Te = 38,
__Translate = 39,
__UserAgent = 40,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpRequestHeader_Unwrapped () const noexcept {
return std::bit_cast<__HttpRequestHeader_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CacheControl offset 0
static System::Net::HttpRequestHeader const CacheControl;

/// @brief Field Connection offset 0
static System::Net::HttpRequestHeader const Connection;

/// @brief Field Date offset 0
static System::Net::HttpRequestHeader const Date;

/// @brief Field KeepAlive offset 0
static System::Net::HttpRequestHeader const KeepAlive;

/// @brief Field Pragma offset 0
static System::Net::HttpRequestHeader const Pragma;

/// @brief Field Trailer offset 0
static System::Net::HttpRequestHeader const Trailer;

/// @brief Field TransferEncoding offset 0
static System::Net::HttpRequestHeader const TransferEncoding;

/// @brief Field Upgrade offset 0
static System::Net::HttpRequestHeader const Upgrade;

/// @brief Field Via offset 0
static System::Net::HttpRequestHeader const Via;

/// @brief Field Warning offset 0
static System::Net::HttpRequestHeader const Warning;

/// @brief Field Allow offset 0
static System::Net::HttpRequestHeader const Allow;

/// @brief Field ContentLength offset 0
static System::Net::HttpRequestHeader const ContentLength;

/// @brief Field ContentType offset 0
static System::Net::HttpRequestHeader const ContentType;

/// @brief Field ContentEncoding offset 0
static System::Net::HttpRequestHeader const ContentEncoding;

/// @brief Field ContentLanguage offset 0
static System::Net::HttpRequestHeader const ContentLanguage;

/// @brief Field ContentLocation offset 0
static System::Net::HttpRequestHeader const ContentLocation;

/// @brief Field ContentMd5 offset 0
static System::Net::HttpRequestHeader const ContentMd5;

/// @brief Field ContentRange offset 0
static System::Net::HttpRequestHeader const ContentRange;

/// @brief Field Expires offset 0
static System::Net::HttpRequestHeader const Expires;

/// @brief Field LastModified offset 0
static System::Net::HttpRequestHeader const LastModified;

/// @brief Field Accept offset 0
static System::Net::HttpRequestHeader const Accept;

/// @brief Field AcceptCharset offset 0
static System::Net::HttpRequestHeader const AcceptCharset;

/// @brief Field AcceptEncoding offset 0
static System::Net::HttpRequestHeader const AcceptEncoding;

/// @brief Field AcceptLanguage offset 0
static System::Net::HttpRequestHeader const AcceptLanguage;

/// @brief Field Authorization offset 0
static System::Net::HttpRequestHeader const Authorization;

/// @brief Field Cookie offset 0
static System::Net::HttpRequestHeader const Cookie;

/// @brief Field Expect offset 0
static System::Net::HttpRequestHeader const Expect;

/// @brief Field From offset 0
static System::Net::HttpRequestHeader const From;

/// @brief Field Host offset 0
static System::Net::HttpRequestHeader const Host;

/// @brief Field IfMatch offset 0
static System::Net::HttpRequestHeader const IfMatch;

/// @brief Field IfModifiedSince offset 0
static System::Net::HttpRequestHeader const IfModifiedSince;

/// @brief Field IfNoneMatch offset 0
static System::Net::HttpRequestHeader const IfNoneMatch;

/// @brief Field IfRange offset 0
static System::Net::HttpRequestHeader const IfRange;

/// @brief Field IfUnmodifiedSince offset 0
static System::Net::HttpRequestHeader const IfUnmodifiedSince;

/// @brief Field MaxForwards offset 0
static System::Net::HttpRequestHeader const MaxForwards;

/// @brief Field ProxyAuthorization offset 0
static System::Net::HttpRequestHeader const ProxyAuthorization;

/// @brief Field Referer offset 0
static System::Net::HttpRequestHeader const Referer;

/// @brief Field Range offset 0
static System::Net::HttpRequestHeader const Range;

/// @brief Field Te offset 0
static System::Net::HttpRequestHeader const Te;

/// @brief Field Translate offset 0
static System::Net::HttpRequestHeader const Translate;

/// @brief Field UserAgent offset 0
static System::Net::HttpRequestHeader const UserAgent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpRequestHeader, "System.Net", "HttpRequestHeader");
