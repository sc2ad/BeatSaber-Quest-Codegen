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
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetInt32TrackedDeviceProperty");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetInt32TrackedDeviceProperty
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B0B4C
  class IVRSystem::_GetInt32TrackedDeviceProperty : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27A25A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetInt32TrackedDeviceProperty* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetInt32TrackedDeviceProperty*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError)
    // Offset: 0x27A25B8
    int Invoke(uint unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackedDeviceProperty prop, ref OVR.OpenVR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27A2858
    ::System::IAsyncResult* BeginInvoke(uint unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(ref OVR.OpenVR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x27A292C
    int EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetInt32TrackedDeviceProperty
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::*)(uint, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>)>(&OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedDeviceProperty")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedPropertyError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, pError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::*)(uint, ::OVR::OpenVR::ETrackedDeviceProperty, ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedDeviceProperty")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedPropertyError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, prop, pError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::*)(ByRef<::OVR::OpenVR::ETrackedPropertyError>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackedPropertyError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetInt32TrackedDeviceProperty*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
