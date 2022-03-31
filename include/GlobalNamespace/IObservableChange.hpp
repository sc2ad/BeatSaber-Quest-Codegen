// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IObservableChange
  class IObservableChange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IObservableChange);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IObservableChange*, "", "IObservableChange");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IObservableChange
  // [TokenAttribute] Offset: FFFFFFFF
  class IObservableChange {
    public:
    // public System.Void add_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_didChangeEvent(::System::Action* value);
    // public System.Void remove_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_didChangeEvent(::System::Action* value);
  }; // IObservableChange
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IObservableChange::add_didChangeEvent
// Il2CppName: add_didChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IObservableChange::*)(::System::Action*)>(&GlobalNamespace::IObservableChange::add_didChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IObservableChange*), "add_didChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IObservableChange::remove_didChangeEvent
// Il2CppName: remove_didChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IObservableChange::*)(::System::Action*)>(&GlobalNamespace::IObservableChange::remove_didChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IObservableChange*), "remove_didChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
