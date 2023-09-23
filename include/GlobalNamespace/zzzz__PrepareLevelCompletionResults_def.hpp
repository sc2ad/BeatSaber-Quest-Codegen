#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class SaberActivityCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
// Type: ::PrepareLevelCompletionResults
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5363))
// CS Name: PrepareLevelCompletionResults
class CORDL_TYPE PrepareLevelCompletionResults : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~PrepareLevelCompletionResults() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: " const&", def_value: None }]
constexpr PrepareLevelCompletionResults(PrepareLevelCompletionResults const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrepareLevelCompletionResults", modifiers: "&&", def_value: None }]
constexpr PrepareLevelCompletionResults(PrepareLevelCompletionResults&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrepareLevelCompletionResults(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PrepareLevelCompletionResults& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrepareLevelCompletionResults& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrepareLevelCompletionResults& operator=(PrepareLevelCompletionResults&& o) noexcept = default;
  constexpr PrepareLevelCompletionResults& operator=(PrepareLevelCompletionResults const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModelSO, put=__set__gameplayModifiersModelSO))  _gameplayModifiersModelSO;

constexpr void __set__gameplayModifiersModelSO(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModelSO() const;

 GlobalNamespace::SaberActivityCounter __declspec(property(get=__get__saberActivityCounter, put=__set__saberActivityCounter))  _saberActivityCounter;

constexpr void __set__saberActivityCounter(GlobalNamespace::SaberActivityCounter value) ;

constexpr GlobalNamespace::SaberActivityCounter __get__saberActivityCounter() const;

 GlobalNamespace::BeatmapObjectExecutionRatingsRecorder __declspec(property(get=__get__beatmapObjectExecutionRatingsRecorder, put=__set__beatmapObjectExecutionRatingsRecorder))  _beatmapObjectExecutionRatingsRecorder;

constexpr void __set__beatmapObjectExecutionRatingsRecorder(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder value) ;

constexpr GlobalNamespace::BeatmapObjectExecutionRatingsRecorder __get__beatmapObjectExecutionRatingsRecorder() const;

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 GlobalNamespace::GameEnergyCounter __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter))  _gameEnergyCounter;

constexpr void __set__gameEnergyCounter(GlobalNamespace::GameEnergyCounter value) ;

constexpr GlobalNamespace::GameEnergyCounter __get__gameEnergyCounter() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get__beatmapData() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;

 GlobalNamespace::ComboController __declspec(property(get=__get__comboController, put=__set__comboController))  _comboController;

constexpr void __set__comboController(GlobalNamespace::ComboController value) ;

constexpr GlobalNamespace::ComboController __get__comboController() const;


// Methods

/// @brief Method FillLevelCompletionResults addr 0x2108a30 size 0x250 virtual false final false
 GlobalNamespace::LevelCompletionResults FillLevelCompletionResults(GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction levelEndAction) ;

// Ctor Parameters []
explicit PrepareLevelCompletionResults() ;

/// @brief Method .ctor addr 0x2108cb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PrepareLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrepareLevelCompletionResults, "", "PrepareLevelCompletionResults");
