#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class MockNoteData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MockObstacleData;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorAI;
}
// Type: ::MockPlayerGamePoseGeneratorAI
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15492))
// CS Name: MockPlayerGamePoseGeneratorAI
class CORDL_TYPE MockPlayerGamePoseGeneratorAI : public GlobalNamespace::MockPlayerGamePoseGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~MockPlayerGamePoseGeneratorAI() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorAI", modifiers: " const&", def_value: None }]
constexpr MockPlayerGamePoseGeneratorAI(MockPlayerGamePoseGeneratorAI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorAI", modifiers: "&&", def_value: None }]
constexpr MockPlayerGamePoseGeneratorAI(MockPlayerGamePoseGeneratorAI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerGamePoseGeneratorAI(void* ptr) noexcept : GlobalNamespace::MockPlayerGamePoseGenerator(ptr) {
}


  constexpr MockPlayerGamePoseGeneratorAI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerGamePoseGeneratorAI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerGamePoseGeneratorAI& operator=(MockPlayerGamePoseGeneratorAI&& o) noexcept = default;
  constexpr MockPlayerGamePoseGeneratorAI& operator=(MockPlayerGamePoseGeneratorAI const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMockPlayerScoreCalculator __declspec(property(get=__get__scoreCalculator, put=__set__scoreCalculator))  _scoreCalculator;

constexpr void __set__scoreCalculator(GlobalNamespace::IMockPlayerScoreCalculator value) ;

constexpr GlobalNamespace::IMockPlayerScoreCalculator __get__scoreCalculator() const;

 int32_t __declspec(property(get=__get__lastKnowScore, put=__set__lastKnowScore))  _lastKnowScore;

constexpr void __set__lastKnowScore(int32_t value) ;

constexpr int32_t __get__lastKnowScore() const;

 float_t __declspec(property(get=__get__songStartTime, put=__set__songStartTime))  _songStartTime;

constexpr void __set__songStartTime(float_t value) ;

constexpr float_t __get__songStartTime() const;

 float_t __declspec(property(get=__get__timeScale, put=__set__timeScale))  _timeScale;

constexpr void __set__timeScale(float_t value) ;

constexpr float_t __get__timeScale() const;

 System::Action __declspec(property(get=__get__onSongFinished, put=__set__onSongFinished))  _onSongFinished;

constexpr void __set__onSongFinished(System::Action value) ;

constexpr System::Action __get__onSongFinished() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 float_t __declspec(property(get=__get__lastEventTime, put=__set__lastEventTime))  _lastEventTime;

constexpr void __set__lastEventTime(float_t value) ;

constexpr float_t __get__lastEventTime() const;

 UnityEngine::Pose __declspec(property(get=__get__lastHeadPose, put=__set__lastHeadPose))  _lastHeadPose;

constexpr void __set__lastHeadPose(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__lastHeadPose() const;

 UnityEngine::Pose __declspec(property(get=__get__lastLeftHandPose, put=__set__lastLeftHandPose))  _lastLeftHandPose;

constexpr void __set__lastLeftHandPose(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__lastLeftHandPose() const;

 UnityEngine::Pose __declspec(property(get=__get__lastRightHandPose, put=__set__lastRightHandPose))  _lastRightHandPose;

constexpr void __set__lastRightHandPose(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__lastRightHandPose() const;

 float_t __declspec(property(get=__get__lastSongTime, put=__set__lastSongTime))  _lastSongTime;

constexpr void __set__lastSongTime(float_t value) ;

constexpr float_t __get__lastSongTime() const;

 int32_t __declspec(property(get=__get__lineCount, put=__set__lineCount))  _lineCount;

constexpr void __set__lineCount(int32_t value) ;

constexpr int32_t __get__lineCount() const;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=__get__leftNotes, put=__set__leftNotes))  _leftNotes;

constexpr void __set__leftNotes(::ArrayW<GlobalNamespace::MockNoteData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockNoteData> __get__leftNotes() const;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=__get__rightNotes, put=__set__rightNotes))  _rightNotes;

constexpr void __set__rightNotes(::ArrayW<GlobalNamespace::MockNoteData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockNoteData> __get__rightNotes() const;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=__get__bombNotes, put=__set__bombNotes))  _bombNotes;

constexpr void __set__bombNotes(::ArrayW<GlobalNamespace::MockNoteData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockNoteData> __get__bombNotes() const;

 ::ArrayW<GlobalNamespace::MockObstacleData> __declspec(property(get=__get__obstacles, put=__set__obstacles))  _obstacles;

constexpr void __set__obstacles(::ArrayW<GlobalNamespace::MockObstacleData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockObstacleData> __get__obstacles() const;

 int32_t __declspec(property(get=__get__leftNoteIndex, put=__set__leftNoteIndex))  _leftNoteIndex;

constexpr void __set__leftNoteIndex(int32_t value) ;

constexpr int32_t __get__leftNoteIndex() const;

 int32_t __declspec(property(get=__get__rightNoteIndex, put=__set__rightNoteIndex))  _rightNoteIndex;

constexpr void __set__rightNoteIndex(int32_t value) ;

constexpr int32_t __get__rightNoteIndex() const;

 int32_t __declspec(property(get=__get__bombNoteIndex, put=__set__bombNoteIndex))  _bombNoteIndex;

constexpr void __set__bombNoteIndex(int32_t value) ;

constexpr int32_t __get__bombNoteIndex() const;

 int32_t __declspec(property(get=__get__obstacleIndex, put=__set__obstacleIndex))  _obstacleIndex;

constexpr void __set__obstacleIndex(int32_t value) ;

constexpr int32_t __get__obstacleIndex() const;

 int32_t __declspec(property(get=__get__prevLeftScore, put=__set__prevLeftScore))  _prevLeftScore;

constexpr void __set__prevLeftScore(int32_t value) ;

constexpr int32_t __get__prevLeftScore() const;

 int32_t __declspec(property(get=__get__prevRightScore, put=__set__prevRightScore))  _prevRightScore;

constexpr void __set__prevRightScore(int32_t value) ;

constexpr int32_t __get__prevRightScore() const;

 int32_t __declspec(property(get=__get__nextLeftHitScore, put=__set__nextLeftHitScore))  _nextLeftHitScore;

constexpr void __set__nextLeftHitScore(int32_t value) ;

constexpr int32_t __get__nextLeftHitScore() const;

 int32_t __declspec(property(get=__get__nextRightHitScore, put=__set__nextRightHitScore))  _nextRightHitScore;

constexpr void __set__nextRightHitScore(int32_t value) ;

constexpr int32_t __get__nextRightHitScore() const;

 int32_t __declspec(property(get=__get__score, put=__set__score))  _score;

constexpr void __set__score(int32_t value) ;

constexpr int32_t __get__score() const;

 int32_t __declspec(property(get=__get__combo, put=__set__combo))  _combo;

constexpr void __set__combo(int32_t value) ;

constexpr int32_t __get__combo() const;

 int32_t __declspec(property(get=__get__multiplier, put=__set__multiplier))  _multiplier;

constexpr void __set__multiplier(int32_t value) ;

constexpr int32_t __get__multiplier() const;

 bool __declspec(property(get=__get__fullCombo, put=__set__fullCombo))  _fullCombo;

constexpr void __set__fullCombo(bool value) ;

constexpr bool __get__fullCombo() const;

 bool __declspec(property(get=__get__hasFinishedLevel, put=__set__hasFinishedLevel))  _hasFinishedLevel;

constexpr void __set__hasFinishedLevel(bool value) ;

constexpr bool __get__hasFinishedLevel() const;

 bool __declspec(property(get=__get__isInited, put=__set__isInited))  _isInited;

constexpr void __set__isInited(bool value) ;

constexpr bool __get__isInited() const;


// Methods

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "gameplayRpcManager", ty: "GlobalNamespace::IGameplayRpcManager", modifiers: "", def_value: None }, CppParam { name: "scoreCalculator", ty: "GlobalNamespace::IMockPlayerScoreCalculator", modifiers: "", def_value: None }, CppParam { name: "leftHanded", ty: "bool", modifiers: "", def_value: None }]
explicit MockPlayerGamePoseGeneratorAI(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, GlobalNamespace::IMockPlayerScoreCalculator scoreCalculator, bool leftHanded) ;

/// @brief Method .ctor addr 0x227a00c size 0x278 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, GlobalNamespace::IMockPlayerScoreCalculator scoreCalculator, bool leftHanded) ;

/// @brief Method Dispose addr 0x227a284 size 0x268 virtual true final false
 void Dispose() ;

/// @brief Method Init addr 0x227a4ec size 0x46c virtual true final false
 void Init(float_t introStartTime, GlobalNamespace::MockBeatmapData beatmapData, GlobalNamespace::GameplayModifiers gameplayModifiers, System::Action onSongFinished) ;

/// @brief Method Tick addr 0x227a958 size 0x9c0 virtual true final false
 void Tick() ;

/// @brief Method GetCutDirection addr 0x227cbf8 size 0x2a4 virtual false final false
static UnityEngine::Vector3 GetCutDirection(GlobalNamespace::NoteCutDirection cutDirection) ;

/// @brief Method GetNotePosition addr 0x227ce9c size 0x68 virtual false final false
static UnityEngine::Vector3 GetNotePosition(int32_t lineCount, GlobalNamespace::MockNoteData noteData) ;

/// @brief Method Blerp addr 0x227cf04 size 0xc4 virtual false final false
static UnityEngine::Vector3 Blerp(UnityEngine::Vector3 prevStart, UnityEngine::Vector3 prevEnd, UnityEngine::Vector3 currStart, UnityEngine::Vector3 currEnd, float_t t) ;

/// @brief Method ProcessNotes addr 0x227b318 size 0xfe4 virtual false final false
 UnityEngine::Pose ProcessNotes(::ArrayW<GlobalNamespace::MockNoteData> notes, UnityEngine::Vector3 handDirection, ByRef<int32_t> noteIndex, ByRef<int32_t> prevHitScore, ByRef<int32_t> nextHitScore, ::ArrayW<GlobalNamespace::MockNoteData> bombs, ByRef<int32_t> bombIndex, int32_t lineCount, float_t songTime, ByRef<bool> wasHitOrMiss) ;

/// @brief Method ProcessObstacles addr 0x227c2fc size 0x2d4 virtual false final false
 UnityEngine::Pose ProcessObstacles(::ArrayW<GlobalNamespace::MockObstacleData> obstacles, ByRef<int32_t> obstacleIndex, int32_t lineCount, UnityEngine::Pose prevHeadPose, UnityEngine::Pose leftHandPose, UnityEngine::Pose rightHandPose, float_t songTime) ;

/// @brief Method UpdateScore addr 0x227c5d0 size 0x628 virtual false final false
 void UpdateScore(ByRef<int32_t> currentScore, ByRef<int32_t> currentCombo, ByRef<int32_t> currentMultiplier, int32_t hitScore, int32_t lineCount, UnityEngine::Pose lastPose, UnityEngine::Pose currentPose, float_t lastSongTime, float_t songTime, GlobalNamespace::MockNoteData noteData, GlobalNamespace::MockNoteData nextNoteData) ;

/// @brief Method SimulateFail addr 0x227d1ec size 0x1c0 virtual true final false
 void SimulateFail() ;

/// @brief Method HandleNoteWasSpawned addr 0x227d3ac size 0x23c virtual false final false
 void HandleNoteWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfoNetSerializable) ;

/// @brief Method HandleObstacleWasSpawned addr 0x227d5e8 size 0x23c virtual false final false
 void HandleObstacleWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfoNetSerializable) ;

/// @brief Method HandleSliderWasSpawned addr 0x227d824 size 0x23c virtual false final false
 void HandleSliderWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfoNetSerializable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerGamePoseGeneratorAI);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerGamePoseGeneratorAI, "", "MockPlayerGamePoseGeneratorAI");
