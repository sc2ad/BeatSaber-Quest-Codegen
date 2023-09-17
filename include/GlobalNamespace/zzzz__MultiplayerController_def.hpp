#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class MultiplayerLevelFinishedController;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MultiplayerIntroAnimationController;
}
namespace GlobalNamespace {
class MultiplayerOutroAnimationController;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class SongStartSyncController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class SceneStartSyncController;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerController____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0;
}
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5297))
// CS Name: MultiplayerController::State
struct CORDL_TYPE ____GlobalNamespace__MultiplayerController__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerController__State(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__MultiplayerController__State(____GlobalNamespace__MultiplayerController__State const&) = default;
                    constexpr ____GlobalNamespace__MultiplayerController__State(____GlobalNamespace__MultiplayerController__State&&) = default;
                    constexpr ____GlobalNamespace__MultiplayerController__State& operator=(____GlobalNamespace__MultiplayerController__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MultiplayerController__State& operator=(____GlobalNamespace__MultiplayerController__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerController__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__MultiplayerController__State_Unwrapped : int32_t {
__CheckingLobbyState = 0,
__WaitingForPlayers = 1,
__SongStartSync = 2,
__Intro = 3,
__Gameplay = 4,
__Outro = 5,
__Finished = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__MultiplayerController__State_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__MultiplayerController__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CheckingLobbyState offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State const CheckingLobbyState;

/// @brief Field WaitingForPlayers offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State const WaitingForPlayers;

/// @brief Field SongStartSync offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State const SongStartSync;

/// @brief Field Intro offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State const Intro;

/// @brief Field Gameplay offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State const Gameplay;

/// @brief Field Outro offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State const Outro;

/// @brief Field Finished offset 0
static ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State const Finished;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PerformSongStartSync>d__37
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5298))
// CS Name: MultiplayerController::<PerformSongStartSync>d__37
class CORDL_TYPE ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37(____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37(____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37& operator=(____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37& operator=(____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::MultiplayerController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerController value) ;

constexpr ::GlobalNamespace::MultiplayerController __get___4__this() const;

 ::GlobalNamespace::MultiplayerPlayerStartState __declspec(property(get=__get_localPlayerSyncState, put=__set_localPlayerSyncState))  localPlayerSyncState;

constexpr void __set_localPlayerSyncState(::GlobalNamespace::MultiplayerPlayerStartState value) ;

constexpr ::GlobalNamespace::MultiplayerPlayerStartState __get_localPlayerSyncState() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20f3080 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20f5134 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20f5138 size 0x834 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20f67f8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20f6800 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20f6840 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass42_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5299))
// CS Name: MultiplayerController::<>c__DisplayClass42_0
class CORDL_TYPE ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MultiplayerController____c__DisplayClass42_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerController____c__DisplayClass42_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0(____GlobalNamespace__MultiplayerController____c__DisplayClass42_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerController____c__DisplayClass42_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0(____GlobalNamespace__MultiplayerController____c__DisplayClass42_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0& operator=(____GlobalNamespace__MultiplayerController____c__DisplayClass42_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0& operator=(____GlobalNamespace__MultiplayerController____c__DisplayClass42_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerController value) ;

constexpr ::GlobalNamespace::MultiplayerController __get___4__this() const;

 float_t __declspec(property(get=__get_introAnimationStartSyncTime, put=__set_introAnimationStartSyncTime))  introAnimationStartSyncTime;

constexpr void __set_introAnimationStartSyncTime(float_t value) ;

constexpr float_t __get_introAnimationStartSyncTime() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerController____c__DisplayClass42_0() ;

/// @brief Method .ctor addr 0x20f38dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleSongStartSyncControllerSyncStartSuccess>b__0 addr 0x20f6848 size 0x20 virtual false final false
 void _HandleSongStartSyncControllerSyncStartSuccess_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5300))
// CS Name: MultiplayerController::<>c
class CORDL_TYPE ____GlobalNamespace__MultiplayerController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__MultiplayerController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerController____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerController____c(____GlobalNamespace__MultiplayerController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerController____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerController____c(____GlobalNamespace__MultiplayerController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerController____c& operator=(____GlobalNamespace__MultiplayerController____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerController____c& operator=(____GlobalNamespace__MultiplayerController____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__MultiplayerController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__MultiplayerController____c value) ;

static ::GlobalNamespace::____GlobalNamespace__MultiplayerController____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults,bool> __declspec(property(get=__get___9__47_0, put=__set___9__47_0))  __9__47_0;

static void __set___9__47_0(::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults,bool> value) ;

static ::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults,bool> __get___9__47_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerController____c() ;

/// @brief Method .ctor addr 0x20f68cc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <EndGameplay>b__47_0 addr 0x20f68d4 size 0x20 virtual false final false
 bool _EndGameplay_b__47_0(::GlobalNamespace::MultiplayerLevelCompletionResults result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5301))
// CS Name: MultiplayerController
class CORDL_TYPE MultiplayerController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__MultiplayerController____c;

using __c__DisplayClass42_0 = ::GlobalNamespace::____GlobalNamespace__MultiplayerController____c__DisplayClass42_0;

using _PerformSongStartSync_d__37 = ::GlobalNamespace::____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37;

using State = ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~MultiplayerController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerController", modifiers: " const&", def_value: None }]
constexpr MultiplayerController(MultiplayerController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerController", modifiers: "&&", def_value: None }]
constexpr MultiplayerController(MultiplayerController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerController& operator=(MultiplayerController&& o) noexcept = default;
  constexpr MultiplayerController& operator=(MultiplayerController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__loadingEnvironment, put=__set__loadingEnvironment))  _loadingEnvironment;

constexpr void __set__loadingEnvironment(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__loadingEnvironment() const;

 ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __declspec(property(get=__get__multiplayerLevelSceneSetupData, put=__set__multiplayerLevelSceneSetupData))  _multiplayerLevelSceneSetupData;

constexpr void __set__multiplayerLevelSceneSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __get__multiplayerLevelSceneSetupData() const;

 ::GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager value) ;

constexpr ::GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 ::GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__playersManager, put=__set__playersManager))  _playersManager;

constexpr void __set__playersManager(::GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager __get__playersManager() const;

 ::GlobalNamespace::SceneStartSyncController __declspec(property(get=__get__sceneStartSyncController, put=__set__sceneStartSyncController))  _sceneStartSyncController;

constexpr void __set__sceneStartSyncController(::GlobalNamespace::SceneStartSyncController value) ;

constexpr ::GlobalNamespace::SceneStartSyncController __get__sceneStartSyncController() const;

 ::GlobalNamespace::SongStartSyncController __declspec(property(get=__get__songStartSyncController, put=__set__songStartSyncController))  _songStartSyncController;

constexpr void __set__songStartSyncController(::GlobalNamespace::SongStartSyncController value) ;

constexpr ::GlobalNamespace::SongStartSyncController __get__songStartSyncController() const;

 ::GlobalNamespace::MultiplayerLevelFinishedController __declspec(property(get=__get__multiplayerLevelFinishedController, put=__set__multiplayerLevelFinishedController))  _multiplayerLevelFinishedController;

constexpr void __set__multiplayerLevelFinishedController(::GlobalNamespace::MultiplayerLevelFinishedController value) ;

constexpr ::GlobalNamespace::MultiplayerLevelFinishedController __get__multiplayerLevelFinishedController() const;

 ::GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOutController, put=__set__fadeInOutController))  _fadeInOutController;

constexpr void __set__fadeInOutController(::GlobalNamespace::FadeInOutController value) ;

constexpr ::GlobalNamespace::FadeInOutController __get__fadeInOutController() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::MultiplayerIntroAnimationController __declspec(property(get=__get__introAnimationController, put=__set__introAnimationController))  _introAnimationController;

constexpr void __set__introAnimationController(::GlobalNamespace::MultiplayerIntroAnimationController value) ;

constexpr ::GlobalNamespace::MultiplayerIntroAnimationController __get__introAnimationController() const;

 ::GlobalNamespace::MultiplayerOutroAnimationController __declspec(property(get=__get__outroAnimationController, put=__set__outroAnimationController))  _outroAnimationController;

constexpr void __set__outroAnimationController(::GlobalNamespace::MultiplayerOutroAnimationController value) ;

constexpr ::GlobalNamespace::MultiplayerOutroAnimationController __get__outroAnimationController() const;

 ::GlobalNamespace::IMenuRpcManager __declspec(property(get=__get__menuRpcManager, put=__set__menuRpcManager))  _menuRpcManager;

constexpr void __set__menuRpcManager(::GlobalNamespace::IMenuRpcManager value) ;

constexpr ::GlobalNamespace::IMenuRpcManager __get__menuRpcManager() const;

 ::GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;

 ::GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;

 ::Zenject::DiContainer __declspec(property(get=__get__diContainer, put=__set__diContainer))  _diContainer;

constexpr void __set__diContainer(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__diContainer() const;

 ::GlobalNamespace::MultiplayerBadgesProvider __declspec(property(get=__get__badgesProvider, put=__set__badgesProvider))  _badgesProvider;

constexpr void __set__badgesProvider(::GlobalNamespace::MultiplayerBadgesProvider value) ;

constexpr ::GlobalNamespace::MultiplayerBadgesProvider __get__badgesProvider() const;

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__MultiplayerController__State> __declspec(property(get=__get_stateChangedEvent, put=__set_stateChangedEvent))  stateChangedEvent;

constexpr void __set_stateChangedEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__MultiplayerController__State> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__MultiplayerController__State> __get_stateChangedEvent() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 ::GlobalNamespace::MultiplayerPlayerStartState __declspec(property(get=__get__localPlayerSyncStartState, put=__set__localPlayerSyncStartState))  _localPlayerSyncStartState;

constexpr void __set__localPlayerSyncStartState(::GlobalNamespace::MultiplayerPlayerStartState value) ;

constexpr ::GlobalNamespace::MultiplayerPlayerStartState __get__localPlayerSyncStartState() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State __get__state() const;

 ::StringW __declspec(property(get=__get__sessionGameId, put=__set__sessionGameId))  _sessionGameId;

constexpr void __set__sessionGameId(::StringW value) ;

constexpr ::StringW __get__sessionGameId() const;

 ::GlobalNamespace::MultiplayerResultsData __declspec(property(get=__get__resultsData, put=__set__resultsData))  _resultsData;

constexpr void __set__resultsData(::GlobalNamespace::MultiplayerResultsData value) ;

constexpr ::GlobalNamespace::MultiplayerResultsData __get__resultsData() const;

 ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __declspec(property(get=__get__playersSpecificSettingsAtGameStartModel, put=__set__playersSpecificSettingsAtGameStartModel))  _playersSpecificSettingsAtGameStartModel;

constexpr void __set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value) ;

constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __get__playersSpecificSettingsAtGameStartModel() const;

 ::UnityEngine::Coroutine __declspec(property(get=__get__timeoutGetGameStateCoroutine, put=__set__timeoutGetGameStateCoroutine))  _timeoutGetGameStateCoroutine;

constexpr void __set__timeoutGetGameStateCoroutine(::UnityEngine::Coroutine value) ;

constexpr ::UnityEngine::Coroutine __get__timeoutGetGameStateCoroutine() const;

/// @brief Field kSongTimeToSongStartSyncTimeOffset offset 0
static constexpr float_t  kSongTimeToSongStartSyncTimeOffset{-0.6};

/// @brief Field kMinAnimationDurationPercentage offset 0
static constexpr float_t  kMinAnimationDurationPercentage{0.75};

/// @brief Field kGetMultiplayerGameStateTimeout offset 0
static constexpr float_t  kGetMultiplayerGameStateTimeout{20};


// Properties

 ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State __declspec(property(get=get_state))  state;


// Methods

/// @brief Method get_state addr 0x20f1768 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerController__State get_state() ;

/// @brief Method add_stateChangedEvent addr 0x20f1770 size 0xb0 virtual false final false
 void add_stateChangedEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__MultiplayerController__State> value) ;

/// @brief Method remove_stateChangedEvent addr 0x20f1820 size 0xb0 virtual false final false
 void remove_stateChangedEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__MultiplayerController__State> value) ;

/// @brief Method Start addr 0x20f18d0 size 0x384 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20f20cc size 0x5e8 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSetMultiplayerGameState addr 0x20f2750 size 0x1f4 virtual false final false
 void HandleSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState gameState) ;

/// @brief Method CreateAndBindPlayersSpecificSettingsAtGameStartModel addr 0x20f1c54 size 0x458 virtual false final false
 void CreateAndBindPlayersSpecificSettingsAtGameStartModel() ;

/// @brief Method StartSceneLoadSync addr 0x20f2944 size 0x178 virtual false final false
 void StartSceneLoadSync() ;

/// @brief Method PerformSongStartSync addr 0x20f3008 size 0x78 virtual false final false
 ::System::Collections::IEnumerator PerformSongStartSync(::GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState) ;

/// @brief Method HandleDidSwitchPlayerToInactive addr 0x20f30a8 size 0x168 virtual false final false
 void HandleDidSwitchPlayerToInactive() ;

/// @brief Method HandleSceneStartSyncControllerSyncStartDidSuccess addr 0x20f3300 size 0x28 virtual false final false
 void HandleSceneStartSyncControllerSyncStartDidSuccess(::StringW sessionGameId) ;

/// @brief Method HandleSceneStartSyncControllerSyncStartDidReceiveTooLate addr 0x20f3328 size 0x28 virtual false final false
 void HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(::StringW sessionGameId) ;

/// @brief Method HandleSceneStartSyncControllerSyncStartDidFail addr 0x20f3350 size 0x9c virtual false final false
 void HandleSceneStartSyncControllerSyncStartDidFail() ;

/// @brief Method HandleSongStartSyncControllerSyncStartSuccess addr 0x20f3678 size 0x264 virtual false final false
 void HandleSongStartSyncControllerSyncStartSuccess(float_t introAnimationStartSyncTime) ;

/// @brief Method HandleSongStartSyncControllerSyncResume addr 0x20f4710 size 0x4e0 virtual false final false
 void HandleSongStartSyncControllerSyncResume(float_t introAnimationStartSyncTime) ;

/// @brief Method HandleSongStartSyncControllerSyncStartFailed addr 0x20f4c58 size 0x9c virtual false final false
 void HandleSongStartSyncControllerSyncStartFailed() ;

/// @brief Method StartGameplay addr 0x20f3ea4 size 0x86c virtual false final false
 void StartGameplay(float_t introAnimationStartSyncTime) ;

/// @brief Method HandleAllResultsCollected addr 0x20f4cf4 size 0x4 virtual false final false
 void HandleAllResultsCollected(::GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResults, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayerResults) ;

/// @brief Method EndGameplay addr 0x20f3408 size 0x270 virtual false final false
 void EndGameplay(::GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResults, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayerResults) ;

/// @brief Method HandleOutroAnimationDidFinish addr 0x20f4ebc size 0x48 virtual false final false
 void HandleOutroAnimationDidFinish() ;

/// @brief Method HandleRpcReturnToMenu addr 0x20f4f04 size 0x184 virtual false final false
 void HandleRpcReturnToMenu(::StringW userId) ;

/// @brief Method HandleDisconnected addr 0x20f5088 size 0x54 virtual false final false
 void HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method ChangeState addr 0x20f20ac size 0x20 virtual false final false
 void ChangeState(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State newState) ;

/// @brief Method GetCurrentSongTime addr 0x20f3248 size 0xb8 virtual false final false
 float_t GetCurrentSongTime(float_t songStartSyncTime) ;

/// @brief Method GetSongStartSyncTime addr 0x20f3210 size 0x38 virtual false final false
 float_t GetSongStartSyncTime(float_t introAnimationStartSyncTime) ;

// Ctor Parameters []
explicit MultiplayerController() ;

/// @brief Method .ctor addr 0x20f50dc size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State, "", "MultiplayerController/State");
NEED_NO_BOX(::GlobalNamespace::MultiplayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerController, "", "MultiplayerController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerController___PerformSongStartSync_d__37, "", "MultiplayerController/<PerformSongStartSync>d__37");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerController____c, "", "MultiplayerController/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerController____c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerController____c__DisplayClass42_0, "", "MultiplayerController/<>c__DisplayClass42_0");
