#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
// Type: Unity.Profiling.LowLevel::MarkerFlags
namespace Unity::Profiling::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9909))
// CS Name: Unity.Profiling.LowLevel.MarkerFlags
struct CORDL_TYPE MarkerFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr MarkerFlags(uint16_t value__) noexcept;


                    constexpr MarkerFlags(MarkerFlags const&) = default;
                    constexpr MarkerFlags(MarkerFlags&&) = default;
                    constexpr MarkerFlags& operator=(MarkerFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MarkerFlags& operator=(MarkerFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MarkerFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MarkerFlags_Unwrapped : uint16_t {
__Default = 0u,
__Script = 2u,
__ScriptInvoke = 32u,
__ScriptDeepProfiler = 64u,
__AvailabilityEditor = 4u,
__AvailabilityNonDevelopment = 8u,
__Warning = 16u,
__Counter = 128u,
__SampleGPU = 256u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MarkerFlags_Unwrapped () const noexcept {
return std::bit_cast<__MarkerFlags_Unwrapped>(__instance);
}


// Fields

 uint16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint16_t value) ;

constexpr uint16_t __get_value__() const;

/// @brief Field Default offset 0
static Unity::Profiling::LowLevel::MarkerFlags const Default;

/// @brief Field Script offset 0
static Unity::Profiling::LowLevel::MarkerFlags const Script;

/// @brief Field ScriptInvoke offset 0
static Unity::Profiling::LowLevel::MarkerFlags const ScriptInvoke;

/// @brief Field ScriptDeepProfiler offset 0
static Unity::Profiling::LowLevel::MarkerFlags const ScriptDeepProfiler;

/// @brief Field AvailabilityEditor offset 0
static Unity::Profiling::LowLevel::MarkerFlags const AvailabilityEditor;

/// @brief Field AvailabilityNonDevelopment offset 0
static Unity::Profiling::LowLevel::MarkerFlags const AvailabilityNonDevelopment;

/// @brief Field Warning offset 0
static Unity::Profiling::LowLevel::MarkerFlags const Warning;

/// @brief Field Counter offset 0
static Unity::Profiling::LowLevel::MarkerFlags const Counter;

/// @brief Field SampleGPU offset 0
static Unity::Profiling::LowLevel::MarkerFlags const SampleGPU;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Profiling::LowLevel
DEFINE_IL2CPP_ARG_TYPE(Unity::Profiling::LowLevel::MarkerFlags, "Unity.Profiling.LowLevel", "MarkerFlags");
