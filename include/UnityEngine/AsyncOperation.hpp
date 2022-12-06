// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AsyncOperation*, "UnityEngine", "AsyncOperation");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AsyncOperation
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 1084A58
  // [NativeHeaderAttribute] Offset: 1084A58
  // [NativeHeaderAttribute] Offset: 1084A58
  class AsyncOperation : public ::UnityEngine::YieldInstruction {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Action`1<UnityEngine.AsyncOperation> m_completeCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::UnityEngine::AsyncOperation*>* m_completeCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::AsyncOperation*>*) == 0x8);
    public:
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private System.Action`1<UnityEngine.AsyncOperation> m_completeCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::AsyncOperation*>*& dyn_m_completeCallback();
    // public System.Boolean get_isDone()
    // Offset: 0x20243A8
    bool get_isDone();
    // public System.Single get_progress()
    // Offset: 0x20243E8
    float get_progress();
    // public System.Void set_priority(System.Int32 value)
    // Offset: 0x2024428
    void set_priority(int value);
    // public System.Boolean get_allowSceneActivation()
    // Offset: 0x2024478
    bool get_allowSceneActivation();
    // public System.Void set_allowSceneActivation(System.Boolean value)
    // Offset: 0x20244B8
    void set_allowSceneActivation(bool value);
    // public System.Void add_completed(System.Action`1<UnityEngine.AsyncOperation> value)
    // Offset: 0x2024604
    void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value);
    // public System.Void remove_completed(System.Action`1<UnityEngine.AsyncOperation> value)
    // Offset: 0x20246DC
    void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value);
    // static private System.Void InternalDestroy(System.IntPtr ptr)
    // Offset: 0x2024368
    static void InternalDestroy(::System::IntPtr ptr);
    // System.Void InvokeCompletionEvent()
    // Offset: 0x20245A4
    void InvokeCompletionEvent();
    // public System.Void .ctor()
    // Offset: 0x202475C
    // Implemented from: UnityEngine.YieldInstruction
    // Base method: System.Void YieldInstruction::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncOperation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AsyncOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncOperation*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2024508
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AsyncOperation
  #pragma pack(pop)
  static check_size<sizeof(AsyncOperation), 24 + sizeof(::System::Action_1<::UnityEngine::AsyncOperation*>*)> __UnityEngine_AsyncOperationSizeCheck;
  static_assert(sizeof(AsyncOperation) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::get_isDone
// Il2CppName: get_isDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::get_isDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "get_isDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::get_progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::set_priority
// Il2CppName: set_priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)(int)>(&UnityEngine::AsyncOperation::set_priority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "set_priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::get_allowSceneActivation
// Il2CppName: get_allowSceneActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::get_allowSceneActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "get_allowSceneActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::set_allowSceneActivation
// Il2CppName: set_allowSceneActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)(bool)>(&UnityEngine::AsyncOperation::set_allowSceneActivation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "set_allowSceneActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::add_completed
// Il2CppName: add_completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)(::System::Action_1<::UnityEngine::AsyncOperation*>*)>(&UnityEngine::AsyncOperation::add_completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "add_completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::remove_completed
// Il2CppName: remove_completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)(::System::Action_1<::UnityEngine::AsyncOperation*>*)>(&UnityEngine::AsyncOperation::remove_completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "remove_completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::InternalDestroy
// Il2CppName: InternalDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::AsyncOperation::InternalDestroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "InternalDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::InvokeCompletionEvent
// Il2CppName: InvokeCompletionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::InvokeCompletionEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "InvokeCompletionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
