#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net {
struct CookieToken;
}
// Type: System.Net::CookieToken
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7972))
// CS Name: System.Net.CookieToken
struct CORDL_TYPE CookieToken : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CookieToken(int32_t value__) noexcept;


                    constexpr CookieToken(CookieToken const&) = default;
                    constexpr CookieToken(CookieToken&&) = default;
                    constexpr CookieToken& operator=(CookieToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CookieToken& operator=(CookieToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CookieToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CookieToken_Unwrapped : int32_t {
__Nothing = 0,
__NameValuePair = 1,
__Attribute = 2,
__EndToken = 3,
__EndCookie = 4,
__End = 5,
__Equals = 6,
__Comment = 7,
__CommentUrl = 8,
__CookieName = 9,
__Discard = 10,
__Domain = 11,
__Expires = 12,
__MaxAge = 13,
__Path = 14,
__Port = 15,
__Secure = 16,
__HttpOnly = 17,
__Unknown = 18,
__Version = 19,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CookieToken_Unwrapped () const noexcept {
return std::bit_cast<__CookieToken_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Nothing offset 0
static System::Net::CookieToken const Nothing;

/// @brief Field NameValuePair offset 0
static System::Net::CookieToken const NameValuePair;

/// @brief Field Attribute offset 0
static System::Net::CookieToken const Attribute;

/// @brief Field EndToken offset 0
static System::Net::CookieToken const EndToken;

/// @brief Field EndCookie offset 0
static System::Net::CookieToken const EndCookie;

/// @brief Field End offset 0
static System::Net::CookieToken const End;

/// @brief Field Equals offset 0
static System::Net::CookieToken const Equals;

/// @brief Field Comment offset 0
static System::Net::CookieToken const Comment;

/// @brief Field CommentUrl offset 0
static System::Net::CookieToken const CommentUrl;

/// @brief Field CookieName offset 0
static System::Net::CookieToken const CookieName;

/// @brief Field Discard offset 0
static System::Net::CookieToken const Discard;

/// @brief Field Domain offset 0
static System::Net::CookieToken const Domain;

/// @brief Field Expires offset 0
static System::Net::CookieToken const Expires;

/// @brief Field MaxAge offset 0
static System::Net::CookieToken const MaxAge;

/// @brief Field Path offset 0
static System::Net::CookieToken const Path;

/// @brief Field Port offset 0
static System::Net::CookieToken const Port;

/// @brief Field Secure offset 0
static System::Net::CookieToken const Secure;

/// @brief Field HttpOnly offset 0
static System::Net::CookieToken const HttpOnly;

/// @brief Field Unknown offset 0
static System::Net::CookieToken const Unknown;

/// @brief Field Version offset 0
static System::Net::CookieToken const Version;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieToken, "System.Net", "CookieToken");
