// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelFinishedController
  class StandardLevelFinishedController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelFinishedController*, "", "StandardLevelFinishedController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelFinishedController
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelFinishedController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0x1117288
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // [InjectAttribute] Offset: 0x1117298
    // private ILevelEndActions _gameplayManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ILevelEndActions* gameplayManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILevelEndActions*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__standardLevelSceneSetupData();
    // Get instance field reference: private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private ILevelEndActions _gameplayManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILevelEndActions*& dyn__gameplayManager();
    // public System.Void .ctor()
    // Offset: 0x1482BBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelFinishedController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelFinishedController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelFinishedController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1482988
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1482A74
    void OnDestroy();
    // private System.Void HandleLevelFinished()
    // Offset: 0x1482B6C
    void HandleLevelFinished();
    // private System.Void StartLevelFinished()
    // Offset: 0x1482B70
    void StartLevelFinished();
  }; // StandardLevelFinishedController
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelFinishedController), 40 + sizeof(::GlobalNamespace::ILevelEndActions*)> __GlobalNamespace_StandardLevelFinishedControllerSizeCheck;
  static_assert(sizeof(StandardLevelFinishedController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFinishedController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFinishedController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFinishedController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFinishedController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFinishedController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFinishedController::HandleLevelFinished
// Il2CppName: HandleLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::HandleLevelFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFinishedController*), "HandleLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelFinishedController::StartLevelFinished
// Il2CppName: StartLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelFinishedController::*)()>(&GlobalNamespace::StandardLevelFinishedController::StartLevelFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelFinishedController*), "StartLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
