#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
namespace GlobalNamespace {
class GlobalNamespace__BadCutScoringElement__Pool;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GlobalNamespace__GoodCutScoringElement__Pool;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class GlobalNamespace__MissScoringElement__Pool;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreController;
}
// Type: ::ScoreController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5409))
// CS Name: ScoreController
class CORDL_TYPE ScoreController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IScoreController
constexpr operator  GlobalNamespace::IScoreController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~ScoreController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreController", modifiers: " const&", def_value: None }]
constexpr ScoreController(ScoreController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreController", modifiers: "&&", def_value: None }]
constexpr ScoreController(ScoreController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScoreController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreController& operator=(ScoreController&& o) noexcept = default;
  constexpr ScoreController& operator=(ScoreController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::IGameEnergyCounter __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter))  _gameEnergyCounter;

constexpr void __set__gameEnergyCounter(GlobalNamespace::IGameEnergyCounter value) ;

constexpr GlobalNamespace::IGameEnergyCounter __get__gameEnergyCounter() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::GlobalNamespace__GoodCutScoringElement__Pool __declspec(property(get=__get__goodCutScoringElementPool, put=__set__goodCutScoringElementPool))  _goodCutScoringElementPool;

constexpr void __set__goodCutScoringElementPool(GlobalNamespace::GlobalNamespace__GoodCutScoringElement__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__GoodCutScoringElement__Pool __get__goodCutScoringElementPool() const;

 GlobalNamespace::GlobalNamespace__BadCutScoringElement__Pool __declspec(property(get=__get__badCutScoringElementPool, put=__set__badCutScoringElementPool))  _badCutScoringElementPool;

constexpr void __set__badCutScoringElementPool(GlobalNamespace::GlobalNamespace__BadCutScoringElement__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__BadCutScoringElement__Pool __get__badCutScoringElementPool() const;

 GlobalNamespace::GlobalNamespace__MissScoringElement__Pool __declspec(property(get=__get__missScoringElementPool, put=__set__missScoringElementPool))  _missScoringElementPool;

constexpr void __set__missScoringElementPool(GlobalNamespace::GlobalNamespace__MissScoringElement__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__MissScoringElement__Pool __get__missScoringElementPool() const;

 GlobalNamespace::PlayerHeadAndObstacleInteraction __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction))  _playerHeadAndObstacleInteraction;

constexpr void __set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value) ;

constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction __get__playerHeadAndObstacleInteraction() const;

 System::Action_2<int32_t,int32_t> __declspec(property(get=__get_scoreDidChangeEvent, put=__set_scoreDidChangeEvent))  scoreDidChangeEvent;

constexpr void __set_scoreDidChangeEvent(System::Action_2<int32_t,int32_t> value) ;

constexpr System::Action_2<int32_t,int32_t> __get_scoreDidChangeEvent() const;

 System::Action_2<int32_t,float_t> __declspec(property(get=__get_multiplierDidChangeEvent, put=__set_multiplierDidChangeEvent))  multiplierDidChangeEvent;

constexpr void __set_multiplierDidChangeEvent(System::Action_2<int32_t,float_t> value) ;

constexpr System::Action_2<int32_t,float_t> __get_multiplierDidChangeEvent() const;

 System::Action_1<GlobalNamespace::ScoringElement> __declspec(property(get=__get_scoringForNoteStartedEvent, put=__set_scoringForNoteStartedEvent))  scoringForNoteStartedEvent;

constexpr void __set_scoringForNoteStartedEvent(System::Action_1<GlobalNamespace::ScoringElement> value) ;

constexpr System::Action_1<GlobalNamespace::ScoringElement> __get_scoringForNoteStartedEvent() const;

 System::Action_1<GlobalNamespace::ScoringElement> __declspec(property(get=__get_scoringForNoteFinishedEvent, put=__set_scoringForNoteFinishedEvent))  scoringForNoteFinishedEvent;

constexpr void __set_scoringForNoteFinishedEvent(System::Action_1<GlobalNamespace::ScoringElement> value) ;

constexpr System::Action_1<GlobalNamespace::ScoringElement> __get_scoringForNoteFinishedEvent() const;

 System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get__gameplayModifierParams, put=__set__gameplayModifierParams))  _gameplayModifierParams;

