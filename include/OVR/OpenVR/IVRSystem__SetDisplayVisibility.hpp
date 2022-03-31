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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_SetDisplayVisibility);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_SetDisplayVisibility*, "OVR.OpenVR", "IVRSystem/_SetDisplayVisibility");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._SetDisplayVisibility
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 12022A8
  class IVRSystem::_SetDisplayVisibility : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x26B946C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_SetDisplayVisibility* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_SetDisplayVisibility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_SetDisplayVisibility*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Boolean bIsVisibleOnDesktop)
    // Offset: 0x26B947C
    bool Invoke(bool bIsVisibleOnDesktop);
    // public System.IAsyncResult BeginInvoke(System.Boolean bIsVisibleOnDesktop, System.AsyncCallback callback, System.Object object)
    // Offset: 0x26B96F8
    ::System::IAsyncResult* BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x26B9788
    bool EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._SetDisplayVisibility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_SetDisplayVisibility::*)(bool)>(&OVR::OpenVR::IVRSystem::_SetDisplayVisibility::Invoke)> {
  static const MethodInfo* get() {
    static auto* bIsVisibleOnDesktop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bIsVisibleOnDesktop});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_SetDisplayVisibility::*)(bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_SetDisplayVisibility::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bIsVisibleOnDesktop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bIsVisibleOnDesktop, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_SetDisplayVisibility::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_SetDisplayVisibility::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_SetDisplayVisibility::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_SetDisplayVisibility*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
