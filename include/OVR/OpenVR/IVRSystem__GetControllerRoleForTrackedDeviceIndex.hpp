// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
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
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*, "OVR.OpenVR", "IVRSystem/_GetControllerRoleForTrackedDeviceIndex");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerRoleForTrackedDeviceIndex
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 11E7E24
  class IVRSystem::_GetControllerRoleForTrackedDeviceIndex : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2613F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetControllerRoleForTrackedDeviceIndex* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetControllerRoleForTrackedDeviceIndex*, creationType>(object, method)));
    }
    // public OVR.OpenVR.ETrackedControllerRole Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x2613F68
    ::OVR::OpenVR::ETrackedControllerRole Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x26141D0
    ::System::IAsyncResult* BeginInvoke(uint unDeviceIndex, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.ETrackedControllerRole EndInvoke(System.IAsyncResult result)
    // Offset: 0x261425C
    ::OVR::OpenVR::ETrackedControllerRole EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetControllerRoleForTrackedDeviceIndex
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::*)(uint)>(&OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::*)(uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackedControllerRole (OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
