// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: PersistentCall
  class PersistentCall;
  // Forward declaring type: InvokableCallList
  class InvokableCallList;
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.PersistentCallGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class PersistentCallGroup : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [FormerlySerializedAsAttribute] Offset: 0xE76A40
    // private System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> m_Calls
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall*>* m_Calls;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall*>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall*>*
    constexpr operator System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall*>*() const noexcept {
      return m_Calls;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> m_Calls
    System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall*>*& dyn_m_Calls();
    // public System.Int32 get_Count()
    // Offset: 0x1CBA33C
    int get_Count();
    // public System.Void Initialize(UnityEngine.Events.InvokableCallList invokableList, UnityEngine.Events.UnityEventBase unityEventBase)
    // Offset: 0x1CBA38C
    void Initialize(UnityEngine::Events::InvokableCallList* invokableList, UnityEngine::Events::UnityEventBase* unityEventBase);
    // public System.Void .ctor()
    // Offset: 0x1CBA2C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PersistentCallGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::PersistentCallGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PersistentCallGroup*, creationType>()));
    }
  }; // UnityEngine.Events.PersistentCallGroup
  #pragma pack(pop)
  static check_size<sizeof(PersistentCallGroup), 16 + sizeof(System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall*>*)> __UnityEngine_Events_PersistentCallGroupSizeCheck;
  static_assert(sizeof(PersistentCallGroup) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::PersistentCallGroup*, "UnityEngine.Events", "PersistentCallGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCallGroup::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Events::PersistentCallGroup::*)()>(&UnityEngine::Events::PersistentCallGroup::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCallGroup*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCallGroup::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::PersistentCallGroup::*)(UnityEngine::Events::InvokableCallList*, UnityEngine::Events::UnityEventBase*)>(&UnityEngine::Events::PersistentCallGroup::Initialize)> {
  static const MethodInfo* get() {
    static auto* invokableList = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "InvokableCallList")->byval_arg;
    static auto* unityEventBase = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::PersistentCallGroup*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invokableList, unityEventBase});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::PersistentCallGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
