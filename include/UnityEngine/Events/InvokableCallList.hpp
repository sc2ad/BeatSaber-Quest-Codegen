// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: InvokableCallList
  class InvokableCallList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Events::InvokableCallList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::InvokableCallList*, "UnityEngine.Events", "InvokableCallList");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.InvokableCallList
  // [TokenAttribute] Offset: FFFFFFFF
  class InvokableCallList : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_PersistentCalls
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_RuntimeCalls
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_ExecutingCalls
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*) == 0x8);
    // private System.Boolean m_NeedsUpdate
    // Size: 0x1
    // Offset: 0x28
    bool m_NeedsUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_PersistentCalls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& dyn_m_PersistentCalls();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_RuntimeCalls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& dyn_m_RuntimeCalls();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_ExecutingCalls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>*& dyn_m_ExecutingCalls();
    // Get instance field reference: private System.Boolean m_NeedsUpdate
    [[deprecated("Use field access instead!")]] bool& dyn_m_NeedsUpdate();
    // public System.Void .ctor()
    // Offset: 0x1FFAC00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCallList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCallList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCallList*, creationType>()));
    }
    // public System.Void AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1FFA8A0
    void AddPersistentInvokableCall(::UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void AddListener(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1FFA914
    void AddListener(::UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void RemoveListener(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x1FFA988
    void RemoveListener(::Il2CppObject* targetObj, ::System::Reflection::MethodInfo* method);
    // public System.Void ClearPersistent()
    // Offset: 0x1FFAB00
    void ClearPersistent();
    // public System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> PrepareInvoke()
    // Offset: 0x1FFAB64
    ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();
  }; // UnityEngine.Events.InvokableCallList
  #pragma pack(pop)
  static check_size<sizeof(InvokableCallList), 40 + sizeof(bool)> __UnityEngine_Events_InvokableCallListSizeCheck;
  static_assert(sizeof(InvokableCallList) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCallList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCallList::AddPersistentInvokableCall
// Il2CppName: AddPersistentInvokableCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCallList::*)(::UnityEngine::Events::BaseInvokableCall*)>(&UnityEngine::Events::InvokableCallList::AddPersistentInvokableCall)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "BaseInvokableCall")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCallList*), "AddPersistentInvokableCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCallList::AddListener
// Il2CppName: AddListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCallList::*)(::UnityEngine::Events::BaseInvokableCall*)>(&UnityEngine::Events::InvokableCallList::AddListener)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "BaseInvokableCall")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCallList*), "AddListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCallList::RemoveListener
// Il2CppName: RemoveListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCallList::*)(::Il2CppObject*, ::System::Reflection::MethodInfo*)>(&UnityEngine::Events::InvokableCallList::RemoveListener)> {
  static const MethodInfo* get() {
    static auto* targetObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCallList*), "RemoveListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetObj, method});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCallList::ClearPersistent
// Il2CppName: ClearPersistent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::InvokableCallList::*)()>(&UnityEngine::Events::InvokableCallList::ClearPersistent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCallList*), "ClearPersistent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::InvokableCallList::PrepareInvoke
// Il2CppName: PrepareInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall*>* (UnityEngine::Events::InvokableCallList::*)()>(&UnityEngine::Events::InvokableCallList::PrepareInvoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::InvokableCallList*), "PrepareInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
