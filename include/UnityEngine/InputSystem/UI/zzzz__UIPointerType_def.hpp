#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
// Type: UnityEngine.InputSystem.UI::UIPointerType
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6455))
// CS Name: UnityEngine.InputSystem.UI.UIPointerType
struct CORDL_TYPE UIPointerType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UIPointerType(int32_t value__) noexcept;


                    constexpr UIPointerType(UIPointerType const&) = default;
                    constexpr UIPointerType(UIPointerType&&) = default;
                    constexpr UIPointerType& operator=(UIPointerType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UIPointerType& operator=(UIPointerType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UIPointerType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UIPointerType_Unwrapped : int32_t {
__None = 0,
__MouseOrPen = 1,
__Touch = 2,
__Tracked = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UIPointerType_Unwrapped () const noexcept {
return std::bit_cast<__UIPointerType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::InputSystem::UI::UIPointerType const None;

/// @brief Field MouseOrPen offset 0
static ::UnityEngine::InputSystem::UI::UIPointerType const MouseOrPen;

/// @brief Field Touch offset 0
static ::UnityEngine::InputSystem::UI::UIPointerType const Touch;

/// @brief Field Tracked offset 0
static ::UnityEngine::InputSystem::UI::UIPointerType const Tracked;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::UIPointerType, "UnityEngine.InputSystem.UI", "UIPointerType");
