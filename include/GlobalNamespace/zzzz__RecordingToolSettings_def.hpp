#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct GlobalNamespace__ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class GlobalNamespace__PlaybackRenderer__PlaybackScreenshot;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettings;
}
// Type: ::RecordingToolSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6043))
// CS Name: RecordingToolSettings
class CORDL_TYPE RecordingToolSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~RecordingToolSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettings", modifiers: " const&", def_value: None }]
constexpr RecordingToolSettings(RecordingToolSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettings", modifiers: "&&", def_value: None }]
constexpr RecordingToolSettings(RecordingToolSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RecordingToolSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolSettings& operator=(RecordingToolSettings&& o) noexcept = default;
  constexpr RecordingToolSettings& operator=(RecordingToolSettings const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_gameMode, put=__set_gameMode))  gameMode;

constexpr void __set_gameMode(::StringW value) ;

constexpr ::StringW __get_gameMode() const;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get_pack, put=__set_pack))  pack;

constexpr void __set_pack(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get_pack() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_level() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_difficulty, put=__set_difficulty))  difficulty;

constexpr void __set_difficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_difficulty() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get_characteristic, put=__set_characteristic))  characteristic;

constexpr void __set_characteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get_characteristic() const;

 bool __declspec(property(get=__get_runLevel, put=__set_runLevel))  runLevel;

constexpr void __set_runLevel(bool value) ;

constexpr bool __get_runLevel() const;

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode __declspec(property(get=__get_recordingMode, put=__set_recordingMode))  recordingMode;

constexpr void __set_recordingMode(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode value) ;

constexpr GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode __get_recordingMode() const;

 ::StringW __declspec(property(get=__get_recordingPath, put=__set_recordingPath))  recordingPath;

constexpr void __set_recordingPath(::StringW value) ;

constexpr ::StringW __get_recordingPath() const;

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView __declspec(property(get=__get_cameraView, put=__set_cameraView))  cameraView;

constexpr void __set_cameraView(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView value) ;

constexpr GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView __get_cameraView() const;

 bool __declspec(property(get=__get_addDateTimeSuffixToRecordingName, put=__set_addDateTimeSuffixToRecordingName))  addDateTimeSuffixToRecordingName;

constexpr void __set_addDateTimeSuffixToRecordingName(bool value) ;

constexpr bool __get_addDateTimeSuffixToRecordingName() const;

 bool __declspec(property(get=__get_screenshotRecording, put=__set_screenshotRecording))  screenshotRecording;

constexpr void __set_screenshotRecording(bool value) ;

constexpr bool __get_screenshotRecording() const;

 int32_t __declspec(property(get=__get_screenshotWidth, put=__set_screenshotWidth))  screenshotWidth;

constexpr void __set_screenshotWidth(int32_t value) ;

constexpr int32_t __get_screenshotWidth() const;

 int32_t __declspec(property(get=__get_screenshotHeight, put=__set_screenshotHeight))  screenshotHeight;

constexpr void __set_screenshotHeight(int32_t value) ;

constexpr int32_t __get_screenshotHeight() const;

 int32_t __declspec(property(get=__get_framerate, put=__set_framerate))  framerate;

constexpr void __set_framerate(int32_t value) ;

constexpr int32_t __get_framerate() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> __declspec(property(get=__get_playbackScreenshots, put=__set_playbackScreenshots))  playbackScreenshots;

constexpr void __set_playbackScreenshots(::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> __get_playbackScreenshots() const;

 bool __declspec(property(get=__get_practice, put=__set_practice))  practice;

constexpr void __set_practice(bool value) ;

constexpr bool __get_practice() const;

 float_t __declspec(property(get=__get_startSongTime, put=__set_startSongTime))  startSongTime;

constexpr void __set_startSongTime(float_t value) ;

constexpr float_t __get_startSongTime() const;

 float_t __declspec(property(get=__get_songSpeedMultiplier, put=__set_songSpeedMultiplier))  songSpeedMultiplier;

constexpr void __set_songSpeedMultiplier(float_t value) ;

constexpr float_t __get_songSpeedMultiplier() const;

 bool __declspec(property(get=__get_overrideEnvironments, put=__set_overrideEnvironments))  overrideEnvironments;

constexpr void __set_overrideEnvironments(bool value) ;

constexpr bool __get_overrideEnvironments() const;

 GlobalNamespace::EnvironmentTypeSO __declspec(property(get=__get_environmentType, put=__set_environmentType))  environmentType;

constexpr void __set_environmentType(GlobalNamespace::EnvironmentTypeSO value) ;

constexpr GlobalNamespace::EnvironmentTypeSO __get_environmentType() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 bool __declspec(property(get=__get_saveToOldFormat, put=__set_saveToOldFormat))  saveToOldFormat;

constexpr void __set_saveToOldFormat(bool value) ;

constexpr bool __get_saveToOldFormat() const;


// Methods

static GlobalNamespace::RecordingToolSettings New_ctor(::StringW gameMode, GlobalNamespace::IBeatmapLevelPack pack, GlobalNamespace::IPreviewBeatmapLevel level, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO characteristic, bool runLevel, GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath, GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool practice, float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, GlobalNamespace::EnvironmentTypeSO environmentType, GlobalNamespace::EnvironmentInfoSO environmentInfo, bool saveToOldFormat) ;

/// @brief Method .ctor addr 0x21ab370 size 0x144 virtual false final false
 void _ctor(::StringW gameMode, GlobalNamespace::IBeatmapLevelPack pack, GlobalNamespace::IPreviewBeatmapLevel level, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO characteristic, bool runLevel, GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode recordingMode, ::StringW recordingPath, GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool practice, float_t startSongTime, float_t songSpeedMultiplier, bool overrideEnvironments, GlobalNamespace::EnvironmentTypeSO environmentType, GlobalNamespace::EnvironmentInfoSO environmentInfo, bool saveToOldFormat) ;

/// @brief Method ToString addr 0x21ac07c size 0xb54 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolSettings, "", "RecordingToolSettings");
