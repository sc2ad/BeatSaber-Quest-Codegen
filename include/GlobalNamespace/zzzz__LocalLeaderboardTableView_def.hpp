#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableView_def.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalLeaderboardsModel__ScoreData;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardTableView;
}
// Type: ::LocalLeaderboardTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5882))
// CS Name: LocalLeaderboardTableView
class CORDL_TYPE LocalLeaderboardTableView : public GlobalNamespace::LeaderboardTableView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LocalLeaderboardTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardTableView", modifiers: " const&", def_value: None }]
constexpr LocalLeaderboardTableView(LocalLeaderboardTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardTableView", modifiers: "&&", def_value: None }]
constexpr LocalLeaderboardTableView(LocalLeaderboardTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalLeaderboardTableView(void* ptr) noexcept : GlobalNamespace::LeaderboardTableView(ptr) {
}


  constexpr LocalLeaderboardTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalLeaderboardTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalLeaderboardTableView& operator=(LocalLeaderboardTableView&& o) noexcept = default;
  constexpr LocalLeaderboardTableView& operator=(LocalLeaderboardTableView const& o) noexcept = default;
                


// Methods

/// @brief Method SetScores addr 0x218c470 size 0x28c virtual false final false
 void SetScores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__ScoreData> scores, int32_t specialScorePos, int32_t maxNumberOfCells) ;

// Ctor Parameters []
explicit LocalLeaderboardTableView() ;

/// @brief Method .ctor addr 0x218c6fc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LocalLeaderboardTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardTableView, "", "LocalLeaderboardTableView");
