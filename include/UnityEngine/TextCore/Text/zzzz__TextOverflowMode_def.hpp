#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
// Type: UnityEngine.TextCore.Text::TextOverflowMode
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13500))
// CS Name: UnityEngine.TextCore.Text.TextOverflowMode
struct CORDL_TYPE TextOverflowMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextOverflowMode(int32_t value__) noexcept;


                    constexpr TextOverflowMode(TextOverflowMode const&) = default;
                    constexpr TextOverflowMode(TextOverflowMode&&) = default;
                    constexpr TextOverflowMode& operator=(TextOverflowMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextOverflowMode& operator=(TextOverflowMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextOverflowMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextOverflowMode_Unwrapped : int32_t {
__Overflow = 0,
__Ellipsis = 1,
__Masking = 2,
__Truncate = 3,
__ScrollRect = 4,
__Page = 5,
__Linked = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextOverflowMode_Unwrapped () const noexcept {
return std::bit_cast<__TextOverflowMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Overflow offset 0
static ::UnityEngine::TextCore::Text::TextOverflowMode const Overflow;

/// @brief Field Ellipsis offset 0
static ::UnityEngine::TextCore::Text::TextOverflowMode const Ellipsis;

/// @brief Field Masking offset 0
static ::UnityEngine::TextCore::Text::TextOverflowMode const Masking;

/// @brief Field Truncate offset 0
static ::UnityEngine::TextCore::Text::TextOverflowMode const Truncate;

/// @brief Field ScrollRect offset 0
static ::UnityEngine::TextCore::Text::TextOverflowMode const ScrollRect;

/// @brief Field Page offset 0
static ::UnityEngine::TextCore::Text::TextOverflowMode const Page;

/// @brief Field Linked offset 0
static ::UnityEngine::TextCore::Text::TextOverflowMode const Linked;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextOverflowMode, "UnityEngine.TextCore.Text", "TextOverflowMode");
