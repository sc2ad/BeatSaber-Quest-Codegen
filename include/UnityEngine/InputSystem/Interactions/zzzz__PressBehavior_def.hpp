#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
struct PressBehavior;
}
// Type: UnityEngine.InputSystem.Interactions::PressBehavior
namespace UnityEngine::InputSystem::Interactions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6733))
// CS Name: UnityEngine.InputSystem.Interactions.PressBehavior
struct CORDL_TYPE PressBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PressBehavior(int32_t value__) noexcept;


                    constexpr PressBehavior(PressBehavior const&) = default;
                    constexpr PressBehavior(PressBehavior&&) = default;
                    constexpr PressBehavior& operator=(PressBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PressBehavior& operator=(PressBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PressBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PressBehavior_Unwrapped : int32_t {
__PressOnly = 0,
__ReleaseOnly = 1,
__PressAndRelease = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PressBehavior_Unwrapped () const noexcept {
return std::bit_cast<__PressBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PressOnly offset 0
static ::UnityEngine::InputSystem::Interactions::PressBehavior const PressOnly;

/// @brief Field ReleaseOnly offset 0
static ::UnityEngine::InputSystem::Interactions::PressBehavior const ReleaseOnly;

/// @brief Field PressAndRelease offset 0
static ::UnityEngine::InputSystem::Interactions::PressBehavior const PressAndRelease;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Interactions
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::PressBehavior, "UnityEngine.InputSystem.Interactions", "PressBehavior");