#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PracticeViewController_def.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "HMUI/zzzz__PercentSlider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.add_didPressPlayButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::System::Action)>(&::GlobalNamespace::PracticeViewController::add_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x217dd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "add_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.remove_didPressPlayButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::System::Action)>(&::GlobalNamespace::PracticeViewController::remove_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x217de2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "remove_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.get_practiceSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PracticeSettings (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::get_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217dec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "get_practiceSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::GlobalNamespace::IBeatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::PracticeViewController::Init)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x217ded0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(bool, bool, bool)>(&::GlobalNamespace::PracticeViewController::DidActivate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x217e094;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PracticeViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(bool, bool)>(&::GlobalNamespace::PracticeViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x217e264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PracticeViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.PlayPreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::PlayPreview)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x217e35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "PlayPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.RefreshUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::RefreshUI)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x217e21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "RefreshUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.HandleSpeedSliderValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::HMUI::RangeValuesTextSlider, float_t)>(&::GlobalNamespace::PracticeViewController::HandleSpeedSliderValueDidChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x217e54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "HandleSpeedSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.HandleSongStartSliderValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)(::HMUI::RangeValuesTextSlider, float_t)>(&::GlobalNamespace::PracticeViewController::HandleSongStartSliderValueDidChange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x217e568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "HandleSongStartSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController.PlayButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::PlayButtonPressed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x217e5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "PlayButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PracticeViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PracticeViewController::*)()>(&::GlobalNamespace::PracticeViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217e5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PracticeViewController::__set__songStartSlider(::HMUI::TimeSlider value)  {
::cordl_internals::setInstanceField<::HMUI::TimeSlider, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::TimeSlider>(value));
}
constexpr ::HMUI::TimeSlider ::GlobalNamespace::PracticeViewController::__get__songStartSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::TimeSlider, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__speedSlider(::HMUI::PercentSlider value)  {
::cordl_internals::setInstanceField<::HMUI::PercentSlider, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::PercentSlider>(value));
}
constexpr ::HMUI::PercentSlider ::GlobalNamespace::PracticeViewController::__get__speedSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::PercentSlider, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__levelBar(::GlobalNamespace::LevelBar value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelBar, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LevelBar>(value));
}
constexpr ::GlobalNamespace::LevelBar ::GlobalNamespace::PracticeViewController::__get__levelBar() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__playButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::PracticeViewController::__get__playButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerDataModel>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel ::GlobalNamespace::PracticeViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPreviewPlayer, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SongPreviewPlayer>(value));
}
constexpr ::GlobalNamespace::SongPreviewPlayer ::GlobalNamespace::PracticeViewController::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPreviewPlayer, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PerceivedLoudnessPerLevelModel>(value));
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel ::GlobalNamespace::PracticeViewController::__get__perceivedLoudnessPerLevelModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerceivedLoudnessPerLevelModel, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set_didPressPlayButtonEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::PracticeViewController::__get_didPressPlayButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__practiceSettings(::GlobalNamespace::PracticeSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PracticeSettings, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PracticeSettings>(value));
}
constexpr ::GlobalNamespace::PracticeSettings ::GlobalNamespace::PracticeViewController::__get__practiceSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PracticeSettings, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__currentPlayingStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PracticeViewController::__get__currentPlayingStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__maxStartSongTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PracticeViewController::__get__maxStartSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__level(::GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevel, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevel ::GlobalNamespace::PracticeViewController::__get__level() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevel, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::PracticeViewController::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PracticeViewController::__set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::PracticeViewController::__get__beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::PracticeViewController::add_didPressPlayButtonEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "add_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::PracticeViewController::remove_didPressPlayButtonEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "remove_didPressPlayButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::PracticeSettings ::GlobalNamespace::PracticeViewController::get_practiceSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "get_practiceSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PracticeViewController::Init(::GlobalNamespace::IBeatmapLevel level, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, beatmapCharacteristic, beatmapDifficulty);
}
 void ::GlobalNamespace::PracticeViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::PracticeViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void ::GlobalNamespace::PracticeViewController::PlayPreview()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "PlayPreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PracticeViewController::RefreshUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "RefreshUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PracticeViewController::HandleSpeedSliderValueDidChange(::HMUI::RangeValuesTextSlider slider, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "HandleSpeedSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, value);
}
 void ::GlobalNamespace::PracticeViewController::HandleSongStartSliderValueDidChange(::HMUI::RangeValuesTextSlider slider, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "HandleSongStartSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, value);
}
 void ::GlobalNamespace::PracticeViewController::PlayButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            "PlayButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::PracticeViewController::PracticeViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<PracticeViewController>())) {}
 void ::GlobalNamespace::PracticeViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PracticeViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
