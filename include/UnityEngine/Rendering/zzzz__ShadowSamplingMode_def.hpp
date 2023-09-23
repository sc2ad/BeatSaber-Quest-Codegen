#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
// Type: UnityEngine.Rendering::ShadowSamplingMode
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10284))
// CS Name: UnityEngine.Rendering.ShadowSamplingMode
struct CORDL_TYPE ShadowSamplingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShadowSamplingMode(int32_t value__) noexcept;


                    constexpr ShadowSamplingMode(ShadowSamplingMode const&) = default;
                    constexpr ShadowSamplingMode(ShadowSamplingMode&&) = default;
                    constexpr ShadowSamplingMode& operator=(ShadowSamplingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShadowSamplingMode& operator=(ShadowSamplingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShadowSamplingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ShadowSamplingMode_Unwrapped : int32_t {
__CompareDepths = 0,
__RawDepth = 1,
__None = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadowSamplingMode_Unwrapped () const noexcept {
return std::bit_cast<__ShadowSamplingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CompareDepths offset 0
static UnityEngine::Rendering::ShadowSamplingMode const CompareDepths;

/// @brief Field RawDepth offset 0
static UnityEngine::Rendering::ShadowSamplingMode const RawDepth;

/// @brief Field None offset 0
static UnityEngine::Rendering::ShadowSamplingMode const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ShadowSamplingMode, "UnityEngine.Rendering", "ShadowSamplingMode");
