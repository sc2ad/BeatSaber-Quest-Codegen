#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionType;
}
// Type: UnityEngine.InputSystem::InputActionType
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6265))
// CS Name: UnityEngine.InputSystem.InputActionType
struct CORDL_TYPE InputActionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputActionType(int32_t value__) noexcept;


                    constexpr InputActionType(InputActionType const&) = default;
                    constexpr InputActionType(InputActionType&&) = default;
                    constexpr InputActionType& operator=(InputActionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputActionType& operator=(InputActionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputActionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputActionType_Unwrapped : int32_t {
__Value = 0,
__Button = 1,
__PassThrough = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionType_Unwrapped () const noexcept {
return std::bit_cast<__InputActionType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Value offset 0
static UnityEngine::InputSystem::InputActionType const Value;

/// @brief Field Button offset 0
static UnityEngine::InputSystem::InputActionType const Button;

/// @brief Field PassThrough offset 0
static UnityEngine::InputSystem::InputActionType const PassThrough;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputActionType, "UnityEngine.InputSystem", "InputActionType");
