#pragma once
#include "GlobalNamespace/zzzz__VersionSaveData_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType::All{0};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType::FullHeightOnly{1};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType::None{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType::Bar{0};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType::Battery{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed::Normal{0};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed::Faster{1};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed::Slower{2};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22236fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_energyType(::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_energyType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnergyType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_instaFail(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_instaFail() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_failOnSaberClash(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_failOnSaberClash() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_enabledObstacleType(::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_enabledObstacleType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__EnabledObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_fastNotes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_fastNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_strictAngles(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_strictAngles() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_disappearingArrows(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_disappearingArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_ghostNotes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_ghostNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_noBombs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_noBombs() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_songSpeed(::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_songSpeed() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__GameplayModifiers__SongSpeed, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_noArrows(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_noArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_noFailOn0Energy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_noFailOn0Energy() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_proMode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_proMode() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_zenMode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_zenMode() const {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__set_smallCubes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::__get_smallCubes() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::____GlobalNamespace__PlayerSaveData__GameplayModifiers()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__GameplayModifiers>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::AllEffects{0};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::StrobeFilter{1};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::NoEffects{10};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::None{0};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::Low{1};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::Standard{2};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::High{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::Dynamic{0};
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData  ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::Static{1};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2223704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_staticLights(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_staticLights() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_leftHanded(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_leftHanded() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_playerHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_playerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_automaticPlayerHeight(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_automaticPlayerHeight() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_sfxVolume(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_sfxVolume() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_reduceDebris(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_reduceDebris() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_noTextsAndHuds(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_noTextsAndHuds() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_advancedHud(bool value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_advancedHud() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_saberTrailIntensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_saberTrailIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set__noteJumpDurationTypeSettingsSaveData(::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get__noteJumpDurationTypeSettingsSaveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_noteJumpFixedDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_noteJumpFixedDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_autoRestart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_autoRestart() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_noFailEffects(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_noFailEffects() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_noteJumpBeatOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_noteJumpBeatOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_hideNoteSpawnEffect(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_hideNoteSpawnEffect() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_adaptiveSfx(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_adaptiveSfx() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_arcsHapticFeedback(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_arcsHapticFeedback() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_arcsVisibleSaveData(::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_arcsVisibleSaveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_environmentEffectsFilterDefaultPreset(::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_environmentEffectsFilterDefaultPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__set_environmentEffectsFilterExpertPlusPreset(::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::__get_environmentEffectsFilterExpertPlusPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2226bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::*)(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData)>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2226d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__set_campaignOverallStatsData(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__get_campaignOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__set_soloFreePlayOverallStatsData(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__get_soloFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__set_partyFreePlayOverallStatsData(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__get_partyFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__set_onlinePlayOverallStatsData(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::__get_onlinePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "campaignOverallStatsData", ty: "::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "soloFreePlayOverallStatsData", ty: "::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "partyFreePlayOverallStatsData", ty: "::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "onlinePlayOverallStatsData", ty: "::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData campaignOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData soloFreePlayOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData partyFreePlayOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData onlinePlayOverallStatsData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData))) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData::_ctor(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData campaignOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData soloFreePlayOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData partyFreePlayOverallStatsData, ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData onlinePlayOverallStatsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2226dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::*)(int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2226db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_goodCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_goodCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_badCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_badCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_missedCutsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_missedCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_totalScore(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_totalScore() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_playedLevelsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_playedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_cleardLevelsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_cleardLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_failedLevelsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_failedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_fullComboCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_fullComboCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_timePlayed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_timePlayed() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_handDistanceTravelled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_handDistanceTravelled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__set_cummulativeCutScoreWithoutMultiplier(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::__get_cummulativeCutScoreWithoutMultiplier() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "goodCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "badCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "missedCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalScore", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "playedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cleardLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "failedLevelsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fullComboCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "handDistanceTravelled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cummulativeCutScoreWithoutMultiplier", ty: "int64_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier))) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData::_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerOverallStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2223844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_difficulty(::GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_beatmapCharacteristicName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_beatmapCharacteristicName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_highScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_highScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_maxCombo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_maxCombo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_fullCombo(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_maxRank(::GlobalNamespace::____GlobalNamespace__RankModel__Rank value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__RankModel__Rank, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__RankModel__Rank>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_maxRank() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__RankModel__Rank, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_validScore(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_validScore() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__set_playCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::__get_playCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222384c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::__set_missionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::__get_missionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::__set_cleared(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::__get_cleared() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2223770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::__set_startSongTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::__set_songSpeedMul(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::__get_songSpeedMul() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::____GlobalNamespace__PlayerSaveData__PracticeSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PracticeSettings>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::*)(::StringW, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x222385c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_colorSchemeId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_colorSchemeId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_saberAColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_saberAColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_saberBColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_saberBColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_environmentColor0(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_environmentColor0() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_environmentColor1(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_environmentColor1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_obstaclesColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_obstaclesColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_environmentColor0Boost(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_environmentColor0Boost() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__set_environmentColor1Boost(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::__get_environmentColor1Boost() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "colorSchemeId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "saberAColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "saberBColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor0", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor1", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "obstaclesColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor0Boost", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor1Boost", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::____GlobalNamespace__PlayerSaveData__ColorScheme(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__ColorScheme>(colorSchemeId, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor, environmentColor0Boost, environmentColor1Boost))) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme::_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colorSchemeId, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor, environmentColor0Boost, environmentColor1Boost);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::*)(bool, ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>)>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x222392c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::__set_overrideDefaultColors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::__get_overrideDefaultColors() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::__set_selectedColorSchemeId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::__get_selectedColorSchemeId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::__set_colorSchemes(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme> ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::__get_colorSchemes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "overrideDefaultColors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "selectedColorSchemeId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "colorSchemes", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings(bool overrideDefaultColors, ::StringW selectedColorSchemeId, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme> colorSchemes)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__ColorSchemesSettings>(overrideDefaultColors, selectedColorSchemeId, colorSchemes))) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings::_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme> colorSchemes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorScheme>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, overrideDefaultColors, selectedColorSchemeId, colorSchemes);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2223968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::__set_overrideEnvironments(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::__get_overrideEnvironments() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::__set_overrideNormalEnvironmentName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::__get_overrideNormalEnvironmentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::__set_override360EnvironmentName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::__get_override360EnvironmentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2223854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer::__set_playerName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer::____GlobalNamespace__PlayerSaveData__GuestPlayer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__GuestPlayer>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2223970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__set_createServerNumberOfPlayers(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__get_createServerNumberOfPlayers() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__set_quickPlayDifficulty(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__get_quickPlayDifficulty() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__set_quickPlaySongPackMask(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__get_quickPlaySongPackMask() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__set_quickPlaySongPackMaskSerializedName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__get_quickPlaySongPackMaskSerializedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__set_quickPlayEnableLevelSelection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::__get_quickPlayEnableLevelSelection() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22239e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::__set_eulaVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::__get_eulaVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::__set_privacyPolicyVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::__get_privacyPolicyVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::__set_healthAndSafetyVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::__get_healthAndSafetyVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__PlayerAgreementsData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::*)()>(&::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22236e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_playerId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_playerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_playerName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_shouldShowTutorialPrompt(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_shouldShowTutorialPrompt() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_shouldShow360Warning(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_shouldShow360Warning() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_agreedToEula(bool value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_agreedToEula() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_didSelectLanguage(bool value)  {
::cordl_internals::setInstanceField<bool, 0x23>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_didSelectLanguage() const {
return ::cordl_internals::getInstanceField<bool, 0x23>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_agreedToMultiplayerDisclaimer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_agreedToMultiplayerDisclaimer() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_avatarCreated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_avatarCreated() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_didSelectRegionVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_didSelectRegionVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_playerAgreements(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_playerAgreements() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAgreementsData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_lastSelectedBeatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_lastSelectedBeatmapCharacteristicName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_lastSelectedBeatmapCharacteristicName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_gameplayModifiers(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GameplayModifiers, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_playerSpecificSettings(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerSpecificSettings, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_practiceSettings(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_practiceSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PracticeSettings, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_playerAllOverallStatsData(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_playerAllOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData> ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_levelsStatsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerLevelStatsData>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData> ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_missionsStatsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__PlayerMissionStatsData>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW> ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_showedMissionHelpIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_colorSchemesSettings(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_colorSchemesSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__ColorSchemesSettings, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_overrideEnvironmentSettings(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_overrideEnvironmentSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__OverrideEnvironmentSettings, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_favoritesLevelIds(::System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW> ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_favoritesLevelIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_multiplayerModeSettings(::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_multiplayerModeSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__MultiplayerModeSettings, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_currentDlcPromoDisplayCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_currentDlcPromoDisplayCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__set_currentDlcPromoId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::__get_currentDlcPromoId() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::____GlobalNamespace__PlayerSaveData__LocalPlayer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PlayerSaveData__LocalPlayer>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData::*)()>(&::GlobalNamespace::PlayerSaveData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2223690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PlayerSaveData::__set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer> ::GlobalNamespace::PlayerSaveData::__get_localPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__LocalPlayer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlayerSaveData::__set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer> ::GlobalNamespace::PlayerSaveData::__get_guestPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PlayerSaveData__GuestPlayer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::PlayerSaveData::PlayerSaveData()  : ::GlobalNamespace::VersionSaveData(THROW_UNLESS(::il2cpp_utils::New<PlayerSaveData>())) {}
 void ::GlobalNamespace::PlayerSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
