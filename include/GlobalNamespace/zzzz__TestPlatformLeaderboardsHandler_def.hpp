#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__ScoreData;
}
// Forward declare root types
namespace GlobalNamespace {
class TestPlatformLeaderboardsHandler;
}
// Type: ::TestPlatformLeaderboardsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4253))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4254))
// CS Name: TestPlatformLeaderboardsHandler
class CORDL_TYPE TestPlatformLeaderboardsHandler : public GlobalNamespace::PlatformLeaderboardsHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TestPlatformLeaderboardsHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestPlatformLeaderboardsHandler", modifiers: " const&", def_value: None }]
constexpr TestPlatformLeaderboardsHandler(TestPlatformLeaderboardsHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestPlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
constexpr TestPlatformLeaderboardsHandler(TestPlatformLeaderboardsHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestPlatformLeaderboardsHandler(void* ptr) noexcept : GlobalNamespace::PlatformLeaderboardsHandler(ptr) {
}


  constexpr TestPlatformLeaderboardsHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestPlatformLeaderboardsHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestPlatformLeaderboardsHandler& operator=(TestPlatformLeaderboardsHandler&& o) noexcept = default;
  constexpr TestPlatformLeaderboardsHandler& operator=(TestPlatformLeaderboardsHandler const& o) noexcept = default;
                


// Methods

/// @brief Method GetScores addr 0x21c7624 size 0x5c virtual true final false
 GlobalNamespace::HMAsyncRequest GetScores(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler) ;

/// @brief Method UploadScore addr 0x21c7680 size 0x5c virtual true final false
 GlobalNamespace::HMAsyncRequest UploadScore(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler) ;

// Ctor Parameters []
explicit TestPlatformLeaderboardsHandler() ;

/// @brief Method .ctor addr 0x21c76dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TestPlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformLeaderboardsHandler, "", "TestPlatformLeaderboardsHandler");
