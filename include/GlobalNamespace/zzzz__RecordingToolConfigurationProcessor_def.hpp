#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace GlobalNamespace {
class GlobalNamespace__ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class ProgramArguments;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
namespace UnityEngine {
struct LayerMask;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot;
}
namespace GlobalNamespace {
class GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor;
}
// Type: ::ColorSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6036))
// CS Name: RecordingToolConfigurationProcessor::ColorSaveData
class CORDL_TYPE GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData(GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData(GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData& operator=(GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData&& o) noexcept = default;
  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData& operator=(GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(float_t value) ;

constexpr float_t __get_r() const;

 float_t __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(float_t value) ;

constexpr float_t __get_g() const;

 float_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(float_t value) ;

constexpr float_t __get_b() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData() ;

/// @brief Method .ctor addr 0x21ab87c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlaybackScreenshot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6037))
// CS Name: RecordingToolConfigurationProcessor::PlaybackScreenshot
class CORDL_TYPE GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot(GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot(GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot& operator=(GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot&& o) noexcept = default;
  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot& operator=(GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_includedLayers, put=__set_includedLayers))  includedLayers;

constexpr void __set_includedLayers(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_includedLayers() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_excludedLayers, put=__set_excludedLayers))  excludedLayers;

constexpr void __set_excludedLayers(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_excludedLayers() const;

 GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor))  backgroundColor;

constexpr void __set_backgroundColor(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData value) ;

constexpr GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData __get_backgroundColor() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot() ;

/// @brief Method .ctor addr 0x21ab884 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecordingToolConfiguration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6038))
// CS Name: RecordingToolConfigurationProcessor::RecordingToolConfiguration
class CORDL_TYPE GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration(GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration(GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration& operator=(GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration&& o) noexcept = default;
  constexpr GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration& operator=(GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(::StringW value) ;

constexpr ::StringW __get_mode() const;

 ::StringW __declspec(property(get=__get_packID, put=__set_packID))  packID;

constexpr void __set_packID(::StringW value) ;

constexpr ::StringW __get_packID() const;

 ::StringW __declspec(property(get=__get_levelID, put=__set_levelID))  levelID;

constexpr void __set_levelID(::StringW value) ;

constexpr ::StringW __get_levelID() const;

 ::StringW __declspec(property(get=__get_difficulty, put=__set_difficulty))  difficulty;

constexpr void __set_difficulty(::StringW value) ;

constexpr ::StringW __get_difficulty() const;

 ::StringW __declspec(property(get=__get_characteristic, put=__set_characteristic))  characteristic;

constexpr void __set_characteristic(::StringW value) ;

constexpr ::StringW __get_characteristic() const;

 bool __declspec(property(get=__get_runLevel, put=__set_runLevel))  runLevel;

constexpr void __set_runLevel(bool value) ;

constexpr bool __get_runLevel() const;

 ::StringW __declspec(property(get=__get_recordingMode, put=__set_recordingMode))  recordingMode;

constexpr void __set_recordingMode(::StringW value) ;

constexpr ::StringW __get_recordingMode() const;

 ::StringW __declspec(property(get=__get_recordingPath, put=__set_recordingPath))  recordingPath;

constexpr void __set_recordingPath(::StringW value) ;

constexpr ::StringW __get_recordingPath() const;

 ::StringW __declspec(property(get=__get_cameraView, put=__set_cameraView))  cameraView;

constexpr void __set_cameraView(::StringW value) ;

constexpr ::StringW __get_cameraView() const;

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

 ::ArrayW<GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot> __declspec(property(get=__get_playbackScreenshots, put=__set_playbackScreenshots))  playbackScreenshots;

constexpr void __set_playbackScreenshots(::ArrayW<GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot> __get_playbackScreenshots() const;

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

 ::StringW __declspec(property(get=__get_environmentType, put=__set_environmentType))  environmentType;

constexpr void __set_environmentType(::StringW value) ;

constexpr ::StringW __get_environmentType() const;

 ::StringW __declspec(property(get=__get_environmentName, put=__set_environmentName))  environmentName;

constexpr void __set_environmentName(::StringW value) ;

constexpr ::StringW __get_environmentName() const;

 bool __declspec(property(get=__get_saveToOldFormat, put=__set_saveToOldFormat))  saveToOldFormat;

constexpr void __set_saveToOldFormat(bool value) ;

constexpr bool __get_saveToOldFormat() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration() ;

/// @brief Method .ctor addr 0x21ab88c size 0x9c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecordingToolConfigurationProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6039))
// CS Name: RecordingToolConfigurationProcessor
class CORDL_TYPE RecordingToolConfigurationProcessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RecordingToolConfiguration = GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration;

using PlaybackScreenshot = GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot;

using ColorSaveData = GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RecordingToolConfigurationProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: " const&", def_value: None }]
constexpr RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigurationProcessor", modifiers: "&&", def_value: None }]
constexpr RecordingToolConfigurationProcessor(RecordingToolConfigurationProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolConfigurationProcessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RecordingToolConfigurationProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolConfigurationProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolConfigurationProcessor& operator=(RecordingToolConfigurationProcessor&& o) noexcept = default;
  constexpr RecordingToolConfigurationProcessor& operator=(RecordingToolConfigurationProcessor const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ProgramArguments __declspec(property(get=__get__programArguments, put=__set__programArguments))  _programArguments;

constexpr void __set__programArguments(GlobalNamespace::ProgramArguments value) ;

constexpr GlobalNamespace::ProgramArguments __get__programArguments() const;

 GlobalNamespace::IBeatSaberLogger __declspec(property(get=__get__logger, put=__set__logger))  _logger;

constexpr void __set__logger(GlobalNamespace::IBeatSaberLogger value) ;

constexpr GlobalNamespace::IBeatSaberLogger __get__logger() const;

 GlobalNamespace::IPosesSerializer __declspec(property(get=__get__posesSerializer, put=__set__posesSerializer))  _posesSerializer;

constexpr void __set__posesSerializer(GlobalNamespace::IPosesSerializer value) ;

constexpr GlobalNamespace::IPosesSerializer __get__posesSerializer() const;

 GlobalNamespace::RecordingToolResourceContainerSO __declspec(property(get=__get__resourceContainer, put=__set__resourceContainer))  _resourceContainer;

constexpr void __set__resourceContainer(GlobalNamespace::RecordingToolResourceContainerSO value) ;

constexpr GlobalNamespace::RecordingToolResourceContainerSO __get__resourceContainer() const;

/// @brief Field kRecordingToolCommandLineArgument offset 0
static constexpr ::ConstString  kRecordingToolCommandLineArgument{u"--enable_recording_tool"};

/// @brief Field kSoloMode offset 0
static constexpr ::ConstString  kSoloMode{u"Solo"};

/// @brief Field kNormalEnvironmentType offset 0
static constexpr ::ConstString  kNormalEnvironmentType{u"Normal"};

/// @brief Field kNormalEnvironmentNameSuffix offset 0
static constexpr ::ConstString  kNormalEnvironmentNameSuffix{u"Environment"};

/// @brief Field kEverythingLayerMask offset 0
static constexpr ::ConstString  kEverythingLayerMask{u"Everything"};

/// @brief Field kNothingLayerMask offset 0
static constexpr ::ConstString  kNothingLayerMask{u"Nothing"};

/// @brief Field kDefaultMrcLayersMask offset 0
static constexpr ::ConstString  kDefaultMrcLayersMask{u"DefaultMrcLayers"};


// Methods

// Ctor Parameters [CppParam { name: "programArguments", ty: "GlobalNamespace::ProgramArguments", modifiers: "", def_value: None }, CppParam { name: "logger", ty: "GlobalNamespace::IBeatSaberLogger", modifiers: "", def_value: None }, CppParam { name: "posesSerializer", ty: "GlobalNamespace::IPosesSerializer", modifiers: "", def_value: None }, CppParam { name: "resourceContainer", ty: "GlobalNamespace::RecordingToolResourceContainerSO", modifiers: "", def_value: None }]
explicit RecordingToolConfigurationProcessor(GlobalNamespace::ProgramArguments programArguments, GlobalNamespace::IBeatSaberLogger logger, GlobalNamespace::IPosesSerializer posesSerializer, GlobalNamespace::RecordingToolResourceContainerSO resourceContainer) ;

/// @brief Method .ctor addr 0x21a8fa8 size 0x40 virtual false final false
 void _ctor(GlobalNamespace::ProgramArguments programArguments, GlobalNamespace::IBeatSaberLogger logger, GlobalNamespace::IPosesSerializer posesSerializer, GlobalNamespace::RecordingToolResourceContainerSO resourceContainer) ;

/// @brief Method IsRecordingToolEnabled addr 0x21a8fe8 size 0x6c virtual false final false
 bool IsRecordingToolEnabled() ;

/// @brief Method GetConfigFilePath addr 0x21a9054 size 0x3e0 virtual false final false
 ::StringW GetConfigFilePath() ;

/// @brief Method LoadConfigurationFile addr 0x21a9434 size 0x178 virtual false final false
 ::StringW LoadConfigurationFile(::StringW filePath) ;

/// @brief Method DeserializeConfigurationFile addr 0x21a95ac size 0x17c virtual false final false
 GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration DeserializeConfigurationFile(::StringW jsonData) ;

/// @brief Method LoadConfiguration addr 0x21a9728 size 0x1c virtual false final false
 GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration LoadConfiguration(::StringW filePath) ;

/// @brief Method GetDefaultMrcLayersMask addr 0x21a9744 size 0x94 virtual false final false
static UnityEngine::LayerMask GetDefaultMrcLayersMask() ;

/// @brief Method GetLayerMask addr 0x21a97d8 size 0x208 virtual false final false
 UnityEngine::LayerMask GetLayerMask(::StringW layerName) ;

/// @brief Method GetLayersMask addr 0x21a99e0 size 0xac virtual false final false
 UnityEngine::LayerMask GetLayersMask(::ArrayW<::StringW> layerNames) ;

/// @brief Method GetLevelPackAndLevelPreviewForLevelId addr 0x21a9a8c size 0x910 virtual false final false
static System::ValueTuple_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> GetLevelPackAndLevelPreviewForLevelId(::StringW packId, ::StringW levelId, System::Collections::Generic::IEnumerable_1<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks) ;

/// @brief Method CreateRecordingToolSettingsFromConfiguration addr 0x21aa39c size 0xfd4 virtual false final false
 GlobalNamespace::RecordingToolSettings CreateRecordingToolSettingsFromConfiguration(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration recordingToolConfiguration, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method CreateObjectsMovementRecorderInitDataFromConfiguration addr 0x21ab4b4 size 0xf8 virtual false final false
 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData CreateObjectsMovementRecorderInitDataFromConfiguration(GlobalNamespace::RecordingToolSettings recordingToolSettings) ;

/// @brief Method CreateMenuDestinationFromConfiguration addr 0x21ab5ac size 0x2d0 virtual false final false
 GlobalNamespace::MenuDestination CreateMenuDestinationFromConfiguration(GlobalNamespace::RecordingToolSettings recordingToolSettings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__ColorSaveData, "", "RecordingToolConfigurationProcessor/ColorSaveData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__PlaybackScreenshot, "", "RecordingToolConfigurationProcessor/PlaybackScreenshot");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RecordingToolConfigurationProcessor__RecordingToolConfiguration, "", "RecordingToolConfigurationProcessor/RecordingToolConfiguration");
NEED_NO_BOX(GlobalNamespace::RecordingToolConfigurationProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolConfigurationProcessor, "", "RecordingToolConfigurationProcessor");
