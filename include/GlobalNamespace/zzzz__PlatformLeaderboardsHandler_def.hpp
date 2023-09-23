#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformLeaderboardsHandler;
}
// Type: ::PlatformLeaderboardsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4253))
// CS Name: PlatformLeaderboardsHandler
class CORDL_TYPE PlatformLeaderboardsHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlatformLeaderboardsHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsHandler", modifiers: " const&", def_value: None }]
constexpr PlatformLeaderboardsHandler(PlatformLeaderboardsHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
constexpr PlatformLeaderboardsHandler(PlatformLeaderboardsHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformLeaderboardsHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformLeaderboardsHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformLeaderboardsHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformLeaderboardsHandler& operator=(PlatformLeaderboardsHandler&& o) noexcept = default;
  constexpr PlatformLeaderboardsHandler& operator=(PlatformLeaderboardsHandler const& o) noexcept = default;
                


// Methods

/// @brief Method GetScores addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::HMAsyncRequest GetScores(GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler) ;

/// @brief Method UploadScore addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::HMAsyncRequest UploadScore(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler) ;

// Ctor Parameters []
explicit PlatformLeaderboardsHandler() ;

/// @brief Method .ctor addr 0x21c6b68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardsHandler, "", "PlatformLeaderboardsHandler");
