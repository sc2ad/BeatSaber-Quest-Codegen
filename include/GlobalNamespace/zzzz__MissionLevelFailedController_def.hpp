#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionLevelFailedController__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13;
}
namespace GlobalNamespace {
class MissionLevelFailedController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5170))
// CS Name: MissionLevelFailedController::InitData
class CORDL_TYPE GlobalNamespace__MissionLevelFailedController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MissionLevelFailedController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelFailedController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionLevelFailedController__InitData(GlobalNamespace__MissionLevelFailedController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelFailedController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionLevelFailedController__InitData(GlobalNamespace__MissionLevelFailedController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionLevelFailedController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionLevelFailedController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelFailedController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelFailedController__InitData& operator=(GlobalNamespace__MissionLevelFailedController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__MissionLevelFailedController__InitData& operator=(GlobalNamespace__MissionLevelFailedController__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_autoRestart, put=__set_autoRestart))  autoRestart;

constexpr void __set_autoRestart(bool value) ;

constexpr bool __get_autoRestart() const;


// Methods

// Ctor Parameters [CppParam { name: "autoRestart", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__MissionLevelFailedController__InitData(bool autoRestart) ;

/// @brief Method .ctor addr 0x20d3dfc size 0x28 virtual false final false
 void _ctor(bool autoRestart) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LevelFailedCoroutine>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5171))
// CS Name: MissionLevelFailedController::<LevelFailedCoroutine>d__13
class CORDL_TYPE GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13(GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13(GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13& operator=(GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13&& o) noexcept = default;
  constexpr GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13& operator=(GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MissionLevelFailedController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionLevelFailedController value) ;

constexpr GlobalNamespace::MissionLevelFailedController __get___4__this() const;

 GlobalNamespace::MissionCompletionResults __declspec(property(get=__get__missionCompletionResults_5__2, put=__set__missionCompletionResults_5__2))  _missionCompletionResults_5__2;

constexpr void __set__missionCompletionResults_5__2(GlobalNamespace::MissionCompletionResults value) ;

constexpr GlobalNamespace::MissionCompletionResults __get__missionCompletionResults_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20d3dcc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20d3e24 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20d3e28 size 0x174 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20d4130 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20d4138 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20d4178 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionLevelFailedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5172))
// CS Name: MissionLevelFailedController
class CORDL_TYPE MissionLevelFailedController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _LevelFailedCoroutine_d__13 = GlobalNamespace::GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13;

using InitData = GlobalNamespace::GlobalNamespace__MissionLevelFailedController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MissionLevelFailedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelFailedController", modifiers: " const&", def_value: None }]
constexpr MissionLevelFailedController(MissionLevelFailedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelFailedController", modifiers: "&&", def_value: None }]
constexpr MissionLevelFailedController(MissionLevelFailedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelFailedController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionLevelFailedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelFailedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelFailedController& operator=(MissionLevelFailedController&& o) noexcept = default;
  constexpr MissionLevelFailedController& operator=(MissionLevelFailedController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 GlobalNamespace::LevelFailedTextEffect __declspec(property(get=__get__levelFailedTextEffect, put=__set__levelFailedTextEffect))  _levelFailedTextEffect;

constexpr void __set__levelFailedTextEffect(GlobalNamespace::LevelFailedTextEffect value) ;

constexpr GlobalNamespace::LevelFailedTextEffect __get__levelFailedTextEffect() const;

 GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelSceneSetupData, put=__set__missionLevelSceneSetupData))  _missionLevelSceneSetupData;

constexpr void __set__missionLevelSceneSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelSceneSetupData() const;

 GlobalNamespace::MissionObjectiveCheckersManager __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager))  _missionObjectiveCheckersManager;

constexpr void __set__missionObjectiveCheckersManager(GlobalNamespace::MissionObjectiveCheckersManager value) ;

constexpr GlobalNamespace::MissionObjectiveCheckersManager __get__missionObjectiveCheckersManager() const;

 GlobalNamespace::GlobalNamespace__MissionLevelFailedController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__MissionLevelFailedController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__MissionLevelFailedController__InitData __get__initData() const;

 GlobalNamespace::BeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(GlobalNamespace::BeatmapObjectSpawnController value) ;

constexpr GlobalNamespace::BeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;

 GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(GlobalNamespace::GameSongController value) ;

constexpr GlobalNamespace::GameSongController __get__gameSongController() const;

 GlobalNamespace::ILevelEndActions __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager))  _gameplayManager;

constexpr void __set__gameplayManager(GlobalNamespace::ILevelEndActions value) ;

constexpr GlobalNamespace::ILevelEndActions __get__gameplayManager() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;


// Methods

/// @brief Method Start addr 0x20d3b50 size 0xec virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d3c3c size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleLevelFailed addr 0x20d3d44 size 0x20 virtual false final false
 void HandleLevelFailed() ;

/// @brief Method LevelFailedCoroutine addr 0x20d3d64 size 0x68 virtual false final false
 System::Collections::IEnumerator LevelFailedCoroutine() ;

// Ctor Parameters []
explicit MissionLevelFailedController() ;

/// @brief Method .ctor addr 0x20d3df4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionLevelFailedController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionLevelFailedController__InitData, "", "MissionLevelFailedController/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionLevelFailedController___LevelFailedCoroutine_d__13, "", "MissionLevelFailedController/<LevelFailedCoroutine>d__13");
NEED_NO_BOX(GlobalNamespace::MissionLevelFailedController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelFailedController, "", "MissionLevelFailedController");
