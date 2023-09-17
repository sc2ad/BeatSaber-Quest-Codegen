#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuController;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5253))
// CS Name: MultiplayerLocalActivePlayerGameplayManager::InitData
class CORDL_TYPE ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData(____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData(____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData& operator=(____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData& operator=(____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_failOn0Energy, put=__set_failOn0Energy))  failOn0Energy;

constexpr void __set_failOn0Energy(bool value) ;

constexpr bool __get_failOn0Energy() const;


// Methods

// Ctor Parameters [CppParam { name: "failOn0Energy", ty: "bool", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData(bool failOn0Energy) ;

/// @brief Method .ctor addr 0x20e801c size 0x28 virtual false final false
 void _ctor(bool failOn0Energy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLocalActivePlayerGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5254))
// CS Name: MultiplayerLocalActivePlayerGameplayManager
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MultiplayerLocalActivePlayerGameplayManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActivePlayerGameplayManager(MultiplayerLocalActivePlayerGameplayManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActivePlayerGameplayManager(MultiplayerLocalActivePlayerGameplayManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActivePlayerGameplayManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActivePlayerGameplayManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerGameplayManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerGameplayManager& operator=(MultiplayerLocalActivePlayerGameplayManager&& o) noexcept = default;
  constexpr MultiplayerLocalActivePlayerGameplayManager& operator=(MultiplayerLocalActivePlayerGameplayManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(::GlobalNamespace::GameSongController value) ;

constexpr ::GlobalNamespace::GameSongController __get__gameSongController() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::IMultiplayerLevelEndActionsListener __declspec(property(get=__get__multiplayerLevelEndActions, put=__set__multiplayerLevelEndActions))  _multiplayerLevelEndActions;

constexpr void __set__multiplayerLevelEndActions(::GlobalNamespace::IMultiplayerLevelEndActionsListener value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener __get__multiplayerLevelEndActions() const;

 ::GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr ::GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 ::GlobalNamespace::GameEnergyCounter __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter))  _gameEnergyCounter;

constexpr void __set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter value) ;

constexpr ::GlobalNamespace::GameEnergyCounter __get__gameEnergyCounter() const;

 ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController __declspec(property(get=__get__inGameMenuController, put=__set__inGameMenuController))  _inGameMenuController;

constexpr void __set__inGameMenuController(::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController value) ;

constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController __get__inGameMenuController() const;

 ::GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__platformHelper, put=__set__platformHelper))  _platformHelper;

constexpr void __set__platformHelper(::GlobalNamespace::IVRPlatformHelper value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper __get__platformHelper() const;

 ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper __declspec(property(get=__get__disconnectHelper, put=__set__disconnectHelper))  _disconnectHelper;

constexpr void __set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper value) ;

constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper __get__disconnectHelper() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData __get__initData() const;

 ::GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager value) ;

constexpr ::GlobalNamespace::SaberManager __get__saberManager() const;

 bool __declspec(property(get=__get__levelFinishedOrFailed, put=__set__levelFinishedOrFailed))  _levelFinishedOrFailed;

constexpr void __set__levelFinishedOrFailed(bool value) ;

constexpr bool __get__levelFinishedOrFailed() const;


// Methods

/// @brief Method Start addr 0x20e6d5c size 0x478 virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x20e71f4 size 0x498 virtual false final false
 void OnDisable() ;

/// @brief Method PerformPlayerFail addr 0x20e768c size 0x240 virtual false final false
 void PerformPlayerFail() ;

/// @brief Method PerformPlayerGivenUp addr 0x20e78cc size 0x240 virtual false final false
 void PerformPlayerGivenUp() ;

/// @brief Method HandleGameEnergyDidReach0 addr 0x20e7b0c size 0x28 virtual false final false
 void HandleGameEnergyDidReach0() ;

/// @brief Method HandleInGameMenuControllerDidGiveUp addr 0x20e7b34 size 0x4 virtual false final false
 void HandleInGameMenuControllerDidGiveUp() ;

/// @brief Method HandleInGameMenuControllerRequestsDisconnect addr 0x20e7b38 size 0x40 virtual false final false
 void HandleInGameMenuControllerRequestsDisconnect() ;

/// @brief Method HandleSongDidFinish addr 0x20e7d88 size 0x240 virtual false final false
 void HandleSongDidFinish() ;

/// @brief Method HandleHmdUnmounted addr 0x20e7fc8 size 0x4 virtual false final false
 void HandleHmdUnmounted() ;

/// @brief Method HandleVrFocusWasCapturedEvent addr 0x20e7fcc size 0x4 virtual false final false
 void HandleVrFocusWasCapturedEvent() ;

/// @brief Method HandleInputFocusCaptured addr 0x20e71d4 size 0x20 virtual false final false
 void HandleInputFocusCaptured() ;

/// @brief Method HandleInputFocusReleased addr 0x20e7fd0 size 0x38 virtual false final false
 void HandleInputFocusReleased() ;

/// @brief Method OnApplicationFocus addr 0x20e8008 size 0xc virtual false final false
 void OnApplicationFocus(bool hasFocus) ;

// Ctor Parameters []
explicit MultiplayerLocalActivePlayerGameplayManager() ;

/// @brief Method .ctor addr 0x20e8014 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager, "", "MultiplayerLocalActivePlayerGameplayManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActivePlayerGameplayManager__InitData, "", "MultiplayerLocalActivePlayerGameplayManager/InitData");
