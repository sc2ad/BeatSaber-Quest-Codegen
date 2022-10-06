// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
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
NEED_NO_BOX(::Valve::VR::IVRTrackedCamera::_GetCameraProjection);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRTrackedCamera::_GetCameraProjection*, "Valve.VR", "IVRTrackedCamera/_GetCameraProjection");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRTrackedCamera/Valve.VR._GetCameraProjection
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B5ED8
  class IVRTrackedCamera::_GetCameraProjection : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22DAB50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetCameraProjection* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRTrackedCamera::_GetCameraProjection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetCameraProjection*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref Valve.VR.HmdMatrix44_t pProjection)
    // Offset: 0x22DAB60
    ::Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, ByRef<::Valve::VR::HmdMatrix44_t> pProjection);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref Valve.VR.HmdMatrix44_t pProjection, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22DAE38
    ::System::IAsyncResult* BeginInvoke(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, ByRef<::Valve::VR::HmdMatrix44_t> pProjection, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref Valve.VR.HmdMatrix44_t pProjection, System.IAsyncResult result)
    // Offset: 0x22DAF40
    ::Valve::VR::EVRTrackedCameraError EndInvoke(ByRef<::Valve::VR::HmdMatrix44_t> pProjection, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/Valve.VR._GetCameraProjection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraProjection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraProjection::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetCameraProjection::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, float, float, ByRef<::Valve::VR::HmdMatrix44_t>)>(&Valve::VR::IVRTrackedCamera::_GetCameraProjection::Invoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* flZNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flZFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix44_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetCameraProjection*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, flZNear, flZFar, pProjection});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraProjection::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRTrackedCamera::_GetCameraProjection::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, float, float, ByRef<::Valve::VR::HmdMatrix44_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRTrackedCamera::_GetCameraProjection::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* flZNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flZFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix44_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetCameraProjection*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, flZNear, flZFar, pProjection, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetCameraProjection::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetCameraProjection::*)(ByRef<::Valve::VR::HmdMatrix44_t>, ::System::IAsyncResult*)>(&Valve::VR::IVRTrackedCamera::_GetCameraProjection::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix44_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetCameraProjection*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pProjection, result});
  }
};
