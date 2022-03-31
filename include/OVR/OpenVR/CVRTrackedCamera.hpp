// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRTrackedCamera
  class CVRTrackedCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRTrackedCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRTrackedCamera*, "OVR.OpenVR", "CVRTrackedCamera");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRTrackedCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRTrackedCamera : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private OVR.OpenVR.IVRTrackedCamera FnTable
    // Size: 0x60
    // Offset: 0x10
    ::OVR::OpenVR::IVRTrackedCamera FnTable;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRTrackedCamera) == 0x60);
    public:
    // Creating conversion operator: operator ::OVR::OpenVR::IVRTrackedCamera
    constexpr operator ::OVR::OpenVR::IVRTrackedCamera() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRTrackedCamera FnTable
    ::OVR::OpenVR::IVRTrackedCamera& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1A62C6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRTrackedCamera* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRTrackedCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRTrackedCamera*, creationType>(pInterface)));
    }
    // public System.String GetCameraErrorNameFromEnum(OVR.OpenVR.EVRTrackedCameraError eCameraError)
    // Offset: 0x1A62D74
    ::StringW GetCameraErrorNameFromEnum(::OVR::OpenVR::EVRTrackedCameraError eCameraError);
    // public OVR.OpenVR.EVRTrackedCameraError HasCamera(System.UInt32 nDeviceIndex, ref System.Boolean pHasCamera)
    // Offset: 0x1A62E08
    ::OVR::OpenVR::EVRTrackedCameraError HasCamera(uint nDeviceIndex, ByRef<bool> pHasCamera);
    // public OVR.OpenVR.EVRTrackedCameraError GetCameraFrameSize(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize)
    // Offset: 0x1A62E28
    ::OVR::OpenVR::EVRTrackedCameraError GetCameraFrameSize(uint nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint> pnWidth, ByRef<uint> pnHeight, ByRef<uint> pnFrameBufferSize);
    // public OVR.OpenVR.EVRTrackedCameraError GetCameraIntrinsics(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.HmdVector2_t pFocalLength, ref OVR.OpenVR.HmdVector2_t pCenter)
    // Offset: 0x1A62E50
    ::OVR::OpenVR::EVRTrackedCameraError GetCameraIntrinsics(uint nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t> pCenter);
    // public OVR.OpenVR.EVRTrackedCameraError GetCameraProjection(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref OVR.OpenVR.HmdMatrix44_t pProjection)
    // Offset: 0x1A62E6C
    ::OVR::OpenVR::EVRTrackedCameraError GetCameraProjection(uint nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, ByRef<::OVR::OpenVR::HmdMatrix44_t> pProjection);
    // public OVR.OpenVR.EVRTrackedCameraError AcquireVideoStreamingService(System.UInt32 nDeviceIndex, ref System.UInt64 pHandle)
    // Offset: 0x1A62E88
    ::OVR::OpenVR::EVRTrackedCameraError AcquireVideoStreamingService(uint nDeviceIndex, ByRef<uint64_t> pHandle);
    // public OVR.OpenVR.EVRTrackedCameraError ReleaseVideoStreamingService(System.UInt64 hTrackedCamera)
    // Offset: 0x1A62EA8
    ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamFrameBuffer(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pFrameBuffer, System.UInt32 nFrameBufferSize, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1A62EC4
    ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, uint nFrameBufferSize, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamTextureSize(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1A62EE0
    ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureSize(uint nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamTextureD3D11(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1A62F04
    ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource, ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize);
    // public OVR.OpenVR.EVRTrackedCameraError GetVideoStreamTextureGL(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1A62F20
    ::OVR::OpenVR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint> pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize);
    // public OVR.OpenVR.EVRTrackedCameraError ReleaseVideoStreamTextureGL(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0x1A62F40
    ::OVR::OpenVR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint glTextureId);
  }; // OVR.OpenVR.CVRTrackedCamera
  #pragma pack(pop)
  static check_size<sizeof(CVRTrackedCamera), 16 + sizeof(::OVR::OpenVR::IVRTrackedCamera)> __OVR_OpenVR_CVRTrackedCameraSizeCheck;
  static_assert(sizeof(CVRTrackedCamera) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum
// Il2CppName: GetCameraErrorNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRTrackedCamera::*)(::OVR::OpenVR::EVRTrackedCameraError)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum)> {
  static const MethodInfo* get() {
    static auto* eCameraError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetCameraErrorNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eCameraError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::HasCamera
// Il2CppName: HasCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint, ByRef<bool>)>(&OVR::OpenVR::CVRTrackedCamera::HasCamera)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pHasCamera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "HasCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, pHasCamera});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize
// Il2CppName: GetCameraFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<uint>, ByRef<uint>, ByRef<uint>)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnFrameBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetCameraFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics
// Il2CppName: GetCameraIntrinsics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<::OVR::OpenVR::HmdVector2_t>)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pFocalLength = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* pCenter = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetCameraIntrinsics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pFocalLength, pCenter});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetCameraProjection
// Il2CppName: GetCameraProjection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint, ::OVR::OpenVR::EVRTrackedCameraFrameType, float, float, ByRef<::OVR::OpenVR::HmdMatrix44_t>)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraProjection)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* flZNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flZFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix44_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetCameraProjection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, flZNear, flZFar, pProjection});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService
// Il2CppName: AcquireVideoStreamingService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint, ByRef<uint64_t>)>(&OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "AcquireVideoStreamingService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, pHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService
// Il2CppName: ReleaseVideoStreamingService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t)>(&OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "ReleaseVideoStreamingService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer
// Il2CppName: GetVideoStreamFrameBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, uint, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pFrameBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* nFrameBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetVideoStreamFrameBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize
// Il2CppName: GetVideoStreamTextureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ByRef<uint>, ByRef<uint>)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRTextureBounds_t")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetVideoStreamTextureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11
// Il2CppName: GetVideoStreamTextureD3D11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ::System::IntPtr, ByRef<::System::IntPtr>, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pD3D11DeviceOrResource = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ppD3D11ShaderResourceView = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetVideoStreamTextureD3D11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL
// Il2CppName: GetVideoStreamTextureGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<uint>, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "GetVideoStreamTextureGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL
// Il2CppName: ReleaseVideoStreamTextureGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, uint)>(&OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRTrackedCamera*), "ReleaseVideoStreamTextureGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, glTextureId});
  }
};
