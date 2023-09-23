#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__OVRComposition_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__CompositionMethod;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class AudioListener;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
class OVRMRAudioFilter;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__TrackingOrigin;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRExternalComposition;
}
// Type: ::OVRExternalComposition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8439))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8442))
// CS Name: OVRExternalComposition
class CORDL_TYPE OVRExternalComposition : public GlobalNamespace::OVRComposition {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~OVRExternalComposition() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRExternalComposition", modifiers: " const&", def_value: None }]
constexpr OVRExternalComposition(OVRExternalComposition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRExternalComposition", modifiers: "&&", def_value: None }]
constexpr OVRExternalComposition(OVRExternalComposition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRExternalComposition(void* ptr) noexcept : GlobalNamespace::OVRComposition(ptr) {
}


  constexpr OVRExternalComposition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRExternalComposition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRExternalComposition& operator=(OVRExternalComposition&& o) noexcept = default;
  constexpr OVRExternalComposition& operator=(OVRExternalComposition const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_previousMainCameraObject, put=__set_previousMainCameraObject))  previousMainCameraObject;

constexpr void __set_previousMainCameraObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_previousMainCameraObject() const;

 UnityEngine::GameObject __declspec(property(get=__get_foregroundCameraGameObject, put=__set_foregroundCameraGameObject))  foregroundCameraGameObject;

constexpr void __set_foregroundCameraGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_foregroundCameraGameObject() const;

 UnityEngine::Camera __declspec(property(get=__get_foregroundCamera, put=__set_foregroundCamera))  foregroundCamera;

constexpr void __set_foregroundCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get_foregroundCamera() const;

 UnityEngine::GameObject __declspec(property(get=__get_backgroundCameraGameObject, put=__set_backgroundCameraGameObject))  backgroundCameraGameObject;

constexpr void __set_backgroundCameraGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_backgroundCameraGameObject() const;

 UnityEngine::Camera __declspec(property(get=__get_backgroundCamera, put=__set_backgroundCamera))  backgroundCamera;

constexpr void __set_backgroundCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get_backgroundCamera() const;

 float_t __declspec(property(get=__get_fpsThreshold, put=__set_fpsThreshold))  fpsThreshold;

constexpr void __set_fpsThreshold(float_t value) ;

constexpr float_t __get_fpsThreshold() const;

 bool __declspec(property(get=__get_isFrameSkipped, put=__set_isFrameSkipped))  isFrameSkipped;

constexpr void __set_isFrameSkipped(bool value) ;

constexpr bool __get_isFrameSkipped() const;

 bool __declspec(property(get=__get_renderCombinedFrame, put=__set_renderCombinedFrame))  renderCombinedFrame;

constexpr void __set_renderCombinedFrame(bool value) ;

constexpr bool __get_renderCombinedFrame() const;

 UnityEngine::AudioListener __declspec(property(get=__get_audioListener, put=__set_audioListener))  audioListener;

constexpr void __set_audioListener(UnityEngine::AudioListener value) ;

constexpr UnityEngine::AudioListener __get_audioListener() const;

 GlobalNamespace::OVRMRAudioFilter __declspec(property(get=__get_audioFilter, put=__set_audioFilter))  audioFilter;

constexpr void __set_audioFilter(GlobalNamespace::OVRMRAudioFilter value) ;

constexpr GlobalNamespace::OVRMRAudioFilter __get_audioFilter() const;

 ::ArrayW<UnityEngine::RenderTexture> __declspec(property(get=__get_mrcRenderTextureArray, put=__set_mrcRenderTextureArray))  mrcRenderTextureArray;

constexpr void __set_mrcRenderTextureArray(::ArrayW<UnityEngine::RenderTexture> value) ;

constexpr ::ArrayW<UnityEngine::RenderTexture> __get_mrcRenderTextureArray() const;

 int32_t __declspec(property(get=__get_frameIndex, put=__set_frameIndex))  frameIndex;

constexpr void __set_frameIndex(int32_t value) ;

constexpr int32_t __get_frameIndex() const;

 int32_t __declspec(property(get=__get_lastMrcEncodeFrameSyncId, put=__set_lastMrcEncodeFrameSyncId))  lastMrcEncodeFrameSyncId;

constexpr void __set_lastMrcEncodeFrameSyncId(int32_t value) ;

constexpr int32_t __get_lastMrcEncodeFrameSyncId() const;

 ::ArrayW<UnityEngine::RenderTexture> __declspec(property(get=__get_mrcForegroundRenderTextureArray, put=__set_mrcForegroundRenderTextureArray))  mrcForegroundRenderTextureArray;

constexpr void __set_mrcForegroundRenderTextureArray(::ArrayW<UnityEngine::RenderTexture> value) ;

constexpr ::ArrayW<UnityEngine::RenderTexture> __get_mrcForegroundRenderTextureArray() const;

 ::ArrayW<double_t> __declspec(property(get=__get_cameraPoseTimeArray, put=__set_cameraPoseTimeArray))  cameraPoseTimeArray;

constexpr void __set_cameraPoseTimeArray(::ArrayW<double_t> value) ;

constexpr ::ArrayW<double_t> __get_cameraPoseTimeArray() const;

 ::ArrayW<float_t> __declspec(property(get=__get_cachedAudioDataArray, put=__set_cachedAudioDataArray))  cachedAudioDataArray;

constexpr void __set_cachedAudioDataArray(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_cachedAudioDataArray() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_audioDataLock, put=__set_audioDataLock))  audioDataLock;

constexpr void __set_audioDataLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_audioDataLock() const;

