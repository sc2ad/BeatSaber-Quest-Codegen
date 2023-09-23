#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct TimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime;
}
// Type: ::WaitForLastPresentationAndUpdateTime
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10411))
// CS Name: UnityEngine.PlayerLoop.TimeUpdate::WaitForLastPresentationAndUpdateTime
struct CORDL_TYPE UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime(UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime const&) = default;
                    constexpr UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime(UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime&&) = default;
                    constexpr UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime& operator=(UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime& operator=(UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::TimeUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10412))
// CS Name: UnityEngine.PlayerLoop.TimeUpdate
struct CORDL_TYPE TimeUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using WaitForLastPresentationAndUpdateTime = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime;


                    constexpr TimeUpdate(TimeUpdate const&) = default;
                    constexpr TimeUpdate(TimeUpdate&&) = default;
                    constexpr TimeUpdate& operator=(TimeUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TimeUpdate& operator=(TimeUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TimeUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::TimeUpdate, "UnityEngine.PlayerLoop", "TimeUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__TimeUpdate__WaitForLastPresentationAndUpdateTime, "UnityEngine.PlayerLoop", "TimeUpdate/WaitForLastPresentationAndUpdateTime");
