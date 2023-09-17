#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct EVRCompositorError;
}
namespace OVR::OpenVR {
struct IVRCompositor;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct EVRCompositorTimingMode;
}
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVREye;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRCompositor;
}
// Type: OVR.OpenVR::CVRCompositor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9347))
// CS Name: OVR.OpenVR.CVRCompositor
class CORDL_TYPE CVRCompositor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x168};

virtual ~CVRCompositor() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: " const&", def_value: None }]
constexpr CVRCompositor(CVRCompositor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: "&&", def_value: None }]
constexpr CVRCompositor(CVRCompositor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRCompositor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRCompositor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRCompositor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRCompositor& operator=(CVRCompositor&& o) noexcept = default;
  constexpr CVRCompositor& operator=(CVRCompositor const& o) noexcept = default;
                


// Fields

 ::OVR::OpenVR::IVRCompositor __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRCompositor value) ;

constexpr ::OVR::OpenVR::IVRCompositor __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRCompositor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x26658e4 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method SetTrackingSpace addr 0x26659f8 size 0x24 virtual false final false
 void SetTrackingSpace(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) ;

/// @brief Method GetTrackingSpace addr 0x2665a1c size 0x24 virtual false final false
 ::OVR::OpenVR::ETrackingUniverseOrigin GetTrackingSpace() ;

/// @brief Method WaitGetPoses addr 0x2665a40 size 0x38 virtual false final false
 ::OVR::OpenVR::EVRCompositorError WaitGetPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pRenderPoseArray, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pGamePoseArray) ;

/// @brief Method GetLastPoses addr 0x2665a78 size 0x38 virtual false final false
 ::OVR::OpenVR::EVRCompositorError GetLastPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pRenderPoseArray, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pGamePoseArray) ;

/// @brief Method GetLastPoseForTrackedDeviceIndex addr 0x2665ab0 size 0x24 virtual false final false
 ::OVR::OpenVR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose) ;

/// @brief Method Submit addr 0x2665ad4 size 0x24 virtual false final false
 ::OVR::OpenVR::EVRCompositorError Submit(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags) ;

/// @brief Method ClearLastSubmittedFrame addr 0x2665af8 size 0x24 virtual false final false
 void ClearLastSubmittedFrame() ;

/// @brief Method PostPresentHandoff addr 0x2665b1c size 0x24 virtual false final false
 void PostPresentHandoff() ;

/// @brief Method GetFrameTiming addr 0x2665b40 size 0x24 virtual false final false
 bool GetFrameTiming(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo) ;

/// @brief Method GetFrameTimings addr 0x2665b64 size 0x24 virtual false final false
 uint32_t GetFrameTimings(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames) ;

/// @brief Method GetFrameTimeRemaining addr 0x2665b88 size 0x24 virtual false final false
 float_t GetFrameTimeRemaining() ;

/// @brief Method GetCumulativeStats addr 0x2665bac size 0x24 virtual false final false
 void GetCumulativeStats(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes) ;

/// @brief Method FadeToColor addr 0x2665bd0 size 0x28 virtual false final false
 void FadeToColor(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground) ;

/// @brief Method GetCurrentFadeColor addr 0x2665bf8 size 0x28 virtual false final false
 ::OVR::OpenVR::HmdColor_t GetCurrentFadeColor(bool bBackground) ;

/// @brief Method FadeGrid addr 0x2665c20 size 0x28 virtual false final false
 void FadeGrid(float_t fSeconds, bool bFadeIn) ;

/// @brief Method GetCurrentGridAlpha addr 0x2665c48 size 0x24 virtual false final false
 float_t GetCurrentGridAlpha() ;

/// @brief Method SetSkyboxOverride addr 0x2665c6c size 0x2c virtual false final false
 ::OVR::OpenVR::EVRCompositorError SetSkyboxOverride(::ArrayW<::OVR::OpenVR::Texture_t> pTextures) ;

/// @brief Method ClearSkyboxOverride addr 0x2665c98 size 0x24 virtual false final false
 void ClearSkyboxOverride() ;

/// @brief Method CompositorBringToFront addr 0x2665cbc size 0x24 virtual false final false
 void CompositorBringToFront() ;

/// @brief Method CompositorGoToBack addr 0x2665ce0 size 0x24 virtual false final false
 void CompositorGoToBack() ;

