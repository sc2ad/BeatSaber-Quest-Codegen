#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HMUI {
struct UISelectionState;
}
// Type: HMUI::UISelectionState
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13620))
// CS Name: HMUI.UISelectionState
struct CORDL_TYPE UISelectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UISelectionState(int32_t value__) noexcept;


                    constexpr UISelectionState(UISelectionState const&) = default;
                    constexpr UISelectionState(UISelectionState&&) = default;
                    constexpr UISelectionState& operator=(UISelectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UISelectionState& operator=(UISelectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UISelectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UISelectionState_Unwrapped : int32_t {
__Normal = 0,
__Highlighted = 1,
__Pressed = 2,
__Selected = 3,
__Disabled = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UISelectionState_Unwrapped () const noexcept {
return std::bit_cast<__UISelectionState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static HMUI::UISelectionState const Normal;

/// @brief Field Highlighted offset 0
static HMUI::UISelectionState const Highlighted;

/// @brief Field Pressed offset 0
static HMUI::UISelectionState const Pressed;

/// @brief Field Selected offset 0
static HMUI::UISelectionState const Selected;

/// @brief Field Disabled offset 0
static HMUI::UISelectionState const Disabled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::UISelectionState, "HMUI", "UISelectionState");
