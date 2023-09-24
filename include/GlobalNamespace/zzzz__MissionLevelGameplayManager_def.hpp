#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionLevelGameplayManager___Start_d__23;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
struct GlobalNamespace__MissionLevelGameplayManager__GameState;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MissionLevelGameplayManager__GameState;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionLevelGameplayManager___Start_d__23;
}
namespace GlobalNamespace {
class MissionLevelGameplayManager;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5118))
// CS Name: MissionLevelGameplayManager::InitData
class CORDL_TYPE GlobalNamespace__MissionLevelGameplayManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MissionLevelGameplayManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelGameplayManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionLevelGameplayManager__InitData(GlobalNamespace__MissionLevelGameplayManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelGameplayManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionLevelGameplayManager__InitData(GlobalNamespace__MissionLevelGameplayManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionLevelGameplayManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionLevelGameplayManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelGameplayManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelGameplayManager__InitData& operator=(GlobalNamespace__MissionLevelGameplayManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__MissionLevelGameplayManager__InitData& operator=(GlobalNamespace__MissionLevelGameplayManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_failOn0Energy, put=__set_failOn0Energy))  failOn0Energy;

constexpr void __set_failOn0Energy(bool value) ;

constexpr bool __get_failOn0Energy() const;


// Methods

static GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__InitData New_ctor(bool failOn0Energy) ;

/// @brief Method .ctor addr 0x227133c size 0x28 virtual false final false
 void _ctor(bool failOn0Energy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5119))
// CS Name: MissionLevelGameplayManager::GameState
struct CORDL_TYPE GlobalNamespace__MissionLevelGameplayManager__GameState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MissionLevelGameplayManager__GameState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MissionLevelGameplayManager__GameState(GlobalNamespace__MissionLevelGameplayManager__GameState const&) = default;
                    constexpr GlobalNamespace__MissionLevelGameplayManager__GameState(GlobalNamespace__MissionLevelGameplayManager__GameState&&) = default;
                    constexpr GlobalNamespace__MissionLevelGameplayManager__GameState& operator=(GlobalNamespace__MissionLevelGameplayManager__GameState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MissionLevelGameplayManager__GameState& operator=(GlobalNamespace__MissionLevelGameplayManager__GameState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionLevelGameplayManager__GameState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MissionLevelGameplayManager__GameState_Unwrapped : int32_t {
__Intro = 0,
__Playing = 1,
__Paused = 2,
__Finished = 3,
__Failed = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MissionLevelGameplayManager__GameState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MissionLevelGameplayManager__GameState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Intro offset 0
static GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState const Intro;

/// @brief Field Playing offset 0
static GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState const Playing;

/// @brief Field Paused offset 0
static GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState const Paused;

/// @brief Field Finished offset 0
static GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState const Finished;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Start>d__23
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5120))
// CS Name: MissionLevelGameplayManager::<Start>d__23
class CORDL_TYPE GlobalNamespace__MissionLevelGameplayManager___Start_d__23 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MissionLevelGameplayManager___Start_d__23() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelGameplayManager___Start_d__23", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionLevelGameplayManager___Start_d__23(GlobalNamespace__MissionLevelGameplayManager___Start_d__23 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelGameplayManager___Start_d__23", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionLevelGameplayManager___Start_d__23(GlobalNamespace__MissionLevelGameplayManager___Start_d__23&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionLevelGameplayManager___Start_d__23(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionLevelGameplayManager___Start_d__23& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelGameplayManager___Start_d__23& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelGameplayManager___Start_d__23& operator=(GlobalNamespace__MissionLevelGameplayManager___Start_d__23&& o) noexcept = default;
  constexpr GlobalNamespace__MissionLevelGameplayManager___Start_d__23& operator=(GlobalNamespace__MissionLevelGameplayManager___Start_d__23 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MissionLevelGameplayManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionLevelGameplayManager value) ;

constexpr GlobalNamespace::MissionLevelGameplayManager __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager___Start_d__23 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2270f14 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2271364 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2271368 size 0x3cc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2271734 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x227173c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x227177c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionLevelGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5121))
// CS Name: MissionLevelGameplayManager
class CORDL_TYPE MissionLevelGameplayManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__23 = GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager___Start_d__23;

using GameState = GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState;

using InitData = GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__InitData;

/// @brief Convert operator to GlobalNamespace::ILevelEndActions
constexpr operator  GlobalNamespace::ILevelEndActions() const noexcept;

/// @brief Convert operator to GlobalNamespace::ILevelStartController
constexpr operator  GlobalNamespace::ILevelStartController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MissionLevelGameplayManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: " const&", def_value: None }]
constexpr MissionLevelGameplayManager(MissionLevelGameplayManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelGameplayManager", modifiers: "&&", def_value: None }]
constexpr MissionLevelGameplayManager(MissionLevelGameplayManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelGameplayManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionLevelGameplayManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelGameplayManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelGameplayManager& operator=(MissionLevelGameplayManager&& o) noexcept = default;
  constexpr MissionLevelGameplayManager& operator=(MissionLevelGameplayManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionObjectiveCheckersManager __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager))  _missionObjectiveCheckersManager;

constexpr void __set__missionObjectiveCheckersManager(GlobalNamespace::MissionObjectiveCheckersManager value) ;

constexpr GlobalNamespace::MissionObjectiveCheckersManager __get__missionObjectiveCheckersManager() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(GlobalNamespace::GameSongController value) ;

constexpr GlobalNamespace::GameSongController __get__gameSongController() const;

 GlobalNamespace::GameEnergyCounter __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter))  _gameEnergyCounter;

