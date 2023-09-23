#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MissionGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionGameplaySceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionGameplaySceneSetupData::*)(::ArrayW<GlobalNamespace::MissionObjective>, bool, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO, GlobalNamespace::GameplayModifiers, ::StringW)>(&GlobalNamespace::MissionGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21cf940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionGameplaySceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::MissionObjective>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_missionObjectives(::ArrayW<GlobalNamespace::MissionObjective> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::MissionObjective>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::MissionObjective>>(value));
}
constexpr ::ArrayW<GlobalNamespace::MissionObjective> GlobalNamespace::MissionGameplaySceneSetupData::__get_missionObjectives() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::MissionObjective>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_autoRestart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MissionGameplaySceneSetupData::__get_autoRestart() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::MissionGameplaySceneSetupData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_gameplayModifiers(GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiers, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiers>(value));
}
constexpr GlobalNamespace::GameplayModifiers GlobalNamespace::MissionGameplaySceneSetupData::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiers, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_backButtonText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MissionGameplaySceneSetupData::__get_backButtonText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "missionObjectives", ty: "::ArrayW<GlobalNamespace::MissionObjective>", modifiers: "", def_value: None }, CppParam { name: "autoRestart", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }, CppParam { name: "backButtonText", ty: "::StringW", modifiers: "", def_value: None }]
 GlobalNamespace::MissionGameplaySceneSetupData::MissionGameplaySceneSetupData(::ArrayW<GlobalNamespace::MissionObjective> missionObjectives, bool autoRestart, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::GameplayModifiers gameplayModifiers, ::StringW backButtonText)  : GlobalNamespace::SceneSetupData(THROW_UNLESS(::il2cpp_utils::New<MissionGameplaySceneSetupData>(missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, backButtonText))) {}
 void GlobalNamespace::MissionGameplaySceneSetupData::_ctor(::ArrayW<GlobalNamespace::MissionObjective> missionObjectives, bool autoRestart, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::GameplayModifiers gameplayModifiers, ::StringW backButtonText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionGameplaySceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::MissionObjective>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, backButtonText);
}
