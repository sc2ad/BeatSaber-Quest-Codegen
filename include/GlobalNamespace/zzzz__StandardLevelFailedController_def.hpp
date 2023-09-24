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
class LevelCompletionResults;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelFailedController__InitData;
}
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelFailedController__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13;
}
namespace GlobalNamespace {
class StandardLevelFailedController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5178))
// CS Name: StandardLevelFailedController::InitData
class CORDL_TYPE GlobalNamespace__StandardLevelFailedController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__StandardLevelFailedController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelFailedController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StandardLevelFailedController__InitData(GlobalNamespace__StandardLevelFailedController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelFailedController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StandardLevelFailedController__InitData(GlobalNamespace__StandardLevelFailedController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelFailedController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__StandardLevelFailedController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelFailedController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelFailedController__InitData& operator=(GlobalNamespace__StandardLevelFailedController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__StandardLevelFailedController__InitData& operator=(GlobalNamespace__StandardLevelFailedController__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_autoRestart, put=__set_autoRestart))  autoRestart;

constexpr void __set_autoRestart(bool value) ;

constexpr bool __get_autoRestart() const;


// Methods

static GlobalNamespace::GlobalNamespace__StandardLevelFailedController__InitData New_ctor(bool autoRestart) ;

/// @brief Method .ctor addr 0x20d5558 size 0x28 virtual false final false
 void _ctor(bool autoRestart) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LevelFailedCoroutine>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5179))
// CS Name: StandardLevelFailedController::<LevelFailedCoroutine>d__13
class CORDL_TYPE GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13(GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13(GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13& operator=(GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13&& o) noexcept = default;
  constexpr GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13& operator=(GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::StandardLevelFailedController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelFailedController value) ;

constexpr GlobalNamespace::StandardLevelFailedController __get___4__this() const;

 GlobalNamespace::LevelCompletionResults __declspec(property(get=__get__levelCompletionResults_5__2, put=__set__levelCompletionResults_5__2))  _levelCompletionResults_5__2;

constexpr void __set__levelCompletionResults_5__2(GlobalNamespace::LevelCompletionResults value) ;

constexpr GlobalNamespace::LevelCompletionResults __get__levelCompletionResults_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20d5528 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20d5580 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20d5584 size 0x148 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20d56cc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20d56d4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20d5714 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandardLevelFailedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5180))
// CS Name: StandardLevelFailedController
class CORDL_TYPE StandardLevelFailedController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _LevelFailedCoroutine_d__13 = GlobalNamespace::GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13;

using InitData = GlobalNamespace::GlobalNamespace__StandardLevelFailedController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~StandardLevelFailedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFailedController", modifiers: " const&", def_value: None }]
constexpr StandardLevelFailedController(StandardLevelFailedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelFailedController", modifiers: "&&", def_value: None }]
constexpr StandardLevelFailedController(StandardLevelFailedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelFailedController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelFailedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelFailedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelFailedController& operator=(StandardLevelFailedController&& o) noexcept = default;
  constexpr StandardLevelFailedController& operator=(StandardLevelFailedController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LevelFailedTextEffect __declspec(property(get=__get__levelFailedTextEffect, put=__set__levelFailedTextEffect))  _levelFailedTextEffect;

constexpr void __set__levelFailedTextEffect(GlobalNamespace::LevelFailedTextEffect value) ;

constexpr GlobalNamespace::LevelFailedTextEffect __get__levelFailedTextEffect() const;

 GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelSceneSetupData, put=__set__standardLevelSceneSetupData))  _standardLevelSceneSetupData;

constexpr void __set__standardLevelSceneSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelSceneSetupData() const;

 GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 GlobalNamespace::GlobalNamespace__StandardLevelFailedController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__StandardLevelFailedController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__StandardLevelFailedController__InitData __get__initData() const;

 GlobalNamespace::ILevelEndActions __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager))  _gameplayManager;

constexpr void __set__gameplayManager(GlobalNamespace::ILevelEndActions value) ;

constexpr GlobalNamespace::ILevelEndActions __get__gameplayManager() const;

 GlobalNamespace::BeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(GlobalNamespace::BeatmapObjectSpawnController value) ;

constexpr GlobalNamespace::BeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;

 GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(GlobalNamespace::GameSongController value) ;

constexpr GlobalNamespace::GameSongController __get__gameSongController() const;

 GlobalNamespace::EnvironmentSpawnRotation __declspec(property(get=__get__environmentSpawnRotation, put=__set__environmentSpawnRotation))  _environmentSpawnRotation;

constexpr void __set__environmentSpawnRotation(GlobalNamespace::EnvironmentSpawnRotation value) ;

constexpr GlobalNamespace::EnvironmentSpawnRotation __get__environmentSpawnRotation() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;


// Methods

/// @brief Method Start addr 0x20d52ac size 0xec virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d5398 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleLevelFailed addr 0x20d54a0 size 0x20 virtual false final false
 void HandleLevelFailed() ;

/// @brief Method LevelFailedCoroutine addr 0x20d54c0 size 0x68 virtual false final false
 System::Collections::IEnumerator LevelFailedCoroutine() ;

static GlobalNamespace::StandardLevelFailedController New_ctor() ;

/// @brief Method .ctor addr 0x20d5550 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__StandardLevelFailedController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelFailedController__InitData, "", "StandardLevelFailedController/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelFailedController___LevelFailedCoroutine_d__13, "", "StandardLevelFailedController/<LevelFailedCoroutine>d__13");
NEED_NO_BOX(GlobalNamespace::StandardLevelFailedController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelFailedController, "", "StandardLevelFailedController");
