#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__PlaybackRenderer__PlaybackScreenshot;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class PosesPlayback;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class PoseObjectIdSO;
}
namespace GlobalNamespace {
class PlaybackScreenshotRecorder;
}
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class PosesRecorder;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class PlaybackRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
struct GlobalNamespace__ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
class GlobalNamespace__ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
class ObjectsMovementRecorder;
}
// Type: ::Mode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6006))
// CS Name: ObjectsMovementRecorder::Mode
struct CORDL_TYPE GlobalNamespace__ObjectsMovementRecorder__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ObjectsMovementRecorder__Mode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ObjectsMovementRecorder__Mode(GlobalNamespace__ObjectsMovementRecorder__Mode const&) = default;
                    constexpr GlobalNamespace__ObjectsMovementRecorder__Mode(GlobalNamespace__ObjectsMovementRecorder__Mode&&) = default;
                    constexpr GlobalNamespace__ObjectsMovementRecorder__Mode& operator=(GlobalNamespace__ObjectsMovementRecorder__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ObjectsMovementRecorder__Mode& operator=(GlobalNamespace__ObjectsMovementRecorder__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ObjectsMovementRecorder__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ObjectsMovementRecorder__Mode_Unwrapped : int32_t {
__Record = 0,
__Playback = 1,
__Off = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ObjectsMovementRecorder__Mode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ObjectsMovementRecorder__Mode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Record offset 0
static GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode const Record;

/// @brief Field Playback offset 0
static GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode const Playback;

/// @brief Field Off offset 0
static GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode const Off;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CameraView
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6007))
// CS Name: ObjectsMovementRecorder::CameraView
struct CORDL_TYPE GlobalNamespace__ObjectsMovementRecorder__CameraView : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ObjectsMovementRecorder__CameraView(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ObjectsMovementRecorder__CameraView(GlobalNamespace__ObjectsMovementRecorder__CameraView const&) = default;
                    constexpr GlobalNamespace__ObjectsMovementRecorder__CameraView(GlobalNamespace__ObjectsMovementRecorder__CameraView&&) = default;
                    constexpr GlobalNamespace__ObjectsMovementRecorder__CameraView& operator=(GlobalNamespace__ObjectsMovementRecorder__CameraView const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ObjectsMovementRecorder__CameraView& operator=(GlobalNamespace__ObjectsMovementRecorder__CameraView&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ObjectsMovementRecorder__CameraView(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ObjectsMovementRecorder__CameraView_Unwrapped : int32_t {
__FirstPerson = 0,
__ThirdPerson = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ObjectsMovementRecorder__CameraView_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ObjectsMovementRecorder__CameraView_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FirstPerson offset 0
static GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView const FirstPerson;

/// @brief Field ThirdPerson offset 0
static GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView const ThirdPerson;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6008))
// CS Name: ObjectsMovementRecorder::InitData
class CORDL_TYPE GlobalNamespace__ObjectsMovementRecorder__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__ObjectsMovementRecorder__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ObjectsMovementRecorder__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ObjectsMovementRecorder__InitData(GlobalNamespace__ObjectsMovementRecorder__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ObjectsMovementRecorder__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ObjectsMovementRecorder__InitData(GlobalNamespace__ObjectsMovementRecorder__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ObjectsMovementRecorder__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ObjectsMovementRecorder__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ObjectsMovementRecorder__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ObjectsMovementRecorder__InitData& operator=(GlobalNamespace__ObjectsMovementRecorder__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__ObjectsMovementRecorder__InitData& operator=(GlobalNamespace__ObjectsMovementRecorder__InitData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode value) ;

constexpr GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode __get_mode() const;

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

 bool __declspec(property(get=__get_saveToOldFormat, put=__set_saveToOldFormat))  saveToOldFormat;

constexpr void __set_saveToOldFormat(bool value) ;

constexpr bool __get_saveToOldFormat() const;

 GlobalNamespace::IPosesSerializer __declspec(property(get=__get_posesSerializer, put=__set_posesSerializer))  posesSerializer;

constexpr void __set_posesSerializer(GlobalNamespace::IPosesSerializer value) ;

constexpr GlobalNamespace::IPosesSerializer __get_posesSerializer() const;

 GlobalNamespace::IBeatSaberLogger __declspec(property(get=__get_logger, put=__set_logger))  logger;

constexpr void __set_logger(GlobalNamespace::IBeatSaberLogger value) ;

constexpr GlobalNamespace::IBeatSaberLogger __get_logger() const;


// Methods

// Ctor Parameters [CppParam { name: "mode", ty: "GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode", modifiers: "", def_value: None }, CppParam { name: "recordingPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cameraView", ty: "GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView", modifiers: "", def_value: None }, CppParam { name: "addDateTimeSuffixToRecordingName", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "screenshotRecording", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "screenshotWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenshotHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "framerate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "playbackScreenshots", ty: "::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>", modifiers: "", def_value: None }, CppParam { name: "saveToOldFormat", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "logger", ty: "GlobalNamespace::IBeatSaberLogger", modifiers: "", def_value: None }, CppParam { name: "posesSerializer", ty: "GlobalNamespace::IPosesSerializer", modifiers: "", def_value: None }]
explicit GlobalNamespace__ObjectsMovementRecorder__InitData(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool saveToOldFormat, GlobalNamespace::IBeatSaberLogger logger, GlobalNamespace::IPosesSerializer posesSerializer) ;

/// @brief Method .ctor addr 0x21a4e60 size 0xa4 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool saveToOldFormat, GlobalNamespace::IBeatSaberLogger logger, GlobalNamespace::IPosesSerializer posesSerializer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObjectsMovementRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6009))
// CS Name: ObjectsMovementRecorder
class CORDL_TYPE ObjectsMovementRecorder : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData;

using CameraView = GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView;

using Mode = GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ObjectsMovementRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder", modifiers: " const&", def_value: None }]
constexpr ObjectsMovementRecorder(ObjectsMovementRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder", modifiers: "&&", def_value: None }]
constexpr ObjectsMovementRecorder(ObjectsMovementRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectsMovementRecorder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObjectsMovementRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectsMovementRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectsMovementRecorder& operator=(ObjectsMovementRecorder&& o) noexcept = default;
  constexpr ObjectsMovementRecorder& operator=(ObjectsMovementRecorder const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::PoseObject> __declspec(property(get=__get__poseObjects, put=__set__poseObjects))  _poseObjects;

constexpr void __set__poseObjects(::ArrayW<GlobalNamespace::PoseObject> value) ;

constexpr ::ArrayW<GlobalNamespace::PoseObject> __get__poseObjects() const;

 GlobalNamespace::PoseObjectIdSO __declspec(property(get=__get__livPoseObjectId, put=__set__livPoseObjectId))  _livPoseObjectId;

constexpr void __set__livPoseObjectId(GlobalNamespace::PoseObjectIdSO value) ;

constexpr GlobalNamespace::PoseObjectIdSO __get__livPoseObjectId() const;

 GlobalNamespace::PosesRecorder __declspec(property(get=__get__recorder, put=__set__recorder))  _recorder;

constexpr void __set__recorder(GlobalNamespace::PosesRecorder value) ;

constexpr GlobalNamespace::PosesRecorder __get__recorder() const;

 GlobalNamespace::PosesPlayback __declspec(property(get=__get__playback, put=__set__playback))  _playback;

constexpr void __set__playback(GlobalNamespace::PosesPlayback value) ;

constexpr GlobalNamespace::PosesPlayback __get__playback() const;

 GlobalNamespace::PlaybackScreenshotRecorder __declspec(property(get=__get__playbackScreenshotRecorder, put=__set__playbackScreenshotRecorder))  _playbackScreenshotRecorder;

constexpr void __set__playbackScreenshotRecorder(GlobalNamespace::PlaybackScreenshotRecorder value) ;

constexpr GlobalNamespace::PlaybackScreenshotRecorder __get__playbackScreenshotRecorder() const;

 GlobalNamespace::PlaybackRenderer __declspec(property(get=__get__playbackRender, put=__set__playbackRender))  _playbackRender;

constexpr void __set__playbackRender(GlobalNamespace::PlaybackRenderer value) ;

constexpr GlobalNamespace::PlaybackRenderer __get__playbackRender() const;

 UnityEngine::Camera __declspec(property(get=__get__externalCameraPrefab, put=__set__externalCameraPrefab))  _externalCameraPrefab;

constexpr void __set__externalCameraPrefab(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__externalCameraPrefab() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 UnityEngine::Camera __declspec(property(get=__get__hmdCamera, put=__set__hmdCamera))  _hmdCamera;

constexpr void __set__hmdCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__hmdCamera() const;

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData __get__initData() const;

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode __declspec(property(get=__get__mode, put=__set__mode))  _mode;

constexpr void __set__mode(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode value) ;

constexpr GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode __get__mode() const;

 ::StringW __declspec(property(get=__get__recordingPath, put=__set__recordingPath))  _recordingPath;

constexpr void __set__recordingPath(::StringW value) ;

constexpr ::StringW __get__recordingPath() const;

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView __declspec(property(get=__get__cameraView, put=__set__cameraView))  _cameraView;

constexpr void __set__cameraView(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView value) ;

constexpr GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView __get__cameraView() const;

 UnityEngine::Camera __declspec(property(get=__get__externalCamera, put=__set__externalCamera))  _externalCamera;

constexpr void __set__externalCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__externalCamera() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> __declspec(property(get=__get__playbackScreenshots, put=__set__playbackScreenshots))  _playbackScreenshots;

constexpr void __set__playbackScreenshots(::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> __get__playbackScreenshots() const;

 GlobalNamespace::IBeatSaberLogger __declspec(property(get=__get__logger, put=__set__logger))  _logger;

constexpr void __set__logger(GlobalNamespace::IBeatSaberLogger value) ;

constexpr GlobalNamespace::IBeatSaberLogger __get__logger() const;

 GlobalNamespace::IPosesSerializer __declspec(property(get=__get__posesSerializer, put=__set__posesSerializer))  _posesSerializer;

constexpr void __set__posesSerializer(GlobalNamespace::IPosesSerializer value) ;

constexpr GlobalNamespace::IPosesSerializer __get__posesSerializer() const;


// Methods

/// @brief Method Init addr 0x21a3ca4 size 0x704 virtual false final false
 void Init() ;

/// @brief Method OnDestroy addr 0x21a4aac size 0x228 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleGameStateChanged addr 0x21a4cec size 0x70 virtual false final false
 void HandleGameStateChanged() ;

// Ctor Parameters []
explicit ObjectsMovementRecorder() ;

/// @brief Method .ctor addr 0x21a4e50 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__CameraView, "", "ObjectsMovementRecorder/CameraView");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__Mode, "", "ObjectsMovementRecorder/Mode");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData, "", "ObjectsMovementRecorder/InitData");
NEED_NO_BOX(GlobalNamespace::ObjectsMovementRecorder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObjectsMovementRecorder, "", "ObjectsMovementRecorder");
