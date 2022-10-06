// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionObjectiveChecker
#include "GlobalNamespace/MissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ComboController
  class ComboController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FullComboMissionObjectiveChecker
  class FullComboMissionObjectiveChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FullComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FullComboMissionObjectiveChecker*, "", "FullComboMissionObjectiveChecker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: FullComboMissionObjectiveChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class FullComboMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    public:
    // [InjectAttribute] Offset: 0x1101CE4
    // private readonly ComboController _comboController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ComboController* comboController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ComboController*) == 0x8);
    public:
    // Get instance field reference: private readonly ComboController _comboController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ComboController*& dyn__comboController();
    // protected System.Void OnDestroy()
    // Offset: 0x13A6528
    void OnDestroy();
    // private System.Void HandleComboBreakingEventHappened()
    // Offset: 0x13A65FC
    void HandleComboBreakingEventHappened();
    // public System.Void .ctor()
    // Offset: 0x13A6608
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FullComboMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FullComboMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FullComboMissionObjectiveChecker*, creationType>()));
    }
    // protected override System.Void Init()
    // Offset: 0x13A6450
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
  }; // FullComboMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(FullComboMissionObjectiveChecker), 72 + sizeof(::GlobalNamespace::ComboController*)> __GlobalNamespace_FullComboMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(FullComboMissionObjectiveChecker) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FullComboMissionObjectiveChecker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullComboMissionObjectiveChecker::*)()>(&GlobalNamespace::FullComboMissionObjectiveChecker::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullComboMissionObjectiveChecker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullComboMissionObjectiveChecker::HandleComboBreakingEventHappened
// Il2CppName: HandleComboBreakingEventHappened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullComboMissionObjectiveChecker::*)()>(&GlobalNamespace::FullComboMissionObjectiveChecker::HandleComboBreakingEventHappened)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullComboMissionObjectiveChecker*), "HandleComboBreakingEventHappened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullComboMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FullComboMissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullComboMissionObjectiveChecker::*)()>(&GlobalNamespace::FullComboMissionObjectiveChecker::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullComboMissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
