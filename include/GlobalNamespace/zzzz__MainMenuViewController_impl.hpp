#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::GlobalNamespace__MainMenuViewController__MenuButton(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::SoloFreePlay{0};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::Party{1};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::BeatmapEditor{2};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::SoloCampaign{3};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::FloorAdjust{4};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::Quit{5};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::Multiplayer{6};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::Options{7};
constexpr GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton  GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton::HowToPlay{8};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>)>(&GlobalNamespace::MainMenuViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2171da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>)>(&GlobalNamespace::MainMenuViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2171e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController.add_musicPackPromoButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>)>(&GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2171f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "add_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController.remove_musicPackPromoButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>)>(&GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2171fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "remove_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(bool, bool, bool)>(&GlobalNamespace::MainMenuViewController::DidActivate)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x2172064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MainMenuViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController.PackPromoButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x217258c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "PackPromoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController.HandleMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton)>(&GlobalNamespace::MainMenuViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x21725e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2172798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MainMenuViewController._DidActivate_b__20_7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::_DidActivate_b__20_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainMenuViewController::__set__soloButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__soloButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__partyButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__partyButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__campaignButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__campaignButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__quitButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__quitButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__howToPlayButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__howToPlayButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__beatmapEditorButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__beatmapEditorButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__multiplayerButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__multiplayerButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__optionsButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__optionsButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__musicPackPromoButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::MainMenuViewController::__get__musicPackPromoButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__musicPackPromoBanner(GlobalNamespace::MusicPackPromoBanner value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MusicPackPromoBanner, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MusicPackPromoBanner>(value));
}
constexpr GlobalNamespace::MusicPackPromoBanner GlobalNamespace::MainMenuViewController::__get__musicPackPromoBanner() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MusicPackPromoBanner, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__dlcPromoPanelModel(GlobalNamespace::DlcPromoPanelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DlcPromoPanelModel, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DlcPromoPanelModel>(value));
}
constexpr GlobalNamespace::DlcPromoPanelModel GlobalNamespace::MainMenuViewController::__get__dlcPromoPanelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DlcPromoPanelModel, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__appStaticSettings(GlobalNamespace::AppStaticSettingsSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AppStaticSettingsSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AppStaticSettingsSO>(value));
}
constexpr GlobalNamespace::AppStaticSettingsSO GlobalNamespace::MainMenuViewController::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AppStaticSettingsSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__analyticsModel(GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAnalyticsModel, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAnalyticsModel>(value));
}
constexpr GlobalNamespace::IAnalyticsModel GlobalNamespace::MainMenuViewController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAnalyticsModel, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>>(value));
}
constexpr System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> GlobalNamespace::MainMenuViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MainMenuViewController::__set_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>>(value));
}
constexpr System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::MainMenuViewController::__get_musicPackPromoButtonWasPressedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MainMenuViewController::add_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MainMenuViewController::remove_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "add_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "remove_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MainMenuViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "PackPromoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::HandleMenuButton(GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton menuButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menuButton);
}
 GlobalNamespace::MainMenuViewController GlobalNamespace::MainMenuViewController::New_ctor()  {
GlobalNamespace::MainMenuViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MainMenuViewController>())};
return o;
}
 void GlobalNamespace::MainMenuViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MainMenuViewController>::get(),
                            "<DidActivate>b__20_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
