#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Events {
struct UnityEventCallState;
}
// Type: UnityEngine.Events::UnityEventCallState
namespace UnityEngine::Events {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10393))
// CS Name: UnityEngine.Events.UnityEventCallState
struct CORDL_TYPE UnityEventCallState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEventCallState(int32_t value__) noexcept;


                    constexpr UnityEventCallState(UnityEventCallState const&) = default;
                    constexpr UnityEventCallState(UnityEventCallState&&) = default;
                    constexpr UnityEventCallState& operator=(UnityEventCallState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEventCallState& operator=(UnityEventCallState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEventCallState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEventCallState_Unwrapped : int32_t {
__Off = 0,
__EditorAndRuntime = 1,
__RuntimeOnly = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEventCallState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEventCallState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static ::UnityEngine::Events::UnityEventCallState const Off;

/// @brief Field EditorAndRuntime offset 0
static ::UnityEngine::Events::UnityEventCallState const EditorAndRuntime;

/// @brief Field RuntimeOnly offset 0
static ::UnityEngine::Events::UnityEventCallState const RuntimeOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEventCallState, "UnityEngine.Events", "UnityEventCallState");
