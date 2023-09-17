#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class ScoringElement;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
// Type: ::BeatmapObjectExecutionRatingsRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4830))
// CS Name: BeatmapObjectExecutionRatingsRecorder
class CORDL_TYPE BeatmapObjectExecutionRatingsRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BeatmapObjectExecutionRatingsRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRatingsRecorder", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectExecutionRatingsRecorder(BeatmapObjectExecutionRatingsRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRatingsRecorder", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectExecutionRatingsRecorder(BeatmapObjectExecutionRatingsRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectExecutionRatingsRecorder(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapObjectExecutionRatingsRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectExecutionRatingsRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectExecutionRatingsRecorder& operator=(BeatmapObjectExecutionRatingsRecorder&& o) noexcept = default;
  constexpr BeatmapObjectExecutionRatingsRecorder& operator=(BeatmapObjectExecutionRatingsRecorder const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(::GlobalNamespace::IScoreController value) ;

constexpr ::GlobalNamespace::IScoreController __get__scoreController() const;

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::PlayerHeadAndObstacleInteraction __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction))  _playerHeadAndObstacleInteraction;

constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction value) ;

constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction __get__playerHeadAndObstacleInteraction() const;

 ::GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating> __declspec(property(get=__get__beatmapObjectExecutionRatings, put=__set__beatmapObjectExecutionRatings))  _beatmapObjectExecutionRatings;

constexpr void __set__beatmapObjectExecutionRatings(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating> __get__beatmapObjectExecutionRatings() const;

 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController> __declspec(property(get=__get__hitObstacles, put=__set__hitObstacles))  _hitObstacles;

constexpr void __set__hitObstacles(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController> __get__hitObstacles() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating> __declspec(property(get=get_beatmapObjectExecutionRatings))  beatmapObjectExecutionRatings;


// Methods

/// @brief Method get_beatmapObjectExecutionRatings addr 0x22326e4 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating> get_beatmapObjectExecutionRatings() ;

/// @brief Method Start addr 0x22326ec size 0x1a0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x223293c size 0x1ec virtual false final false
 void OnDestroy() ;

/// @brief Method HandleScoringForNoteDidFinish addr 0x2232bd8 size 0x474 virtual false final false
 void HandleScoringForNoteDidFinish(::GlobalNamespace::ScoringElement scoringElement) ;

/// @brief Method HandlePlayerHeadDidEnterObstacle addr 0x223304c size 0x120 virtual false final false
 void HandlePlayerHeadDidEnterObstacle(::GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleObstacleDidPassAvoidedMark addr 0x223316c size 0x15c virtual false final false
 void HandleObstacleDidPassAvoidedMark(::GlobalNamespace::ObstacleController obstacleController) ;

// Ctor Parameters []
explicit BeatmapObjectExecutionRatingsRecorder() ;

/// @brief Method .ctor addr 0x22332c8 size 0xc4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder, "", "BeatmapObjectExecutionRatingsRecorder");