constexpr void __set__gameplayModifierParams(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __get__gameplayModifierParams() const;

 int32_t __declspec(property(get=__get__modifiedScore, put=__set__modifiedScore))  _modifiedScore;

constexpr void __set__modifiedScore(int32_t value) ;

constexpr int32_t __get__modifiedScore() const;

 int32_t __declspec(property(get=__get__multipliedScore, put=__set__multipliedScore))  _multipliedScore;

constexpr void __set__multipliedScore(int32_t value) ;

constexpr int32_t __get__multipliedScore() const;

 int32_t __declspec(property(get=__get__immediateMaxPossibleMultipliedScore, put=__set__immediateMaxPossibleMultipliedScore))  _immediateMaxPossibleMultipliedScore;

constexpr void __set__immediateMaxPossibleMultipliedScore(int32_t value) ;

constexpr int32_t __get__immediateMaxPossibleMultipliedScore() const;

 int32_t __declspec(property(get=__get__immediateMaxPossibleModifiedScore, put=__set__immediateMaxPossibleModifiedScore))  _immediateMaxPossibleModifiedScore;

constexpr void __set__immediateMaxPossibleModifiedScore(int32_t value) ;

constexpr int32_t __get__immediateMaxPossibleModifiedScore() const;

 float_t __declspec(property(get=__get__prevMultiplierFromModifiers, put=__set__prevMultiplierFromModifiers))  _prevMultiplierFromModifiers;

constexpr void __set__prevMultiplierFromModifiers(float_t value) ;

constexpr float_t __get__prevMultiplierFromModifiers() const;

 GlobalNamespace::ScoreMultiplierCounter __declspec(property(get=__get__maxScoreMultiplierCounter, put=__set__maxScoreMultiplierCounter))  _maxScoreMultiplierCounter;

constexpr void __set__maxScoreMultiplierCounter(GlobalNamespace::ScoreMultiplierCounter value) ;

constexpr GlobalNamespace::ScoreMultiplierCounter __get__maxScoreMultiplierCounter() const;

 GlobalNamespace::ScoreMultiplierCounter __declspec(property(get=__get__scoreMultiplierCounter, put=__set__scoreMultiplierCounter))  _scoreMultiplierCounter;

constexpr void __set__scoreMultiplierCounter(GlobalNamespace::ScoreMultiplierCounter value) ;

constexpr GlobalNamespace::ScoreMultiplierCounter __get__scoreMultiplierCounter() const;

 System::Collections::Generic::List_1<float_t> __declspec(property(get=__get__sortedNoteTimesWithoutScoringElements, put=__set__sortedNoteTimesWithoutScoringElements))  _sortedNoteTimesWithoutScoringElements;

constexpr void __set__sortedNoteTimesWithoutScoringElements(System::Collections::Generic::List_1<float_t> value) ;

constexpr System::Collections::Generic::List_1<float_t> __get__sortedNoteTimesWithoutScoringElements() const;

 System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> __declspec(property(get=__get__sortedScoringElementsWithoutMultiplier, put=__set__sortedScoringElementsWithoutMultiplier))  _sortedScoringElementsWithoutMultiplier;

constexpr void __set__sortedScoringElementsWithoutMultiplier(System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> __get__sortedScoringElementsWithoutMultiplier() const;

 System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> __declspec(property(get=__get__scoringElementsWithMultiplier, put=__set__scoringElementsWithMultiplier))  _scoringElementsWithMultiplier;

constexpr void __set__scoringElementsWithMultiplier(System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> __get__scoringElementsWithMultiplier() const;

 System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> __declspec(property(get=__get__scoringElementsToRemove, put=__set__scoringElementsToRemove))  _scoringElementsToRemove;

constexpr void __set__scoringElementsToRemove(System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::ScoringElement> __get__scoringElementsToRemove() const;


// Properties

 int32_t __declspec(property(get=get_multipliedScore))  multipliedScore;

 int32_t __declspec(property(get=get_modifiedScore))  modifiedScore;

 int32_t __declspec(property(get=get_immediateMaxPossibleMultipliedScore))  immediateMaxPossibleMultipliedScore;

 int32_t __declspec(property(get=get_immediateMaxPossibleModifiedScore))  immediateMaxPossibleModifiedScore;


// Methods

/// @brief Method add_scoreDidChangeEvent addr 0x210e564 size 0xb0 virtual true final true
 void add_scoreDidChangeEvent(System::Action_2<int32_t,int32_t> value) ;

/// @brief Method remove_scoreDidChangeEvent addr 0x210e614 size 0xb0 virtual true final true
 void remove_scoreDidChangeEvent(System::Action_2<int32_t,int32_t> value) ;

/// @brief Method add_multiplierDidChangeEvent addr 0x210e6c4 size 0xb0 virtual true final true
 void add_multiplierDidChangeEvent(System::Action_2<int32_t,float_t> value) ;

/// @brief Method remove_multiplierDidChangeEvent addr 0x210e774 size 0xb0 virtual true final true
 void remove_multiplierDidChangeEvent(System::Action_2<int32_t,float_t> value) ;

/// @brief Method add_scoringForNoteStartedEvent addr 0x210e824 size 0xb0 virtual true final true
 void add_scoringForNoteStartedEvent(System::Action_1<GlobalNamespace::ScoringElement> value) ;

/// @brief Method remove_scoringForNoteStartedEvent addr 0x210e8d4 size 0xb0 virtual true final true
 void remove_scoringForNoteStartedEvent(System::Action_1<GlobalNamespace::ScoringElement> value) ;

/// @brief Method add_scoringForNoteFinishedEvent addr 0x210e984 size 0xb0 virtual true final true
 void add_scoringForNoteFinishedEvent(System::Action_1<GlobalNamespace::ScoringElement> value) ;

/// @brief Method remove_scoringForNoteFinishedEvent addr 0x210ea34 size 0xb0 virtual true final true
 void remove_scoringForNoteFinishedEvent(System::Action_1<GlobalNamespace::ScoringElement> value) ;

/// @brief Method get_multipliedScore addr 0x210eae4 size 0x8 virtual true final true
 int32_t get_multipliedScore() ;

/// @brief Method get_modifiedScore addr 0x210eaec size 0x8 virtual true final true
 int32_t get_modifiedScore() ;

/// @brief Method get_immediateMaxPossibleMultipliedScore addr 0x210eaf4 size 0x8 virtual true final true
 int32_t get_immediateMaxPossibleMultipliedScore() ;

/// @brief Method get_immediateMaxPossibleModifiedScore addr 0x210eafc size 0x8 virtual true final true
 int32_t get_immediateMaxPossibleModifiedScore() ;

/// @brief Method SetEnabled addr 0x210eb04 size 0xc virtual true final true
 void SetEnabled(bool enabled) ;

/// @brief Method Start addr 0x210eb10 size 0x24c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x210ed5c size 0x1e8 virtual false final false
 void OnDestroy() ;

/// @brief Method LateUpdate addr 0x210ef44 size 0x7ac virtual false final false
 void LateUpdate() ;

/// @brief Method HandleNoteWasSpawned addr 0x210f9c0 size 0xd4 virtual false final false
 void HandleNoteWasSpawned(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteWasCut addr 0x210fa94 size 0x1ac virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleNoteWasMissed addr 0x210fcfc size 0x134 virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandlePlayerHeadDidEnterObstacles addr 0x210fe7c size 0x88 virtual false final false
 void HandlePlayerHeadDidEnterObstacles() ;

/// @brief Method DespawnScoringElement addr 0x210f838 size 0x188 virtual false final false
 void DespawnScoringElement(GlobalNamespace::ScoringElement scoringElement) ;

// Ctor Parameters []
explicit ScoreController() ;

/// @brief Method .ctor addr 0x210ff04 size 0x174 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScoreController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreController, "", "ScoreController");
