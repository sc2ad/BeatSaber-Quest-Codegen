#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
// Type: UnityEngine.Rendering::ReflectionProbeUsage
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10283))
// CS Name: UnityEngine.Rendering.ReflectionProbeUsage
struct CORDL_TYPE ReflectionProbeUsage : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReflectionProbeUsage(int32_t value__) noexcept;


                    constexpr ReflectionProbeUsage(ReflectionProbeUsage const&) = default;
                    constexpr ReflectionProbeUsage(ReflectionProbeUsage&&) = default;
                    constexpr ReflectionProbeUsage& operator=(ReflectionProbeUsage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReflectionProbeUsage& operator=(ReflectionProbeUsage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReflectionProbeUsage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ReflectionProbeUsage_Unwrapped : int32_t {
__Off = 0,
__BlendProbes = 1,
__BlendProbesAndSkybox = 2,
__Simple = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionProbeUsage_Unwrapped () const noexcept {
return std::bit_cast<__ReflectionProbeUsage_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static UnityEngine::Rendering::ReflectionProbeUsage const Off;

/// @brief Field BlendProbes offset 0
static UnityEngine::Rendering::ReflectionProbeUsage const BlendProbes;

/// @brief Field BlendProbesAndSkybox offset 0
static UnityEngine::Rendering::ReflectionProbeUsage const BlendProbesAndSkybox;

/// @brief Field Simple offset 0
static UnityEngine::Rendering::ReflectionProbeUsage const Simple;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ReflectionProbeUsage, "UnityEngine.Rendering", "ReflectionProbeUsage");
