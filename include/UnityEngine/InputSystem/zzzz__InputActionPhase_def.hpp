#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
// Type: UnityEngine.InputSystem::InputActionPhase
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6246))
// CS Name: UnityEngine.InputSystem.InputActionPhase
struct CORDL_TYPE InputActionPhase : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputActionPhase(int32_t value__) noexcept;


                    constexpr InputActionPhase(InputActionPhase const&) = default;
                    constexpr InputActionPhase(InputActionPhase&&) = default;
                    constexpr InputActionPhase& operator=(InputActionPhase const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputActionPhase& operator=(InputActionPhase&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputActionPhase(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputActionPhase_Unwrapped : int32_t {
__Disabled = 0,
__Waiting = 1,
__Started = 2,
__Performed = 3,
__Canceled = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionPhase_Unwrapped () const noexcept {
return std::bit_cast<__InputActionPhase_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Disabled offset 0
static UnityEngine::InputSystem::InputActionPhase const Disabled;

/// @brief Field Waiting offset 0
static UnityEngine::InputSystem::InputActionPhase const Waiting;

/// @brief Field Started offset 0
static UnityEngine::InputSystem::InputActionPhase const Started;

/// @brief Field Performed offset 0
static UnityEngine::InputSystem::InputActionPhase const Performed;

/// @brief Field Canceled offset 0
static UnityEngine::InputSystem::InputActionPhase const Canceled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputActionPhase, "UnityEngine.InputSystem", "InputActionPhase");
