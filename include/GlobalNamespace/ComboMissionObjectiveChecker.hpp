// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ComboMissionObjectiveChecker
  class ComboMissionObjectiveChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboMissionObjectiveChecker*, "", "ComboMissionObjectiveChecker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ComboMissionObjectiveChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class ComboMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x1243B54
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IScoreController*) == 0x8);
    public:
    // Get instance field reference: private IScoreController _scoreController
    ::GlobalNamespace::IScoreController*& dyn__scoreController();
    // protected System.Void OnDestroy()
    // Offset: 0x13C2A30
    void OnDestroy();
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0x13C2B30
    void HandleComboDidChange(int combo);
    // public System.Void .ctor()
    // Offset: 0x13C2B6C
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComboMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ComboMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComboMissionObjectiveChecker*, creationType>()));
    }
    // protected override System.Void Init()
    // Offset: 0x13C2870
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
  }; // ComboMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(ComboMissionObjectiveChecker), 72 + sizeof(::GlobalNamespace::IScoreController*)> __GlobalNamespace_ComboMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(ComboMissionObjectiveChecker) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ComboMissionObjectiveChecker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboMissionObjectiveChecker::*)()>(&GlobalNamespace::ComboMissionObjectiveChecker::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboMissionObjectiveChecker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboMissionObjectiveChecker::HandleComboDidChange
// Il2CppName: HandleComboDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboMissionObjectiveChecker::*)(int)>(&GlobalNamespace::ComboMissionObjectiveChecker::HandleComboDidChange)> {
  static const MethodInfo* get() {
    static auto* combo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboMissionObjectiveChecker*), "HandleComboDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ComboMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ComboMissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ComboMissionObjectiveChecker::*)()>(&GlobalNamespace::ComboMissionObjectiveChecker::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ComboMissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
