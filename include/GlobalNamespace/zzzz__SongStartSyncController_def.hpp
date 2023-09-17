#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class SongStartHandler;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
// Forward declare root types
namespace GlobalNamespace {
class SongStartSyncController;
}
// Type: ::SongStartSyncController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4602))
// CS Name: SongStartSyncController
class CORDL_TYPE SongStartSyncController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SongStartSyncController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongStartSyncController", modifiers: " const&", def_value: None }]
constexpr SongStartSyncController(SongStartSyncController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongStartSyncController", modifiers: "&&", def_value: None }]
constexpr SongStartSyncController(SongStartSyncController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongStartSyncController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongStartSyncController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongStartSyncController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongStartSyncController& operator=(SongStartSyncController&& o) noexcept = default;
  constexpr SongStartSyncController& operator=(SongStartSyncController const& o) noexcept = default;
                


// Fields

/// @brief Field kAudioLoadTimeout offset 0
static constexpr float_t  kAudioLoadTimeout{15};

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;

 float_t __declspec(property(get=__get__waitStartTime, put=__set__waitStartTime))  _waitStartTime;

constexpr void __set__waitStartTime(float_t value) ;

constexpr float_t __get__waitStartTime() const;

 bool __declspec(property(get=__get__songStarted, put=__set__songStarted))  _songStarted;

constexpr void __set__songStarted(bool value) ;

constexpr bool __get__songStarted() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 ::StringW __declspec(property(get=__get__sessionGameId, put=__set__sessionGameId))  _sessionGameId;

constexpr void __set__sessionGameId(::StringW value) ;

constexpr ::StringW __get__sessionGameId() const;

 ::GlobalNamespace::SongStartHandler __declspec(property(get=__get__songStartHandler, put=__set__songStartHandler))  _songStartHandler;

constexpr void __set__songStartHandler(::GlobalNamespace::SongStartHandler value) ;

constexpr ::GlobalNamespace::SongStartHandler __get__songStartHandler() const;

 ::System::Action __declspec(property(get=__get_syncStartFailedEvent, put=__set_syncStartFailedEvent))  syncStartFailedEvent;

constexpr void __set_syncStartFailedEvent(::System::Action value) ;

constexpr ::System::Action __get_syncStartFailedEvent() const;

 ::System::Action_1<float_t> __declspec(property(get=__get_syncStartSuccessEvent, put=__set_syncStartSuccessEvent))  syncStartSuccessEvent;

constexpr void __set_syncStartSuccessEvent(::System::Action_1<float_t> value) ;

constexpr ::System::Action_1<float_t> __get_syncStartSuccessEvent() const;

 ::System::Action_1<float_t> __declspec(property(get=__get_syncResumeEvent, put=__set_syncResumeEvent))  syncResumeEvent;

constexpr void __set_syncResumeEvent(::System::Action_1<float_t> value) ;

constexpr ::System::Action_1<float_t> __get_syncResumeEvent() const;


// Properties

 bool __declspec(property(get=get_isSongStarted))  isSongStarted;

 float_t __declspec(property(get=get_songStartSyncTime))  songStartSyncTime;


// Methods

/// @brief Method get_isSongStarted addr 0x221206c size 0x8 virtual false final false
 bool get_isSongStarted() ;

/// @brief Method get_songStartSyncTime addr 0x2212074 size 0x1c virtual false final false
 float_t get_songStartSyncTime() ;

/// @brief Method add_syncStartFailedEvent addr 0x2212090 size 0x9c virtual false final false
 void add_syncStartFailedEvent(::System::Action value) ;

/// @brief Method remove_syncStartFailedEvent addr 0x221212c size 0x9c virtual false final false
 void remove_syncStartFailedEvent(::System::Action value) ;

/// @brief Method add_syncStartSuccessEvent addr 0x22121c8 size 0xb0 virtual false final false
 void add_syncStartSuccessEvent(::System::Action_1<float_t> value) ;

/// @brief Method remove_syncStartSuccessEvent addr 0x2212278 size 0xb0 virtual false final false
 void remove_syncStartSuccessEvent(::System::Action_1<float_t> value) ;

/// @brief Method add_syncResumeEvent addr 0x2212328 size 0xb0 virtual false final false
 void add_syncResumeEvent(::System::Action_1<float_t> value) ;

/// @brief Method remove_syncResumeEvent addr 0x22123d8 size 0xb0 virtual false final false
 void remove_syncResumeEvent(::System::Action_1<float_t> value) ;

/// @brief Method Start addr 0x2212488 size 0xc virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2212494 size 0x14 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x22124a8 size 0x60 virtual false final false
 void Update() ;

/// @brief Method OnApplicationPause addr 0x2212508 size 0x44 virtual false final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method StartSong addr 0x221254c size 0x15c virtual false final false
 void StartSong(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel playersSpecificSettingsAtGameStartModel, ::StringW sessionGameId) ;

/// @brief Method HandleSetSongStartSyncTime addr 0x22126a8 size 0x2c virtual false final false
 void HandleSetSongStartSyncTime(float_t songStartSyncTime) ;

// Ctor Parameters []
explicit SongStartSyncController() ;

/// @brief Method .ctor addr 0x22126d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SongStartSyncController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongStartSyncController, "", "SongStartSyncController");
