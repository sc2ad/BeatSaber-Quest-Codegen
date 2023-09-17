#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
// Type: UnityEngine.Experimental.Rendering::FormatUsage
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10340))
// CS Name: UnityEngine.Experimental.Rendering.FormatUsage
struct CORDL_TYPE FormatUsage : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FormatUsage(int32_t value__) noexcept;


                    constexpr FormatUsage(FormatUsage const&) = default;
                    constexpr FormatUsage(FormatUsage&&) = default;
                    constexpr FormatUsage& operator=(FormatUsage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FormatUsage& operator=(FormatUsage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FormatUsage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FormatUsage_Unwrapped : int32_t {
__Sample = 0,
__Linear = 1,
__Sparse = 2,
__Render = 4,
__Blend = 5,
__GetPixels = 6,
__SetPixels = 7,
__SetPixels32 = 8,
__ReadPixels = 9,
__LoadStore = 10,
__MSAA2x = 11,
__MSAA4x = 12,
__MSAA8x = 13,
__StencilSampling = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FormatUsage_Unwrapped () const noexcept {
return std::bit_cast<__FormatUsage_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Sample offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const Sample;

/// @brief Field Linear offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const Linear;

/// @brief Field Sparse offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const Sparse;

/// @brief Field Render offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const Render;

/// @brief Field Blend offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const Blend;

/// @brief Field GetPixels offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const GetPixels;

/// @brief Field SetPixels offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const SetPixels;

/// @brief Field SetPixels32 offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const SetPixels32;

/// @brief Field ReadPixels offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const ReadPixels;

/// @brief Field LoadStore offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const LoadStore;

/// @brief Field MSAA2x offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA2x;

/// @brief Field MSAA4x offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA4x;

/// @brief Field MSAA8x offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA8x;

/// @brief Field StencilSampling offset 0
static ::UnityEngine::Experimental::Rendering::FormatUsage const StencilSampling;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::FormatUsage, "UnityEngine.Experimental.Rendering", "FormatUsage");
