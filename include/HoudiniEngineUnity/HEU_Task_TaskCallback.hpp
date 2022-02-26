// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_Task
#include "HoudiniEngineUnity/HEU_Task.hpp"
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
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Task::TaskCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Task::TaskCallback*, "HoudiniEngineUnity", "HEU_Task/TaskCallback");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_Task::TaskCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A64174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Task::TaskCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_Task::TaskCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Task::TaskCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(HoudiniEngineUnity.HEU_Task task)
    // Offset: 0x1A64184
    void Invoke(::HoudiniEngineUnity::HEU_Task* task);
    // public System.IAsyncResult BeginInvoke(HoudiniEngineUnity.HEU_Task task, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A64518
    ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_Task* task, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A6453C
    void EndInvoke(::System::IAsyncResult* result);
  }; // HoudiniEngineUnity.HEU_Task/HoudiniEngineUnity.TaskCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::TaskCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::TaskCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Task::TaskCallback::*)(::HoudiniEngineUnity::HEU_Task*)>(&HoudiniEngineUnity::HEU_Task::TaskCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task::TaskCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::TaskCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (HoudiniEngineUnity::HEU_Task::TaskCallback::*)(::HoudiniEngineUnity::HEU_Task*, ::System::AsyncCallback*, ::Il2CppObject*)>(&HoudiniEngineUnity::HEU_Task::TaskCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_Task")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task::TaskCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, callback, object});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Task::TaskCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_Task::TaskCallback::*)(::System::IAsyncResult*)>(&HoudiniEngineUnity::HEU_Task::TaskCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Task::TaskCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
