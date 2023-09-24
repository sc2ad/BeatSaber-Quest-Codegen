#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace GlobalNamespace {
class ListLogger;
}
namespace GlobalNamespace {
class ProgramArguments;
}
namespace GlobalNamespace {
class GlobalNamespace__ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolManager;
}
// Type: ::RecordingToolManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6041))
// CS Name: RecordingToolManager
class CORDL_TYPE RecordingToolManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RecordingToolManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: " const&", def_value: None }]
constexpr RecordingToolManager(RecordingToolManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "&&", def_value: None }]
constexpr RecordingToolManager(RecordingToolManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RecordingToolManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolManager& operator=(RecordingToolManager&& o) noexcept = default;
  constexpr RecordingToolManager& operator=(RecordingToolManager const& o) noexcept = default;
                


// Fields

/// @brief Field kRecordingToolId offset 0
static constexpr ::ConstString  kRecordingToolId{u"RecordingTool"};

 bool __declspec(property(get=__get__recordingToolEnabled, put=__set__recordingToolEnabled))  _recordingToolEnabled;

constexpr void __set__recordingToolEnabled(bool value) ;

constexpr bool __get__recordingToolEnabled() const;

 ::StringW __declspec(property(get=__get__configJsonData, put=__set__configJsonData))  _configJsonData;

constexpr void __set__configJsonData(::StringW value) ;

constexpr ::StringW __get__configJsonData() const;

 GlobalNamespace::RecordingToolSettings __declspec(property(get=__get__recordingToolSettings, put=__set__recordingToolSettings))  _recordingToolSettings;

constexpr void __set__recordingToolSettings(GlobalNamespace::RecordingToolSettings value) ;

constexpr GlobalNamespace::RecordingToolSettings __get__recordingToolSettings() const;

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData __declspec(property(get=__get__objectsMovementRecorderInitData, put=__set__objectsMovementRecorderInitData))  _objectsMovementRecorderInitData;

constexpr void __set__objectsMovementRecorderInitData(GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData __get__objectsMovementRecorderInitData() const;

 GlobalNamespace::MenuDestination __declspec(property(get=__get__menuDestination, put=__set__menuDestination))  _menuDestination;

constexpr void __set__menuDestination(GlobalNamespace::MenuDestination value) ;

constexpr GlobalNamespace::MenuDestination __get__menuDestination() const;

 GlobalNamespace::ListLogger __declspec(property(get=__get__listLogger, put=__set__listLogger))  _listLogger;

constexpr void __set__listLogger(GlobalNamespace::ListLogger value) ;

constexpr GlobalNamespace::ListLogger __get__listLogger() const;

 GlobalNamespace::IBeatSaberLogger __declspec(property(get=__get__logger, put=__set__logger))  _logger;

constexpr void __set__logger(GlobalNamespace::IBeatSaberLogger value) ;

constexpr GlobalNamespace::IBeatSaberLogger __get__logger() const;

 GlobalNamespace::IPosesSerializer __declspec(property(get=__get__posesSerializer, put=__set__posesSerializer))  _posesSerializer;

constexpr void __set__posesSerializer(GlobalNamespace::IPosesSerializer value) ;

constexpr GlobalNamespace::IPosesSerializer __get__posesSerializer() const;


// Properties

 bool __declspec(property(get=get_recordingToolEnabled))  recordingToolEnabled;

 bool __declspec(property(get=get_showRecordingToolScene))  showRecordingToolScene;

 ::StringW __declspec(property(get=get_configJsonData))  configJsonData;

 GlobalNamespace::RecordingToolSettings __declspec(property(get=get_recordingToolSettings))  recordingToolSettings;

 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData __declspec(property(get=get_objectsMovementRecorderInitData))  objectsMovementRecorderInitData;

 GlobalNamespace::MenuDestination __declspec(property(get=get_menuDestination))  menuDestination;

 GlobalNamespace::ListLogger __declspec(property(get=get_listLogger))  listLogger;

 GlobalNamespace::IBeatSaberLogger __declspec(property(get=get_logger))  logger;

 GlobalNamespace::IPosesSerializer __declspec(property(get=get_posesSerializer))  posesSerializer;


// Methods

/// @brief Method get_recordingToolEnabled addr 0x21abf50 size 0x8 virtual false final false
 bool get_recordingToolEnabled() ;

/// @brief Method get_showRecordingToolScene addr 0x21abf58 size 0x8 virtual false final false
 bool get_showRecordingToolScene() ;

/// @brief Method get_configJsonData addr 0x21abf60 size 0x8 virtual false final false
 ::StringW get_configJsonData() ;

/// @brief Method get_recordingToolSettings addr 0x21abf68 size 0x8 virtual false final false
 GlobalNamespace::RecordingToolSettings get_recordingToolSettings() ;

/// @brief Method get_objectsMovementRecorderInitData addr 0x21abf70 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__ObjectsMovementRecorder__InitData get_objectsMovementRecorderInitData() ;

/// @brief Method get_menuDestination addr 0x21abf78 size 0x8 virtual false final false
 GlobalNamespace::MenuDestination get_menuDestination() ;

/// @brief Method get_listLogger addr 0x21abf80 size 0x8 virtual false final false
 GlobalNamespace::ListLogger get_listLogger() ;

/// @brief Method get_logger addr 0x21abf88 size 0x8 virtual false final false
 GlobalNamespace::IBeatSaberLogger get_logger() ;

/// @brief Method get_posesSerializer addr 0x21abf90 size 0x8 virtual false final false
 GlobalNamespace::IPosesSerializer get_posesSerializer() ;

static GlobalNamespace::RecordingToolManager New_ctor(GlobalNamespace::ProgramArguments programArguments, GlobalNamespace::RecordingToolResourceContainerSO resourceContainer, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method .ctor addr 0x21abc90 size 0x2b8 virtual false final false
 void _ctor(GlobalNamespace::ProgramArguments programArguments, GlobalNamespace::RecordingToolResourceContainerSO resourceContainer, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolManager, "", "RecordingToolManager");
