#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
// Type: System.Net.Http.Headers::HttpHeaderKind
namespace System::Net::Http::Headers {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14833))
// CS Name: System.Net.Http.Headers.HttpHeaderKind
struct CORDL_TYPE HttpHeaderKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HttpHeaderKind(int32_t value__) noexcept;


                    constexpr HttpHeaderKind(HttpHeaderKind const&) = default;
                    constexpr HttpHeaderKind(HttpHeaderKind&&) = default;
                    constexpr HttpHeaderKind& operator=(HttpHeaderKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HttpHeaderKind& operator=(HttpHeaderKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HttpHeaderKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HttpHeaderKind_Unwrapped : int32_t {
__None = 0,
__Request = 1,
__Response = 2,
__Content = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpHeaderKind_Unwrapped () const noexcept {
return std::bit_cast<__HttpHeaderKind_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::Http::Headers::HttpHeaderKind const None;

/// @brief Field Request offset 0
static System::Net::Http::Headers::HttpHeaderKind const Request;

/// @brief Field Response offset 0
static System::Net::Http::Headers::HttpHeaderKind const Response;

/// @brief Field Content offset 0
static System::Net::Http::Headers::HttpHeaderKind const Content;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpHeaderKind, "System.Net.Http.Headers", "HttpHeaderKind");
