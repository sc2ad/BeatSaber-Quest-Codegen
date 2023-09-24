#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
// Ctor Parameters [CppParam { name: "usePassword", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maxPlayers", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allowInviteOthers", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "netDiscoverable", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficulties", ty: "GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "modifiers", ty: "GlobalNamespace::GameplayModifierMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "songPacks", ty: "GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerMode", ty: "GlobalNamespace::GameplayServerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "songSelectionMode", ty: "GlobalNamespace::SongSelectionMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerControlSettings", ty: "GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::CreateServerFormData::CreateServerFormData(bool usePassword, ::StringW password, int32_t maxPlayers, bool allowInviteOthers, bool netDiscoverable, GlobalNamespace::BeatmapDifficultyMask difficulties, GlobalNamespace::GameplayModifierMask modifiers, GlobalNamespace::SongPackMask songPacks, GlobalNamespace::GameplayServerMode gameplayServerMode, GlobalNamespace::SongSelectionMode songSelectionMode, GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept : ::bs_hook::ValueTypeWrapper() {this->usePassword = usePassword;
this->password = password;
this->maxPlayers = maxPlayers;
this->allowInviteOthers = allowInviteOthers;
this->netDiscoverable = netDiscoverable;
this->difficulties = difficulties;
this->modifiers = modifiers;
this->songPacks = songPacks;
this->gameplayServerMode = gameplayServerMode;
this->songSelectionMode = songSelectionMode;
this->gameplayServerControlSettings = gameplayServerControlSettings;
}
constexpr void GlobalNamespace::CreateServerFormData::__set_usePassword(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::CreateServerFormData::__get_usePassword() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_password(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::CreateServerFormData::__get_password() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_maxPlayers(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::CreateServerFormData::__get_maxPlayers() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_allowInviteOthers(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::CreateServerFormData::__get_allowInviteOthers() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_netDiscoverable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::CreateServerFormData::__get_netDiscoverable() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_difficulties(GlobalNamespace::BeatmapDifficultyMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficultyMask, 0x16>(this->__instance, std::forward<GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::CreateServerFormData::__get_difficulties() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficultyMask, 0x16>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_modifiers(GlobalNamespace::GameplayModifierMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifierMask, 0x18>(this->__instance, std::forward<GlobalNamespace::GameplayModifierMask>(value));
}
constexpr GlobalNamespace::GameplayModifierMask GlobalNamespace::CreateServerFormData::__get_modifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifierMask, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_songPacks(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x20>(this->__instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask GlobalNamespace::CreateServerFormData::__get_songPacks() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_gameplayServerMode(GlobalNamespace::GameplayServerMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerMode, 0x30>(this->__instance, std::forward<GlobalNamespace::GameplayServerMode>(value));
}
constexpr GlobalNamespace::GameplayServerMode GlobalNamespace::CreateServerFormData::__get_gameplayServerMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerMode, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_songSelectionMode(GlobalNamespace::SongSelectionMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongSelectionMode, 0x34>(this->__instance, std::forward<GlobalNamespace::SongSelectionMode>(value));
}
constexpr GlobalNamespace::SongSelectionMode GlobalNamespace::CreateServerFormData::__get_songSelectionMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongSelectionMode, 0x34>(this->__instance);
}
constexpr void GlobalNamespace::CreateServerFormData::__set_gameplayServerControlSettings(GlobalNamespace::GameplayServerControlSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayServerControlSettings, 0x38>(this->__instance, std::forward<GlobalNamespace::GameplayServerControlSettings>(value));
}
constexpr GlobalNamespace::GameplayServerControlSettings GlobalNamespace::CreateServerFormData::__get_gameplayServerControlSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayServerControlSettings, 0x38>(this->__instance);
}
