#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct BuiltinRenderTextureType;
}
// Type: UnityEngine.Rendering::BuiltinRenderTextureType
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10275))
// CS Name: UnityEngine.Rendering.BuiltinRenderTextureType
struct CORDL_TYPE BuiltinRenderTextureType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BuiltinRenderTextureType(int32_t value__) noexcept;


                    constexpr BuiltinRenderTextureType(BuiltinRenderTextureType const&) = default;
                    constexpr BuiltinRenderTextureType(BuiltinRenderTextureType&&) = default;
                    constexpr BuiltinRenderTextureType& operator=(BuiltinRenderTextureType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BuiltinRenderTextureType& operator=(BuiltinRenderTextureType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BuiltinRenderTextureType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BuiltinRenderTextureType_Unwrapped : int32_t {
__PropertyName = -4,
__BufferPtr = -3,
__RenderTexture = -2,
__BindableTexture = -1,
__None = 0,
__CurrentActive = 1,
__CameraTarget = 2,
__Depth = 3,
__DepthNormals = 4,
__ResolvedDepth = 5,
__PrepassNormalsSpec = 7,
__PrepassLight = 8,
__PrepassLightSpec = 9,
__GBuffer0 = 10,
__GBuffer1 = 11,
__GBuffer2 = 12,
__GBuffer3 = 13,
__Reflections = 14,
__MotionVectors = 15,
__GBuffer4 = 16,
__GBuffer5 = 17,
__GBuffer6 = 18,
__GBuffer7 = 19,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuiltinRenderTextureType_Unwrapped () const noexcept {
return std::bit_cast<__BuiltinRenderTextureType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PropertyName offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const PropertyName;

/// @brief Field BufferPtr offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const BufferPtr;

/// @brief Field RenderTexture offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const RenderTexture;

/// @brief Field BindableTexture offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const BindableTexture;

/// @brief Field None offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const None;

/// @brief Field CurrentActive offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const CurrentActive;

/// @brief Field CameraTarget offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const CameraTarget;

/// @brief Field Depth offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const Depth;

/// @brief Field DepthNormals offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const DepthNormals;

/// @brief Field ResolvedDepth offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const ResolvedDepth;

/// @brief Field PrepassNormalsSpec offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const PrepassNormalsSpec;

/// @brief Field PrepassLight offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const PrepassLight;

/// @brief Field PrepassLightSpec offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const PrepassLightSpec;

/// @brief Field GBuffer0 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer0;

/// @brief Field GBuffer1 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer1;

/// @brief Field GBuffer2 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer2;

/// @brief Field GBuffer3 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer3;

/// @brief Field Reflections offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const Reflections;

/// @brief Field MotionVectors offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const MotionVectors;

/// @brief Field GBuffer4 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer4;

/// @brief Field GBuffer5 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer5;

/// @brief Field GBuffer6 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer6;

/// @brief Field GBuffer7 offset 0
static UnityEngine::Rendering::BuiltinRenderTextureType const GBuffer7;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BuiltinRenderTextureType, "UnityEngine.Rendering", "BuiltinRenderTextureType");
