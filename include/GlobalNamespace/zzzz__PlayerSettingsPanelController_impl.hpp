#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpStartBeatOffsetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPresetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout  GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout::All{0};
constexpr GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout  GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout::Singleplayer{1};
constexpr GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout  GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout::Multiplayer{2};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.add_didChangePlayerSettingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(System::Action)>(&GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x215d2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "add_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.remove_didChangePlayerSettingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(System::Action)>(&GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x215e0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "remove_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.get_playerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettings (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x215c4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::PlayerSpecificSettings)>(&GlobalNamespace::PlayerSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215d134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.SetLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout)>(&GlobalNamespace::PlayerSettingsPanelController::SetLayout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215c9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x215e1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::OnEnable)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x215e218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215e5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x215e624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.UnsubscribeAllUICallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x215e5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "UnsubscribeAllUICallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x215dce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleSFXVolumeSettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::FormattedFloatListSettingsController, float_t)>(&GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleSFXVolumeSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FormattedFloatListSettingsController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleArcVisibilityDropdownDidSelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, GlobalNamespace::ArcVisibilityType)>(&GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x215e78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleArcVisibilityDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ArcVisibilityType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleSaberTrailIntensitySettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::FormattedFloatListSettingsController, float_t)>(&GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleSaberTrailIntensitySettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FormattedFloatListSettingsController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandlePlayerHeightSettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(float_t)>(&GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandlePlayerHeightSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpStartBeatOffsetPositionSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, float_t)>(&GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoteJumpStartBeatOffsetPositionSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleLightReductionAmountSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, GlobalNamespace::EnvironmentEffectsFilterPreset)>(&GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleLightReductionAmountSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentEffectsFilterPreset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleAdvancedHudToggleChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x215e87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleAdvancedHudToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, GlobalNamespace::NoteJumpDurationTypeSettings)>(&GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x215e8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpFixedDurationSettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::FormattedFloatListSettingsController, float_t)>(&GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoteJumpFixedDurationSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FormattedFloatListSettingsController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.HandleNoTextsAndHudsToggleChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x215e92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoTextsAndHudsToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.SetIsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::SetIsDirty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetIsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.RefreshNoteJumpUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::NoteJumpDurationTypeSettings)>(&GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x215e628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "RefreshNoteJumpUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.SetSectionDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(UnityEngine::CanvasGroup, bool)>(&GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x215e150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetSectionDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CanvasGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController.RefreshArcsWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::ArcVisibilityType, bool)>(&GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x215e664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "RefreshArcsWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ArcVisibilityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x215e97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215e9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215ea08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215ea2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215ea50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_4)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215ea74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_5)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x215ea98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_6)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x215eadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_7)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x215eb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__40_8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_8)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x215ee9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IRefreshable
constexpr  GlobalNamespace::PlayerSettingsPanelController::operator GlobalNamespace::IRefreshable() const noexcept {
return GlobalNamespace::IRefreshable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__leftHandedToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__leftHandedToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__reduceDebrisToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__reduceDebrisToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noTextsAndHudsToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__noTextsAndHudsToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__advanceHudToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__advanceHudToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__autoRestartToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__autoRestartToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerHeightSettingsController(GlobalNamespace::PlayerHeightSettingsController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerHeightSettingsController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerHeightSettingsController>(value));
}
constexpr GlobalNamespace::PlayerHeightSettingsController GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerHeightSettingsController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerHeightSettingsCanvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsCanvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__automaticPlayerHeightToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__automaticPlayerHeightToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__sfxVolumeSettingsController(GlobalNamespace::FormattedFloatListSettingsController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FormattedFloatListSettingsController>(value));
}
constexpr GlobalNamespace::FormattedFloatListSettingsController GlobalNamespace::PlayerSettingsPanelController::__get__sfxVolumeSettingsController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__saberTrailIntensitySettingsController(GlobalNamespace::FormattedFloatListSettingsController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FormattedFloatListSettingsController>(value));
}
constexpr GlobalNamespace::FormattedFloatListSettingsController GlobalNamespace::PlayerSettingsPanelController::__get__saberTrailIntensitySettingsController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpDurationTypeSettingsDropdown(GlobalNamespace::NoteJumpDurationTypeSettingsDropdown value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteJumpDurationTypeSettingsDropdown, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>(value));
}
constexpr GlobalNamespace::NoteJumpDurationTypeSettingsDropdown GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpDurationTypeSettingsDropdown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteJumpDurationTypeSettingsDropdown, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpFixedDurationSettingsController(GlobalNamespace::FormattedFloatListSettingsController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FormattedFloatListSettingsController>(value));
}
constexpr GlobalNamespace::FormattedFloatListSettingsController GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FormattedFloatListSettingsController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpFixedDurationSettingsCanvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsCanvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpStartBeatOffsetDropdown(GlobalNamespace::NoteJumpStartBeatOffsetDropdown value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteJumpStartBeatOffsetDropdown, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteJumpStartBeatOffsetDropdown>(value));
}
constexpr GlobalNamespace::NoteJumpStartBeatOffsetDropdown GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetDropdown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteJumpStartBeatOffsetDropdown, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpStartBeatOffsetCanvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetCanvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__environmentEffectsFilterDefaultPresetDropdown(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentEffectsFilterPresetDropdown, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>(value));
}
constexpr GlobalNamespace::EnvironmentEffectsFilterPresetDropdown GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterDefaultPresetDropdown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentEffectsFilterPresetDropdown, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__environmentEffectsFilterExpertPlusPresetDropdown(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentEffectsFilterPresetDropdown, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>(value));
}
constexpr GlobalNamespace::EnvironmentEffectsFilterPresetDropdown GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterExpertPlusPresetDropdown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentEffectsFilterPresetDropdown, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__hideNoteSpawnEffectToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__hideNoteSpawnEffectToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__adaptiveSfxToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__adaptiveSfxToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcsVisibilityTypeSettingsDropdown(GlobalNamespace::ArcVisibilityTypeSettingsDropdown value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ArcVisibilityTypeSettingsDropdown, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ArcVisibilityTypeSettingsDropdown>(value));
}
constexpr GlobalNamespace::ArcVisibilityTypeSettingsDropdown GlobalNamespace::PlayerSettingsPanelController::__get__arcsVisibilityTypeSettingsDropdown() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ArcVisibilityTypeSettingsDropdown, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcHapticFeedbackCanvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::PlayerSettingsPanelController::__get__arcHapticFeedbackCanvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcsHapticFeedbackToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::PlayerSettingsPanelController::__get__arcsHapticFeedbackToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__singleplayerOnlyCanvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::PlayerSettingsPanelController::__get__singleplayerOnlyCanvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcVisibilityWarning(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::PlayerSettingsPanelController::__get__arcVisibilityWarning() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set_didChangePlayerSettingsEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::PlayerSettingsPanelController::__get_didChangePlayerSettingsEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__currentArcType(GlobalNamespace::ArcVisibilityType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ArcVisibilityType, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ArcVisibilityType>(value));
}
constexpr GlobalNamespace::ArcVisibilityType GlobalNamespace::PlayerSettingsPanelController::__get__currentArcType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ArcVisibilityType, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettings, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettings GlobalNamespace::PlayerSettingsPanelController::__get__playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettings, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__toggleBinder(HMUI::ToggleBinder value)  {
::cordl_internals::setInstanceField<HMUI::ToggleBinder, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ToggleBinder>(value));
}
constexpr HMUI::ToggleBinder GlobalNamespace::PlayerSettingsPanelController::__get__toggleBinder() const {
return ::cordl_internals::getInstanceField<HMUI::ToggleBinder, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__dirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::PlayerSettingsPanelController::__get__dirty() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__refreshed(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::PlayerSettingsPanelController::__get__refreshed() const {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__eventBinder(GlobalNamespace::EventBinder value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EventBinder, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EventBinder>(value));
}
constexpr GlobalNamespace::EventBinder GlobalNamespace::PlayerSettingsPanelController::__get__eventBinder() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EventBinder, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "add_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "remove_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::PlayerSpecificSettings GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerSpecificSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::SetData(GlobalNamespace::PlayerSpecificSettings playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSpecificSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerSpecificSettings);
}
 void GlobalNamespace::PlayerSettingsPanelController::SetLayout(GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, layout);
}
 void GlobalNamespace::PlayerSettingsPanelController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "UnsubscribeAllUICallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController settingsController, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleSFXVolumeSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FormattedFloatListSettingsController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, settingsController, value);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t idx, GlobalNamespace::ArcVisibilityType arcVisibilityType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleArcVisibilityDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ArcVisibilityType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx, arcVisibilityType);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController settingsController, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleSaberTrailIntensitySettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FormattedFloatListSettingsController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, settingsController, value);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandlePlayerHeightSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected(int32_t idx, float_t startBeatOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoteJumpStartBeatOffsetPositionSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx, startBeatOffset);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected(int32_t obj, GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleLightReductionAmountSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentEffectsFilterPreset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, environmentEffectsFilterPreset);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleAdvancedHudToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t idx, GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idx, noteJumpDurationTypeSettings);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController formattedFloatListSettingsController, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoteJumpFixedDurationSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FormattedFloatListSettingsController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, formattedFloatListSettingsController, value);
}
 void GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "HandleNoTextsAndHudsToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::SetIsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetIsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI(GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "RefreshNoteJumpUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteJumpDurationTypeSettings);
}
 void GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled(UnityEngine::CanvasGroup sectionCanvasGroup, bool disable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "SetSectionDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::CanvasGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sectionCanvasGroup, disable);
}
 void GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning(GlobalNamespace::ArcVisibilityType arcVisibilityType, bool forceRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "RefreshArcsWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ArcVisibilityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arcVisibilityType, forceRebuild);
}
// Ctor Parameters []
 GlobalNamespace::PlayerSettingsPanelController::PlayerSettingsPanelController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PlayerSettingsPanelController>())) {}
 void GlobalNamespace::PlayerSettingsPanelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_0(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_1(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_2(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_3(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_4(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_5(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_6(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__40_8()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerSettingsPanelController>::get(),
                            "<OnEnable>b__40_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
