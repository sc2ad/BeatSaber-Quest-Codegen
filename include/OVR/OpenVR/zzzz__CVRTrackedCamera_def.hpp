#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct IVRTrackedCamera;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRTrackedCamera;
}
// Type: OVR.OpenVR::CVRTrackedCamera
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9343))
// CS Name: OVR.OpenVR.CVRTrackedCamera
class CORDL_TYPE CVRTrackedCamera : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~CVRTrackedCamera() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRTrackedCamera", modifiers: " const&", def_value: None }]
constexpr CVRTrackedCamera(CVRTrackedCamera const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRTrackedCamera", modifiers: "&&", def_value: None }]
constexpr CVRTrackedCamera(CVRTrackedCamera&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRTrackedCamera(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRTrackedCamera& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRTrackedCamera& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRTrackedCamera& operator=(CVRTrackedCamera&& o) noexcept = default;
  constexpr CVRTrackedCamera& operator=(CVRTrackedCamera const& o) noexcept = default;
                


// Fields

 ::OVR::OpenVR::IVRTrackedCamera __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRTrackedCamera value) ;

constexpr ::OVR::OpenVR::IVRTrackedCamera __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRTrackedCamera(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2664708 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method GetCameraErrorNameFromEnum addr 0x266481c size 0x84 virtual false final false
 ::StringW GetCameraErrorNameFromEnum(::OVR::OpenVR::EVRTrackedCameraError eCameraError) ;

/// @brief Method HasCamera addr 0x26648a0 size 0x28 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError HasCamera(uint32_t nDeviceIndex, ByRef<bool> pHasCamera) ;

/// @brief Method GetCameraFrameSize addr 0x26648c8 size 0x30 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError GetCameraFrameSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ByRef<uint32_t> pnFrameBufferSize) ;

/// @brief Method GetCameraIntrinsics addr 0x26648f8 size 0x24 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError GetCameraIntrinsics(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t> pCenter) ;

/// @brief Method GetCameraProjection addr 0x266491c size 0x24 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError GetCameraProjection(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar, ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection) ;

/// @brief Method AcquireVideoStreamingService addr 0x2664940 size 0x28 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError AcquireVideoStreamingService(uint32_t nDeviceIndex, ByRef<uint64_t> pHandle) ;

/// @brief Method ReleaseVideoStreamingService addr 0x2664968 size 0x24 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera) ;

/// @brief Method GetVideoStreamFrameBuffer addr 0x266498c size 0x24 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pFrameBuffer, uint32_t nFrameBufferSize, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) ;

/// @brief Method GetVideoStreamTextureSize addr 0x26649b0 size 0x2c virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureSize(uint32_t nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method GetVideoStreamTextureD3D11 addr 0x26649dc size 0x24 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) ;

/// @brief Method GetVideoStreamTextureGL addr 0x2664a00 size 0x28 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize) ;

/// @brief Method ReleaseVideoStreamTextureGL addr 0x2664a28 size 0x24 virtual false final false
 ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint32_t glTextureId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::CVRTrackedCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRTrackedCamera, "OVR.OpenVR", "CVRTrackedCamera");
