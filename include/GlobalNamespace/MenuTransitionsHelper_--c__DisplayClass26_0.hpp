// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuTransitionsHelper
#include "GlobalNamespace/MenuTransitionsHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0*, "", "MenuTransitionsHelper/<>c__DisplayClass26_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MenuTransitionsHelper/<>c__DisplayClass26_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MenuTransitionsHelper::$$c__DisplayClass26_0 : public ::Il2CppObject {
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
    // public MenuTransitionsHelper <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::MenuTransitionsHelper* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // public MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // public MissionCompletionResults missionCompletionResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MissionCompletionResults* missionCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionCompletionResults*) == 0x8);
    public:
    // Get instance field reference: public MenuTransitionsHelper <>4__this
    ::GlobalNamespace::MenuTransitionsHelper*& dyn_$$4__this();
    // Get instance field reference: public MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn_missionLevelScenesTransitionSetupData();
    // Get instance field reference: public MissionCompletionResults missionCompletionResults
    ::GlobalNamespace::MissionCompletionResults*& dyn_missionCompletionResults();
    // System.Void <HandleMissionLevelSceneDidFinish>b__0(Zenject.DiContainer container)
    // Offset: 0x2A69DF4
    void $HandleMissionLevelSceneDidFinish$b__0(::Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x2A698F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuTransitionsHelper::$$c__DisplayClass26_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuTransitionsHelper::$$c__DisplayClass26_0*, creationType>()));
    }
  }; // MenuTransitionsHelper/<>c__DisplayClass26_0
  #pragma pack(pop)
  static check_size<sizeof(MenuTransitionsHelper::$$c__DisplayClass26_0), 32 + sizeof(::GlobalNamespace::MissionCompletionResults*)> __GlobalNamespace_MenuTransitionsHelper_$$c__DisplayClass26_0SizeCheck;
  static_assert(sizeof(MenuTransitionsHelper::$$c__DisplayClass26_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0::$HandleMissionLevelSceneDidFinish$b__0
// Il2CppName: <HandleMissionLevelSceneDidFinish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0::*)(::Zenject::DiContainer*)>(&GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0::$HandleMissionLevelSceneDidFinish$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0*), "<HandleMissionLevelSceneDidFinish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
