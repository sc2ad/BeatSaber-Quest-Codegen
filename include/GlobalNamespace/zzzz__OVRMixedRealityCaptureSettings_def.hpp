#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRManager__DepthQuality;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRManager__VirtualGreenScreenType;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRManager__CameraDevice;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LayerMask;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRManager__MrcActivationMode;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedRealityCaptureSettings;
}
// Type: ::OVRMixedRealityCaptureSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8931))
// CS Name: OVRMixedRealityCaptureSettings
class CORDL_TYPE OVRMixedRealityCaptureSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::OVRMixedRealityCaptureConfiguration
constexpr operator  ::GlobalNamespace::OVRMixedRealityCaptureConfiguration() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~OVRMixedRealityCaptureSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureSettings", modifiers: " const&", def_value: None }]
constexpr OVRMixedRealityCaptureSettings(OVRMixedRealityCaptureSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureSettings", modifiers: "&&", def_value: None }]
constexpr OVRMixedRealityCaptureSettings(OVRMixedRealityCaptureSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMixedRealityCaptureSettings(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr OVRMixedRealityCaptureSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMixedRealityCaptureSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMixedRealityCaptureSettings& operator=(OVRMixedRealityCaptureSettings&& o) noexcept = default;
  constexpr OVRMixedRealityCaptureSettings& operator=(OVRMixedRealityCaptureSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_enableMixedReality, put=__set_enableMixedReality))  enableMixedReality;

constexpr void __set_enableMixedReality(bool value) ;

constexpr bool __get_enableMixedReality() const;

 ::UnityEngine::LayerMask __declspec(property(get=__get_extraHiddenLayers, put=__set_extraHiddenLayers))  extraHiddenLayers;

constexpr void __set_extraHiddenLayers(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get_extraHiddenLayers() const;

 ::UnityEngine::LayerMask __declspec(property(get=__get_extraVisibleLayers, put=__set_extraVisibleLayers))  extraVisibleLayers;

constexpr void __set_extraVisibleLayers(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get_extraVisibleLayers() const;

 bool __declspec(property(get=__get_dynamicCullingMask, put=__set_dynamicCullingMask))  dynamicCullingMask;

constexpr void __set_dynamicCullingMask(bool value) ;

constexpr bool __get_dynamicCullingMask() const;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod __declspec(property(get=__get_compositionMethod, put=__set_compositionMethod))  compositionMethod;

constexpr void __set_compositionMethod(::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod __get_compositionMethod() const;

 ::UnityEngine::Color __declspec(property(get=__get_externalCompositionBackdropColorRift, put=__set_externalCompositionBackdropColorRift))  externalCompositionBackdropColorRift;

constexpr void __set_externalCompositionBackdropColorRift(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_externalCompositionBackdropColorRift() const;

 ::UnityEngine::Color __declspec(property(get=__get_externalCompositionBackdropColorQuest, put=__set_externalCompositionBackdropColorQuest))  externalCompositionBackdropColorQuest;

constexpr void __set_externalCompositionBackdropColorQuest(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_externalCompositionBackdropColorQuest() const;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice __declspec(property(get=__get_capturingCameraDevice, put=__set_capturingCameraDevice))  capturingCameraDevice;

constexpr void __set_capturingCameraDevice(::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice __get_capturingCameraDevice() const;

 bool __declspec(property(get=__get_flipCameraFrameHorizontally, put=__set_flipCameraFrameHorizontally))  flipCameraFrameHorizontally;

constexpr void __set_flipCameraFrameHorizontally(bool value) ;

constexpr bool __get_flipCameraFrameHorizontally() const;

 bool __declspec(property(get=__get_flipCameraFrameVertically, put=__set_flipCameraFrameVertically))  flipCameraFrameVertically;

constexpr void __set_flipCameraFrameVertically(bool value) ;

constexpr bool __get_flipCameraFrameVertically() const;

 float_t __declspec(property(get=__get_handPoseStateLatency, put=__set_handPoseStateLatency))  handPoseStateLatency;

constexpr void __set_handPoseStateLatency(float_t value) ;

constexpr float_t __get_handPoseStateLatency() const;

 float_t __declspec(property(get=__get_sandwichCompositionRenderLatency, put=__set_sandwichCompositionRenderLatency))  sandwichCompositionRenderLatency;

constexpr void __set_sandwichCompositionRenderLatency(float_t value) ;

constexpr float_t __get_sandwichCompositionRenderLatency() const;

 int32_t __declspec(property(get=__get_sandwichCompositionBufferedFrames, put=__set_sandwichCompositionBufferedFrames))  sandwichCompositionBufferedFrames;

constexpr void __set_sandwichCompositionBufferedFrames(int32_t value) ;

constexpr int32_t __get_sandwichCompositionBufferedFrames() const;

 ::UnityEngine::Color __declspec(property(get=__get_chromaKeyColor, put=__set_chromaKeyColor))  chromaKeyColor;

constexpr void __set_chromaKeyColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_chromaKeyColor() const;

 float_t __declspec(property(get=__get_chromaKeySimilarity, put=__set_chromaKeySimilarity))  chromaKeySimilarity;

constexpr void __set_chromaKeySimilarity(float_t value) ;

constexpr float_t __get_chromaKeySimilarity() const;

 float_t __declspec(property(get=__get_chromaKeySmoothRange, put=__set_chromaKeySmoothRange))  chromaKeySmoothRange;

constexpr void __set_chromaKeySmoothRange(float_t value) ;

constexpr float_t __get_chromaKeySmoothRange() const;

 float_t __declspec(property(get=__get_chromaKeySpillRange, put=__set_chromaKeySpillRange))  chromaKeySpillRange;

constexpr void __set_chromaKeySpillRange(float_t value) ;

constexpr float_t __get_chromaKeySpillRange() const;

 bool __declspec(property(get=__get_useDynamicLighting, put=__set_useDynamicLighting))  useDynamicLighting;

constexpr void __set_useDynamicLighting(bool value) ;

constexpr bool __get_useDynamicLighting() const;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality __declspec(property(get=__get_depthQuality, put=__set_depthQuality))  depthQuality;

constexpr void __set_depthQuality(::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality __get_depthQuality() const;

 float_t __declspec(property(get=__get_dynamicLightingSmoothFactor, put=__set_dynamicLightingSmoothFactor))  dynamicLightingSmoothFactor;

constexpr void __set_dynamicLightingSmoothFactor(float_t value) ;

constexpr float_t __get_dynamicLightingSmoothFactor() const;

 float_t __declspec(property(get=__get_dynamicLightingDepthVariationClampingValue, put=__set_dynamicLightingDepthVariationClampingValue))  dynamicLightingDepthVariationClampingValue;

constexpr void __set_dynamicLightingDepthVariationClampingValue(float_t value) ;

constexpr float_t __get_dynamicLightingDepthVariationClampingValue() const;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType __declspec(property(get=__get_virtualGreenScreenType, put=__set_virtualGreenScreenType))  virtualGreenScreenType;

constexpr void __set_virtualGreenScreenType(::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType __get_virtualGreenScreenType() const;

 float_t __declspec(property(get=__get_virtualGreenScreenTopY, put=__set_virtualGreenScreenTopY))  virtualGreenScreenTopY;

constexpr void __set_virtualGreenScreenTopY(float_t value) ;

constexpr float_t __get_virtualGreenScreenTopY() const;

 float_t __declspec(property(get=__get_virtualGreenScreenBottomY, put=__set_virtualGreenScreenBottomY))  virtualGreenScreenBottomY;

constexpr void __set_virtualGreenScreenBottomY(float_t value) ;

constexpr float_t __get_virtualGreenScreenBottomY() const;

 bool __declspec(property(get=__get_virtualGreenScreenApplyDepthCulling, put=__set_virtualGreenScreenApplyDepthCulling))  virtualGreenScreenApplyDepthCulling;

constexpr void __set_virtualGreenScreenApplyDepthCulling(bool value) ;

constexpr bool __get_virtualGreenScreenApplyDepthCulling() const;

 float_t __declspec(property(get=__get_virtualGreenScreenDepthTolerance, put=__set_virtualGreenScreenDepthTolerance))  virtualGreenScreenDepthTolerance;

constexpr void __set_virtualGreenScreenDepthTolerance(float_t value) ;

constexpr float_t __get_virtualGreenScreenDepthTolerance() const;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode __declspec(property(get=__get_mrcActivationMode, put=__set_mrcActivationMode))  mrcActivationMode;

constexpr void __set_mrcActivationMode(::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode __get_mrcActivationMode() const;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __declspec(property(get=__get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField, put=__set__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField))  _OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField;

constexpr void __set__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField() const;


// Properties

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_enableMixedReality, put=OVRMixedRealityCaptureConfiguration_set_enableMixedReality))  OVRMixedRealityCaptureConfiguration_enableMixedReality;

 ::UnityEngine::LayerMask __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers, put=OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers))  OVRMixedRealityCaptureConfiguration_extraHiddenLayers;

 ::UnityEngine::LayerMask __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers, put=OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers))  OVRMixedRealityCaptureConfiguration_extraVisibleLayers;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask, put=OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask))  OVRMixedRealityCaptureConfiguration_dynamicCullingMask;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_compositionMethod, put=OVRMixedRealityCaptureConfiguration_set_compositionMethod))  OVRMixedRealityCaptureConfiguration_compositionMethod;

 ::UnityEngine::Color __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift, put=OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift))  OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorRift;

 ::UnityEngine::Color __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest, put=OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest))  OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorQuest;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice, put=OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice))  OVRMixedRealityCaptureConfiguration_capturingCameraDevice;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally, put=OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally))  OVRMixedRealityCaptureConfiguration_flipCameraFrameHorizontally;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically, put=OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically))  OVRMixedRealityCaptureConfiguration_flipCameraFrameVertically;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency, put=OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency))  OVRMixedRealityCaptureConfiguration_handPoseStateLatency;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency, put=OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency))  OVRMixedRealityCaptureConfiguration_sandwichCompositionRenderLatency;

 int32_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames, put=OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames))  OVRMixedRealityCaptureConfiguration_sandwichCompositionBufferedFrames;

 ::UnityEngine::Color __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeyColor, put=OVRMixedRealityCaptureConfiguration_set_chromaKeyColor))  OVRMixedRealityCaptureConfiguration_chromaKeyColor;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity, put=OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity))  OVRMixedRealityCaptureConfiguration_chromaKeySimilarity;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange, put=OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange))  OVRMixedRealityCaptureConfiguration_chromaKeySmoothRange;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange, put=OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange))  OVRMixedRealityCaptureConfiguration_chromaKeySpillRange;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_useDynamicLighting, put=OVRMixedRealityCaptureConfiguration_set_useDynamicLighting))  OVRMixedRealityCaptureConfiguration_useDynamicLighting;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_depthQuality, put=OVRMixedRealityCaptureConfiguration_set_depthQuality))  OVRMixedRealityCaptureConfiguration_depthQuality;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor, put=OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor))  OVRMixedRealityCaptureConfiguration_dynamicLightingSmoothFactor;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue, put=OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue))  OVRMixedRealityCaptureConfiguration_dynamicLightingDepthVariationClampingValue;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenType;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenTopY;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenBottomY;

 bool __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenApplyDepthCulling;

 float_t __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance, put=OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance))  OVRMixedRealityCaptureConfiguration_virtualGreenScreenDepthTolerance;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_mrcActivationMode, put=OVRMixedRealityCaptureConfiguration_set_mrcActivationMode))  OVRMixedRealityCaptureConfiguration_mrcActivationMode;

 ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __declspec(property(get=OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject, put=OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject))  OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject;


