// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
NEED_NO_BOX(::Valve::VR::IVRRenderModels::_GetComponentButtonMask);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRRenderModels::_GetComponentButtonMask*, "Valve.VR", "IVRRenderModels/_GetComponentButtonMask");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRRenderModels/Valve.VR._GetComponentButtonMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10CF020
  class IVRRenderModels::_GetComponentButtonMask : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2323D44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRRenderModels::_GetComponentButtonMask* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRRenderModels::_GetComponentButtonMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRRenderModels::_GetComponentButtonMask*, creationType>(object, method)));
    }
    // public System.UInt64 Invoke(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x2323D54
    uint64_t Invoke(::StringW pchRenderModelName, ::StringW pchComponentName);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2324144
    ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x2324174
    uint64_t EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRRenderModels/Valve.VR._GetComponentButtonMask
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Valve::VR::IVRRenderModels::_GetComponentButtonMask::*)(::StringW, ::StringW)>(&Valve::VR::IVRRenderModels::_GetComponentButtonMask::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentButtonMask*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRRenderModels::_GetComponentButtonMask::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRRenderModels::_GetComponentButtonMask::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentButtonMask*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRRenderModels::_GetComponentButtonMask::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Valve::VR::IVRRenderModels::_GetComponentButtonMask::*)(::System::IAsyncResult*)>(&Valve::VR::IVRRenderModels::_GetComponentButtonMask::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRRenderModels::_GetComponentButtonMask*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
