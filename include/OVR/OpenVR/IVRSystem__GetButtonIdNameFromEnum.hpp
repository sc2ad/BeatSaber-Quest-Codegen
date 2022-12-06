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
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
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
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetButtonIdNameFromEnum");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetButtonIdNameFromEnum
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10C8DBC
  class IVRSystem::_GetButtonIdNameFromEnum : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x277F6A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetButtonIdNameFromEnum* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetButtonIdNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.EVRButtonId eButtonId)
    // Offset: 0x277F6B0
    ::System::IntPtr Invoke(::OVR::OpenVR::EVRButtonId eButtonId);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRButtonId eButtonId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x277F928
    ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x277F9B4
    ::System::IntPtr EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetButtonIdNameFromEnum
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId)>(&OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::Invoke)> {
  static const MethodInfo* get() {
    static auto* eButtonId = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eButtonId});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::*)(::OVR::OpenVR::EVRButtonId, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eButtonId = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRButtonId")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eButtonId, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
