#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectLanguageViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData::*)(GlobalNamespace::ScenesTransitionSetupDataSO)>(&GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21333a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData::__set_nextScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData::__get_nextScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "nextScenesTransitionSetupData", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData::GlobalNamespace__HealthWarningFlowCoordinator__InitData(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__HealthWarningFlowCoordinator__InitData>(nextScenesTransitionSetupData))) {}
 void GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData::_ctor(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nextScenesTransitionSetupData);
}
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::HealthWarningFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2132824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::HealthWarningFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2132cd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::HealthWarningFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.TopViewControllerWillChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(HMUI::ViewController, HMUI::ViewController, HMUI::HMUI__ViewController__AnimationType)>(&GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2132f38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::HealthWarningFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2132fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidChangeLanguage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x213307c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleSelectLanguageViewControllerDidChangeLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidPressContinueButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2133100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleSelectLanguageViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectRegionViewControllerDidPressContinueButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region)>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x213314c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleSelectRegionViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.HandleEulaViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType)>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2133270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleEulaViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.HandlePrivacyPolicyViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(GlobalNamespace::GlobalNamespace__PrivacyPolicyViewController__ButtonType)>(&GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21332ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandlePrivacyPolicyViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PrivacyPolicyViewController__ButtonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.HandleHealthWarningViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2132fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleHealthWarningViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.ResolveMainViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2132c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "ResolveMainViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.ResolvePlayerAgreementsViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x213317c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "ResolvePlayerAgreementsViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator.GoToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2133344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "GoToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HealthWarningFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2133398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsModelSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr GlobalNamespace::MainSettingsModelSO GlobalNamespace::HealthWarningFlowCoordinator::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsModelSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__appInitScenesTransitionSetupDataContainer(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>(value));
}
constexpr GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO GlobalNamespace::HealthWarningFlowCoordinator::__get__appInitScenesTransitionSetupDataContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectLanguageViewController(GlobalNamespace::SelectLanguageViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SelectLanguageViewController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SelectLanguageViewController>(value));
}
constexpr GlobalNamespace::SelectLanguageViewController GlobalNamespace::HealthWarningFlowCoordinator::__get__selectLanguageViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SelectLanguageViewController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectRegionViewController(GlobalNamespace::SelectRegionViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SelectRegionViewController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SelectRegionViewController>(value));
}
constexpr GlobalNamespace::SelectRegionViewController GlobalNamespace::HealthWarningFlowCoordinator::__get__selectRegionViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SelectRegionViewController, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__eulaViewController(GlobalNamespace::EulaViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EulaViewController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EulaViewController>(value));
}
constexpr GlobalNamespace::EulaViewController GlobalNamespace::HealthWarningFlowCoordinator::__get__eulaViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EulaViewController, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__privacyPolicyViewController(GlobalNamespace::PrivacyPolicyViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PrivacyPolicyViewController, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PrivacyPolicyViewController>(value));
}
constexpr GlobalNamespace::PrivacyPolicyViewController GlobalNamespace::HealthWarningFlowCoordinator::__get__privacyPolicyViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PrivacyPolicyViewController, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__healthWarningViewController(GlobalNamespace::HealthWarningViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HealthWarningViewController, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HealthWarningViewController>(value));
}
constexpr GlobalNamespace::HealthWarningViewController GlobalNamespace::HealthWarningFlowCoordinator::__get__healthWarningViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HealthWarningViewController, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::HealthWarningFlowCoordinator::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__dlcPromoPanelModel(GlobalNamespace::DlcPromoPanelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DlcPromoPanelModel, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DlcPromoPanelModel>(value));
}
constexpr GlobalNamespace::DlcPromoPanelModel GlobalNamespace::HealthWarningFlowCoordinator::__get__dlcPromoPanelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DlcPromoPanelModel, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__fadeInOut(GlobalNamespace::FadeInOutController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FadeInOutController, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FadeInOutController>(value));
}
constexpr GlobalNamespace::FadeInOutController GlobalNamespace::HealthWarningFlowCoordinator::__get__fadeInOut() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FadeInOutController, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__gameScenesManager(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::HealthWarningFlowCoordinator::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__initData(GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData GlobalNamespace::HealthWarningFlowCoordinator::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__HealthWarningFlowCoordinator__InitData, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__saveData(GlobalNamespace::ISaveData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ISaveData, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ISaveData>(value));
}
constexpr GlobalNamespace::ISaveData GlobalNamespace::HealthWarningFlowCoordinator::__get__saveData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ISaveData, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__viewControllerTitles(System::Collections::Generic::Dictionary_2<HMUI::ViewController,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<HMUI::ViewController,::StringW>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<HMUI::ViewController,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<HMUI::ViewController,::StringW> GlobalNamespace::HealthWarningFlowCoordinator::__get__viewControllerTitles() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<HMUI::ViewController,::StringW>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__set__selectedRegion(GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region GlobalNamespace::HealthWarningFlowCoordinator::__get__selectedRegion() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "TopViewControllerWillChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ViewController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__ViewController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldViewController, newViewController, animationType);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleSelectLanguageViewControllerDidChangeLanguage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleSelectLanguageViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton(GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region region)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleSelectRegionViewControllerDidPressContinueButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, region);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish(GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType buttonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleEulaViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buttonType);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish(GlobalNamespace::GlobalNamespace__PrivacyPolicyViewController__ButtonType buttonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandlePrivacyPolicyViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PrivacyPolicyViewController__ButtonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buttonType);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "HandleHealthWarningViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::ViewController GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "ResolveMainViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::ViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::ViewController GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "ResolvePlayerAgreementsViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::ViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            "GoToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::HealthWarningFlowCoordinator::HealthWarningFlowCoordinator()  : HMUI::FlowCoordinator(THROW_UNLESS(::il2cpp_utils::New<HealthWarningFlowCoordinator>())) {}
 void GlobalNamespace::HealthWarningFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HealthWarningFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
