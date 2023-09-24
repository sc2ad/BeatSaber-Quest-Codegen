#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCompletionResultsHelper;
}
// Type: ::LevelCompletionResultsHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4264))
// CS Name: LevelCompletionResultsHelper
class CORDL_TYPE LevelCompletionResultsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LevelCompletionResultsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsHelper", modifiers: " const&", def_value: None }]
constexpr LevelCompletionResultsHelper(LevelCompletionResultsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsHelper", modifiers: "&&", def_value: None }]
constexpr LevelCompletionResultsHelper(LevelCompletionResultsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelCompletionResultsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LevelCompletionResultsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelCompletionResultsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelCompletionResultsHelper& operator=(LevelCompletionResultsHelper&& o) noexcept = default;
  constexpr LevelCompletionResultsHelper& operator=(LevelCompletionResultsHelper const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x21c84a4 size 0x454 virtual false final false
static GlobalNamespace::LevelCompletionResults Create(GlobalNamespace::IReadonlyBeatmapData beatmapData, ::ArrayW<GlobalNamespace::BeatmapObjectExecutionRating> beatmapObjectExecutionRatings, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO gameplayModifiersModel, int32_t multipliedScore, int32_t modifiedScore, int32_t maxCombo, ::ArrayW<float_t> saberActivityValues, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, ::ArrayW<float_t> handActivityValues, float_t leftHandMovementDistance, float_t rightHandMovementDistance, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType, GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, float_t songTime) ;

/// @brief Method ProcessScore addr 0x21c88f8 size 0x110 virtual false final false
static void ProcessScore(GlobalNamespace::PlayerData playerData, GlobalNamespace::PlayerLevelStatsData playerLevelStats, GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IReadonlyBeatmapData transformedBeatmapData, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::PlatformLeaderboardsModel platformLeaderboardsModel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelCompletionResultsHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCompletionResultsHelper, "", "LevelCompletionResultsHelper");