constexpr void __set__gameEnergyCounter(GlobalNamespace::GameEnergyCounter value) ;

constexpr GlobalNamespace::GameEnergyCounter __get__gameEnergyCounter() const;

 GlobalNamespace::PauseController __declspec(property(get=__get__pauseController, put=__set__pauseController))  _pauseController;

constexpr void __set__pauseController(GlobalNamespace::PauseController value) ;

constexpr GlobalNamespace::PauseController __get__pauseController() const;

 GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__InitData __get__initData() const;

 System::Action __declspec(property(get=__get_levelWillStartIntroEvent, put=__set_levelWillStartIntroEvent))  levelWillStartIntroEvent;

constexpr void __set_levelWillStartIntroEvent(System::Action value) ;

constexpr System::Action __get_levelWillStartIntroEvent() const;

 System::Action __declspec(property(get=__get_levelDidStartEvent, put=__set_levelDidStartEvent))  levelDidStartEvent;

constexpr void __set_levelDidStartEvent(System::Action value) ;

constexpr System::Action __get_levelDidStartEvent() const;

 System::Action __declspec(property(get=__get_levelFailedEvent, put=__set_levelFailedEvent))  levelFailedEvent;

constexpr void __set_levelFailedEvent(System::Action value) ;

constexpr System::Action __get_levelFailedEvent() const;

 System::Action __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent))  levelFinishedEvent;

constexpr void __set_levelFinishedEvent(System::Action value) ;

constexpr System::Action __get_levelFinishedEvent() const;

 GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState __declspec(property(get=__get__gameState, put=__set__gameState))  _gameState;

constexpr void __set__gameState(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState value) ;

constexpr GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState __get__gameState() const;

 GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState __declspec(property(get=__get__prePauseGameState, put=__set__prePauseGameState))  _prePauseGameState;

constexpr void __set__prePauseGameState(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState value) ;

constexpr GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState __get__prePauseGameState() const;


// Methods

/// @brief Method add_levelWillStartIntroEvent addr 0x22709c4 size 0x9c virtual true final true
 void add_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method remove_levelWillStartIntroEvent addr 0x2270a60 size 0x9c virtual true final true
 void remove_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method add_levelDidStartEvent addr 0x2270afc size 0x9c virtual true final true
 void add_levelDidStartEvent(System::Action value) ;

/// @brief Method remove_levelDidStartEvent addr 0x2270b98 size 0x9c virtual true final true
 void remove_levelDidStartEvent(System::Action value) ;

/// @brief Method add_levelFailedEvent addr 0x2270c34 size 0x9c virtual true final true
 void add_levelFailedEvent(System::Action value) ;

/// @brief Method remove_levelFailedEvent addr 0x2270cd0 size 0x9c virtual true final true
 void remove_levelFailedEvent(System::Action value) ;

/// @brief Method add_levelFinishedEvent addr 0x2270d6c size 0x9c virtual true final true
 void add_levelFinishedEvent(System::Action value) ;

/// @brief Method remove_levelFinishedEvent addr 0x2270e08 size 0x9c virtual true final true
 void remove_levelFinishedEvent(System::Action value) ;

/// @brief Method Awake addr 0x2270ea4 size 0x8 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2270eac size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

/// @brief Method OnDestroy addr 0x2270f3c size 0x2e8 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleGameEnergyDidReach0 addr 0x2271224 size 0x54 virtual false final false
 void HandleGameEnergyDidReach0() ;

/// @brief Method HandleMissionObjectiveCheckersManagerObjectiveDidFail addr 0x2271278 size 0x34 virtual false final false
 void HandleMissionObjectiveCheckersManagerObjectiveDidFail() ;

/// @brief Method HandleSongDidFinish addr 0x22712ac size 0x34 virtual false final false
 void HandleSongDidFinish() ;

/// @brief Method HandlePauseControllerCanPause addr 0x22712e0 size 0x24 virtual false final false
 void HandlePauseControllerCanPause(System::Action_1<bool> canPause) ;

/// @brief Method HandlePauseControllerDidPause addr 0x2271304 size 0x18 virtual false final false
 void HandlePauseControllerDidPause() ;

/// @brief Method HandlePauseControllerDidResume addr 0x227131c size 0x18 virtual false final false
 void HandlePauseControllerDidResume() ;

static GlobalNamespace::MissionLevelGameplayManager New_ctor() ;

/// @brief Method .ctor addr 0x2271334 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__GameState, "", "MissionLevelGameplayManager/GameState");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager__InitData, "", "MissionLevelGameplayManager/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager___Start_d__23);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionLevelGameplayManager___Start_d__23, "", "MissionLevelGameplayManager/<Start>d__23");
NEED_NO_BOX(GlobalNamespace::MissionLevelGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelGameplayManager, "", "MissionLevelGameplayManager");
