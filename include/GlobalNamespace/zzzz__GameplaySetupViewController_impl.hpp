#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplaySetupViewController_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__ColorsOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::*)(::StringW, GlobalNamespace::IRefreshable, UnityEngine::GameObject)>(&GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x215d640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IRefreshable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::__set_title(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::__get_title() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::__set_refreshable(GlobalNamespace::IRefreshable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IRefreshable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IRefreshable>(value));
}
constexpr GlobalNamespace::IRefreshable GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::__get_refreshable() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IRefreshable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::__set_gameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::__get_gameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::New_ctor(::StringW title, GlobalNamespace::IRefreshable refreshable, UnityEngine::GameObject gameObject)  {
GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel>(title, refreshable, gameObject))};
return o;
}
 void GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel::_ctor(::StringW title, GlobalNamespace::IRefreshable refreshable, UnityEngine::GameObject gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IRefreshable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, title, refreshable, gameObject);
}
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.add_didChangeGameplayModifiersEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(System::Action)>(&GlobalNamespace::GameplaySetupViewController::add_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x215c364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "add_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.remove_didChangeGameplayModifiersEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(System::Action)>(&GlobalNamespace::GameplaySetupViewController::remove_didChangeGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x215c400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "remove_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.get_playerSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettings (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_playerSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x215c49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_playerSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.get_gameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x215c854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.get_environmentOverrideSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OverrideEnvironmentSettings (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215c870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_environmentOverrideSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.get_colorSchemesSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSchemesSettings (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215c894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_colorSchemesSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(bool, bool, bool, bool, GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout)>(&GlobalNamespace::GameplaySetupViewController::Setup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x215c8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::Init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x215c944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(bool, bool, bool)>(&GlobalNamespace::GameplaySetupViewController::DidActivate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x215d140;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GameplaySetupViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x215d350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.HandleSelectionSegmentedControlDidSelectCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(HMUI::SegmentedControl, int32_t)>(&GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215d424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "HandleSelectionSegmentedControlDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SegmentedControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.HandlePlayerSettingsPanelControllerDidChangePlayerSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x215d4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "HandlePlayerSettingsPanelControllerDidChangePlayerSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x215d514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.SetActivePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(int32_t)>(&GlobalNamespace::GameplaySetupViewController::SetActivePanel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x215d42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "SetActivePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.RefreshContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x215ca08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController.RefreshActivePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::RefreshActivePanel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x215d568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "RefreshActivePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplaySetupViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215d67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameplaySetupViewController::__set__selectionSegmentedControl(HMUI::TextSegmentedControl value)  {
::cordl_internals::setInstanceField<HMUI::TextSegmentedControl, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::TextSegmentedControl>(value));
}
constexpr HMUI::TextSegmentedControl GlobalNamespace::GameplaySetupViewController::__get__selectionSegmentedControl() const {
return ::cordl_internals::getInstanceField<HMUI::TextSegmentedControl, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__playerSettingsPanelController(GlobalNamespace::PlayerSettingsPanelController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSettingsPanelController, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSettingsPanelController>(value));
}
constexpr GlobalNamespace::PlayerSettingsPanelController GlobalNamespace::GameplaySetupViewController::__get__playerSettingsPanelController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSettingsPanelController, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__gameplayModifiersPanelController(GlobalNamespace::GameplayModifiersPanelController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiersPanelController, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiersPanelController>(value));
}
constexpr GlobalNamespace::GameplayModifiersPanelController GlobalNamespace::GameplaySetupViewController::__get__gameplayModifiersPanelController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiersPanelController, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__environmentOverrideSettingsPanelController(GlobalNamespace::EnvironmentOverrideSettingsPanelController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentOverrideSettingsPanelController, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentOverrideSettingsPanelController>(value));
}
constexpr GlobalNamespace::EnvironmentOverrideSettingsPanelController GlobalNamespace::GameplaySetupViewController::__get__environmentOverrideSettingsPanelController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentOverrideSettingsPanelController, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__colorsOverrideSettingsPanelController(GlobalNamespace::ColorsOverrideSettingsPanelController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorsOverrideSettingsPanelController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorsOverrideSettingsPanelController>(value));
}
constexpr GlobalNamespace::ColorsOverrideSettingsPanelController GlobalNamespace::GameplaySetupViewController::__get__colorsOverrideSettingsPanelController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorsOverrideSettingsPanelController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__multiplayerSettingsPanelController(GlobalNamespace::MultiplayerSettingsPanelController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerSettingsPanelController, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerSettingsPanelController>(value));
}
constexpr GlobalNamespace::MultiplayerSettingsPanelController GlobalNamespace::GameplaySetupViewController::__get__multiplayerSettingsPanelController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerSettingsPanelController, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__playerDataModel(GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerDataModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerDataModel>(value));
}
constexpr GlobalNamespace::PlayerDataModel GlobalNamespace::GameplaySetupViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerDataModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set_didChangeGameplayModifiersEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::GameplaySetupViewController::__get_didChangeGameplayModifiersEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__panels(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel> GlobalNamespace::GameplaySetupViewController::__get__panels() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__activePanelIdx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GameplaySetupViewController::__get__activePanelIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__showModifiers(bool value)  {
::cordl_internals::setInstanceField<bool, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplaySetupViewController::__get__showModifiers() const {
return ::cordl_internals::getInstanceField<bool, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__showEnvironmentOverrideSettings(bool value)  {
::cordl_internals::setInstanceField<bool, 0xbd>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplaySetupViewController::__get__showEnvironmentOverrideSettings() const {
return ::cordl_internals::getInstanceField<bool, 0xbd>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__showColorSchemesSettings(bool value)  {
::cordl_internals::setInstanceField<bool, 0xbe>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplaySetupViewController::__get__showColorSchemesSettings() const {
return ::cordl_internals::getInstanceField<bool, 0xbe>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__showMultiplayer(bool value)  {
::cordl_internals::setInstanceField<bool, 0xbf>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplaySetupViewController::__get__showMultiplayer() const {
return ::cordl_internals::getInstanceField<bool, 0xbf>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__shouldRefreshContent(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplaySetupViewController::__get__shouldRefreshContent() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplaySetupViewController::__set__isInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplaySetupViewController::__get__isInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0xc1>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameplaySetupViewController::add_didChangeGameplayModifiersEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "add_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::GameplaySetupViewController::remove_didChangeGameplayModifiersEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "remove_didChangeGameplayModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::PlayerSpecificSettings GlobalNamespace::GameplaySetupViewController::get_playerSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_playerSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerSpecificSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::OverrideEnvironmentSettings GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_environmentOverrideSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OverrideEnvironmentSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ColorSchemesSettings GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "get_colorSchemesSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ColorSchemesSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplaySetupViewController::Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings, bool showMultiplayer, GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout playerSettingsPanelLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, showModifiers, showEnvironmentOverrideSettings, showColorSchemesSettings, showMultiplayer, playerSettingsPanelLayout);
}
 void GlobalNamespace::GameplaySetupViewController::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplaySetupViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::GameplaySetupViewController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell(HMUI::SegmentedControl segmentedControl, int32_t cellIdx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "HandleSelectionSegmentedControlDidSelectCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SegmentedControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, segmentedControl, cellIdx);
}
 void GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "HandlePlayerSettingsPanelControllerDidChangePlayerSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplaySetupViewController::SetActivePanel(int32_t panelIdx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "SetActivePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, panelIdx);
}
 void GlobalNamespace::GameplaySetupViewController::RefreshContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplaySetupViewController::RefreshActivePanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            "RefreshActivePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplaySetupViewController GlobalNamespace::GameplaySetupViewController::New_ctor()  {
GlobalNamespace::GameplaySetupViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GameplaySetupViewController>())};
return o;
}
 void GlobalNamespace::GameplaySetupViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplaySetupViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
