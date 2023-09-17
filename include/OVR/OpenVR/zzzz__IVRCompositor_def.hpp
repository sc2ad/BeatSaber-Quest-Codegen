#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct EVRCompositorError;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRCompositorTimingMode;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
// Forward declare root types
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___CanRenderScene;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___CompositorBringToFront;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___CompositorDumpImages;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___CompositorGoToBack;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___CompositorQuit;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___FadeGrid;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___FadeToColor;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetCumulativeStats;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetFrameTiming;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetFrameTimings;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetLastPoses;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetTrackingSpace;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___HideMirrorWindow;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___IsFullscreen;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___PostPresentHandoff;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___SetTrackingSpace;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___Submit;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___SuspendRendering;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class ____OVR__OpenVR__IVRCompositor___WaitGetPoses;
}
namespace OVR::OpenVR {
struct IVRCompositor;
}
// Type: ::_SetTrackingSpace
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9127))
// CS Name: OVR.OpenVR.IVRCompositor::_SetTrackingSpace
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___SetTrackingSpace : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___SetTrackingSpace() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SetTrackingSpace", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SetTrackingSpace(____OVR__OpenVR__IVRCompositor___SetTrackingSpace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SetTrackingSpace", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SetTrackingSpace(____OVR__OpenVR__IVRCompositor___SetTrackingSpace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___SetTrackingSpace(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___SetTrackingSpace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SetTrackingSpace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SetTrackingSpace& operator=(____OVR__OpenVR__IVRCompositor___SetTrackingSpace&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___SetTrackingSpace& operator=(____OVR__OpenVR__IVRCompositor___SetTrackingSpace const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___SetTrackingSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264d994 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264da58 size 0x14 virtual true final false
 void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) ;

/// @brief Method BeginInvoke addr 0x264da6c size 0x84 virtual true final false
 ::System::IAsyncResult BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264daf0 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetTrackingSpace
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9128))
// CS Name: OVR.OpenVR.IVRCompositor::_GetTrackingSpace
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetTrackingSpace : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetTrackingSpace() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetTrackingSpace", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetTrackingSpace(____OVR__OpenVR__IVRCompositor___GetTrackingSpace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetTrackingSpace", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetTrackingSpace(____OVR__OpenVR__IVRCompositor___GetTrackingSpace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetTrackingSpace(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetTrackingSpace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetTrackingSpace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetTrackingSpace& operator=(____OVR__OpenVR__IVRCompositor___GetTrackingSpace&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetTrackingSpace& operator=(____OVR__OpenVR__IVRCompositor___GetTrackingSpace const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetTrackingSpace(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264dafc size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264dbb8 size 0x14 virtual true final false
 ::OVR::OpenVR::ETrackingUniverseOrigin Invoke() ;

/// @brief Method BeginInvoke addr 0x264dbcc size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264dbec size 0x28 virtual true final false
 ::OVR::OpenVR::ETrackingUniverseOrigin EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_WaitGetPoses
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9129))
// CS Name: OVR.OpenVR.IVRCompositor::_WaitGetPoses
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___WaitGetPoses : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___WaitGetPoses() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___WaitGetPoses", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___WaitGetPoses(____OVR__OpenVR__IVRCompositor___WaitGetPoses const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___WaitGetPoses", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___WaitGetPoses(____OVR__OpenVR__IVRCompositor___WaitGetPoses&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___WaitGetPoses(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___WaitGetPoses& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___WaitGetPoses& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___WaitGetPoses& operator=(____OVR__OpenVR__IVRCompositor___WaitGetPoses&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___WaitGetPoses& operator=(____OVR__OpenVR__IVRCompositor___WaitGetPoses const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___WaitGetPoses(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264dc14 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264dcec size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount) ;

/// @brief Method BeginInvoke addr 0x264dd00 size 0xac virtual true final false
 ::System::IAsyncResult BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ddac size 0x28 virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetLastPoses
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9130))
// CS Name: OVR.OpenVR.IVRCompositor::_GetLastPoses
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetLastPoses : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetLastPoses() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetLastPoses", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoses(____OVR__OpenVR__IVRCompositor___GetLastPoses const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetLastPoses", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoses(____OVR__OpenVR__IVRCompositor___GetLastPoses&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetLastPoses(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoses& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoses& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoses& operator=(____OVR__OpenVR__IVRCompositor___GetLastPoses&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoses& operator=(____OVR__OpenVR__IVRCompositor___GetLastPoses const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetLastPoses(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ddd4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264deac size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount) ;

/// @brief Method BeginInvoke addr 0x264dec0 size 0xac virtual true final false
 ::System::IAsyncResult BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint32_t unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint32_t unGamePoseArrayCount, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264df6c size 0x28 virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetLastPoseForTrackedDeviceIndex
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9131))
// CS Name: OVR.OpenVR.IVRCompositor::_GetLastPoseForTrackedDeviceIndex
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex(____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex(____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex& operator=(____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex& operator=(____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264df94 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264e058 size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose) ;

/// @brief Method BeginInvoke addr 0x264e06c size 0xd8 virtual true final false
 ::System::IAsyncResult BeginInvoke(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264e144 size 0x34 virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_Submit
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9132))
// CS Name: OVR.OpenVR.IVRCompositor::_Submit
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___Submit : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___Submit() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___Submit", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___Submit(____OVR__OpenVR__IVRCompositor___Submit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___Submit", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___Submit(____OVR__OpenVR__IVRCompositor___Submit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___Submit(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___Submit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___Submit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___Submit& operator=(____OVR__OpenVR__IVRCompositor___Submit&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___Submit& operator=(____OVR__OpenVR__IVRCompositor___Submit const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___Submit(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264e178 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264e23c size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags) ;

/// @brief Method BeginInvoke addr 0x264e250 size 0x11c virtual true final false
 ::System::IAsyncResult BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264e36c size 0x34 virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ClearLastSubmittedFrame
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9133))
// CS Name: OVR.OpenVR.IVRCompositor::_ClearLastSubmittedFrame
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame(____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame(____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame& operator=(____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame& operator=(____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264e3a0 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264e45c size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264e470 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264e490 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_PostPresentHandoff
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9134))
// CS Name: OVR.OpenVR.IVRCompositor::_PostPresentHandoff
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___PostPresentHandoff : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___PostPresentHandoff() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___PostPresentHandoff", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___PostPresentHandoff(____OVR__OpenVR__IVRCompositor___PostPresentHandoff const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___PostPresentHandoff", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___PostPresentHandoff(____OVR__OpenVR__IVRCompositor___PostPresentHandoff&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___PostPresentHandoff(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___PostPresentHandoff& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___PostPresentHandoff& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___PostPresentHandoff& operator=(____OVR__OpenVR__IVRCompositor___PostPresentHandoff&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___PostPresentHandoff& operator=(____OVR__OpenVR__IVRCompositor___PostPresentHandoff const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___PostPresentHandoff(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264e49c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264e558 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264e56c size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264e58c size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetFrameTiming
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9135))
// CS Name: OVR.OpenVR.IVRCompositor::_GetFrameTiming
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetFrameTiming : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetFrameTiming() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetFrameTiming", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTiming(____OVR__OpenVR__IVRCompositor___GetFrameTiming const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetFrameTiming", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTiming(____OVR__OpenVR__IVRCompositor___GetFrameTiming&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetFrameTiming(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTiming& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTiming& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTiming& operator=(____OVR__OpenVR__IVRCompositor___GetFrameTiming&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTiming& operator=(____OVR__OpenVR__IVRCompositor___GetFrameTiming const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetFrameTiming(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264e598 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264e670 size 0x14 virtual true final false
 bool Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo) ;

/// @brief Method BeginInvoke addr 0x264e684 size 0xb8 virtual true final false
 ::System::IAsyncResult BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264e73c size 0x2c virtual true final false
 bool EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetFrameTimings
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9136))
// CS Name: OVR.OpenVR.IVRCompositor::_GetFrameTimings
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetFrameTimings : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetFrameTimings() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetFrameTimings", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimings(____OVR__OpenVR__IVRCompositor___GetFrameTimings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetFrameTimings", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimings(____OVR__OpenVR__IVRCompositor___GetFrameTimings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetFrameTimings(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimings& operator=(____OVR__OpenVR__IVRCompositor___GetFrameTimings&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimings& operator=(____OVR__OpenVR__IVRCompositor___GetFrameTimings const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetFrameTimings(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264e768 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264e840 size 0x14 virtual true final false
 uint32_t Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames) ;

/// @brief Method BeginInvoke addr 0x264e854 size 0xb8 virtual true final false
 ::System::IAsyncResult BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264e90c size 0x2c virtual true final false
 uint32_t EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetFrameTimeRemaining
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9137))
// CS Name: OVR.OpenVR.IVRCompositor::_GetFrameTimeRemaining
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining(____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining(____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining& operator=(____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining& operator=(____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264e938 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264e9f4 size 0x14 virtual true final false
 float_t Invoke() ;

/// @brief Method BeginInvoke addr 0x264ea08 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ea28 size 0x28 virtual true final false
 float_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCumulativeStats
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9138))
// CS Name: OVR.OpenVR.IVRCompositor::_GetCumulativeStats
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetCumulativeStats : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetCumulativeStats() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCumulativeStats", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCumulativeStats(____OVR__OpenVR__IVRCompositor___GetCumulativeStats const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCumulativeStats", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCumulativeStats(____OVR__OpenVR__IVRCompositor___GetCumulativeStats&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetCumulativeStats(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetCumulativeStats& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCumulativeStats& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCumulativeStats& operator=(____OVR__OpenVR__IVRCompositor___GetCumulativeStats&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetCumulativeStats& operator=(____OVR__OpenVR__IVRCompositor___GetCumulativeStats const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetCumulativeStats(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ea50 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264eb28 size 0x14 virtual true final false
 void Invoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes) ;

/// @brief Method BeginInvoke addr 0x264eb3c size 0xb8 virtual true final false
 ::System::IAsyncResult BeginInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ebf4 size 0x1c virtual true final false
 void EndInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_FadeToColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9139))
// CS Name: OVR.OpenVR.IVRCompositor::_FadeToColor
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___FadeToColor : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___FadeToColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___FadeToColor", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___FadeToColor(____OVR__OpenVR__IVRCompositor___FadeToColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___FadeToColor", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___FadeToColor(____OVR__OpenVR__IVRCompositor___FadeToColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___FadeToColor(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___FadeToColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___FadeToColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___FadeToColor& operator=(____OVR__OpenVR__IVRCompositor___FadeToColor&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___FadeToColor& operator=(____OVR__OpenVR__IVRCompositor___FadeToColor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___FadeToColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ec10 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264ecd4 size 0x18 virtual true final false
 void Invoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground) ;

/// @brief Method BeginInvoke addr 0x264ecec size 0x114 virtual true final false
 ::System::IAsyncResult BeginInvoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ee00 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCurrentFadeColor
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9140))
// CS Name: OVR.OpenVR.IVRCompositor::_GetCurrentFadeColor
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor(____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor(____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor& operator=(____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor& operator=(____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ee0c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264eed0 size 0x18 virtual true final false
 ::OVR::OpenVR::HmdColor_t Invoke(bool bBackground) ;

/// @brief Method BeginInvoke addr 0x264eee8 size 0x88 virtual true final false
 ::System::IAsyncResult BeginInvoke(bool bBackground, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ef70 size 0x2c virtual true final false
 ::OVR::OpenVR::HmdColor_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_FadeGrid
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9141))
// CS Name: OVR.OpenVR.IVRCompositor::_FadeGrid
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___FadeGrid : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___FadeGrid() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___FadeGrid", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___FadeGrid(____OVR__OpenVR__IVRCompositor___FadeGrid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___FadeGrid", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___FadeGrid(____OVR__OpenVR__IVRCompositor___FadeGrid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___FadeGrid(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___FadeGrid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___FadeGrid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___FadeGrid& operator=(____OVR__OpenVR__IVRCompositor___FadeGrid&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___FadeGrid& operator=(____OVR__OpenVR__IVRCompositor___FadeGrid const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___FadeGrid(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ef9c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f060 size 0x18 virtual true final false
 void Invoke(float_t fSeconds, bool bFadeIn) ;

/// @brief Method BeginInvoke addr 0x264f078 size 0xbc virtual true final false
 ::System::IAsyncResult BeginInvoke(float_t fSeconds, bool bFadeIn, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f134 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCurrentGridAlpha
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9142))
// CS Name: OVR.OpenVR.IVRCompositor::_GetCurrentGridAlpha
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha(____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha(____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha& operator=(____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha& operator=(____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f140 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f1fc size 0x14 virtual true final false
 float_t Invoke() ;

/// @brief Method BeginInvoke addr 0x264f210 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f230 size 0x28 virtual true final false
 float_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetSkyboxOverride
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9143))
// CS Name: OVR.OpenVR.IVRCompositor::_SetSkyboxOverride
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___SetSkyboxOverride() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SetSkyboxOverride", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride(____OVR__OpenVR__IVRCompositor___SetSkyboxOverride const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SetSkyboxOverride", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride(____OVR__OpenVR__IVRCompositor___SetSkyboxOverride&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride& operator=(____OVR__OpenVR__IVRCompositor___SetSkyboxOverride&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride& operator=(____OVR__OpenVR__IVRCompositor___SetSkyboxOverride const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___SetSkyboxOverride(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f258 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f330 size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t>> pTextures, uint32_t unTextureCount) ;

/// @brief Method BeginInvoke addr 0x264f344 size 0x94 virtual true final false
 ::System::IAsyncResult BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t>> pTextures, uint32_t unTextureCount, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f3d8 size 0x28 virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ClearSkyboxOverride
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9144))
// CS Name: OVR.OpenVR.IVRCompositor::_ClearSkyboxOverride
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride(____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride(____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride& operator=(____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride& operator=(____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f400 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f4bc size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264f4d0 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f4f0 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CompositorBringToFront
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9145))
// CS Name: OVR.OpenVR.IVRCompositor::_CompositorBringToFront
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___CompositorBringToFront : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___CompositorBringToFront() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorBringToFront", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorBringToFront(____OVR__OpenVR__IVRCompositor___CompositorBringToFront const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorBringToFront", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorBringToFront(____OVR__OpenVR__IVRCompositor___CompositorBringToFront&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___CompositorBringToFront(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___CompositorBringToFront& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorBringToFront& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorBringToFront& operator=(____OVR__OpenVR__IVRCompositor___CompositorBringToFront&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___CompositorBringToFront& operator=(____OVR__OpenVR__IVRCompositor___CompositorBringToFront const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___CompositorBringToFront(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f4fc size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f5b8 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264f5cc size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f5ec size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CompositorGoToBack
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9146))
// CS Name: OVR.OpenVR.IVRCompositor::_CompositorGoToBack
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___CompositorGoToBack : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___CompositorGoToBack() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorGoToBack", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorGoToBack(____OVR__OpenVR__IVRCompositor___CompositorGoToBack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorGoToBack", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorGoToBack(____OVR__OpenVR__IVRCompositor___CompositorGoToBack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___CompositorGoToBack(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___CompositorGoToBack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorGoToBack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorGoToBack& operator=(____OVR__OpenVR__IVRCompositor___CompositorGoToBack&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___CompositorGoToBack& operator=(____OVR__OpenVR__IVRCompositor___CompositorGoToBack const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___CompositorGoToBack(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f5f8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f6b4 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264f6c8 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f6e8 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CompositorQuit
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9147))
// CS Name: OVR.OpenVR.IVRCompositor::_CompositorQuit
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___CompositorQuit : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___CompositorQuit() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorQuit", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorQuit(____OVR__OpenVR__IVRCompositor___CompositorQuit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorQuit", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorQuit(____OVR__OpenVR__IVRCompositor___CompositorQuit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___CompositorQuit(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___CompositorQuit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorQuit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorQuit& operator=(____OVR__OpenVR__IVRCompositor___CompositorQuit&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___CompositorQuit& operator=(____OVR__OpenVR__IVRCompositor___CompositorQuit const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___CompositorQuit(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f6f4 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f7b0 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264f7c4 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f7e4 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsFullscreen
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9148))
// CS Name: OVR.OpenVR.IVRCompositor::_IsFullscreen
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___IsFullscreen : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___IsFullscreen() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___IsFullscreen", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___IsFullscreen(____OVR__OpenVR__IVRCompositor___IsFullscreen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___IsFullscreen", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___IsFullscreen(____OVR__OpenVR__IVRCompositor___IsFullscreen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___IsFullscreen(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___IsFullscreen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___IsFullscreen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___IsFullscreen& operator=(____OVR__OpenVR__IVRCompositor___IsFullscreen&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___IsFullscreen& operator=(____OVR__OpenVR__IVRCompositor___IsFullscreen const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___IsFullscreen(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f7f0 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f8ac size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x264f8c0 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f8e0 size 0x28 virtual true final false
 bool EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetCurrentSceneFocusProcess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9149))
// CS Name: OVR.OpenVR.IVRCompositor::_GetCurrentSceneFocusProcess
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess(____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess(____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess& operator=(____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess& operator=(____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264f908 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264f9c4 size 0x14 virtual true final false
 uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x264f9d8 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264f9f8 size 0x28 virtual true final false
 uint32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetLastFrameRenderer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9150))
// CS Name: OVR.OpenVR.IVRCompositor::_GetLastFrameRenderer
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer(____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer(____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer& operator=(____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer& operator=(____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264fa20 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264fadc size 0x14 virtual true final false
 uint32_t Invoke() ;

/// @brief Method BeginInvoke addr 0x264faf0 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264fb10 size 0x28 virtual true final false
 uint32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CanRenderScene
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9151))
// CS Name: OVR.OpenVR.IVRCompositor::_CanRenderScene
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___CanRenderScene : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___CanRenderScene() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CanRenderScene", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CanRenderScene(____OVR__OpenVR__IVRCompositor___CanRenderScene const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CanRenderScene", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CanRenderScene(____OVR__OpenVR__IVRCompositor___CanRenderScene&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___CanRenderScene(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___CanRenderScene& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CanRenderScene& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CanRenderScene& operator=(____OVR__OpenVR__IVRCompositor___CanRenderScene&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___CanRenderScene& operator=(____OVR__OpenVR__IVRCompositor___CanRenderScene const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___CanRenderScene(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264fb38 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264fbf4 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x264fc08 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264fc28 size 0x28 virtual true final false
 bool EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowMirrorWindow
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9152))
// CS Name: OVR.OpenVR.IVRCompositor::_ShowMirrorWindow
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ShowMirrorWindow() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ShowMirrorWindow", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow(____OVR__OpenVR__IVRCompositor___ShowMirrorWindow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ShowMirrorWindow", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow(____OVR__OpenVR__IVRCompositor___ShowMirrorWindow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow& operator=(____OVR__OpenVR__IVRCompositor___ShowMirrorWindow&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow& operator=(____OVR__OpenVR__IVRCompositor___ShowMirrorWindow const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ShowMirrorWindow(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264fc50 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264fd0c size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264fd20 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264fd40 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_HideMirrorWindow
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9153))
// CS Name: OVR.OpenVR.IVRCompositor::_HideMirrorWindow
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___HideMirrorWindow : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___HideMirrorWindow() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___HideMirrorWindow", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___HideMirrorWindow(____OVR__OpenVR__IVRCompositor___HideMirrorWindow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___HideMirrorWindow", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___HideMirrorWindow(____OVR__OpenVR__IVRCompositor___HideMirrorWindow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___HideMirrorWindow(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___HideMirrorWindow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___HideMirrorWindow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___HideMirrorWindow& operator=(____OVR__OpenVR__IVRCompositor___HideMirrorWindow&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___HideMirrorWindow& operator=(____OVR__OpenVR__IVRCompositor___HideMirrorWindow const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___HideMirrorWindow(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264fd4c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264fe08 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x264fe1c size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264fe3c size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_IsMirrorWindowVisible
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9154))
// CS Name: OVR.OpenVR.IVRCompositor::_IsMirrorWindowVisible
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible(____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible(____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible& operator=(____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible& operator=(____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264fe48 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x264ff04 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x264ff18 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x264ff38 size 0x28 virtual true final false
 bool EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_CompositorDumpImages
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9155))
// CS Name: OVR.OpenVR.IVRCompositor::_CompositorDumpImages
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___CompositorDumpImages : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___CompositorDumpImages() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorDumpImages", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorDumpImages(____OVR__OpenVR__IVRCompositor___CompositorDumpImages const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___CompositorDumpImages", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___CompositorDumpImages(____OVR__OpenVR__IVRCompositor___CompositorDumpImages&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___CompositorDumpImages(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___CompositorDumpImages& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorDumpImages& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___CompositorDumpImages& operator=(____OVR__OpenVR__IVRCompositor___CompositorDumpImages&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___CompositorDumpImages& operator=(____OVR__OpenVR__IVRCompositor___CompositorDumpImages const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___CompositorDumpImages(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x264ff60 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265001c size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x2650030 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2650050 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShouldAppRenderWithLowResources
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9156))
// CS Name: OVR.OpenVR.IVRCompositor::_ShouldAppRenderWithLowResources
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources(____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources(____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources& operator=(____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources& operator=(____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265005c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650118 size 0x14 virtual true final false
 bool Invoke() ;

/// @brief Method BeginInvoke addr 0x265012c size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265014c size 0x28 virtual true final false
 bool EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ForceInterleavedReprojectionOn
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9157))
// CS Name: OVR.OpenVR.IVRCompositor::_ForceInterleavedReprojectionOn
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn(____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn(____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn& operator=(____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn& operator=(____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2650174 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650238 size 0x18 virtual true final false
 void Invoke(bool bOverride) ;

/// @brief Method BeginInvoke addr 0x2650250 size 0x88 virtual true final false
 ::System::IAsyncResult BeginInvoke(bool bOverride, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26502d8 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ForceReconnectProcess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9158))
// CS Name: OVR.OpenVR.IVRCompositor::_ForceReconnectProcess
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ForceReconnectProcess() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ForceReconnectProcess", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess(____OVR__OpenVR__IVRCompositor___ForceReconnectProcess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ForceReconnectProcess", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess(____OVR__OpenVR__IVRCompositor___ForceReconnectProcess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess& operator=(____OVR__OpenVR__IVRCompositor___ForceReconnectProcess&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess& operator=(____OVR__OpenVR__IVRCompositor___ForceReconnectProcess const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ForceReconnectProcess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26502e4 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26503a0 size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x26503b4 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26503d4 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SuspendRendering
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9159))
// CS Name: OVR.OpenVR.IVRCompositor::_SuspendRendering
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___SuspendRendering : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___SuspendRendering() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SuspendRendering", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SuspendRendering(____OVR__OpenVR__IVRCompositor___SuspendRendering const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SuspendRendering", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SuspendRendering(____OVR__OpenVR__IVRCompositor___SuspendRendering&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___SuspendRendering(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___SuspendRendering& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SuspendRendering& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SuspendRendering& operator=(____OVR__OpenVR__IVRCompositor___SuspendRendering&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___SuspendRendering& operator=(____OVR__OpenVR__IVRCompositor___SuspendRendering const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___SuspendRendering(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26503e0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26504a4 size 0x18 virtual true final false
 void Invoke(bool bSuspend) ;

/// @brief Method BeginInvoke addr 0x26504bc size 0x88 virtual true final false
 ::System::IAsyncResult BeginInvoke(bool bSuspend, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2650544 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetMirrorTextureD3D11
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9160))
// CS Name: OVR.OpenVR.IVRCompositor::_GetMirrorTextureD3D11
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11(____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11(____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11& operator=(____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11& operator=(____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2650550 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650614 size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView) ;

/// @brief Method BeginInvoke addr 0x2650628 size 0xd0 virtual true final false
 ::System::IAsyncResult BeginInvoke(::OVR::OpenVR::EVREye eEye, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26506f8 size 0x2c virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ReleaseMirrorTextureD3D11
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9161))
// CS Name: OVR.OpenVR.IVRCompositor::_ReleaseMirrorTextureD3D11
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11(____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11(____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11& operator=(____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11& operator=(____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2650724 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26507e8 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t pD3D11ShaderResourceView) ;

/// @brief Method BeginInvoke addr 0x26507fc size 0x84 virtual true final false
 ::System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t pD3D11ShaderResourceView, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2650880 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetMirrorTextureGL
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9162))
// CS Name: OVR.OpenVR.IVRCompositor::_GetMirrorTextureGL
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL(____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL(____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL& operator=(____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL& operator=(____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265088c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650950 size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, ::cordl_internals::intptr_t pglSharedTextureHandle) ;

/// @brief Method BeginInvoke addr 0x2650964 size 0xe8 virtual true final false
 ::System::IAsyncResult BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, ::cordl_internals::intptr_t pglSharedTextureHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2650a4c size 0x2c virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<uint32_t> pglTextureId, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ReleaseSharedGLTexture
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9163))
// CS Name: OVR.OpenVR.IVRCompositor::_ReleaseSharedGLTexture
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture(____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture(____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture& operator=(____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture& operator=(____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2650a78 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650b3c size 0x14 virtual true final false
 bool Invoke(uint32_t glTextureId, ::cordl_internals::intptr_t glSharedTextureHandle) ;

/// @brief Method BeginInvoke addr 0x2650b50 size 0xb4 virtual true final false
 ::System::IAsyncResult BeginInvoke(uint32_t glTextureId, ::cordl_internals::intptr_t glSharedTextureHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2650c04 size 0x28 virtual true final false
 bool EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_LockGLSharedTextureForAccess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9164))
// CS Name: OVR.OpenVR.IVRCompositor::_LockGLSharedTextureForAccess
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess(____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess(____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess& operator=(____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess& operator=(____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2650c2c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650cf0 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t glSharedTextureHandle) ;

/// @brief Method BeginInvoke addr 0x2650d04 size 0x84 virtual true final false
 ::System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t glSharedTextureHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2650d88 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_UnlockGLSharedTextureForAccess
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9165))
// CS Name: OVR.OpenVR.IVRCompositor::_UnlockGLSharedTextureForAccess
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess(____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess(____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess& operator=(____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess& operator=(____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2650d94 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650e58 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t glSharedTextureHandle) ;

/// @brief Method BeginInvoke addr 0x2650e6c size 0x84 virtual true final false
 ::System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t glSharedTextureHandle, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2650ef0 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetVulkanInstanceExtensionsRequired
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9166))
// CS Name: OVR.OpenVR.IVRCompositor::_GetVulkanInstanceExtensionsRequired
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired(____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired(____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired& operator=(____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired& operator=(____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2650efc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2650fd4 size 0x14 virtual true final false
 uint32_t Invoke(::System::Text::StringBuilder pchValue, uint32_t unBufferSize) ;

/// @brief Method BeginInvoke addr 0x2650fe8 size 0x94 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265107c size 0x28 virtual true final false
 uint32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetVulkanDeviceExtensionsRequired
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9167))
// CS Name: OVR.OpenVR.IVRCompositor::_GetVulkanDeviceExtensionsRequired
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired(____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired(____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired& operator=(____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired& operator=(____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26510a4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2651168 size 0x14 virtual true final false
 uint32_t Invoke(::cordl_internals::intptr_t pPhysicalDevice, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize) ;

/// @brief Method BeginInvoke addr 0x265117c size 0xbc virtual true final false
 ::System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t pPhysicalDevice, ::System::Text::StringBuilder pchValue, uint32_t unBufferSize, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2651238 size 0x28 virtual true final false
 uint32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SetExplicitTimingMode
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9168))
// CS Name: OVR.OpenVR.IVRCompositor::_SetExplicitTimingMode
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode(____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode(____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode& operator=(____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode& operator=(____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2651260 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2651324 size 0x14 virtual true final false
 void Invoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode) ;

/// @brief Method BeginInvoke addr 0x2651338 size 0x84 virtual true final false
 ::System::IAsyncResult BeginInvoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26513bc size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_SubmitExplicitTimingData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9169))
// CS Name: OVR.OpenVR.IVRCompositor::_SubmitExplicitTimingData
class CORDL_TYPE ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData", modifiers: " const&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData(____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData", modifiers: "&&", def_value: None }]
constexpr ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData(____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData& operator=(____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData&& o) noexcept = default;
  constexpr ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData& operator=(____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26513c8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2651484 size 0x14 virtual true final false
 ::OVR::OpenVR::EVRCompositorError Invoke() ;

/// @brief Method BeginInvoke addr 0x2651498 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26514b8 size 0x28 virtual true final false
 ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRCompositor
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9170))
// CS Name: OVR.OpenVR.IVRCompositor
struct CORDL_TYPE IVRCompositor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _SubmitExplicitTimingData = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData;

using _SetExplicitTimingMode = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode;

using _GetVulkanDeviceExtensionsRequired = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired;

using _GetVulkanInstanceExtensionsRequired = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired;

using _UnlockGLSharedTextureForAccess = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess;

using _LockGLSharedTextureForAccess = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess;

using _ReleaseSharedGLTexture = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture;

using _GetMirrorTextureGL = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL;

using _ReleaseMirrorTextureD3D11 = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11;

using _GetMirrorTextureD3D11 = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11;

using _SuspendRendering = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering;

using _ForceReconnectProcess = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess;

using _ForceInterleavedReprojectionOn = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn;

using _ShouldAppRenderWithLowResources = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources;

using _CompositorDumpImages = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages;

using _IsMirrorWindowVisible = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible;

using _HideMirrorWindow = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow;

using _ShowMirrorWindow = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow;

using _CanRenderScene = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene;

using _GetLastFrameRenderer = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer;

using _GetCurrentSceneFocusProcess = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess;

using _IsFullscreen = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen;

using _CompositorQuit = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit;

using _CompositorGoToBack = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack;

using _CompositorBringToFront = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront;

using _ClearSkyboxOverride = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride;

using _SetSkyboxOverride = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride;

using _GetCurrentGridAlpha = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha;

using _FadeGrid = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid;

using _GetCurrentFadeColor = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor;

using _FadeToColor = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor;

using _GetCumulativeStats = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats;

using _GetFrameTimeRemaining = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining;

using _GetFrameTimings = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings;

using _GetFrameTiming = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming;

using _PostPresentHandoff = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff;

using _ClearLastSubmittedFrame = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame;

using _Submit = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit;

using _GetLastPoseForTrackedDeviceIndex = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex;

using _GetLastPoses = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses;

using _WaitGetPoses = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses;

using _GetTrackingSpace = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace;

using _SetTrackingSpace = ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace;

// Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace", modifiers: "", def_value: None }, CppParam { name: "GetTrackingSpace", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace", modifiers: "", def_value: None }, CppParam { name: "WaitGetPoses", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses", modifiers: "", def_value: None }, CppParam { name: "GetLastPoses", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses", modifiers: "", def_value: None }, CppParam { name: "GetLastPoseForTrackedDeviceIndex", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex", modifiers: "", def_value: None }, CppParam { name: "Submit", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit", modifiers: "", def_value: None }, CppParam { name: "ClearLastSubmittedFrame", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame", modifiers: "", def_value: None }, CppParam { name: "PostPresentHandoff", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff", modifiers: "", def_value: None }, CppParam { name: "GetFrameTiming", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming", modifiers: "", def_value: None }, CppParam { name: "GetFrameTimings", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings", modifiers: "", def_value: None }, CppParam { name: "GetFrameTimeRemaining", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining", modifiers: "", def_value: None }, CppParam { name: "GetCumulativeStats", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats", modifiers: "", def_value: None }, CppParam { name: "FadeToColor", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor", modifiers: "", def_value: None }, CppParam { name: "GetCurrentFadeColor", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor", modifiers: "", def_value: None }, CppParam { name: "FadeGrid", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid", modifiers: "", def_value: None }, CppParam { name: "GetCurrentGridAlpha", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha", modifiers: "", def_value: None }, CppParam { name: "SetSkyboxOverride", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride", modifiers: "", def_value: None }, CppParam { name: "ClearSkyboxOverride", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride", modifiers: "", def_value: None }, CppParam { name: "CompositorBringToFront", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront", modifiers: "", def_value: None }, CppParam { name: "CompositorGoToBack", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack", modifiers: "", def_value: None }, CppParam { name: "CompositorQuit", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit", modifiers: "", def_value: None }, CppParam { name: "IsFullscreen", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen", modifiers: "", def_value: None }, CppParam { name: "GetCurrentSceneFocusProcess", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess", modifiers: "", def_value: None }, CppParam { name: "GetLastFrameRenderer", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer", modifiers: "", def_value: None }, CppParam { name: "CanRenderScene", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene", modifiers: "", def_value: None }, CppParam { name: "ShowMirrorWindow", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow", modifiers: "", def_value: None }, CppParam { name: "HideMirrorWindow", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow", modifiers: "", def_value: None }, CppParam { name: "IsMirrorWindowVisible", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible", modifiers: "", def_value: None }, CppParam { name: "CompositorDumpImages", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages", modifiers: "", def_value: None }, CppParam { name: "ShouldAppRenderWithLowResources", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources", modifiers: "", def_value: None }, CppParam { name: "ForceInterleavedReprojectionOn", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn", modifiers: "", def_value: None }, CppParam { name: "ForceReconnectProcess", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess", modifiers: "", def_value: None }, CppParam { name: "SuspendRendering", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering", modifiers: "", def_value: None }, CppParam { name: "GetMirrorTextureD3D11", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11", modifiers: "", def_value: None }, CppParam { name: "ReleaseMirrorTextureD3D11", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11", modifiers: "", def_value: None }, CppParam { name: "GetMirrorTextureGL", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL", modifiers: "", def_value: None }, CppParam { name: "ReleaseSharedGLTexture", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture", modifiers: "", def_value: None }, CppParam { name: "LockGLSharedTextureForAccess", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess", modifiers: "", def_value: None }, CppParam { name: "UnlockGLSharedTextureForAccess", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess", modifiers: "", def_value: None }, CppParam { name: "GetVulkanInstanceExtensionsRequired", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired", modifiers: "", def_value: None }, CppParam { name: "GetVulkanDeviceExtensionsRequired", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired", modifiers: "", def_value: None }, CppParam { name: "SetExplicitTimingMode", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode", modifiers: "", def_value: None }, CppParam { name: "SubmitExplicitTimingData", ty: "::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData", modifiers: "", def_value: None }]
constexpr IVRCompositor(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace SetTrackingSpace, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace GetTrackingSpace, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses WaitGetPoses, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses GetLastPoses, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex GetLastPoseForTrackedDeviceIndex, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit Submit, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame ClearLastSubmittedFrame, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff PostPresentHandoff, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming GetFrameTiming, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings GetFrameTimings, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining GetFrameTimeRemaining, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats GetCumulativeStats, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor FadeToColor, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor GetCurrentFadeColor, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid FadeGrid, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha GetCurrentGridAlpha, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride SetSkyboxOverride, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride ClearSkyboxOverride, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront CompositorBringToFront, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack CompositorGoToBack, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit CompositorQuit, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen IsFullscreen, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess GetCurrentSceneFocusProcess, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer GetLastFrameRenderer, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene CanRenderScene, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow ShowMirrorWindow, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow HideMirrorWindow, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible IsMirrorWindowVisible, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages CompositorDumpImages, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources ShouldAppRenderWithLowResources, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn ForceInterleavedReprojectionOn, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess ForceReconnectProcess, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering SuspendRendering, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 GetMirrorTextureD3D11, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 ReleaseMirrorTextureD3D11, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL GetMirrorTextureGL, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture ReleaseSharedGLTexture, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess LockGLSharedTextureForAccess, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess UnlockGLSharedTextureForAccess, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired GetVulkanInstanceExtensionsRequired, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired GetVulkanDeviceExtensionsRequired, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode SetExplicitTimingMode, ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData SubmitExplicitTimingData) noexcept;


                    constexpr IVRCompositor(IVRCompositor const&) = default;
                    constexpr IVRCompositor(IVRCompositor&&) = default;
                    constexpr IVRCompositor& operator=(IVRCompositor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRCompositor& operator=(IVRCompositor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x158};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRCompositor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace __declspec(property(get=__get_SetTrackingSpace, put=__set_SetTrackingSpace))  SetTrackingSpace;

constexpr void __set_SetTrackingSpace(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace __get_SetTrackingSpace() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace __declspec(property(get=__get_GetTrackingSpace, put=__set_GetTrackingSpace))  GetTrackingSpace;

constexpr void __set_GetTrackingSpace(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace __get_GetTrackingSpace() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses __declspec(property(get=__get_WaitGetPoses, put=__set_WaitGetPoses))  WaitGetPoses;

constexpr void __set_WaitGetPoses(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses __get_WaitGetPoses() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses __declspec(property(get=__get_GetLastPoses, put=__set_GetLastPoses))  GetLastPoses;

constexpr void __set_GetLastPoses(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses __get_GetLastPoses() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex __declspec(property(get=__get_GetLastPoseForTrackedDeviceIndex, put=__set_GetLastPoseForTrackedDeviceIndex))  GetLastPoseForTrackedDeviceIndex;

constexpr void __set_GetLastPoseForTrackedDeviceIndex(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex __get_GetLastPoseForTrackedDeviceIndex() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit __declspec(property(get=__get_Submit, put=__set_Submit))  Submit;

constexpr void __set_Submit(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit __get_Submit() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame __declspec(property(get=__get_ClearLastSubmittedFrame, put=__set_ClearLastSubmittedFrame))  ClearLastSubmittedFrame;

constexpr void __set_ClearLastSubmittedFrame(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame __get_ClearLastSubmittedFrame() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff __declspec(property(get=__get_PostPresentHandoff, put=__set_PostPresentHandoff))  PostPresentHandoff;

constexpr void __set_PostPresentHandoff(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff __get_PostPresentHandoff() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming __declspec(property(get=__get_GetFrameTiming, put=__set_GetFrameTiming))  GetFrameTiming;

constexpr void __set_GetFrameTiming(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming __get_GetFrameTiming() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings __declspec(property(get=__get_GetFrameTimings, put=__set_GetFrameTimings))  GetFrameTimings;

constexpr void __set_GetFrameTimings(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings __get_GetFrameTimings() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining __declspec(property(get=__get_GetFrameTimeRemaining, put=__set_GetFrameTimeRemaining))  GetFrameTimeRemaining;

constexpr void __set_GetFrameTimeRemaining(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining __get_GetFrameTimeRemaining() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats __declspec(property(get=__get_GetCumulativeStats, put=__set_GetCumulativeStats))  GetCumulativeStats;

constexpr void __set_GetCumulativeStats(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats __get_GetCumulativeStats() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor __declspec(property(get=__get_FadeToColor, put=__set_FadeToColor))  FadeToColor;

constexpr void __set_FadeToColor(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor __get_FadeToColor() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor __declspec(property(get=__get_GetCurrentFadeColor, put=__set_GetCurrentFadeColor))  GetCurrentFadeColor;

constexpr void __set_GetCurrentFadeColor(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor __get_GetCurrentFadeColor() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid __declspec(property(get=__get_FadeGrid, put=__set_FadeGrid))  FadeGrid;

constexpr void __set_FadeGrid(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid __get_FadeGrid() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha __declspec(property(get=__get_GetCurrentGridAlpha, put=__set_GetCurrentGridAlpha))  GetCurrentGridAlpha;

constexpr void __set_GetCurrentGridAlpha(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha __get_GetCurrentGridAlpha() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride __declspec(property(get=__get_SetSkyboxOverride, put=__set_SetSkyboxOverride))  SetSkyboxOverride;

constexpr void __set_SetSkyboxOverride(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride __get_SetSkyboxOverride() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride __declspec(property(get=__get_ClearSkyboxOverride, put=__set_ClearSkyboxOverride))  ClearSkyboxOverride;

constexpr void __set_ClearSkyboxOverride(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride __get_ClearSkyboxOverride() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront __declspec(property(get=__get_CompositorBringToFront, put=__set_CompositorBringToFront))  CompositorBringToFront;

constexpr void __set_CompositorBringToFront(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront __get_CompositorBringToFront() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack __declspec(property(get=__get_CompositorGoToBack, put=__set_CompositorGoToBack))  CompositorGoToBack;

constexpr void __set_CompositorGoToBack(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack __get_CompositorGoToBack() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit __declspec(property(get=__get_CompositorQuit, put=__set_CompositorQuit))  CompositorQuit;

constexpr void __set_CompositorQuit(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit __get_CompositorQuit() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen __declspec(property(get=__get_IsFullscreen, put=__set_IsFullscreen))  IsFullscreen;

constexpr void __set_IsFullscreen(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen __get_IsFullscreen() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess __declspec(property(get=__get_GetCurrentSceneFocusProcess, put=__set_GetCurrentSceneFocusProcess))  GetCurrentSceneFocusProcess;

constexpr void __set_GetCurrentSceneFocusProcess(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess __get_GetCurrentSceneFocusProcess() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer __declspec(property(get=__get_GetLastFrameRenderer, put=__set_GetLastFrameRenderer))  GetLastFrameRenderer;

constexpr void __set_GetLastFrameRenderer(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer __get_GetLastFrameRenderer() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene __declspec(property(get=__get_CanRenderScene, put=__set_CanRenderScene))  CanRenderScene;

constexpr void __set_CanRenderScene(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene __get_CanRenderScene() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow __declspec(property(get=__get_ShowMirrorWindow, put=__set_ShowMirrorWindow))  ShowMirrorWindow;

constexpr void __set_ShowMirrorWindow(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow __get_ShowMirrorWindow() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow __declspec(property(get=__get_HideMirrorWindow, put=__set_HideMirrorWindow))  HideMirrorWindow;

constexpr void __set_HideMirrorWindow(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow __get_HideMirrorWindow() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible __declspec(property(get=__get_IsMirrorWindowVisible, put=__set_IsMirrorWindowVisible))  IsMirrorWindowVisible;

constexpr void __set_IsMirrorWindowVisible(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible __get_IsMirrorWindowVisible() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages __declspec(property(get=__get_CompositorDumpImages, put=__set_CompositorDumpImages))  CompositorDumpImages;

constexpr void __set_CompositorDumpImages(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages __get_CompositorDumpImages() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources __declspec(property(get=__get_ShouldAppRenderWithLowResources, put=__set_ShouldAppRenderWithLowResources))  ShouldAppRenderWithLowResources;

constexpr void __set_ShouldAppRenderWithLowResources(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources __get_ShouldAppRenderWithLowResources() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn __declspec(property(get=__get_ForceInterleavedReprojectionOn, put=__set_ForceInterleavedReprojectionOn))  ForceInterleavedReprojectionOn;

constexpr void __set_ForceInterleavedReprojectionOn(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn __get_ForceInterleavedReprojectionOn() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess __declspec(property(get=__get_ForceReconnectProcess, put=__set_ForceReconnectProcess))  ForceReconnectProcess;

constexpr void __set_ForceReconnectProcess(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess __get_ForceReconnectProcess() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering __declspec(property(get=__get_SuspendRendering, put=__set_SuspendRendering))  SuspendRendering;

constexpr void __set_SuspendRendering(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering __get_SuspendRendering() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 __declspec(property(get=__get_GetMirrorTextureD3D11, put=__set_GetMirrorTextureD3D11))  GetMirrorTextureD3D11;

constexpr void __set_GetMirrorTextureD3D11(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11 __get_GetMirrorTextureD3D11() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 __declspec(property(get=__get_ReleaseMirrorTextureD3D11, put=__set_ReleaseMirrorTextureD3D11))  ReleaseMirrorTextureD3D11;

constexpr void __set_ReleaseMirrorTextureD3D11(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11 __get_ReleaseMirrorTextureD3D11() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL __declspec(property(get=__get_GetMirrorTextureGL, put=__set_GetMirrorTextureGL))  GetMirrorTextureGL;

constexpr void __set_GetMirrorTextureGL(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL __get_GetMirrorTextureGL() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture __declspec(property(get=__get_ReleaseSharedGLTexture, put=__set_ReleaseSharedGLTexture))  ReleaseSharedGLTexture;

constexpr void __set_ReleaseSharedGLTexture(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture __get_ReleaseSharedGLTexture() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess __declspec(property(get=__get_LockGLSharedTextureForAccess, put=__set_LockGLSharedTextureForAccess))  LockGLSharedTextureForAccess;

constexpr void __set_LockGLSharedTextureForAccess(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess __get_LockGLSharedTextureForAccess() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess __declspec(property(get=__get_UnlockGLSharedTextureForAccess, put=__set_UnlockGLSharedTextureForAccess))  UnlockGLSharedTextureForAccess;

constexpr void __set_UnlockGLSharedTextureForAccess(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess __get_UnlockGLSharedTextureForAccess() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired __declspec(property(get=__get_GetVulkanInstanceExtensionsRequired, put=__set_GetVulkanInstanceExtensionsRequired))  GetVulkanInstanceExtensionsRequired;

constexpr void __set_GetVulkanInstanceExtensionsRequired(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired __get_GetVulkanInstanceExtensionsRequired() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired __declspec(property(get=__get_GetVulkanDeviceExtensionsRequired, put=__set_GetVulkanDeviceExtensionsRequired))  GetVulkanDeviceExtensionsRequired;

constexpr void __set_GetVulkanDeviceExtensionsRequired(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired __get_GetVulkanDeviceExtensionsRequired() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode __declspec(property(get=__get_SetExplicitTimingMode, put=__set_SetExplicitTimingMode))  SetExplicitTimingMode;

constexpr void __set_SetExplicitTimingMode(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode __get_SetExplicitTimingMode() const;

 ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData __declspec(property(get=__get_SubmitExplicitTimingData, put=__set_SubmitExplicitTimingData))  SubmitExplicitTimingData;

constexpr void __set_SubmitExplicitTimingData(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData value) ;

constexpr ::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData __get_SubmitExplicitTimingData() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CanRenderScene, "OVR.OpenVR", "IVRCompositor/_CanRenderScene");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearLastSubmittedFrame, "OVR.OpenVR", "IVRCompositor/_ClearLastSubmittedFrame");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ClearSkyboxOverride, "OVR.OpenVR", "IVRCompositor/_ClearSkyboxOverride");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorBringToFront, "OVR.OpenVR", "IVRCompositor/_CompositorBringToFront");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorDumpImages, "OVR.OpenVR", "IVRCompositor/_CompositorDumpImages");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorGoToBack, "OVR.OpenVR", "IVRCompositor/_CompositorGoToBack");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___CompositorQuit, "OVR.OpenVR", "IVRCompositor/_CompositorQuit");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeGrid, "OVR.OpenVR", "IVRCompositor/_FadeGrid");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___FadeToColor, "OVR.OpenVR", "IVRCompositor/_FadeToColor");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceInterleavedReprojectionOn, "OVR.OpenVR", "IVRCompositor/_ForceInterleavedReprojectionOn");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ForceReconnectProcess, "OVR.OpenVR", "IVRCompositor/_ForceReconnectProcess");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCumulativeStats, "OVR.OpenVR", "IVRCompositor/_GetCumulativeStats");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentFadeColor, "OVR.OpenVR", "IVRCompositor/_GetCurrentFadeColor");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentGridAlpha, "OVR.OpenVR", "IVRCompositor/_GetCurrentGridAlpha");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetCurrentSceneFocusProcess, "OVR.OpenVR", "IVRCompositor/_GetCurrentSceneFocusProcess");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimeRemaining, "OVR.OpenVR", "IVRCompositor/_GetFrameTimeRemaining");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTiming, "OVR.OpenVR", "IVRCompositor/_GetFrameTiming");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetFrameTimings, "OVR.OpenVR", "IVRCompositor/_GetFrameTimings");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastFrameRenderer, "OVR.OpenVR", "IVRCompositor/_GetLastFrameRenderer");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoseForTrackedDeviceIndex, "OVR.OpenVR", "IVRCompositor/_GetLastPoseForTrackedDeviceIndex");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetLastPoses, "OVR.OpenVR", "IVRCompositor/_GetLastPoses");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureD3D11, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetMirrorTextureGL, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureGL");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetTrackingSpace, "OVR.OpenVR", "IVRCompositor/_GetTrackingSpace");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanDeviceExtensionsRequired, "OVR.OpenVR", "IVRCompositor/_GetVulkanDeviceExtensionsRequired");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___GetVulkanInstanceExtensionsRequired, "OVR.OpenVR", "IVRCompositor/_GetVulkanInstanceExtensionsRequired");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___HideMirrorWindow, "OVR.OpenVR", "IVRCompositor/_HideMirrorWindow");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsFullscreen, "OVR.OpenVR", "IVRCompositor/_IsFullscreen");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___IsMirrorWindowVisible, "OVR.OpenVR", "IVRCompositor/_IsMirrorWindowVisible");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___LockGLSharedTextureForAccess, "OVR.OpenVR", "IVRCompositor/_LockGLSharedTextureForAccess");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___PostPresentHandoff, "OVR.OpenVR", "IVRCompositor/_PostPresentHandoff");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseMirrorTextureD3D11, "OVR.OpenVR", "IVRCompositor/_ReleaseMirrorTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ReleaseSharedGLTexture, "OVR.OpenVR", "IVRCompositor/_ReleaseSharedGLTexture");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetExplicitTimingMode, "OVR.OpenVR", "IVRCompositor/_SetExplicitTimingMode");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetSkyboxOverride, "OVR.OpenVR", "IVRCompositor/_SetSkyboxOverride");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SetTrackingSpace, "OVR.OpenVR", "IVRCompositor/_SetTrackingSpace");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShouldAppRenderWithLowResources, "OVR.OpenVR", "IVRCompositor/_ShouldAppRenderWithLowResources");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___ShowMirrorWindow, "OVR.OpenVR", "IVRCompositor/_ShowMirrorWindow");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___Submit, "OVR.OpenVR", "IVRCompositor/_Submit");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SubmitExplicitTimingData, "OVR.OpenVR", "IVRCompositor/_SubmitExplicitTimingData");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___SuspendRendering, "OVR.OpenVR", "IVRCompositor/_SuspendRendering");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___UnlockGLSharedTextureForAccess, "OVR.OpenVR", "IVRCompositor/_UnlockGLSharedTextureForAccess");
NEED_NO_BOX(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::____OVR__OpenVR__IVRCompositor___WaitGetPoses, "OVR.OpenVR", "IVRCompositor/_WaitGetPoses");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor, "OVR.OpenVR", "IVRCompositor");
