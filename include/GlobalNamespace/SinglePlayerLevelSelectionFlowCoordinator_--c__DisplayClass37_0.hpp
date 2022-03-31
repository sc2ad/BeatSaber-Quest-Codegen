// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SinglePlayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0*, "", "SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public SinglePlayerLevelSelectionFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*) == 0x8);
    // public System.Action beforeSceneSwitchCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* beforeSceneSwitchCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Boolean practice
    // Size: 0x1
    // Offset: 0x20
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: practice and: $$9__1
    char __padding2[0x7] = {};
    // public System.Action <>9__1
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* $$9__1;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public SinglePlayerLevelSelectionFlowCoordinator <>4__this
    ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public System.Action beforeSceneSwitchCallback
    ::System::Action*& dyn_beforeSceneSwitchCallback();
    // Get instance field reference: public System.Boolean practice
    bool& dyn_practice();
    // Get instance field reference: public System.Action <>9__1
    ::System::Action*& dyn_$$9__1();
    // System.Void <StartLevelOrShow360Prompt>b__0(System.Int32 buttonNumber)
    // Offset: 0x2A9D0A4
    void $StartLevelOrShow360Prompt$b__0(int buttonNumber);
    // System.Void <StartLevelOrShow360Prompt>b__1()
    // Offset: 0x2A9D13C
    void $StartLevelOrShow360Prompt$b__1();
    // public System.Void .ctor()
    // Offset: 0x2A9CC0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0*, creationType>()));
    }
  }; // SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0
  #pragma pack(pop)
  static check_size<sizeof(SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0), 40 + sizeof(::System::Action*)> __GlobalNamespace_SinglePlayerLevelSelectionFlowCoordinator_$$c__DisplayClass37_0SizeCheck;
  static_assert(sizeof(SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::$StartLevelOrShow360Prompt$b__0
// Il2CppName: <StartLevelOrShow360Prompt>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::*)(int)>(&GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::$StartLevelOrShow360Prompt$b__0)> {
  static const MethodInfo* get() {
    static auto* buttonNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0*), "<StartLevelOrShow360Prompt>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonNumber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::$StartLevelOrShow360Prompt$b__1
// Il2CppName: <StartLevelOrShow360Prompt>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::*)()>(&GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::$StartLevelOrShow360Prompt$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0*), "<StartLevelOrShow360Prompt>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
