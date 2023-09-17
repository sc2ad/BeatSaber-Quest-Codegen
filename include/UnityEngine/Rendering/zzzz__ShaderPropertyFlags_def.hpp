#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
// Type: UnityEngine.Rendering::ShaderPropertyFlags
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10308))
// CS Name: UnityEngine.Rendering.ShaderPropertyFlags
struct CORDL_TYPE ShaderPropertyFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShaderPropertyFlags(int32_t value__) noexcept;


                    constexpr ShaderPropertyFlags(ShaderPropertyFlags const&) = default;
                    constexpr ShaderPropertyFlags(ShaderPropertyFlags&&) = default;
                    constexpr ShaderPropertyFlags& operator=(ShaderPropertyFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShaderPropertyFlags& operator=(ShaderPropertyFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShaderPropertyFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ShaderPropertyFlags_Unwrapped : int32_t {
__None = 0,
__HideInInspector = 1,
__PerRendererData = 2,
__NoScaleOffset = 4,
__Normal = 8,
__HDR = 16,
__Gamma = 32,
__NonModifiableTextureData = 64,
__MainTexture = 128,
__MainColor = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShaderPropertyFlags_Unwrapped () const noexcept {
return std::bit_cast<__ShaderPropertyFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const None;

/// @brief Field HideInInspector offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const HideInInspector;

/// @brief Field PerRendererData offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const PerRendererData;

/// @brief Field NoScaleOffset offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const NoScaleOffset;

/// @brief Field Normal offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const Normal;

/// @brief Field HDR offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const HDR;

/// @brief Field Gamma offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const Gamma;

/// @brief Field NonModifiableTextureData offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const NonModifiableTextureData;

/// @brief Field MainTexture offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const MainTexture;

/// @brief Field MainColor offset 0
static ::UnityEngine::Rendering::ShaderPropertyFlags const MainColor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderPropertyFlags, "UnityEngine.Rendering", "ShaderPropertyFlags");
