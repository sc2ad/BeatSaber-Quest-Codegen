#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem {
struct PenButton;
}
// Type: UnityEngine.InputSystem::PenButton
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6328))
// CS Name: UnityEngine.InputSystem.PenButton
struct CORDL_TYPE PenButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PenButton(int32_t value__) noexcept;


                    constexpr PenButton(PenButton const&) = default;
                    constexpr PenButton(PenButton&&) = default;
                    constexpr PenButton& operator=(PenButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PenButton& operator=(PenButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PenButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PenButton_Unwrapped : int32_t {
__Tip = 0,
__Eraser = 1,
__BarrelFirst = 2,
__BarrelSecond = 3,
__InRange = 4,
__BarrelThird = 5,
__BarrelFourth = 6,
__Barrel1 = 2,
__Barrel2 = 3,
__Barrel3 = 5,
__Barrel4 = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PenButton_Unwrapped () const noexcept {
return std::bit_cast<__PenButton_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Tip offset 0
static UnityEngine::InputSystem::PenButton const Tip;

/// @brief Field Eraser offset 0
static UnityEngine::InputSystem::PenButton const Eraser;

/// @brief Field BarrelFirst offset 0
static UnityEngine::InputSystem::PenButton const BarrelFirst;

/// @brief Field BarrelSecond offset 0
static UnityEngine::InputSystem::PenButton const BarrelSecond;

/// @brief Field InRange offset 0
static UnityEngine::InputSystem::PenButton const InRange;

/// @brief Field BarrelThird offset 0
static UnityEngine::InputSystem::PenButton const BarrelThird;

/// @brief Field BarrelFourth offset 0
static UnityEngine::InputSystem::PenButton const BarrelFourth;

/// @brief Field Barrel1 offset 0
static UnityEngine::InputSystem::PenButton const Barrel1;

/// @brief Field Barrel2 offset 0
static UnityEngine::InputSystem::PenButton const Barrel2;

/// @brief Field Barrel3 offset 0
static UnityEngine::InputSystem::PenButton const Barrel3;

/// @brief Field Barrel4 offset 0
static UnityEngine::InputSystem::PenButton const Barrel4;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::PenButton, "UnityEngine.InputSystem", "PenButton");
