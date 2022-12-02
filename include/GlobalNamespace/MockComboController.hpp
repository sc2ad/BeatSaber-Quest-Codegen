// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IComboController
#include "GlobalNamespace/IComboController.hpp"
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
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockComboController
  class MockComboController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockComboController*, "", "MockComboController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MockComboController
  // [TokenAttribute] Offset: FFFFFFFF
  class MockComboController : public ::Il2CppObject/*, public ::GlobalNamespace::IComboController*/ {
    public:
    public:
    // private System.Action`1<System.Int32> comboDidChangeEvent
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<int>* comboDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private System.Action comboBreakingEventHappenedEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* comboBreakingEventHappenedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IComboController
    operator ::GlobalNamespace::IComboController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IComboController*>(this);
    }
    // Creating interface conversion operator: i_IComboController
    inline ::GlobalNamespace::IComboController* i_IComboController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IComboController*>(this);
    }
    // Get instance field reference: private System.Action`1<System.Int32> comboDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_comboDidChangeEvent();
    // Get instance field reference: private System.Action comboBreakingEventHappenedEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_comboBreakingEventHappenedEvent();
    // public System.Void add_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0x14AB3E4
    void add_comboDidChangeEvent(::System::Action_1<int>* value);
    // public System.Void remove_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0x14AB488
    void remove_comboDidChangeEvent(::System::Action_1<int>* value);
    // public System.Void add_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0x14AB52C
    void add_comboBreakingEventHappenedEvent(::System::Action* value);
    // public System.Void remove_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0x14AB5D0
    void remove_comboBreakingEventHappenedEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x14AB674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockComboController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockComboController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockComboController*, creationType>()));
    }
  }; // MockComboController
  #pragma pack(pop)
  static check_size<sizeof(MockComboController), 24 + sizeof(::System::Action*)> __GlobalNamespace_MockComboControllerSizeCheck;
  static_assert(sizeof(MockComboController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockComboController::add_comboDidChangeEvent
// Il2CppName: add_comboDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockComboController::*)(::System::Action_1<int>*)>(&GlobalNamespace::MockComboController::add_comboDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockComboController*), "add_comboDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockComboController::remove_comboDidChangeEvent
// Il2CppName: remove_comboDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockComboController::*)(::System::Action_1<int>*)>(&GlobalNamespace::MockComboController::remove_comboDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockComboController*), "remove_comboDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockComboController::add_comboBreakingEventHappenedEvent
// Il2CppName: add_comboBreakingEventHappenedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockComboController::*)(::System::Action*)>(&GlobalNamespace::MockComboController::add_comboBreakingEventHappenedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockComboController*), "add_comboBreakingEventHappenedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockComboController::remove_comboBreakingEventHappenedEvent
// Il2CppName: remove_comboBreakingEventHappenedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockComboController::*)(::System::Action*)>(&GlobalNamespace::MockComboController::remove_comboBreakingEventHappenedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockComboController*), "remove_comboBreakingEventHappenedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockComboController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
