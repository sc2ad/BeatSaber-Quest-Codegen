#pragma once
namespace {
#include "GlobalNamespace/zzzz__RecordingToolSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettings::*)(::StringW, ::GlobalNamespace::IBeatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO, bool, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, ::StringW, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, bool, bool, int32_t, int32_t, int32_t, ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, bool, float_t, float_t, bool, ::GlobalNamespace::EnvironmentTypeSO, ::GlobalNamespace::EnvironmentInfoSO, bool)>(&::GlobalNamespace::RecordingToolSettings::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21ab370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettings.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RecordingToolSettings::*)()>(&::GlobalNamespace::RecordingToolSettings::ToString)> {
  constexpr static std::size_t size = 0xb54;
  constexpr static std::size_t addrs = 0x21ac07c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::RecordingToolSettings),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettings>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_gameMode(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::RecordingToolSettings::__get_gameMode() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_pack(::GlobalNamespace::IBeatmapLevelPack value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPack, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapLevelPack>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack ::GlobalNamespace::RecordingToolSettings::__get_pack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_level(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::RecordingToolSettings::__get_level() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_difficulty(::GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty ::GlobalNamespace::RecordingToolSettings::__get_difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_characteristic(::GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::RecordingToolSettings::__get_characteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_runLevel(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::RecordingToolSettings::__get_runLevel() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_recordingMode(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode ::GlobalNamespace::RecordingToolSettings::__get_recordingMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_recordingPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::RecordingToolSettings::__get_recordingPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_cameraView(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView ::GlobalNamespace::RecordingToolSettings::__get_cameraView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_addDateTimeSuffixToRecordingName(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::RecordingToolSettings::__get_addDateTimeSuffixToRecordingName() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_screenshotRecording(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::RecordingToolSettings::__get_screenshotRecording() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_screenshotWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::RecordingToolSettings::__get_screenshotWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_screenshotHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::RecordingToolSettings::__get_screenshotHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_framerate(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::RecordingToolSettings::__get_framerate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_playbackScreenshots(::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> ::GlobalNamespace::RecordingToolSettings::__get_playbackScreenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_practice(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::RecordingToolSettings::__get_practice() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_startSongTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::RecordingToolSettings::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_songSpeedMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::RecordingToolSettings::__get_songSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_overrideEnvironments(bool value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::RecordingToolSettings::__get_overrideEnvironments() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_environmentType(::GlobalNamespace::EnvironmentTypeSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentTypeSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentTypeSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentTypeSO ::GlobalNamespace::RecordingToolSettings::__get_environmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentTypeSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO ::GlobalNamespace::RecordingToolSettings::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettings::__set_saveToOldFormat(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::RecordingToolSettings::__get_saveToOldFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "gameMode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pack", ty: "::GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "characteristic", ty: "::GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "runLevel", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "recordingMode", ty: "::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode", modifiers: "", def_value: None }, CppParam { name: "recordingPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cameraView", ty: "::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView", modifiers: "", def_value: None }, CppParam { name: "addDateTimeSuffixToRecordingName", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "screenshotRecording", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "screenshotWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenshotHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "framerate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "playbackScreenshots", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>", modifiers: "", def_value: None }, CppParam { name: "practice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startSongTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "songSpeedMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "overrideEnvironments", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentType", ty: "::GlobalNamespace::EnvironmentTypeSO", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "::GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: None }, CppParam { name: "saveToOldFormat", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::RecordingToolSettings::RecordingToolSettings(::StringW gameMode, ::GlobalNamespace::IBeatmapLevelPack pack, ::GlobalNamespace::IPreviewBeatmapLevel level, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristicSO characteristic, bool runLevel, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool practice, float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO environmentType, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, bool saveToOldFormat)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RecordingToolSettings>(gameMode, pack, level, difficulty, characteristic, runLevel, recordingMode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat))) {}
 void ::GlobalNamespace::RecordingToolSettings::_ctor(::StringW gameMode, ::GlobalNamespace::IBeatmapLevelPack pack, ::GlobalNamespace::IPreviewBeatmapLevel level, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristicSO characteristic, bool runLevel, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool practice, float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO environmentType, ::GlobalNamespace::EnvironmentInfoSO environmentInfo, bool saveToOldFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameMode, pack, level, difficulty, characteristic, runLevel, recordingMode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat);
}
 ::StringW ::GlobalNamespace::RecordingToolSettings::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettings>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
