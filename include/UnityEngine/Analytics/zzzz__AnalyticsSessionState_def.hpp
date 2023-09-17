#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Analytics {
struct AnalyticsSessionState;
}
namespace {
// Type: UnityEngine.Analytics::AnalyticsSessionState
namespace UnityEngine::Analytics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15938))
// CS Name: UnityEngine.Analytics.AnalyticsSessionState
struct CORDL_TYPE AnalyticsSessionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnalyticsSessionState(int32_t value__) noexcept;


                    constexpr AnalyticsSessionState(AnalyticsSessionState const&) = default;
                    constexpr AnalyticsSessionState(AnalyticsSessionState&&) = default;
                    constexpr AnalyticsSessionState& operator=(AnalyticsSessionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnalyticsSessionState& operator=(AnalyticsSessionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnalyticsSessionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnalyticsSessionState_Unwrapped : int32_t {
__kSessionStopped = 0,
__kSessionStarted = 1,
__kSessionPaused = 2,
__kSessionResumed = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalyticsSessionState_Unwrapped () const noexcept {
return std::bit_cast<__AnalyticsSessionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field kSessionStopped offset 0
static UnityEngine::Analytics::AnalyticsSessionState const kSessionStopped;

/// @brief Field kSessionStarted offset 0
static UnityEngine::Analytics::AnalyticsSessionState const kSessionStarted;

/// @brief Field kSessionPaused offset 0
static UnityEngine::Analytics::AnalyticsSessionState const kSessionPaused;

/// @brief Field kSessionResumed offset 0
static UnityEngine::Analytics::AnalyticsSessionState const kSessionResumed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionState, "UnityEngine.Analytics", "AnalyticsSessionState");
} // end anonymous namespace
