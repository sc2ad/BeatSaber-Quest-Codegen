#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SongStartHandler;
}
// Type: ::SongStartHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12899))
// CS Name: SongStartHandler
class CORDL_TYPE SongStartHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SongStartHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongStartHandler", modifiers: " const&", def_value: None }]
constexpr SongStartHandler(SongStartHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongStartHandler", modifiers: "&&", def_value: None }]
constexpr SongStartHandler(SongStartHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongStartHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SongStartHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongStartHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongStartHandler& operator=(SongStartHandler&& o) noexcept = default;
  constexpr SongStartHandler& operator=(SongStartHandler const& o) noexcept = default;
                


// Fields

/// @brief Field kFixedStartDelay offset 0
static constexpr float_t  kFixedStartDelay{0.25};

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;

 ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __declspec(property(get=__get__playersAtGameStartModel, put=__set__playersAtGameStartModel))  _playersAtGameStartModel;

constexpr void __set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value) ;

constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __get__playersAtGameStartModel() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__readyPlayers, put=__set__readyPlayers))  _readyPlayers;

constexpr void __set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__readyPlayers() const;

 bool __declspec(property(get=__get__started, put=__set__started))  _started;

constexpr void __set__started(bool value) ;

constexpr bool __get__started() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 ::System::Action_1<float_t> __declspec(property(get=__get_setSongStartSyncTimeEvent, put=__set_setSongStartSyncTimeEvent))  setSongStartSyncTimeEvent;

constexpr void __set_setSongStartSyncTimeEvent(::System::Action_1<float_t> value) ;

constexpr ::System::Action_1<float_t> __get_setSongStartSyncTimeEvent() const;


// Properties

 float_t __declspec(property(get=get_songStartSyncTime))  songStartSyncTime;


// Methods

/// @brief Method get_songStartSyncTime addr 0xdca134 size 0x8 virtual false final false
 float_t get_songStartSyncTime() ;

/// @brief Method add_setSongStartSyncTimeEvent addr 0xdca13c size 0xb0 virtual false final false
 void add_setSongStartSyncTimeEvent(::System::Action_1<float_t> value) ;

/// @brief Method remove_setSongStartSyncTimeEvent addr 0xdca1ec size 0xb0 virtual false final false
 void remove_setSongStartSyncTimeEvent(::System::Action_1<float_t> value) ;

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "gameplayRpcManager", ty: "::GlobalNamespace::IGameplayRpcManager", modifiers: "", def_value: None }, CppParam { name: "playersAtGameStartModel", ty: "::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel", modifiers: "", def_value: None }]
explicit SongStartHandler(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager gameplayRpcManager, ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel) ;

/// @brief Method .ctor addr 0xdca29c size 0xa4 virtual false final false
 void _ctor(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager gameplayRpcManager, ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel) ;

/// @brief Method GetLevelStartTimeOffset addr 0xdca340 size 0x4f0 virtual false final false
 void GetLevelStartTimeOffset() ;

/// @brief Method Dispose addr 0xdca830 size 0x244 virtual true final true
 void Dispose() ;

/// @brief Method ForceStart addr 0xdcaa74 size 0x6c0 virtual false final false
 void ForceStart(::StringW sessionGameId) ;

/// @brief Method StartSong addr 0xdcb134 size 0x2a8 virtual false final false
 void StartSong() ;

/// @brief Method HandleSetGameplaySongReady addr 0xdcb3dc size 0x2bc virtual false final false
 void HandleSetGameplaySongReady(::StringW user) ;

/// @brief Method HandleGetGameplaySongReady addr 0xdcb698 size 0xa4 virtual false final false
 void HandleGetGameplaySongReady(::StringW user) ;

/// @brief Method HandleSetSongStartTime addr 0xdcb73c size 0x28 virtual false final false
 void HandleSetSongStartTime(::StringW user, float_t time) ;

/// @brief Method Log addr 0xdcb764 size 0x58 virtual false final false
 void Log(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SongStartHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongStartHandler, "", "SongStartHandler");
