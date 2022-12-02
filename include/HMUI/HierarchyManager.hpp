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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScreenSystem
  class ScreenSystem;
  // Forward declaring type: FlowCoordinator
  class FlowCoordinator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: HierarchyManager
  class HierarchyManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::HierarchyManager);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HierarchyManager*, "HMUI", "HierarchyManager");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HierarchyManager
  // [TokenAttribute] Offset: FFFFFFFF
  class HierarchyManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private HMUI.ScreenSystem _screenSystem
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::ScreenSystem* screenSystem;
    // Field size check
    static_assert(sizeof(::HMUI::ScreenSystem*) == 0x8);
    // [InjectAttribute] Offset: 0x10FE4A0
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // private HMUI.FlowCoordinator _rootFlowCoordinator
    // Size: 0x8
    // Offset: 0x28
    ::HMUI::FlowCoordinator* rootFlowCoordinator;
    // Field size check
    static_assert(sizeof(::HMUI::FlowCoordinator*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.ScreenSystem _screenSystem
    [[deprecated("Use field access instead!")]] ::HMUI::ScreenSystem*& dyn__screenSystem();
    // Get instance field reference: private GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private HMUI.FlowCoordinator _rootFlowCoordinator
    [[deprecated("Use field access instead!")]] ::HMUI::FlowCoordinator*& dyn__rootFlowCoordinator();
    // public System.Void .ctor()
    // Offset: 0x1751004
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HierarchyManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::HierarchyManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HierarchyManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1750C90
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1750E4C
    void OnDestroy();
    // private System.Void HandleSceneTransitionDidFinish(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0x1750D90
    void HandleSceneTransitionDidFinish(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);
    // private System.Void HandleBeforeDismissingScenes()
    // Offset: 0x1750F24
    void HandleBeforeDismissingScenes();
    // public System.Void StartWithFlowCoordinator(HMUI.FlowCoordinator flowCoordinator)
    // Offset: 0x1750FE0
    void StartWithFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator);
  }; // HMUI.HierarchyManager
  #pragma pack(pop)
  static check_size<sizeof(HierarchyManager), 40 + sizeof(::HMUI::FlowCoordinator*)> __HMUI_HierarchyManagerSizeCheck;
  static_assert(sizeof(HierarchyManager) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HierarchyManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::HierarchyManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)()>(&HMUI::HierarchyManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)()>(&HMUI::HierarchyManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::HandleSceneTransitionDidFinish
// Il2CppName: HandleSceneTransitionDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(&HMUI::HierarchyManager::HandleSceneTransitionDidFinish)> {
  static const MethodInfo* get() {
    static auto* scenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "HandleSceneTransitionDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenesTransitionSetupData, container});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::HandleBeforeDismissingScenes
// Il2CppName: HandleBeforeDismissingScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)()>(&HMUI::HierarchyManager::HandleBeforeDismissingScenes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "HandleBeforeDismissingScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HierarchyManager::StartWithFlowCoordinator
// Il2CppName: StartWithFlowCoordinator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HierarchyManager::*)(::HMUI::FlowCoordinator*)>(&HMUI::HierarchyManager::StartWithFlowCoordinator)> {
  static const MethodInfo* get() {
    static auto* flowCoordinator = &::il2cpp_utils::GetClassFromName("HMUI", "FlowCoordinator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HierarchyManager*), "StartWithFlowCoordinator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flowCoordinator});
  }
};
