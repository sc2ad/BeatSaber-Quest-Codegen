#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__VirtualGreenScreenType;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CameraDevice;
}
namespace UnityEngine {
struct LayerMask;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__DepthQuality;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__MrcActivationMode;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CompositionMethod;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
// Type: ::OVRMixedRealityCaptureConfiguration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8929))
// CS Name: OVRMixedRealityCaptureConfiguration
class CORDL_TYPE OVRMixedRealityCaptureConfiguration : public ::cordl_internals::InterfaceW {
public:
// Declarations
~OVRMixedRealityCaptureConfiguration() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMixedRealityCaptureConfiguration(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_enableMixedReality, put=set_enableMixedReality))  enableMixedReality;

 UnityEngine::LayerMask __declspec(property(get=get_extraHiddenLayers, put=set_extraHiddenLayers))  extraHiddenLayers;

 UnityEngine::LayerMask __declspec(property(get=get_extraVisibleLayers, put=set_extraVisibleLayers))  extraVisibleLayers;

 bool __declspec(property(get=get_dynamicCullingMask, put=set_dynamicCullingMask))  dynamicCullingMask;

 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod __declspec(property(get=get_compositionMethod, put=set_compositionMethod))  compositionMethod;

 UnityEngine::Color __declspec(property(get=get_externalCompositionBackdropColorRift, put=set_externalCompositionBackdropColorRift))  externalCompositionBackdropColorRift;

 UnityEngine::Color __declspec(property(get=get_externalCompositionBackdropColorQuest, put=set_externalCompositionBackdropColorQuest))  externalCompositionBackdropColorQuest;

 GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice __declspec(property(get=get_capturingCameraDevice, put=set_capturingCameraDevice))  capturingCameraDevice;

 bool __declspec(property(get=get_flipCameraFrameHorizontally, put=set_flipCameraFrameHorizontally))  flipCameraFrameHorizontally;

 bool __declspec(property(get=get_flipCameraFrameVertically, put=set_flipCameraFrameVertically))  flipCameraFrameVertically;

 float_t __declspec(property(get=get_handPoseStateLatency, put=set_handPoseStateLatency))  handPoseStateLatency;

 float_t __declspec(property(get=get_sandwichCompositionRenderLatency, put=set_sandwichCompositionRenderLatency))  sandwichCompositionRenderLatency;

 int32_t __declspec(property(get=get_sandwichCompositionBufferedFrames, put=set_sandwichCompositionBufferedFrames))  sandwichCompositionBufferedFrames;

 UnityEngine::Color __declspec(property(get=get_chromaKeyColor, put=set_chromaKeyColor))  chromaKeyColor;

 float_t __declspec(property(get=get_chromaKeySimilarity, put=set_chromaKeySimilarity))  chromaKeySimilarity;

 float_t __declspec(property(get=get_chromaKeySmoothRange, put=set_chromaKeySmoothRange))  chromaKeySmoothRange;

 float_t __declspec(property(get=get_chromaKeySpillRange, put=set_chromaKeySpillRange))  chromaKeySpillRange;

 bool __declspec(property(get=get_useDynamicLighting, put=set_useDynamicLighting))  useDynamicLighting;

 GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality __declspec(property(get=get_depthQuality, put=set_depthQuality))  depthQuality;

 float_t __declspec(property(get=get_dynamicLightingSmoothFactor, put=set_dynamicLightingSmoothFactor))  dynamicLightingSmoothFactor;

 float_t __declspec(property(get=get_dynamicLightingDepthVariationClampingValue, put=set_dynamicLightingDepthVariationClampingValue))  dynamicLightingDepthVariationClampingValue;

 GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType __declspec(property(get=get_virtualGreenScreenType, put=set_virtualGreenScreenType))  virtualGreenScreenType;

 float_t __declspec(property(get=get_virtualGreenScreenTopY, put=set_virtualGreenScreenTopY))  virtualGreenScreenTopY;

 float_t __declspec(property(get=get_virtualGreenScreenBottomY, put=set_virtualGreenScreenBottomY))  virtualGreenScreenBottomY;

 bool __declspec(property(get=get_virtualGreenScreenApplyDepthCulling, put=set_virtualGreenScreenApplyDepthCulling))  virtualGreenScreenApplyDepthCulling;

 float_t __declspec(property(get=get_virtualGreenScreenDepthTolerance, put=set_virtualGreenScreenDepthTolerance))  virtualGreenScreenDepthTolerance;

 GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode __declspec(property(get=get_mrcActivationMode, put=set_mrcActivationMode))  mrcActivationMode;

 GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __declspec(property(get=get_instantiateMixedRealityCameraGameObject, put=set_instantiateMixedRealityCameraGameObject))  instantiateMixedRealityCameraGameObject;


// Methods

/// @brief Method get_enableMixedReality addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_enableMixedReality() ;

/// @brief Method set_enableMixedReality addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_enableMixedReality(bool value) ;

/// @brief Method get_extraHiddenLayers addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::LayerMask get_extraHiddenLayers() ;

/// @brief Method set_extraHiddenLayers addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_extraHiddenLayers(UnityEngine::LayerMask value) ;

/// @brief Method get_extraVisibleLayers addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::LayerMask get_extraVisibleLayers() ;

/// @brief Method set_extraVisibleLayers addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_extraVisibleLayers(UnityEngine::LayerMask value) ;

/// @brief Method get_dynamicCullingMask addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_dynamicCullingMask() ;

/// @brief Method set_dynamicCullingMask addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_dynamicCullingMask(bool value) ;

/// @brief Method get_compositionMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod get_compositionMethod() ;

/// @brief Method set_compositionMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_compositionMethod(GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod value) ;

/// @brief Method get_externalCompositionBackdropColorRift addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Color get_externalCompositionBackdropColorRift() ;

/// @brief Method set_externalCompositionBackdropColorRift addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_externalCompositionBackdropColorRift(UnityEngine::Color value) ;

/// @brief Method get_externalCompositionBackdropColorQuest addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Color get_externalCompositionBackdropColorQuest() ;

/// @brief Method set_externalCompositionBackdropColorQuest addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_externalCompositionBackdropColorQuest(UnityEngine::Color value) ;

/// @brief Method get_capturingCameraDevice addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice get_capturingCameraDevice() ;

/// @brief Method set_capturingCameraDevice addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_capturingCameraDevice(GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice value) ;

/// @brief Method get_flipCameraFrameHorizontally addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_flipCameraFrameHorizontally() ;

/// @brief Method set_flipCameraFrameHorizontally addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_flipCameraFrameHorizontally(bool value) ;

/// @brief Method get_flipCameraFrameVertically addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_flipCameraFrameVertically() ;

/// @brief Method set_flipCameraFrameVertically addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_flipCameraFrameVertically(bool value) ;

/// @brief Method get_handPoseStateLatency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_handPoseStateLatency() ;

/// @brief Method set_handPoseStateLatency addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_handPoseStateLatency(float_t value) ;

/// @brief Method get_sandwichCompositionRenderLatency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_sandwichCompositionRenderLatency() ;

/// @brief Method set_sandwichCompositionRenderLatency addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_sandwichCompositionRenderLatency(float_t value) ;

/// @brief Method get_sandwichCompositionBufferedFrames addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_sandwichCompositionBufferedFrames() ;

/// @brief Method set_sandwichCompositionBufferedFrames addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_sandwichCompositionBufferedFrames(int32_t value) ;

/// @brief Method get_chromaKeyColor addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Color get_chromaKeyColor() ;

/// @brief Method set_chromaKeyColor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_chromaKeyColor(UnityEngine::Color value) ;

/// @brief Method get_chromaKeySimilarity addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_chromaKeySimilarity() ;

/// @brief Method set_chromaKeySimilarity addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_chromaKeySimilarity(float_t value) ;

/// @brief Method get_chromaKeySmoothRange addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_chromaKeySmoothRange() ;

/// @brief Method set_chromaKeySmoothRange addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_chromaKeySmoothRange(float_t value) ;

/// @brief Method get_chromaKeySpillRange addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_chromaKeySpillRange() ;

/// @brief Method set_chromaKeySpillRange addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_chromaKeySpillRange(float_t value) ;

/// @brief Method get_useDynamicLighting addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_useDynamicLighting() ;

/// @brief Method set_useDynamicLighting addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_useDynamicLighting(bool value) ;

/// @brief Method get_depthQuality addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality get_depthQuality() ;

/// @brief Method set_depthQuality addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_depthQuality(GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality value) ;

/// @brief Method get_dynamicLightingSmoothFactor addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_dynamicLightingSmoothFactor() ;

/// @brief Method set_dynamicLightingSmoothFactor addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_dynamicLightingSmoothFactor(float_t value) ;

/// @brief Method get_dynamicLightingDepthVariationClampingValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_dynamicLightingDepthVariationClampingValue() ;

/// @brief Method set_dynamicLightingDepthVariationClampingValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_dynamicLightingDepthVariationClampingValue(float_t value) ;

/// @brief Method get_virtualGreenScreenType addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType get_virtualGreenScreenType() ;

/// @brief Method set_virtualGreenScreenType addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_virtualGreenScreenType(GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType value) ;

/// @brief Method get_virtualGreenScreenTopY addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_virtualGreenScreenTopY() ;

/// @brief Method set_virtualGreenScreenTopY addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_virtualGreenScreenTopY(float_t value) ;

/// @brief Method get_virtualGreenScreenBottomY addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_virtualGreenScreenBottomY() ;

/// @brief Method set_virtualGreenScreenBottomY addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_virtualGreenScreenBottomY(float_t value) ;

/// @brief Method get_virtualGreenScreenApplyDepthCulling addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_virtualGreenScreenApplyDepthCulling() ;

/// @brief Method set_virtualGreenScreenApplyDepthCulling addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_virtualGreenScreenApplyDepthCulling(bool value) ;

/// @brief Method get_virtualGreenScreenDepthTolerance addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_virtualGreenScreenDepthTolerance() ;

/// @brief Method set_virtualGreenScreenDepthTolerance addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_virtualGreenScreenDepthTolerance(float_t value) ;

/// @brief Method get_mrcActivationMode addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode get_mrcActivationMode() ;

/// @brief Method set_mrcActivationMode addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_mrcActivationMode(GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode value) ;

/// @brief Method get_instantiateMixedRealityCameraGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate get_instantiateMixedRealityCameraGameObject() ;

/// @brief Method set_instantiateMixedRealityCameraGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_instantiateMixedRealityCameraGameObject(GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRMixedRealityCaptureConfiguration);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureConfiguration, "", "OVRMixedRealityCaptureConfiguration");
