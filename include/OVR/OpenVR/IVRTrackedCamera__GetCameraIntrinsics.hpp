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
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*, "OVR.OpenVR", "IVRTrackedCamera/_GetCameraIntrinsics");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetCameraIntrinsics
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B0D90
  class IVRTrackedCamera::_GetCameraIntrinsics : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1684564
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraIntrinsics* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraIntrinsics*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.HmdVector2_t pFocalLength, ref OVR.OpenVR.HmdVector2_t pCenter)
    // Offset: 0x1684574
    ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t> pCenter);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, OVR.OpenVR.EVRTrackedCameraFrameType eFrameType, ref OVR.OpenVR.HmdVector2_t pFocalLength, ref OVR.OpenVR.HmdVector2_t pCenter, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1684830
    ::System::IAsyncResult* BeginInvoke(uint nDeviceIndex, ::OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref OVR.OpenVR.HmdVector2_t pFocalLength, ref OVR.OpenVR.HmdVector2_t pCenter, System.IAsyncResult result)
    // Offset: 0x1684918
    ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<::OVR::OpenVR::HmdVector2_t> pCenter, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._GetCameraIntrinsics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::*)(uint, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<::OVR::OpenVR::HmdVector2_t>)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::Invoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pFocalLength = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* pCenter = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pFocalLength, pCenter});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::*)(uint, ::OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pFocalLength = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* pCenter = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pFocalLength, pCenter, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::*)(ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pFocalLength = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* pCenter = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdVector2_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_GetCameraIntrinsics*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pFocalLength, pCenter, result});
  }
};
