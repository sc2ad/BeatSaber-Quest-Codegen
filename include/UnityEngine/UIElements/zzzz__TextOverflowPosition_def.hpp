#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
// Type: UnityEngine.UIElements::TextOverflowPosition
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6979))
// CS Name: UnityEngine.UIElements.TextOverflowPosition
struct CORDL_TYPE TextOverflowPosition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextOverflowPosition(int32_t value__) noexcept;


                    constexpr TextOverflowPosition(TextOverflowPosition const&) = default;
                    constexpr TextOverflowPosition(TextOverflowPosition&&) = default;
                    constexpr TextOverflowPosition& operator=(TextOverflowPosition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextOverflowPosition& operator=(TextOverflowPosition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextOverflowPosition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextOverflowPosition_Unwrapped : int32_t {
__End = 0,
__Start = 1,
__Middle = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextOverflowPosition_Unwrapped () const noexcept {
return std::bit_cast<__TextOverflowPosition_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field End offset 0
static UnityEngine::UIElements::TextOverflowPosition const End;

/// @brief Field Start offset 0
static UnityEngine::UIElements::TextOverflowPosition const Start;

/// @brief Field Middle offset 0
static UnityEngine::UIElements::TextOverflowPosition const Middle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextOverflowPosition, "UnityEngine.UIElements", "TextOverflowPosition");