// Methods

/// @brief Method OVRMixedRealityCaptureConfiguration.get_enableMixedReality addr 0x2627db4 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_enableMixedReality() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_enableMixedReality addr 0x2627dbc size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers addr 0x2627dc8 size 0x8 virtual true final true
 ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers addr 0x2627dd0 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers addr 0x2627dd8 size 0x8 virtual true final true
 ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers addr 0x2627de0 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask addr 0x2627de8 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask addr 0x2627df0 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_compositionMethod addr 0x2627dfc size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_get_compositionMethod() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_compositionMethod addr 0x2627e04 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::____GlobalNamespace__OVRManager__CompositionMethod value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift addr 0x2627e0c size 0xc virtual true final true
 ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift addr 0x2627e18 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest addr 0x2627e24 size 0xc virtual true final true
 ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest addr 0x2627e30 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice addr 0x2627e3c size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice addr 0x2627e44 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::____GlobalNamespace__OVRManager__CameraDevice value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally addr 0x2627e4c size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally addr 0x2627e54 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically addr 0x2627e60 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically addr 0x2627e68 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency addr 0x2627e74 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency addr 0x2627e7c size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency addr 0x2627e84 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency addr 0x2627e8c size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames addr 0x2627e94 size 0x8 virtual true final true
 int32_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames addr 0x2627e9c size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeyColor addr 0x2627ea4 size 0xc virtual true final true
 ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_chromaKeyColor() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeyColor addr 0x2627eb0 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity addr 0x2627ebc size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity addr 0x2627ec4 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange addr 0x2627ecc size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange addr 0x2627ed4 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange addr 0x2627edc size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange addr 0x2627ee4 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_useDynamicLighting addr 0x2627eec size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_useDynamicLighting() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_useDynamicLighting addr 0x2627ef4 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_depthQuality addr 0x2627f00 size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_get_depthQuality() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_depthQuality addr 0x2627f08 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::____GlobalNamespace__OVRManager__DepthQuality value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor addr 0x2627f10 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor addr 0x2627f18 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue addr 0x2627f20 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue addr 0x2627f28 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType addr 0x2627f30 size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType addr 0x2627f38 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::____GlobalNamespace__OVRManager__VirtualGreenScreenType value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY addr 0x2627f40 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY addr 0x2627f48 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY addr 0x2627f50 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY addr 0x2627f58 size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling addr 0x2627f60 size 0x8 virtual true final true
 bool OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling addr 0x2627f68 size 0xc virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance addr 0x2627f74 size 0x8 virtual true final true
 float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance addr 0x2627f7c size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_mrcActivationMode addr 0x2627f84 size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_get_mrcActivationMode() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_mrcActivationMode addr 0x2627f8c size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::____GlobalNamespace__OVRManager__MrcActivationMode value) ;

/// @brief Method OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject addr 0x2627f94 size 0x8 virtual true final true
 ::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject() ;

/// @brief Method OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject addr 0x2627f9c size 0x8 virtual true final true
 void OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::____GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value) ;

// Ctor Parameters []
explicit OVRMixedRealityCaptureSettings() ;

/// @brief Method .ctor addr 0x2627fa4 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureSettings, "", "OVRMixedRealityCaptureSettings");
