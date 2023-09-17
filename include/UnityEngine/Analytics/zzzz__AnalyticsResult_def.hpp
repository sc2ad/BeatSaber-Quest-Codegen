#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Analytics {
struct AnalyticsResult;
}
namespace {
// Type: UnityEngine.Analytics::AnalyticsResult
namespace UnityEngine::Analytics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15937))
// CS Name: UnityEngine.Analytics.AnalyticsResult
struct CORDL_TYPE AnalyticsResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnalyticsResult(int32_t value__) noexcept;


                    constexpr AnalyticsResult(AnalyticsResult const&) = default;
                    constexpr AnalyticsResult(AnalyticsResult&&) = default;
                    constexpr AnalyticsResult& operator=(AnalyticsResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnalyticsResult& operator=(AnalyticsResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnalyticsResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnalyticsResult_Unwrapped : int32_t {
__Ok = 0,
__NotInitialized = 1,
__AnalyticsDisabled = 2,
__TooManyItems = 3,
__SizeLimitReached = 4,
__TooManyRequests = 5,
__InvalidData = 6,
__UnsupportedPlatform = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalyticsResult_Unwrapped () const noexcept {
return std::bit_cast<__AnalyticsResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ok offset 0
static UnityEngine::Analytics::AnalyticsResult const Ok;

/// @brief Field NotInitialized offset 0
static UnityEngine::Analytics::AnalyticsResult const NotInitialized;

/// @brief Field AnalyticsDisabled offset 0
static UnityEngine::Analytics::AnalyticsResult const AnalyticsDisabled;

/// @brief Field TooManyItems offset 0
static UnityEngine::Analytics::AnalyticsResult const TooManyItems;

/// @brief Field SizeLimitReached offset 0
static UnityEngine::Analytics::AnalyticsResult const SizeLimitReached;

/// @brief Field TooManyRequests offset 0
static UnityEngine::Analytics::AnalyticsResult const TooManyRequests;

/// @brief Field InvalidData offset 0
static UnityEngine::Analytics::AnalyticsResult const InvalidData;

/// @brief Field UnsupportedPlatform offset 0
static UnityEngine::Analytics::AnalyticsResult const UnsupportedPlatform;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsResult, "UnityEngine.Analytics", "AnalyticsResult");
} // end anonymous namespace