 System::Collections::Generic::List_1<float_t> __declspec(property(get=__get_cachedAudioData, put=__set_cachedAudioData))  cachedAudioData;

constexpr void __set_cachedAudioData(System::Collections::Generic::List_1<float_t> value) ;

constexpr System::Collections::Generic::List_1<float_t> __get_cachedAudioData() const;

 int32_t __declspec(property(get=__get_cachedChannels, put=__set_cachedChannels))  cachedChannels;

constexpr void __set_cachedChannels(int32_t value) ;

constexpr int32_t __get_cachedChannels() const;


// Methods

/// @brief Method CompositionMethod addr 0x25a620c size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__OVRManager__CompositionMethod CompositionMethod() ;

// Ctor Parameters [CppParam { name: "parentObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "mainCamera", ty: "UnityEngine::Camera", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "GlobalNamespace::OVRMixedRealityCaptureConfiguration", modifiers: "", def_value: None }]
explicit OVRExternalComposition(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration) ;

/// @brief Method .ctor addr 0x25a6214 size 0x4bc virtual false final false
 void _ctor(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration) ;

/// @brief Method RefreshCameraObjects addr 0x25a66d0 size 0xbf4 virtual false final false
 void RefreshCameraObjects(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration) ;

/// @brief Method RefreshAudioFilter addr 0x25a72c4 size 0x5b0 virtual false final false
 void RefreshAudioFilter(UnityEngine::Camera mainCamera) ;

/// @brief Method CastMrcFrame addr 0x25a79a8 size 0x200 virtual false final false
 int32_t CastMrcFrame(int32_t castTextureIndex) ;

/// @brief Method SetCameraTargetTexture addr 0x25a7d84 size 0x1e0 virtual false final false
 void SetCameraTargetTexture(int32_t drawTextureIndex) ;

/// @brief Method Update addr 0x25a7f64 size 0xc90 virtual true final false
 void Update(UnityEngine::GameObject gameObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration, GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin trackingOrigin, float_t displayFrequency) ;

/// @brief Method CleanupAudioFilter addr 0x25a7874 size 0x134 virtual false final false
 void CleanupAudioFilter() ;

/// @brief Method Cleanup addr 0x25a8d08 size 0x14c virtual true final false
 void Cleanup() ;

/// @brief Method CacheAudioData addr 0x25a8e54 size 0x138 virtual false final false
 void CacheAudioData(::ArrayW<float_t> data, int32_t channels) ;

/// @brief Method GetAndResetAudioData addr 0x25a7ba8 size 0x1dc virtual false final false
 void GetAndResetAudioData(ByRef<::ArrayW<float_t>> audioData, ByRef<int32_t> audioFrames, ByRef<int32_t> channels) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRExternalComposition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRExternalComposition, "", "OVRExternalComposition");
