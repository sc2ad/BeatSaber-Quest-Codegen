#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace BGNet::Core {
struct AnalyticsMetricUnit;
}
namespace {
// Type: BGNet.Core::AnalyticsMetricUnit
namespace BGNet::Core {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12933))
// CS Name: BGNet.Core.AnalyticsMetricUnit
struct CORDL_TYPE AnalyticsMetricUnit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnalyticsMetricUnit(int32_t value__) noexcept;


                    constexpr AnalyticsMetricUnit(AnalyticsMetricUnit const&) = default;
                    constexpr AnalyticsMetricUnit(AnalyticsMetricUnit&&) = default;
                    constexpr AnalyticsMetricUnit& operator=(AnalyticsMetricUnit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnalyticsMetricUnit& operator=(AnalyticsMetricUnit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnalyticsMetricUnit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnalyticsMetricUnit_Unwrapped : int32_t {
__None = 0,
__Count = 1,
__Percent = 2,
__Seconds = 3,
__Milliseconds = 4,
__Microseconds = 5,
__Bytes = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalyticsMetricUnit_Unwrapped () const noexcept {
return std::bit_cast<__AnalyticsMetricUnit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static BGNet::Core::AnalyticsMetricUnit const None;

/// @brief Field Count offset 0
static BGNet::Core::AnalyticsMetricUnit const Count;

/// @brief Field Percent offset 0
static BGNet::Core::AnalyticsMetricUnit const Percent;

/// @brief Field Seconds offset 0
static BGNet::Core::AnalyticsMetricUnit const Seconds;

/// @brief Field Milliseconds offset 0
static BGNet::Core::AnalyticsMetricUnit const Milliseconds;

/// @brief Field Microseconds offset 0
static BGNet::Core::AnalyticsMetricUnit const Microseconds;

/// @brief Field Bytes offset 0
static BGNet::Core::AnalyticsMetricUnit const Bytes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::AnalyticsMetricUnit, "BGNet.Core", "AnalyticsMetricUnit");
} // end anonymous namespace
