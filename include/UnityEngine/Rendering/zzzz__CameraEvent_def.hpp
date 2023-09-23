#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Type: UnityEngine.Rendering::CameraEvent
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10273))
// CS Name: UnityEngine.Rendering.CameraEvent
struct CORDL_TYPE CameraEvent : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CameraEvent(int32_t value__) noexcept;


                    constexpr CameraEvent(CameraEvent const&) = default;
                    constexpr CameraEvent(CameraEvent&&) = default;
                    constexpr CameraEvent& operator=(CameraEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CameraEvent& operator=(CameraEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CameraEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CameraEvent_Unwrapped : int32_t {
__BeforeDepthTexture = 0,
__AfterDepthTexture = 1,
__BeforeDepthNormalsTexture = 2,
__AfterDepthNormalsTexture = 3,
__BeforeGBuffer = 4,
__AfterGBuffer = 5,
__BeforeLighting = 6,
__AfterLighting = 7,
__BeforeFinalPass = 8,
__AfterFinalPass = 9,
__BeforeForwardOpaque = 10,
__AfterForwardOpaque = 11,
__BeforeImageEffectsOpaque = 12,
__AfterImageEffectsOpaque = 13,
__BeforeSkybox = 14,
__AfterSkybox = 15,
__BeforeForwardAlpha = 16,
__AfterForwardAlpha = 17,
__BeforeImageEffects = 18,
__AfterImageEffects = 19,
__AfterEverything = 20,
__BeforeReflections = 21,
__AfterReflections = 22,
__BeforeHaloAndLensFlares = 23,
__AfterHaloAndLensFlares = 24,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CameraEvent_Unwrapped () const noexcept {
return std::bit_cast<__CameraEvent_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BeforeDepthTexture offset 0
static UnityEngine::Rendering::CameraEvent const BeforeDepthTexture;

/// @brief Field AfterDepthTexture offset 0
static UnityEngine::Rendering::CameraEvent const AfterDepthTexture;

/// @brief Field BeforeDepthNormalsTexture offset 0
static UnityEngine::Rendering::CameraEvent const BeforeDepthNormalsTexture;

/// @brief Field AfterDepthNormalsTexture offset 0
static UnityEngine::Rendering::CameraEvent const AfterDepthNormalsTexture;

/// @brief Field BeforeGBuffer offset 0
static UnityEngine::Rendering::CameraEvent const BeforeGBuffer;

/// @brief Field AfterGBuffer offset 0
static UnityEngine::Rendering::CameraEvent const AfterGBuffer;

/// @brief Field BeforeLighting offset 0
static UnityEngine::Rendering::CameraEvent const BeforeLighting;

/// @brief Field AfterLighting offset 0
static UnityEngine::Rendering::CameraEvent const AfterLighting;

/// @brief Field BeforeFinalPass offset 0
static UnityEngine::Rendering::CameraEvent const BeforeFinalPass;

/// @brief Field AfterFinalPass offset 0
static UnityEngine::Rendering::CameraEvent const AfterFinalPass;

/// @brief Field BeforeForwardOpaque offset 0
static UnityEngine::Rendering::CameraEvent const BeforeForwardOpaque;

/// @brief Field AfterForwardOpaque offset 0
static UnityEngine::Rendering::CameraEvent const AfterForwardOpaque;

/// @brief Field BeforeImageEffectsOpaque offset 0
static UnityEngine::Rendering::CameraEvent const BeforeImageEffectsOpaque;

/// @brief Field AfterImageEffectsOpaque offset 0
static UnityEngine::Rendering::CameraEvent const AfterImageEffectsOpaque;

/// @brief Field BeforeSkybox offset 0
static UnityEngine::Rendering::CameraEvent const BeforeSkybox;

/// @brief Field AfterSkybox offset 0
static UnityEngine::Rendering::CameraEvent const AfterSkybox;

/// @brief Field BeforeForwardAlpha offset 0
static UnityEngine::Rendering::CameraEvent const BeforeForwardAlpha;

/// @brief Field AfterForwardAlpha offset 0
static UnityEngine::Rendering::CameraEvent const AfterForwardAlpha;

/// @brief Field BeforeImageEffects offset 0
static UnityEngine::Rendering::CameraEvent const BeforeImageEffects;

/// @brief Field AfterImageEffects offset 0
static UnityEngine::Rendering::CameraEvent const AfterImageEffects;

/// @brief Field AfterEverything offset 0
static UnityEngine::Rendering::CameraEvent const AfterEverything;

/// @brief Field BeforeReflections offset 0
static UnityEngine::Rendering::CameraEvent const BeforeReflections;

/// @brief Field AfterReflections offset 0
static UnityEngine::Rendering::CameraEvent const AfterReflections;

/// @brief Field BeforeHaloAndLensFlares offset 0
static UnityEngine::Rendering::CameraEvent const BeforeHaloAndLensFlares;

/// @brief Field AfterHaloAndLensFlares offset 0
static UnityEngine::Rendering::CameraEvent const AfterHaloAndLensFlares;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CameraEvent, "UnityEngine.Rendering", "CameraEvent");
