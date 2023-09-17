#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct StateInfoIndex;
}
// Type: UnityEngine::StateInfoIndex
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15045))
// CS Name: UnityEngine.StateInfoIndex
struct CORDL_TYPE StateInfoIndex : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StateInfoIndex(int32_t value__) noexcept;


                    constexpr StateInfoIndex(StateInfoIndex const&) = default;
                    constexpr StateInfoIndex(StateInfoIndex&&) = default;
                    constexpr StateInfoIndex& operator=(StateInfoIndex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StateInfoIndex& operator=(StateInfoIndex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StateInfoIndex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StateInfoIndex_Unwrapped : int32_t {
__CurrentState = 0,
__NextState = 1,
__ExitState = 2,
__InterruptedState = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StateInfoIndex_Unwrapped () const noexcept {
return std::bit_cast<__StateInfoIndex_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CurrentState offset 0
static ::UnityEngine::StateInfoIndex const CurrentState;

/// @brief Field NextState offset 0
static ::UnityEngine::StateInfoIndex const NextState;

/// @brief Field ExitState offset 0
static ::UnityEngine::StateInfoIndex const ExitState;

/// @brief Field InterruptedState offset 0
static ::UnityEngine::StateInfoIndex const InterruptedState;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StateInfoIndex, "UnityEngine", "StateInfoIndex");
