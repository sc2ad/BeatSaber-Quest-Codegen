#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Type: UnityEngine.InputSystem.LowLevel::InputUpdateType
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6636))
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdateType
struct CORDL_TYPE InputUpdateType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputUpdateType(int32_t value__) noexcept;


                    constexpr InputUpdateType(InputUpdateType const&) = default;
                    constexpr InputUpdateType(InputUpdateType&&) = default;
                    constexpr InputUpdateType& operator=(InputUpdateType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputUpdateType& operator=(InputUpdateType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputUpdateType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputUpdateType_Unwrapped : int32_t {
__None = 0,
__Dynamic = 1,
__Fixed = 2,
__BeforeRender = 4,
__Editor = 8,
__Manual = 16,
__Default = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputUpdateType_Unwrapped () const noexcept {
return std::bit_cast<__InputUpdateType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::InputSystem::LowLevel::InputUpdateType const None;

/// @brief Field Dynamic offset 0
static UnityEngine::InputSystem::LowLevel::InputUpdateType const Dynamic;

/// @brief Field Fixed offset 0
static UnityEngine::InputSystem::LowLevel::InputUpdateType const Fixed;

/// @brief Field BeforeRender offset 0
static UnityEngine::InputSystem::LowLevel::InputUpdateType const BeforeRender;

/// @brief Field Editor offset 0
static UnityEngine::InputSystem::LowLevel::InputUpdateType const Editor;

/// @brief Field Manual offset 0
static UnityEngine::InputSystem::LowLevel::InputUpdateType const Manual;

/// @brief Field Default offset 0
static UnityEngine::InputSystem::LowLevel::InputUpdateType const Default;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputUpdateType, "UnityEngine.InputSystem.LowLevel", "InputUpdateType");
