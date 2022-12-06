// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: SelectRegionViewController/Region
#include "GlobalNamespace/SelectRegionViewController.hpp"
// Including type: EulaViewController
#include "GlobalNamespace/EulaViewController.hpp"
// Including type: PrivacyPolicyViewController
#include "GlobalNamespace/PrivacyPolicyViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: AppInitScenesTransitionSetupDataContainerSO
  class AppInitScenesTransitionSetupDataContainerSO;
  // Forward declaring type: SelectLanguageViewController
  class SelectLanguageViewController;
  // Skipping declaration: SelectRegionViewController because it is already included!
  // Forward declaring type: HealthWarningViewController
  class HealthWarningViewController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: DlcPromoPanelModel
  class DlcPromoPanelModel;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningFlowCoordinator
  class HealthWarningFlowCoordinator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x114
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningFlowCoordinator : public ::HMUI::FlowCoordinator {
    public:
    // Nested type: ::GlobalNamespace::HealthWarningFlowCoordinator::InitData
    class InitData;
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x111EDE8
    // private AppInitScenesTransitionSetupDataContainerSO _appInitScenesTransitionSetupDataContainer
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x111EE20
    // private SelectLanguageViewController _selectLanguageViewController
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::SelectLanguageViewController* selectLanguageViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SelectLanguageViewController*) == 0x8);
    // private SelectRegionViewController _selectRegionViewController
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::SelectRegionViewController* selectRegionViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SelectRegionViewController*) == 0x8);
    // private EulaViewController _eulaViewController
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::EulaViewController* eulaViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EulaViewController*) == 0x8);
    // private PrivacyPolicyViewController _privacyPolicyViewController
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::PrivacyPolicyViewController* privacyPolicyViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrivacyPolicyViewController*) == 0x8);
    // private HealthWarningViewController _healthWarningViewController
    // Size: 0x8
    // Offset: 0xD8
    ::GlobalNamespace::HealthWarningViewController* healthWarningViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HealthWarningViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x111EE98
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xE0
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x111EEA8
    // private readonly DlcPromoPanelModel _dlcPromoPanelModel
    // Size: 0x8
    // Offset: 0xE8
    ::GlobalNamespace::DlcPromoPanelModel* dlcPromoPanelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DlcPromoPanelModel*) == 0x8);
    // [InjectAttribute] Offset: 0x111EEB8
    // private readonly FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0xF0
    ::GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0x111EEC8
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0xF8
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0x111EED8
    // private readonly HealthWarningFlowCoordinator/InitData _initData
    // Size: 0x8
    // Offset: 0x100
    ::GlobalNamespace::HealthWarningFlowCoordinator::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HealthWarningFlowCoordinator::InitData*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<HMUI.ViewController,System.String> _viewControllerTitles
    // Size: 0x8
    // Offset: 0x108
    ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>* viewControllerTitles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>*) == 0x8);
    // private SelectRegionViewController/Region _selectedRegion
    // Size: 0x4
    // Offset: 0x110
    ::GlobalNamespace::SelectRegionViewController::Region selectedRegion;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SelectRegionViewController::Region) == 0x4);
    public:
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private AppInitScenesTransitionSetupDataContainerSO _appInitScenesTransitionSetupDataContainer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*& dyn__appInitScenesTransitionSetupDataContainer();
    // Get instance field reference: private SelectLanguageViewController _selectLanguageViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SelectLanguageViewController*& dyn__selectLanguageViewController();
    // Get instance field reference: private SelectRegionViewController _selectRegionViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SelectRegionViewController*& dyn__selectRegionViewController();
    // Get instance field reference: private EulaViewController _eulaViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EulaViewController*& dyn__eulaViewController();
    // Get instance field reference: private PrivacyPolicyViewController _privacyPolicyViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrivacyPolicyViewController*& dyn__privacyPolicyViewController();
    // Get instance field reference: private HealthWarningViewController _healthWarningViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HealthWarningViewController*& dyn__healthWarningViewController();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private readonly DlcPromoPanelModel _dlcPromoPanelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DlcPromoPanelModel*& dyn__dlcPromoPanelModel();
    // Get instance field reference: private readonly FadeInOutController _fadeInOut
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FadeInOutController*& dyn__fadeInOut();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private readonly HealthWarningFlowCoordinator/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HealthWarningFlowCoordinator::InitData*& dyn__initData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<HMUI.ViewController,System.String> _viewControllerTitles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>*& dyn__viewControllerTitles();
    // Get instance field reference: private SelectRegionViewController/Region _selectedRegion
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SelectRegionViewController::Region& dyn__selectedRegion();
    // public System.Void .ctor()
    // Offset: 0x13F2A34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HealthWarningFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningFlowCoordinator*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x13F2558
    void Update();
    // private System.Void HandleSelectLanguageViewControllerDidChangeLanguage()
    // Offset: 0x13F2634
    void HandleSelectLanguageViewControllerDidChangeLanguage();
    // private System.Void HandleSelectLanguageViewControllerDidPressContinueButton()
    // Offset: 0x13F26BC
    void HandleSelectLanguageViewControllerDidPressContinueButton();
    // private System.Void HandleSelectRegionViewControllerDidPressContinueButton(SelectRegionViewController/Region region)
    // Offset: 0x13F2714
    void HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::SelectRegionViewController::Region region);
    // private System.Void HandleEulaViewControllerDidFinish(EulaViewController/ButtonType buttonType)
    // Offset: 0x13F28E4
    void HandleEulaViewControllerDidFinish(::GlobalNamespace::EulaViewController::ButtonType buttonType);
    // private System.Void HandlePrivacyPolicyViewControllerDidFinish(PrivacyPolicyViewController/ButtonType buttonType)
    // Offset: 0x13F2970
    void HandlePrivacyPolicyViewControllerDidFinish(::GlobalNamespace::PrivacyPolicyViewController::ButtonType buttonType);
    // private System.Void HandleHealthWarningViewControllerDidFinish()
    // Offset: 0x13F2594
    void HandleHealthWarningViewControllerDidFinish();
    // private HMUI.ViewController ResolveMainViewController()
    // Offset: 0x13F21C4
    ::HMUI::ViewController* ResolveMainViewController();
    // private HMUI.ViewController ResolvePlayerAgreementsViewController()
    // Offset: 0x13F2750
    ::HMUI::ViewController* ResolvePlayerAgreementsViewController();
    // private System.Void GoToNextScene()
    // Offset: 0x13F29D4
    void GoToNextScene();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13F1DAC
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x13F2224
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    // Offset: 0x13F24C4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::ViewController::AnimationType animationType);
  }; // HealthWarningFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningFlowCoordinator), 272 + sizeof(::GlobalNamespace::SelectRegionViewController::Region)> __GlobalNamespace_HealthWarningFlowCoordinatorSizeCheck;
  static_assert(sizeof(HealthWarningFlowCoordinator) == 0x114);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage
