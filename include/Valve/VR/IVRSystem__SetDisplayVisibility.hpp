// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
NEED_NO_BOX(::Valve::VR::IVRSystem::_SetDisplayVisibility);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRSystem::_SetDisplayVisibility*, "Valve.VR", "IVRSystem/_SetDisplayVisibility");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._SetDisplayVisibility
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10B5B68
  class IVRSystem::_SetDisplayVisibility : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22D90BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_SetDisplayVisibility* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRSystem::_SetDisplayVisibility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_SetDisplayVisibility*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Boolean bIsVisibleOnDesktop)
    // Offset: 0x22D90CC
    bool Invoke(bool bIsVisibleOnDesktop);
    // public System.IAsyncResult BeginInvoke(System.Boolean bIsVisibleOnDesktop, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22D9348
    ::System::IAsyncResult* BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x22D93D8
    bool EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._SetDisplayVisibility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_SetDisplayVisibility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_SetDisplayVisibility::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_SetDisplayVisibility::*)(bool)>(&Valve::VR::IVRSystem::_SetDisplayVisibility::Invoke)> {
  static const MethodInfo* get() {
    static auto* bIsVisibleOnDesktop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_SetDisplayVisibility*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bIsVisibleOnDesktop});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_SetDisplayVisibility::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRSystem::_SetDisplayVisibility::*)(bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_SetDisplayVisibility::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bIsVisibleOnDesktop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_SetDisplayVisibility*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bIsVisibleOnDesktop, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_SetDisplayVisibility::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRSystem::_SetDisplayVisibility::*)(::System::IAsyncResult*)>(&Valve::VR::IVRSystem::_SetDisplayVisibility::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_SetDisplayVisibility*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
