#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
// Type: Newtonsoft.Json::StringEscapeHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11752))
// CS Name: Newtonsoft.Json.StringEscapeHandling
struct CORDL_TYPE StringEscapeHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringEscapeHandling(int32_t value__) noexcept;


                    constexpr StringEscapeHandling(StringEscapeHandling const&) = default;
                    constexpr StringEscapeHandling(StringEscapeHandling&&) = default;
                    constexpr StringEscapeHandling& operator=(StringEscapeHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StringEscapeHandling& operator=(StringEscapeHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StringEscapeHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StringEscapeHandling_Unwrapped : int32_t {
__Default = 0,
__EscapeNonAscii = 1,
__EscapeHtml = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StringEscapeHandling_Unwrapped () const noexcept {
return std::bit_cast<__StringEscapeHandling_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static Newtonsoft::Json::StringEscapeHandling const Default;

/// @brief Field EscapeNonAscii offset 0
static Newtonsoft::Json::StringEscapeHandling const EscapeNonAscii;

/// @brief Field EscapeHtml offset 0
static Newtonsoft::Json::StringEscapeHandling const EscapeHtml;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::StringEscapeHandling, "Newtonsoft.Json", "StringEscapeHandling");
