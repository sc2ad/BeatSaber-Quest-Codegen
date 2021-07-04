// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LayerMask
  struct LayerMask;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CompositionMethod
  struct OVRManager_CompositionMethod;
  // Forward declaring type: CameraDevice
  struct OVRManager_CameraDevice;
  // Forward declaring type: DepthQuality
  struct OVRManager_DepthQuality;
  // Forward declaring type: VirtualGreenScreenType
  struct OVRManager_VirtualGreenScreenType;
  // Forward declaring type: MrcActivationMode
  struct OVRManager_MrcActivationMode;
  // Forward declaring type: InstantiateMrcCameraDelegate
  class OVRManager_InstantiateMrcCameraDelegate;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: OVRMixedRealityCaptureConfiguration
  class OVRMixedRealityCaptureConfiguration {
    public:
    // Creating value type constructor for type: OVRMixedRealityCaptureConfiguration
    OVRMixedRealityCaptureConfiguration() noexcept {}
    // public System.Boolean get_enableMixedReality()
    // Offset: 0xFFFFFFFF
    bool get_enableMixedReality();
    // public System.Void set_enableMixedReality(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_enableMixedReality(bool value);
    // public UnityEngine.LayerMask get_extraHiddenLayers()
    // Offset: 0xFFFFFFFF
    UnityEngine::LayerMask get_extraHiddenLayers();
    // public System.Void set_extraHiddenLayers(UnityEngine.LayerMask value)
    // Offset: 0xFFFFFFFF
    void set_extraHiddenLayers(UnityEngine::LayerMask value);
    // public UnityEngine.LayerMask get_extraVisibleLayers()
    // Offset: 0xFFFFFFFF
    UnityEngine::LayerMask get_extraVisibleLayers();
    // public System.Void set_extraVisibleLayers(UnityEngine.LayerMask value)
    // Offset: 0xFFFFFFFF
    void set_extraVisibleLayers(UnityEngine::LayerMask value);
    // public System.Boolean get_dynamicCullingMask()
    // Offset: 0xFFFFFFFF
    bool get_dynamicCullingMask();
    // public System.Void set_dynamicCullingMask(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_dynamicCullingMask(bool value);
    // public OVRManager/CompositionMethod get_compositionMethod()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager_CompositionMethod get_compositionMethod();
    // public System.Void set_compositionMethod(OVRManager/CompositionMethod value)
    // Offset: 0xFFFFFFFF
    void set_compositionMethod(GlobalNamespace::OVRManager_CompositionMethod value);
    // public UnityEngine.Color get_externalCompositionBackdropColorRift()
    // Offset: 0xFFFFFFFF
    UnityEngine::Color get_externalCompositionBackdropColorRift();
    // public System.Void set_externalCompositionBackdropColorRift(UnityEngine.Color value)
    // Offset: 0xFFFFFFFF
    void set_externalCompositionBackdropColorRift(UnityEngine::Color value);
    // public UnityEngine.Color get_externalCompositionBackdropColorQuest()
    // Offset: 0xFFFFFFFF
    UnityEngine::Color get_externalCompositionBackdropColorQuest();
    // public System.Void set_externalCompositionBackdropColorQuest(UnityEngine.Color value)
    // Offset: 0xFFFFFFFF
    void set_externalCompositionBackdropColorQuest(UnityEngine::Color value);
    // public OVRManager/CameraDevice get_capturingCameraDevice()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager_CameraDevice get_capturingCameraDevice();
    // public System.Void set_capturingCameraDevice(OVRManager/CameraDevice value)
    // Offset: 0xFFFFFFFF
    void set_capturingCameraDevice(GlobalNamespace::OVRManager_CameraDevice value);
    // public System.Boolean get_flipCameraFrameHorizontally()
    // Offset: 0xFFFFFFFF
    bool get_flipCameraFrameHorizontally();
    // public System.Void set_flipCameraFrameHorizontally(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_flipCameraFrameHorizontally(bool value);
    // public System.Boolean get_flipCameraFrameVertically()
    // Offset: 0xFFFFFFFF
    bool get_flipCameraFrameVertically();
    // public System.Void set_flipCameraFrameVertically(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_flipCameraFrameVertically(bool value);
    // public System.Single get_handPoseStateLatency()
    // Offset: 0xFFFFFFFF
    float get_handPoseStateLatency();
    // public System.Void set_handPoseStateLatency(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_handPoseStateLatency(float value);
    // public System.Single get_sandwichCompositionRenderLatency()
    // Offset: 0xFFFFFFFF
    float get_sandwichCompositionRenderLatency();
    // public System.Void set_sandwichCompositionRenderLatency(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_sandwichCompositionRenderLatency(float value);
    // public System.Int32 get_sandwichCompositionBufferedFrames()
    // Offset: 0xFFFFFFFF
    int get_sandwichCompositionBufferedFrames();
    // public System.Void set_sandwichCompositionBufferedFrames(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_sandwichCompositionBufferedFrames(int value);
    // public UnityEngine.Color get_chromaKeyColor()
    // Offset: 0xFFFFFFFF
    UnityEngine::Color get_chromaKeyColor();
    // public System.Void set_chromaKeyColor(UnityEngine.Color value)
    // Offset: 0xFFFFFFFF
    void set_chromaKeyColor(UnityEngine::Color value);
    // public System.Single get_chromaKeySimilarity()
    // Offset: 0xFFFFFFFF
    float get_chromaKeySimilarity();
    // public System.Void set_chromaKeySimilarity(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_chromaKeySimilarity(float value);
    // public System.Single get_chromaKeySmoothRange()
    // Offset: 0xFFFFFFFF
    float get_chromaKeySmoothRange();
    // public System.Void set_chromaKeySmoothRange(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_chromaKeySmoothRange(float value);
    // public System.Single get_chromaKeySpillRange()
    // Offset: 0xFFFFFFFF
    float get_chromaKeySpillRange();
    // public System.Void set_chromaKeySpillRange(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_chromaKeySpillRange(float value);
    // public System.Boolean get_useDynamicLighting()
    // Offset: 0xFFFFFFFF
    bool get_useDynamicLighting();
    // public System.Void set_useDynamicLighting(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_useDynamicLighting(bool value);
    // public OVRManager/DepthQuality get_depthQuality()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager_DepthQuality get_depthQuality();
    // public System.Void set_depthQuality(OVRManager/DepthQuality value)
    // Offset: 0xFFFFFFFF
    void set_depthQuality(GlobalNamespace::OVRManager_DepthQuality value);
    // public System.Single get_dynamicLightingSmoothFactor()
    // Offset: 0xFFFFFFFF
    float get_dynamicLightingSmoothFactor();
    // public System.Void set_dynamicLightingSmoothFactor(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_dynamicLightingSmoothFactor(float value);
    // public System.Single get_dynamicLightingDepthVariationClampingValue()
    // Offset: 0xFFFFFFFF
    float get_dynamicLightingDepthVariationClampingValue();
    // public System.Void set_dynamicLightingDepthVariationClampingValue(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_dynamicLightingDepthVariationClampingValue(float value);
    // public OVRManager/VirtualGreenScreenType get_virtualGreenScreenType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager_VirtualGreenScreenType get_virtualGreenScreenType();
    // public System.Void set_virtualGreenScreenType(OVRManager/VirtualGreenScreenType value)
    // Offset: 0xFFFFFFFF
    void set_virtualGreenScreenType(GlobalNamespace::OVRManager_VirtualGreenScreenType value);
    // public System.Single get_virtualGreenScreenTopY()
    // Offset: 0xFFFFFFFF
    float get_virtualGreenScreenTopY();
    // public System.Void set_virtualGreenScreenTopY(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_virtualGreenScreenTopY(float value);
    // public System.Single get_virtualGreenScreenBottomY()
    // Offset: 0xFFFFFFFF
    float get_virtualGreenScreenBottomY();
    // public System.Void set_virtualGreenScreenBottomY(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_virtualGreenScreenBottomY(float value);
    // public System.Boolean get_virtualGreenScreenApplyDepthCulling()
    // Offset: 0xFFFFFFFF
    bool get_virtualGreenScreenApplyDepthCulling();
    // public System.Void set_virtualGreenScreenApplyDepthCulling(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_virtualGreenScreenApplyDepthCulling(bool value);
    // public System.Single get_virtualGreenScreenDepthTolerance()
    // Offset: 0xFFFFFFFF
    float get_virtualGreenScreenDepthTolerance();
    // public System.Void set_virtualGreenScreenDepthTolerance(System.Single value)
    // Offset: 0xFFFFFFFF
    void set_virtualGreenScreenDepthTolerance(float value);
    // public OVRManager/MrcActivationMode get_mrcActivationMode()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager_MrcActivationMode get_mrcActivationMode();
    // public System.Void set_mrcActivationMode(OVRManager/MrcActivationMode value)
    // Offset: 0xFFFFFFFF
    void set_mrcActivationMode(GlobalNamespace::OVRManager_MrcActivationMode value);
    // public OVRManager/InstantiateMrcCameraDelegate get_instantiateMixedRealityCameraGameObject()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* get_instantiateMixedRealityCameraGameObject();
    // public System.Void set_instantiateMixedRealityCameraGameObject(OVRManager/InstantiateMrcCameraDelegate value)
    // Offset: 0xFFFFFFFF
    void set_instantiateMixedRealityCameraGameObject(GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value);
  }; // OVRMixedRealityCaptureConfiguration
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureConfiguration*, "", "OVRMixedRealityCaptureConfiguration");
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_enableMixedReality
// Il2CppName: get_enableMixedReality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_enableMixedReality
// Il2CppName: set_enableMixedReality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_extraHiddenLayers
// Il2CppName: get_extraHiddenLayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_extraHiddenLayers
// Il2CppName: set_extraHiddenLayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_extraVisibleLayers
// Il2CppName: get_extraVisibleLayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_extraVisibleLayers
// Il2CppName: set_extraVisibleLayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_dynamicCullingMask
// Il2CppName: get_dynamicCullingMask
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_dynamicCullingMask
// Il2CppName: set_dynamicCullingMask
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_compositionMethod
// Il2CppName: get_compositionMethod
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_compositionMethod
// Il2CppName: set_compositionMethod
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_externalCompositionBackdropColorRift
// Il2CppName: get_externalCompositionBackdropColorRift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_externalCompositionBackdropColorRift
// Il2CppName: set_externalCompositionBackdropColorRift
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_externalCompositionBackdropColorQuest
// Il2CppName: get_externalCompositionBackdropColorQuest
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_externalCompositionBackdropColorQuest
// Il2CppName: set_externalCompositionBackdropColorQuest
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_capturingCameraDevice
// Il2CppName: get_capturingCameraDevice
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_capturingCameraDevice
// Il2CppName: set_capturingCameraDevice
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_flipCameraFrameHorizontally
// Il2CppName: get_flipCameraFrameHorizontally
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_flipCameraFrameHorizontally
// Il2CppName: set_flipCameraFrameHorizontally
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_flipCameraFrameVertically
// Il2CppName: get_flipCameraFrameVertically
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_flipCameraFrameVertically
// Il2CppName: set_flipCameraFrameVertically
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_handPoseStateLatency
// Il2CppName: get_handPoseStateLatency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_handPoseStateLatency
// Il2CppName: set_handPoseStateLatency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_sandwichCompositionRenderLatency
// Il2CppName: get_sandwichCompositionRenderLatency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_sandwichCompositionRenderLatency
// Il2CppName: set_sandwichCompositionRenderLatency
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_sandwichCompositionBufferedFrames
// Il2CppName: get_sandwichCompositionBufferedFrames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_sandwichCompositionBufferedFrames
// Il2CppName: set_sandwichCompositionBufferedFrames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_chromaKeyColor
// Il2CppName: get_chromaKeyColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_chromaKeyColor
// Il2CppName: set_chromaKeyColor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_chromaKeySimilarity
// Il2CppName: get_chromaKeySimilarity
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_chromaKeySimilarity
// Il2CppName: set_chromaKeySimilarity
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_chromaKeySmoothRange
// Il2CppName: get_chromaKeySmoothRange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_chromaKeySmoothRange
// Il2CppName: set_chromaKeySmoothRange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_chromaKeySpillRange
// Il2CppName: get_chromaKeySpillRange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_chromaKeySpillRange
// Il2CppName: set_chromaKeySpillRange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_useDynamicLighting
// Il2CppName: get_useDynamicLighting
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_useDynamicLighting
// Il2CppName: set_useDynamicLighting
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_depthQuality
// Il2CppName: get_depthQuality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_depthQuality
// Il2CppName: set_depthQuality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_dynamicLightingSmoothFactor
// Il2CppName: get_dynamicLightingSmoothFactor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_dynamicLightingSmoothFactor
// Il2CppName: set_dynamicLightingSmoothFactor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_dynamicLightingDepthVariationClampingValue
// Il2CppName: get_dynamicLightingDepthVariationClampingValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_dynamicLightingDepthVariationClampingValue
// Il2CppName: set_dynamicLightingDepthVariationClampingValue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_virtualGreenScreenType
// Il2CppName: get_virtualGreenScreenType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_virtualGreenScreenType
// Il2CppName: set_virtualGreenScreenType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_virtualGreenScreenTopY
// Il2CppName: get_virtualGreenScreenTopY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_virtualGreenScreenTopY
// Il2CppName: set_virtualGreenScreenTopY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_virtualGreenScreenBottomY
// Il2CppName: get_virtualGreenScreenBottomY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_virtualGreenScreenBottomY
// Il2CppName: set_virtualGreenScreenBottomY
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_virtualGreenScreenApplyDepthCulling
// Il2CppName: get_virtualGreenScreenApplyDepthCulling
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_virtualGreenScreenApplyDepthCulling
// Il2CppName: set_virtualGreenScreenApplyDepthCulling
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_virtualGreenScreenDepthTolerance
// Il2CppName: get_virtualGreenScreenDepthTolerance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_virtualGreenScreenDepthTolerance
// Il2CppName: set_virtualGreenScreenDepthTolerance
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_mrcActivationMode
// Il2CppName: get_mrcActivationMode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_mrcActivationMode
// Il2CppName: set_mrcActivationMode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::get_instantiateMixedRealityCameraGameObject
// Il2CppName: get_instantiateMixedRealityCameraGameObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedRealityCaptureConfiguration::set_instantiateMixedRealityCameraGameObject
// Il2CppName: set_instantiateMixedRealityCameraGameObject
// Cannot perform method pointer template specialization from operators!