#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class LevelStatsView;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LeaderboardTableView__ScoreData;
}
namespace GlobalNamespace {
class LeaderboardTableView;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformLeaderboardViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31;
}
// Type: ::<RefreshDelayed>d__31
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5823))
// CS Name: PlatformLeaderboardViewController::<RefreshDelayed>d__31
class CORDL_TYPE ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31(____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31(____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31& operator=(____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31&& o) noexcept = default;
  constexpr ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31& operator=(____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::PlatformLeaderboardViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::PlatformLeaderboardViewController value) ;

constexpr ::GlobalNamespace::PlatformLeaderboardViewController __get___4__this() const;

 bool __declspec(property(get=__get_clear, put=__set_clear))  clear;

constexpr void __set_clear(bool value) ;

constexpr bool __get_clear() const;

 bool __declspec(property(get=__get_showLoadingIndicator, put=__set_showLoadingIndicator))  showLoadingIndicator;

constexpr void __set_showLoadingIndicator(bool value) ;

constexpr bool __get_showLoadingIndicator() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31(int32_t __1__state) ;

/// @brief Method .ctor addr 0x217ce68 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x217cf10 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x217cf14 size 0x258 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x217d16c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x217d174 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x217d1b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlatformLeaderboardViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5745))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5824))
// CS Name: PlatformLeaderboardViewController
class CORDL_TYPE PlatformLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
public:
// Declarations
using _RefreshDelayed_d__31 = ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~PlatformLeaderboardViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController", modifiers: " const&", def_value: None }]
constexpr PlatformLeaderboardViewController(PlatformLeaderboardViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController", modifiers: "&&", def_value: None }]
constexpr PlatformLeaderboardViewController(PlatformLeaderboardViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformLeaderboardViewController(void* ptr) noexcept : ::GlobalNamespace::LeaderboardViewController(ptr) {
}


  constexpr PlatformLeaderboardViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformLeaderboardViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformLeaderboardViewController& operator=(PlatformLeaderboardViewController&& o) noexcept = default;
  constexpr PlatformLeaderboardViewController& operator=(PlatformLeaderboardViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LeaderboardTableView __declspec(property(get=__get__leaderboardTableView, put=__set__leaderboardTableView))  _leaderboardTableView;

constexpr void __set__leaderboardTableView(::GlobalNamespace::LeaderboardTableView value) ;

constexpr ::GlobalNamespace::LeaderboardTableView __get__leaderboardTableView() const;

 ::HMUI::IconSegmentedControl __declspec(property(get=__get__scopeSegmentedControl, put=__set__scopeSegmentedControl))  _scopeSegmentedControl;

constexpr void __set__scopeSegmentedControl(::HMUI::IconSegmentedControl value) ;

constexpr ::HMUI::IconSegmentedControl __get__scopeSegmentedControl() const;

 ::GlobalNamespace::LoadingControl __declspec(property(get=__get__loadingControl, put=__set__loadingControl))  _loadingControl;

constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl value) ;

constexpr ::GlobalNamespace::LoadingControl __get__loadingControl() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__globalLeaderboardIcon, put=__set__globalLeaderboardIcon))  _globalLeaderboardIcon;

constexpr void __set__globalLeaderboardIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__globalLeaderboardIcon() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__aroundPlayerLeaderboardIcon, put=__set__aroundPlayerLeaderboardIcon))  _aroundPlayerLeaderboardIcon;

constexpr void __set__aroundPlayerLeaderboardIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__aroundPlayerLeaderboardIcon() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__friendsLeaderboardIcon, put=__set__friendsLeaderboardIcon))  _friendsLeaderboardIcon;

constexpr void __set__friendsLeaderboardIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__friendsLeaderboardIcon() const;

 ::GlobalNamespace::LevelStatsView __declspec(property(get=__get__levelStatsView, put=__set__levelStatsView))  _levelStatsView;

constexpr void __set__levelStatsView(::GlobalNamespace::LevelStatsView value) ;

constexpr ::GlobalNamespace::LevelStatsView __get__levelStatsView() const;

 ::GlobalNamespace::PlatformLeaderboardsModel __declspec(property(get=__get__leaderboardsModel, put=__set__leaderboardsModel))  _leaderboardsModel;

constexpr void __set__leaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel value) ;

constexpr ::GlobalNamespace::PlatformLeaderboardsModel __get__leaderboardsModel() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

static ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope __declspec(property(get=__get__scoresScope, put=__set__scoresScope))  _scoresScope;

static void __set__scoresScope(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope value) ;

static ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope __get__scoresScope() ;

 ::GlobalNamespace::HMAsyncRequest __declspec(property(get=__get__getScoresAsyncRequest, put=__set__getScoresAsyncRequest))  _getScoresAsyncRequest;

constexpr void __set__getScoresAsyncRequest(::GlobalNamespace::HMAsyncRequest value) ;

constexpr ::GlobalNamespace::HMAsyncRequest __get__getScoresAsyncRequest() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__playerScorePos, put=__set__playerScorePos))  _playerScorePos;

constexpr void __set__playerScorePos(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__playerScorePos() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LeaderboardTableView__ScoreData> __declspec(property(get=__get__scores, put=__set__scores))  _scores;

constexpr void __set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LeaderboardTableView__ScoreData> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__LeaderboardTableView__ScoreData> __get__scores() const;

 ::GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap))  _difficultyBeatmap;

constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap() const;

 bool __declspec(property(get=__get__refreshIsNeeded, put=__set__refreshIsNeeded))  _refreshIsNeeded;

constexpr void __set__refreshIsNeeded(bool value) ;

constexpr bool __get__refreshIsNeeded() const;

 bool __declspec(property(get=__get__hasScoresData, put=__set__hasScoresData))  _hasScoresData;

constexpr void __set__hasScoresData(bool value) ;

constexpr bool __get__hasScoresData() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope> __declspec(property(get=__get__scoreScopes, put=__set__scoreScopes))  _scoreScopes;

constexpr void __set__scoreScopes(::ArrayW<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope> __get__scoreScopes() const;


// Properties

 ::GlobalNamespace::PlatformLeaderboardsModel __declspec(property(get=get_leaderboardsModel))  leaderboardsModel;


// Methods

/// @brief Method get_leaderboardsModel addr 0x217bed4 size 0x8 virtual false final false
 ::GlobalNamespace::PlatformLeaderboardsModel get_leaderboardsModel() ;

/// @brief Method SetData addr 0x217bedc size 0x58 virtual true final false
 void SetData(::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method RefreshLevelStats addr 0x217c108 size 0x30 virtual true final false
 void RefreshLevelStats() ;

/// @brief Method DidActivate addr 0x217c138 size 0x53c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x217c708 size 0x120 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x217c828 size 0x1cc virtual true final false
 void OnDestroy() ;

/// @brief Method ScoreScopeToScoreScopeIndex addr 0x217c674 size 0x94 virtual false final false
 int32_t ScoreScopeToScoreScopeIndex(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scoresScope) ;

/// @brief Method ScopeScopeIndexToScoreScope addr 0x217c9f4 size 0x3c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope ScopeScopeIndexToScoreScope(int32_t scoreScopeIndex) ;

/// @brief Method HandleDidPressRefreshButton addr 0x217ca30 size 0xc virtual false final false
 void HandleDidPressRefreshButton() ;

/// @brief Method HandleLeaderboardsResultsReturned addr 0x217ca3c size 0x26c virtual false final false
 void HandleLeaderboardsResultsReturned(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresResult result, ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__LeaderboardScore> scores, int32_t playerScoreIndex) ;

/// @brief Method HandleScopeSegmentedControlDidSelectCell addr 0x217cca8 size 0x70 virtual false final false
 void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl segmentedControl, int32_t cellNumber) ;

/// @brief Method HandlePlatformLeaderboardsModelAllScoresDidUpload addr 0x217cd18 size 0xc virtual false final false
 void HandlePlatformLeaderboardsModelAllScoresDidUpload() ;

/// @brief Method Refresh addr 0x217bf34 size 0x1d4 virtual false final false
 void Refresh(bool showLoadingIndicator, bool clear) ;

/// @brief Method RefreshDelayed addr 0x217cde0 size 0x88 virtual false final false
 ::System::Collections::IEnumerator RefreshDelayed(bool showLoadingIndicator, bool clear) ;

/// @brief Method ClearContent addr 0x217cd24 size 0xbc virtual false final false
 void ClearContent() ;

// Ctor Parameters []
explicit PlatformLeaderboardViewController() ;

/// @brief Method .ctor addr 0x217ce90 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardViewController, "", "PlatformLeaderboardViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardViewController___RefreshDelayed_d__31, "", "PlatformLeaderboardViewController/<RefreshDelayed>d__31");
