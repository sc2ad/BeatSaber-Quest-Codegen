// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolConfigViewController
  class RecordingToolConfigViewController;
  // Forward declaring type: RecordingToolSettingsViewController
  class RecordingToolSettingsViewController;
  // Forward declaring type: RecordingToolLoggingViewController
  class RecordingToolLoggingViewController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolSettingsFlowCoordinator
  class RecordingToolSettingsFlowCoordinator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsFlowCoordinator*, "", "RecordingToolSettingsFlowCoordinator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolSettingsFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolSettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
    public:
    // Nested type: ::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData
    class InitData;
    public:
    // private RecordingToolConfigViewController _recordingToolConfigViewController
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::RecordingToolConfigViewController* recordingToolConfigViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolConfigViewController*) == 0x8);
    // private RecordingToolSettingsViewController _recordingToolSettingsViewController
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::RecordingToolSettingsViewController* recordingToolSettingsViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolSettingsViewController*) == 0x8);
    // private RecordingToolLoggingViewController _recordingToolLoggingViewController
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::RecordingToolLoggingViewController* recordingToolLoggingViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolLoggingViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x111D720
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0x111D730
    // private readonly RecordingToolSettingsFlowCoordinator/InitData _initData
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData*) == 0x8);
    public:
    // Get instance field reference: private RecordingToolConfigViewController _recordingToolConfigViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolConfigViewController*& dyn__recordingToolConfigViewController();
    // Get instance field reference: private RecordingToolSettingsViewController _recordingToolSettingsViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolSettingsViewController*& dyn__recordingToolSettingsViewController();
    // Get instance field reference: private RecordingToolLoggingViewController _recordingToolLoggingViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolLoggingViewController*& dyn__recordingToolLoggingViewController();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private readonly RecordingToolSettingsFlowCoordinator/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData*& dyn__initData();
    // public System.Void .ctor()
    // Offset: 0x1424278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolSettingsFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolSettingsFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolSettingsFlowCoordinator*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x14241F8
    void Update();
    // private System.Void HandleRecordingToolSettingsViewControllerDidFinish()
    // Offset: 0x1424234
    void HandleRecordingToolSettingsViewControllerDidFinish();
    // private System.Void GoToNextScene()
    // Offset: 0x1424238
    void GoToNextScene();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1423F34
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x14240B4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // RecordingToolSettingsFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolSettingsFlowCoordinator), 200 + sizeof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator::InitData*)> __GlobalNamespace_RecordingToolSettingsFlowCoordinatorSizeCheck;
  static_assert(sizeof(RecordingToolSettingsFlowCoordinator) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsFlowCoordinator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish
// Il2CppName: HandleRecordingToolSettingsViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsFlowCoordinator*), "HandleRecordingToolSettingsViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator::GoToNextScene
// Il2CppName: GoToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::GoToNextScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsFlowCoordinator*), "GoToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