// Il2CppName: HandleSelectLanguageViewControllerDidChangeLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleSelectLanguageViewControllerDidChangeLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton
// Il2CppName: HandleSelectLanguageViewControllerDidPressContinueButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleSelectLanguageViewControllerDidPressContinueButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton
// Il2CppName: HandleSelectRegionViewControllerDidPressContinueButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::SelectRegionViewController::Region)>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton)> {
  static const MethodInfo* get() {
    static auto* region = &::il2cpp_utils::GetClassFromName("", "SelectRegionViewController/Region")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleSelectRegionViewControllerDidPressContinueButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{region});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish
// Il2CppName: HandleEulaViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::EulaViewController::ButtonType)>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* buttonType = &::il2cpp_utils::GetClassFromName("", "EulaViewController/ButtonType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleEulaViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish
// Il2CppName: HandlePrivacyPolicyViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::PrivacyPolicyViewController::ButtonType)>(&GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* buttonType = &::il2cpp_utils::GetClassFromName("", "PrivacyPolicyViewController/ButtonType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandlePrivacyPolicyViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish
// Il2CppName: HandleHealthWarningViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleHealthWarningViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController
// Il2CppName: ResolveMainViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "ResolveMainViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController
// Il2CppName: ResolvePlayerAgreementsViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "ResolvePlayerAgreementsViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene
// Il2CppName: GoToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "GoToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::HealthWarningFlowCoordinator::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange
// Il2CppName: TopViewControllerWillChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController::AnimationType)>(&GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange)> {
  static const MethodInfo* get() {
    static auto* oldViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* newViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationType = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "TopViewControllerWillChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldViewController, newViewController, animationType});
  }
};
