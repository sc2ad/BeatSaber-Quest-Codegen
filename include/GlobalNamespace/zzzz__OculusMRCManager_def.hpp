#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__VirtualGreenScreenType;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__DepthQuality;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__MrcActivationMode;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__MrcCameraType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CameraDevice;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusMRCManager;
}
// Type: ::OculusMRCManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13920))
// CS Name: OculusMRCManager
class CORDL_TYPE OculusMRCManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::OVRMixedRealityCaptureConfiguration
constexpr operator  GlobalNamespace::OVRMixedRealityCaptureConfiguration() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~OculusMRCManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusMRCManager", modifiers: " const&", def_value: None }]
constexpr OculusMRCManager(OculusMRCManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusMRCManager", modifiers: "&&", def_value: None }]
constexpr OculusMRCManager(OculusMRCManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusMRCManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OculusMRCManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusMRCManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusMRCManager& operator=(OculusMRCManager&& o) noexcept = default;
  constexpr OculusMRCManager& operator=(OculusMRCManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> __declspec(property(get=__get__instantiateMixedRealityBackgroundCameraGameObject, put=__set__instantiateMixedRealityBackgroundCameraGameObject))  _instantiateMixedRealityBackgroundCameraGameObject;

constexpr void __set__instantiateMixedRealityBackgroundCameraGameObject(System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> value) ;

constexpr System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> __get__instantiateMixedRealityBackgroundCameraGameObject() const;

 System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> __declspec(property(get=__get__instantiateMixedRealityForegroundCameraGameObject, put=__set__instantiateMixedRealityForegroundCameraGameObject))  _instantiateMixedRealityForegroundCameraGameObject;

constexpr void __set__instantiateMixedRealityForegroundCameraGameObject(System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> value) ;

constexpr System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> __get__instantiateMixedRealityForegroundCameraGameObject() const;

 bool __declspec(property(get=__get__enableMixedReality_k__BackingField, put=__set__enableMixedReality_k__BackingField))  _enableMixedReality_k__BackingField;

constexpr void __set__enableMixedReality_k__BackingField(bool value) ;

constexpr bool __get__enableMixedReality_k__BackingField() const;

 UnityEngine::LayerMask __declspec(property(get=__get__extraHiddenLayers_k__BackingField, put=__set__extraHiddenLayers_k__BackingField))  _extraHiddenLayers_k__BackingField;

constexpr void __set__extraHiddenLayers_k__BackingField(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get__extraHiddenLayers_k__BackingField() const;

 UnityEngine::LayerMask __declspec(property(get=__get__extraVisibleLayers_k__BackingField, put=__set__extraVisibleLayers_k__BackingField))  _extraVisibleLayers_k__BackingField;

constexpr void __set__extraVisibleLayers_k__BackingField(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get__extraVisibleLayers_k__BackingField() const;

 bool __declspec(property(get=__get__dynamicCullingMask_k__BackingField, put=__set__dynamicCullingMask_k__BackingField))  _dynamicCullingMask_k__BackingField;

constexpr void __set__dynamicCullingMask_k__BackingField(bool value) ;

constexpr bool __get__dynamicCullingMask_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod __declspec(property(get=__get__compositionMethod_k__BackingField, put=__set__compositionMethod_k__BackingField))  _compositionMethod_k__BackingField;

constexpr void __set__compositionMethod_k__BackingField(GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod __get__compositionMethod_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__externalCompositionBackdropColorRift_k__BackingField, put=__set__externalCompositionBackdropColorRift_k__BackingField))  _externalCompositionBackdropColorRift_k__BackingField;

constexpr void __set__externalCompositionBackdropColorRift_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__externalCompositionBackdropColorRift_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__externalCompositionBackdropColorQuest_k__BackingField, put=__set__externalCompositionBackdropColorQuest_k__BackingField))  _externalCompositionBackdropColorQuest_k__BackingField;

constexpr void __set__externalCompositionBackdropColorQuest_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__externalCompositionBackdropColorQuest_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice __declspec(property(get=__get__capturingCameraDevice_k__BackingField, put=__set__capturingCameraDevice_k__BackingField))  _capturingCameraDevice_k__BackingField;

constexpr void __set__capturingCameraDevice_k__BackingField(GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice __get__capturingCameraDevice_k__BackingField() const;

 bool __declspec(property(get=__get__flipCameraFrameHorizontally_k__BackingField, put=__set__flipCameraFrameHorizontally_k__BackingField))  _flipCameraFrameHorizontally_k__BackingField;

constexpr void __set__flipCameraFrameHorizontally_k__BackingField(bool value) ;

constexpr bool __get__flipCameraFrameHorizontally_k__BackingField() const;

 bool __declspec(property(get=__get__flipCameraFrameVertically_k__BackingField, put=__set__flipCameraFrameVertically_k__BackingField))  _flipCameraFrameVertically_k__BackingField;

constexpr void __set__flipCameraFrameVertically_k__BackingField(bool value) ;

constexpr bool __get__flipCameraFrameVertically_k__BackingField() const;

 float_t __declspec(property(get=__get__handPoseStateLatency_k__BackingField, put=__set__handPoseStateLatency_k__BackingField))  _handPoseStateLatency_k__BackingField;

constexpr void __set__handPoseStateLatency_k__BackingField(float_t value) ;

constexpr float_t __get__handPoseStateLatency_k__BackingField() const;

 float_t __declspec(property(get=__get__sandwichCompositionRenderLatency_k__BackingField, put=__set__sandwichCompositionRenderLatency_k__BackingField))  _sandwichCompositionRenderLatency_k__BackingField;

constexpr void __set__sandwichCompositionRenderLatency_k__BackingField(float_t value) ;

constexpr float_t __get__sandwichCompositionRenderLatency_k__BackingField() const;

 int32_t __declspec(property(get=__get__sandwichCompositionBufferedFrames_k__BackingField, put=__set__sandwichCompositionBufferedFrames_k__BackingField))  _sandwichCompositionBufferedFrames_k__BackingField;

constexpr void __set__sandwichCompositionBufferedFrames_k__BackingField(int32_t value) ;

constexpr int32_t __get__sandwichCompositionBufferedFrames_k__BackingField() const;

 UnityEngine::Color __declspec(property(get=__get__chromaKeyColor_k__BackingField, put=__set__chromaKeyColor_k__BackingField))  _chromaKeyColor_k__BackingField;

constexpr void __set__chromaKeyColor_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__chromaKeyColor_k__BackingField() const;

 float_t __declspec(property(get=__get__chromaKeySimilarity_k__BackingField, put=__set__chromaKeySimilarity_k__BackingField))  _chromaKeySimilarity_k__BackingField;

constexpr void __set__chromaKeySimilarity_k__BackingField(float_t value) ;

constexpr float_t __get__chromaKeySimilarity_k__BackingField() const;

 float_t __declspec(property(get=__get__chromaKeySmoothRange_k__BackingField, put=__set__chromaKeySmoothRange_k__BackingField))  _chromaKeySmoothRange_k__BackingField;

constexpr void __set__chromaKeySmoothRange_k__BackingField(float_t value) ;

constexpr float_t __get__chromaKeySmoothRange_k__BackingField() const;

 float_t __declspec(property(get=__get__chromaKeySpillRange_k__BackingField, put=__set__chromaKeySpillRange_k__BackingField))  _chromaKeySpillRange_k__BackingField;

constexpr void __set__chromaKeySpillRange_k__BackingField(float_t value) ;

constexpr float_t __get__chromaKeySpillRange_k__BackingField() const;

 bool __declspec(property(get=__get__useDynamicLighting_k__BackingField, put=__set__useDynamicLighting_k__BackingField))  _useDynamicLighting_k__BackingField;

constexpr void __set__useDynamicLighting_k__BackingField(bool value) ;

constexpr bool __get__useDynamicLighting_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality __declspec(property(get=__get__depthQuality_k__BackingField, put=__set__depthQuality_k__BackingField))  _depthQuality_k__BackingField;

constexpr void __set__depthQuality_k__BackingField(GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality __get__depthQuality_k__BackingField() const;

 float_t __declspec(property(get=__get__dynamicLightingSmoothFactor_k__BackingField, put=__set__dynamicLightingSmoothFactor_k__BackingField))  _dynamicLightingSmoothFactor_k__BackingField;

constexpr void __set__dynamicLightingSmoothFactor_k__BackingField(float_t value) ;

constexpr float_t __get__dynamicLightingSmoothFactor_k__BackingField() const;

 float_t __declspec(property(get=__get__dynamicLightingDepthVariationClampingValue_k__BackingField, put=__set__dynamicLightingDepthVariationClampingValue_k__BackingField))  _dynamicLightingDepthVariationClampingValue_k__BackingField;

constexpr void __set__dynamicLightingDepthVariationClampingValue_k__BackingField(float_t value) ;

constexpr float_t __get__dynamicLightingDepthVariationClampingValue_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType __declspec(property(get=__get__virtualGreenScreenType_k__BackingField, put=__set__virtualGreenScreenType_k__BackingField))  _virtualGreenScreenType_k__BackingField;

constexpr void __set__virtualGreenScreenType_k__BackingField(GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType __get__virtualGreenScreenType_k__BackingField() const;

 float_t __declspec(property(get=__get__virtualGreenScreenTopY_k__BackingField, put=__set__virtualGreenScreenTopY_k__BackingField))  _virtualGreenScreenTopY_k__BackingField;

constexpr void __set__virtualGreenScreenTopY_k__BackingField(float_t value) ;

constexpr float_t __get__virtualGreenScreenTopY_k__BackingField() const;

 float_t __declspec(property(get=__get__virtualGreenScreenBottomY_k__BackingField, put=__set__virtualGreenScreenBottomY_k__BackingField))  _virtualGreenScreenBottomY_k__BackingField;

constexpr void __set__virtualGreenScreenBottomY_k__BackingField(float_t value) ;

constexpr float_t __get__virtualGreenScreenBottomY_k__BackingField() const;

 bool __declspec(property(get=__get__virtualGreenScreenApplyDepthCulling_k__BackingField, put=__set__virtualGreenScreenApplyDepthCulling_k__BackingField))  _virtualGreenScreenApplyDepthCulling_k__BackingField;

constexpr void __set__virtualGreenScreenApplyDepthCulling_k__BackingField(bool value) ;

constexpr bool __get__virtualGreenScreenApplyDepthCulling_k__BackingField() const;

 float_t __declspec(property(get=__get__virtualGreenScreenDepthTolerance_k__BackingField, put=__set__virtualGreenScreenDepthTolerance_k__BackingField))  _virtualGreenScreenDepthTolerance_k__BackingField;

constexpr void __set__virtualGreenScreenDepthTolerance_k__BackingField(float_t value) ;

constexpr float_t __get__virtualGreenScreenDepthTolerance_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode __declspec(property(get=__get__mrcActivationMode_k__BackingField, put=__set__mrcActivationMode_k__BackingField))  _mrcActivationMode_k__BackingField;

constexpr void __set__mrcActivationMode_k__BackingField(GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode __get__mrcActivationMode_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __declspec(property(get=__get__instantiateMixedRealityCameraGameObject, put=__set__instantiateMixedRealityCameraGameObject))  _instantiateMixedRealityCameraGameObject;

constexpr void __set__instantiateMixedRealityCameraGameObject(GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate __get__instantiateMixedRealityCameraGameObject() const;


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

/// @brief Method get_enableMixedReality addr 0x1f8545c size 0x8 virtual true final true
 bool get_enableMixedReality() ;

/// @brief Method set_enableMixedReality addr 0x1f85464 size 0xc virtual true final true
 void set_enableMixedReality(bool value) ;

/// @brief Method get_extraHiddenLayers addr 0x1f85470 size 0x8 virtual true final true
 UnityEngine::LayerMask get_extraHiddenLayers() ;

/// @brief Method set_extraHiddenLayers addr 0x1f85478 size 0x8 virtual true final true
 void set_extraHiddenLayers(UnityEngine::LayerMask value) ;

/// @brief Method get_extraVisibleLayers addr 0x1f85480 size 0x8 virtual true final true
 UnityEngine::LayerMask get_extraVisibleLayers() ;

/// @brief Method set_extraVisibleLayers addr 0x1f85488 size 0x8 virtual true final true
 void set_extraVisibleLayers(UnityEngine::LayerMask value) ;

/// @brief Method get_dynamicCullingMask addr 0x1f85490 size 0x8 virtual true final true
 bool get_dynamicCullingMask() ;

/// @brief Method set_dynamicCullingMask addr 0x1f85498 size 0xc virtual true final true
 void set_dynamicCullingMask(bool value) ;

/// @brief Method get_compositionMethod addr 0x1f854a4 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod get_compositionMethod() ;

/// @brief Method set_compositionMethod addr 0x1f854ac size 0x8 virtual true final true
 void set_compositionMethod(GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod value) ;

/// @brief Method get_externalCompositionBackdropColorRift addr 0x1f854b4 size 0xc virtual true final true
 UnityEngine::Color get_externalCompositionBackdropColorRift() ;

/// @brief Method set_externalCompositionBackdropColorRift addr 0x1f854c0 size 0xc virtual true final true
 void set_externalCompositionBackdropColorRift(UnityEngine::Color value) ;

/// @brief Method get_externalCompositionBackdropColorQuest addr 0x1f854cc size 0xc virtual true final true
 UnityEngine::Color get_externalCompositionBackdropColorQuest() ;

/// @brief Method set_externalCompositionBackdropColorQuest addr 0x1f854d8 size 0xc virtual true final true
 void set_externalCompositionBackdropColorQuest(UnityEngine::Color value) ;

/// @brief Method get_capturingCameraDevice addr 0x1f854e4 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice get_capturingCameraDevice() ;

/// @brief Method set_capturingCameraDevice addr 0x1f854ec size 0x8 virtual true final true
 void set_capturingCameraDevice(GlobalNamespace::GlobalNamespace__OVRManager__CameraDevice value) ;

/// @brief Method get_flipCameraFrameHorizontally addr 0x1f854f4 size 0x8 virtual true final true
 bool get_flipCameraFrameHorizontally() ;

/// @brief Method set_flipCameraFrameHorizontally addr 0x1f854fc size 0xc virtual true final true
 void set_flipCameraFrameHorizontally(bool value) ;

/// @brief Method get_flipCameraFrameVertically addr 0x1f85508 size 0x8 virtual true final true
 bool get_flipCameraFrameVertically() ;

/// @brief Method set_flipCameraFrameVertically addr 0x1f85510 size 0xc virtual true final true
 void set_flipCameraFrameVertically(bool value) ;

/// @brief Method get_handPoseStateLatency addr 0x1f8551c size 0x8 virtual true final true
 float_t get_handPoseStateLatency() ;

/// @brief Method set_handPoseStateLatency addr 0x1f85524 size 0x8 virtual true final true
 void set_handPoseStateLatency(float_t value) ;

/// @brief Method get_sandwichCompositionRenderLatency addr 0x1f8552c size 0x8 virtual true final true
 float_t get_sandwichCompositionRenderLatency() ;

/// @brief Method set_sandwichCompositionRenderLatency addr 0x1f85534 size 0x8 virtual true final true
 void set_sandwichCompositionRenderLatency(float_t value) ;

/// @brief Method get_sandwichCompositionBufferedFrames addr 0x1f8553c size 0x8 virtual true final true
 int32_t get_sandwichCompositionBufferedFrames() ;

/// @brief Method set_sandwichCompositionBufferedFrames addr 0x1f85544 size 0x8 virtual true final true
 void set_sandwichCompositionBufferedFrames(int32_t value) ;

/// @brief Method get_chromaKeyColor addr 0x1f8554c size 0xc virtual true final true
 UnityEngine::Color get_chromaKeyColor() ;

/// @brief Method set_chromaKeyColor addr 0x1f85558 size 0xc virtual true final true
 void set_chromaKeyColor(UnityEngine::Color value) ;

/// @brief Method get_chromaKeySimilarity addr 0x1f85564 size 0x8 virtual true final true
 float_t get_chromaKeySimilarity() ;

/// @brief Method set_chromaKeySimilarity addr 0x1f8556c size 0x8 virtual true final true
 void set_chromaKeySimilarity(float_t value) ;

/// @brief Method get_chromaKeySmoothRange addr 0x1f85574 size 0x8 virtual true final true
 float_t get_chromaKeySmoothRange() ;

/// @brief Method set_chromaKeySmoothRange addr 0x1f8557c size 0x8 virtual true final true
 void set_chromaKeySmoothRange(float_t value) ;

/// @brief Method get_chromaKeySpillRange addr 0x1f85584 size 0x8 virtual true final true
 float_t get_chromaKeySpillRange() ;

/// @brief Method set_chromaKeySpillRange addr 0x1f8558c size 0x8 virtual true final true
 void set_chromaKeySpillRange(float_t value) ;

/// @brief Method get_useDynamicLighting addr 0x1f85594 size 0x8 virtual true final true
 bool get_useDynamicLighting() ;

/// @brief Method set_useDynamicLighting addr 0x1f8559c size 0xc virtual true final true
 void set_useDynamicLighting(bool value) ;

/// @brief Method get_depthQuality addr 0x1f855a8 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality get_depthQuality() ;

/// @brief Method set_depthQuality addr 0x1f855b0 size 0x8 virtual true final true
 void set_depthQuality(GlobalNamespace::GlobalNamespace__OVRManager__DepthQuality value) ;

/// @brief Method get_dynamicLightingSmoothFactor addr 0x1f855b8 size 0x8 virtual true final true
 float_t get_dynamicLightingSmoothFactor() ;

/// @brief Method set_dynamicLightingSmoothFactor addr 0x1f855c0 size 0x8 virtual true final true
 void set_dynamicLightingSmoothFactor(float_t value) ;

/// @brief Method get_dynamicLightingDepthVariationClampingValue addr 0x1f855c8 size 0x8 virtual true final true
 float_t get_dynamicLightingDepthVariationClampingValue() ;

/// @brief Method set_dynamicLightingDepthVariationClampingValue addr 0x1f855d0 size 0x8 virtual true final true
 void set_dynamicLightingDepthVariationClampingValue(float_t value) ;

/// @brief Method get_virtualGreenScreenType addr 0x1f855d8 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType get_virtualGreenScreenType() ;

/// @brief Method set_virtualGreenScreenType addr 0x1f855e0 size 0x8 virtual true final true
 void set_virtualGreenScreenType(GlobalNamespace::GlobalNamespace__OVRManager__VirtualGreenScreenType value) ;

/// @brief Method get_virtualGreenScreenTopY addr 0x1f855e8 size 0x8 virtual true final true
 float_t get_virtualGreenScreenTopY() ;

/// @brief Method set_virtualGreenScreenTopY addr 0x1f855f0 size 0x8 virtual true final true
 void set_virtualGreenScreenTopY(float_t value) ;

/// @brief Method get_virtualGreenScreenBottomY addr 0x1f855f8 size 0x8 virtual true final true
 float_t get_virtualGreenScreenBottomY() ;

/// @brief Method set_virtualGreenScreenBottomY addr 0x1f85600 size 0x8 virtual true final true
 void set_virtualGreenScreenBottomY(float_t value) ;

/// @brief Method get_virtualGreenScreenApplyDepthCulling addr 0x1f85608 size 0x8 virtual true final true
 bool get_virtualGreenScreenApplyDepthCulling() ;

/// @brief Method set_virtualGreenScreenApplyDepthCulling addr 0x1f85610 size 0xc virtual true final true
 void set_virtualGreenScreenApplyDepthCulling(bool value) ;

/// @brief Method get_virtualGreenScreenDepthTolerance addr 0x1f8561c size 0x8 virtual true final true
 float_t get_virtualGreenScreenDepthTolerance() ;

/// @brief Method set_virtualGreenScreenDepthTolerance addr 0x1f85624 size 0x8 virtual true final true
 void set_virtualGreenScreenDepthTolerance(float_t value) ;

/// @brief Method get_mrcActivationMode addr 0x1f8562c size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode get_mrcActivationMode() ;

/// @brief Method set_mrcActivationMode addr 0x1f85634 size 0x8 virtual true final true
 void set_mrcActivationMode(GlobalNamespace::GlobalNamespace__OVRManager__MrcActivationMode value) ;

/// @brief Method get_instantiateMixedRealityCameraGameObject addr 0x1f8563c size 0x88 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate get_instantiateMixedRealityCameraGameObject() ;

/// @brief Method set_instantiateMixedRealityCameraGameObject addr 0x1f856c4 size 0x4 virtual true final true
 void set_instantiateMixedRealityCameraGameObject(GlobalNamespace::GlobalNamespace__OVRManager__InstantiateMrcCameraDelegate value) ;

/// @brief Method Update addr 0x1f856c8 size 0xb0 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x1f85778 size 0x58 virtual false final false
 void OnDestroy() ;

/// @brief Method Init addr 0x1f857d0 size 0x16c virtual false final false
 void Init(System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::GameObject,UnityEngine::GameObject> instantiateMixedRealityForegroundCameraGameObject) ;

/// @brief Method InstantiateMixedRealityCameraGameObject addr 0x1f8593c size 0x34 virtual false final false
 UnityEngine::GameObject InstantiateMixedRealityCameraGameObject(UnityEngine::GameObject mainCameraGameObject, GlobalNamespace::GlobalNamespace__OVRManager__MrcCameraType cameraType) ;

static GlobalNamespace::OculusMRCManager New_ctor() ;

/// @brief Method .ctor addr 0x1f85970 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OculusMRCManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusMRCManager, "", "OculusMRCManager");