/// @brief Method CompositorQuit addr 0x2665d04 size 0x24 virtual false final false
 void CompositorQuit() ;

/// @brief Method IsFullscreen addr 0x2665d28 size 0x24 virtual false final false
 bool IsFullscreen() ;

/// @brief Method GetCurrentSceneFocusProcess addr 0x2665d4c size 0x24 virtual false final false
 uint32_t GetCurrentSceneFocusProcess() ;

/// @brief Method GetLastFrameRenderer addr 0x2665d70 size 0x24 virtual false final false
 uint32_t GetLastFrameRenderer() ;

/// @brief Method CanRenderScene addr 0x2665d94 size 0x24 virtual false final false
 bool CanRenderScene() ;

/// @brief Method ShowMirrorWindow addr 0x2665db8 size 0x24 virtual false final false
 void ShowMirrorWindow() ;

/// @brief Method HideMirrorWindow addr 0x2665ddc size 0x24 virtual false final false
 void HideMirrorWindow() ;

/// @brief Method IsMirrorWindowVisible addr 0x2665e00 size 0x24 virtual false final false
 bool IsMirrorWindowVisible() ;

/// @brief Method CompositorDumpImages addr 0x2665e24 size 0x24 virtual false final false
 void CompositorDumpImages() ;

/// @brief Method ShouldAppRenderWithLowResources addr 0x2665e48 size 0x24 virtual false final false
 bool ShouldAppRenderWithLowResources() ;

/// @brief Method ForceInterleavedReprojectionOn addr 0x2665e6c size 0x28 virtual false final false
 void ForceInterleavedReprojectionOn(bool bOverride) ;

/// @brief Method ForceReconnectProcess addr 0x2665e94 size 0x24 virtual false final false
 void ForceReconnectProcess() ;

/// @brief Method SuspendRendering addr 0x2665eb8 size 0x28 virtual false final false
 void SuspendRendering(bool bSuspend) ;

/// @brief Method GetMirrorTextureD3D11 addr 0x2665ee0 size 0x24 virtual false final false
 ::OVR::OpenVR::EVRCompositorError GetMirrorTextureD3D11(::OVR::OpenVR::EVREye eEye, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView) ;

/// @brief Method ReleaseMirrorTextureD3D11 addr 0x2665f04 size 0x24 virtual false final false
 void ReleaseMirrorTextureD3D11(::cordl_internals::intptr_t pD3D11ShaderResourceView) ;

/// @brief Method GetMirrorTextureGL addr 0x2665f28 size 0x28 virtual false final false
 ::OVR::OpenVR::EVRCompositorError GetMirrorTextureGL(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, ::cordl_internals::intptr_t pglSharedTextureHandle) ;

/// @brief Method ReleaseSharedGLTexture addr 0x2665f50 size 0x24 virtual false final false
 bool ReleaseSharedGLTexture(uint32_t glTextureId, ::cordl_internals::intptr_t glSharedTextureHandle) ;

/// @brief Method LockGLSharedTextureForAccess addr 0x2665f74 size 0x24 virtual false final false
 void LockGLSharedTextureForAccess(::cordl_internals::intptr_t glSharedTextureHandle) ;

/// @brief Method UnlockGLSharedTextureForAccess addr 0x2665f98 size 0x24 virtual false final false
 void UnlockGLSharedTextureForAccess(::cordl_internals::intptr_t glSharedTextureHandle) ;

/// @brief Method GetVulkanInstanceExtensionsRequired addr 0x2665fbc size 0x24 virtual false final false
 uint32_t GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder pchValue, uint32_t unBufferSize) ;

/// @brief Method GetVulkanDeviceExtensionsRequired addr 0x2665fe0 size 0x24 virtual false final false
 uint32_t GetVulkanDeviceExtensionsRequired(::cordl_internals::intptr_t pPhysicalDevice, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize) ;

/// @brief Method SetExplicitTimingMode addr 0x2666004 size 0x24 virtual false final false
 void SetExplicitTimingMode(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode) ;

/// @brief Method SubmitExplicitTimingData addr 0x2666028 size 0x24 virtual false final false
 ::OVR::OpenVR::EVRCompositorError SubmitExplicitTimingData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::CVRCompositor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRCompositor, "OVR.OpenVR", "CVRCompositor");
