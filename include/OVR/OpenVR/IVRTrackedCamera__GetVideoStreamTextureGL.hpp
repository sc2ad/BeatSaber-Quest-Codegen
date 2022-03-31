// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL*, "OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamTextureGL");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetVideoStreamTextureGL
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1202690
  class IVRTrackedCamera::_GetVideoStreamTextureGL : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1616C28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetVideoStreamTextureGL* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureGL*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1616C38
    ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint> pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1616F0C
    ::System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint> pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref System.UInt32 pglTextureId, ref OVR.OpenVR.CameraVideoStreamFrameHeader_t pFrameHeader, System.IAsyncResult result)
    // Offset: 0x1617014
    ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<uint> pglTextureId, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetVideoStreamTextureGL
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<uint>, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint)>(&OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::Invoke)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::*)(uint64_t, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<uint>, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::*)(ByRef<uint>, ByRef<::OVR::OpenVR::CameraVideoStreamFrameHeader_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamTextureGL*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pglTextureId, pFrameHeader, result});
  }
};
