// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HelpMenuViewController
  class HelpMenuViewController;
  // Forward declaring type: HelpNavigationController
  class HelpNavigationController;
  // Forward declaring type: HealthWarningDisplayViewController
  class HealthWarningDisplayViewController;
  // Forward declaring type: PrivacyPolicyDisplayViewController
  class PrivacyPolicyDisplayViewController;
  // Forward declaring type: EulaDisplayViewController
  class EulaDisplayViewController;
  // Forward declaring type: PlayerStatisticsViewController
  class PlayerStatisticsViewController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HelpFlowCoordinator
  class HelpFlowCoordinator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HelpFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpFlowCoordinator*, "", "HelpFlowCoordinator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x100
  #pragma pack(push, 1)
  // Autogenerated type: HelpFlowCoordinator
  // [TokenAttribute] Offset: FFFFFFFF
  class HelpFlowCoordinator : public ::HMUI::FlowCoordinator {
    public:
    public:
    // [InjectAttribute] Offset: 0x1107994
    // private readonly HelpMenuViewController _helpMenuViewController
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::HelpMenuViewController* helpMenuViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HelpMenuViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x11079A4
    // private readonly HelpNavigationController _helpNavigationController
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::HelpNavigationController* helpNavigationController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HelpNavigationController*) == 0x8);
    // [InjectAttribute] Offset: 0x11079B4
    // private readonly HowToPlayViewController _howToPlayViewController
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::HowToPlayViewController* howToPlayViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HowToPlayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x11079C4
    // private readonly HealthWarningDisplayViewController _healthWarningDisplayViewController
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::HealthWarningDisplayViewController* healthWarningDisplayViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HealthWarningDisplayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x11079D4
    // private readonly PrivacyPolicyDisplayViewController _privacyPolicyDisplayViewController
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::PrivacyPolicyDisplayViewController* privacyPolicyDisplayViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrivacyPolicyDisplayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x11079E4
    // private readonly EulaDisplayViewController _eulaDisplayViewController
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::EulaDisplayViewController* eulaDisplayViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EulaDisplayViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x11079F4
    // private readonly PlayerStatisticsViewController _playerStatisticsViewController
    // Size: 0x8
    // Offset: 0xD8
    ::GlobalNamespace::PlayerStatisticsViewController* playerStatisticsViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerStatisticsViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x1107A04
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xE0
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x1107A14
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0xE8
    ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // private System.Action`1<HelpFlowCoordinator> didFinishEvent
    // Size: 0x8
    // Offset: 0xF0
    ::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*) == 0x8);
    // [TupleElementNamesAttribute] Offset: 0x1107A74
    // private System.Collections.Generic.List`1<System.ValueTuple`2<HMUI.ViewController,System.String>> _viewControllers
    // Size: 0x8
    // Offset: 0xF8
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>* viewControllers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>*) == 0x8);
    public:
    // [LocalizationKeyAttribute] Offset: 0x1107A24
    // static field const value: static private System.String kHowToPlayMenu
    static constexpr const char* kHowToPlayMenu = "LABEL_HOW_TO_PLAY";
    // Get static field: static private System.String kHowToPlayMenu
    static ::StringW _get_kHowToPlayMenu();
    // Set static field: static private System.String kHowToPlayMenu
    static void _set_kHowToPlayMenu(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x1107A34
    // static field const value: static private System.String kPrivacyPolicyMenu
    static constexpr const char* kPrivacyPolicyMenu = "PRIVACY_POLICY_MENU";
    // Get static field: static private System.String kPrivacyPolicyMenu
    static ::StringW _get_kPrivacyPolicyMenu();
    // Set static field: static private System.String kPrivacyPolicyMenu
    static void _set_kPrivacyPolicyMenu(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x1107A44
    // static field const value: static private System.String kEulaMenu
    static constexpr const char* kEulaMenu = "EULA_MENU";
    // Get static field: static private System.String kEulaMenu
    static ::StringW _get_kEulaMenu();
    // Set static field: static private System.String kEulaMenu
    static void _set_kEulaMenu(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x1107A54
    // static field const value: static private System.String kHealthWarningMenu
    static constexpr const char* kHealthWarningMenu = "HEALTH_AND_SAFETY_MENU";
    // Get static field: static private System.String kHealthWarningMenu
    static ::StringW _get_kHealthWarningMenu();
    // Set static field: static private System.String kHealthWarningMenu
    static void _set_kHealthWarningMenu(::StringW value);
    // Get instance field reference: private readonly HelpMenuViewController _helpMenuViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HelpMenuViewController*& dyn__helpMenuViewController();
    // Get instance field reference: private readonly HelpNavigationController _helpNavigationController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HelpNavigationController*& dyn__helpNavigationController();
    // Get instance field reference: private readonly HowToPlayViewController _howToPlayViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HowToPlayViewController*& dyn__howToPlayViewController();
    // Get instance field reference: private readonly HealthWarningDisplayViewController _healthWarningDisplayViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HealthWarningDisplayViewController*& dyn__healthWarningDisplayViewController();
    // Get instance field reference: private readonly PrivacyPolicyDisplayViewController _privacyPolicyDisplayViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrivacyPolicyDisplayViewController*& dyn__privacyPolicyDisplayViewController();
    // Get instance field reference: private readonly EulaDisplayViewController _eulaDisplayViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EulaDisplayViewController*& dyn__eulaDisplayViewController();
    // Get instance field reference: private readonly PlayerStatisticsViewController _playerStatisticsViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerStatisticsViewController*& dyn__playerStatisticsViewController();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private readonly MenuTransitionsHelper _menuTransitionsHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuTransitionsHelper*& dyn__menuTransitionsHelper();
    // Get instance field reference: private System.Action`1<HelpFlowCoordinator> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*& dyn_didFinishEvent();
    // Get instance field reference: private System.Collections.Generic.List`1<System.ValueTuple`2<HMUI.ViewController,System.String>> _viewControllers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>*& dyn__viewControllers();
    // public System.Void add_didFinishEvent(System.Action`1<HelpFlowCoordinator> value)
    // Offset: 0x13AEBF8
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<HelpFlowCoordinator> value)
    // Offset: 0x13AEC9C
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>* value);
    // public System.Void .ctor()
    // Offset: 0x13AF620
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelpFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HelpFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelpFlowCoordinator*, creationType>()));
    }
    // private System.Void HandleDidSelectHelpSubMenu(System.Int32 idx)
    // Offset: 0x13AF3A4
    void HandleDidSelectHelpSubMenu(int idx);
    // private System.Void ReplaceViewController(HMUI.ViewController viewController)
    // Offset: 0x13AF420
    void ReplaceViewController(::HMUI::ViewController* viewController);
    // private System.Void HandleHowToPlayViewControllerDidFinish(HowToPlayViewController/HowToPlayOptions howToPlayOptions)
    // Offset: 0x13AF530
    void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::HowToPlayViewController::HowToPlayOptions howToPlayOptions);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13AED40
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x13AF16C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x13AF5BC
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(::HMUI::ViewController* topViewController);
  }; // HelpFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(HelpFlowCoordinator), 248 + sizeof(::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController*, ::StringW>>*)> __GlobalNamespace_HelpFlowCoordinatorSizeCheck;
  static_assert(sizeof(HelpFlowCoordinator) == 0x100);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*)>(&GlobalNamespace::HelpFlowCoordinator::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "HelpFlowCoordinator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator*>*)>(&GlobalNamespace::HelpFlowCoordinator::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "HelpFlowCoordinator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::HandleDidSelectHelpSubMenu
// Il2CppName: HandleDidSelectHelpSubMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(int)>(&GlobalNamespace::HelpFlowCoordinator::HandleDidSelectHelpSubMenu)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "HandleDidSelectHelpSubMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::ReplaceViewController
// Il2CppName: ReplaceViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(::HMUI::ViewController*)>(&GlobalNamespace::HelpFlowCoordinator::ReplaceViewController)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "ReplaceViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::HandleHowToPlayViewControllerDidFinish
// Il2CppName: HandleHowToPlayViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(::GlobalNamespace::HowToPlayViewController::HowToPlayOptions)>(&GlobalNamespace::HelpFlowCoordinator::HandleHowToPlayViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* howToPlayOptions = &::il2cpp_utils::GetClassFromName("", "HowToPlayViewController/HowToPlayOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "HandleHowToPlayViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{howToPlayOptions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::HelpFlowCoordinator::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::HelpFlowCoordinator::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HelpFlowCoordinator::BackButtonWasPressed
// Il2CppName: BackButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HelpFlowCoordinator::*)(::HMUI::ViewController*)>(&GlobalNamespace::HelpFlowCoordinator::BackButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* topViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HelpFlowCoordinator*), "BackButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topViewController});
  }
};
