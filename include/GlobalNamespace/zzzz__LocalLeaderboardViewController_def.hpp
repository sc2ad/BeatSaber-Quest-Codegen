#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class NoTransitionsButton;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class LocalLeaderboardTableView;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
struct GlobalNamespace__LocalLeaderboardsModel__LeaderboardType;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardViewController;
}
// Type: ::LocalLeaderboardViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5745))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5783))
// CS Name: LocalLeaderboardViewController
class CORDL_TYPE LocalLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~LocalLeaderboardViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardViewController", modifiers: " const&", def_value: None }]
constexpr LocalLeaderboardViewController(LocalLeaderboardViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardViewController", modifiers: "&&", def_value: None }]
constexpr LocalLeaderboardViewController(LocalLeaderboardViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalLeaderboardViewController(void* ptr) noexcept : GlobalNamespace::LeaderboardViewController(ptr) {
}


  constexpr LocalLeaderboardViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalLeaderboardViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalLeaderboardViewController& operator=(LocalLeaderboardViewController&& o) noexcept = default;
  constexpr LocalLeaderboardViewController& operator=(LocalLeaderboardViewController const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__maxNumberOfCells, put=__set__maxNumberOfCells))  _maxNumberOfCells;

constexpr void __set__maxNumberOfCells(int32_t value) ;

constexpr int32_t __get__maxNumberOfCells() const;

 GlobalNamespace::LocalLeaderboardsModel __declspec(property(get=__get__localLeaderboardsModel, put=__set__localLeaderboardsModel))  _localLeaderboardsModel;

constexpr void __set__localLeaderboardsModel(GlobalNamespace::LocalLeaderboardsModel value) ;

constexpr GlobalNamespace::LocalLeaderboardsModel __get__localLeaderboardsModel() const;

 GlobalNamespace::LocalLeaderboardTableView __declspec(property(get=__get__leaderboardTableView, put=__set__leaderboardTableView))  _leaderboardTableView;

constexpr void __set__leaderboardTableView(GlobalNamespace::LocalLeaderboardTableView value) ;

constexpr GlobalNamespace::LocalLeaderboardTableView __get__leaderboardTableView() const;

 UnityEngine::GameObject __declspec(property(get=__get__clearLeaderboardsWrapper, put=__set__clearLeaderboardsWrapper))  _clearLeaderboardsWrapper;

constexpr void __set__clearLeaderboardsWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__clearLeaderboardsWrapper() const;

 HMUI::NoTransitionsButton __declspec(property(get=__get__clearLeaderboardsButton, put=__set__clearLeaderboardsButton))  _clearLeaderboardsButton;

constexpr void __set__clearLeaderboardsButton(HMUI::NoTransitionsButton value) ;

constexpr HMUI::NoTransitionsButton __get__clearLeaderboardsButton() const;

 HMUI::IconSegmentedControl __declspec(property(get=__get__scopeSegmentedControl, put=__set__scopeSegmentedControl))  _scopeSegmentedControl;

constexpr void __set__scopeSegmentedControl(HMUI::IconSegmentedControl value) ;

constexpr HMUI::IconSegmentedControl __get__scopeSegmentedControl() const;

 UnityEngine::Sprite __declspec(property(get=__get__allTimeLeaderboardIcon, put=__set__allTimeLeaderboardIcon))  _allTimeLeaderboardIcon;

constexpr void __set__allTimeLeaderboardIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__allTimeLeaderboardIcon() const;

 UnityEngine::Sprite __declspec(property(get=__get__todayLeaderboardIcon, put=__set__todayLeaderboardIcon))  _todayLeaderboardIcon;

constexpr void __set__todayLeaderboardIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__todayLeaderboardIcon() const;

 UnityEngine::Sprite __declspec(property(get=__get__clearLeaderboardIcon, put=__set__clearLeaderboardIcon))  _clearLeaderboardIcon;

constexpr void __set__clearLeaderboardIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__clearLeaderboardIcon() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType __declspec(property(get=__get__leaderboardType, put=__set__leaderboardType))  _leaderboardType;

static void __set__leaderboardType(GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType value) ;

static GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType __get__leaderboardType() ;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap))  _difficultyBeatmap;

constexpr void __set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap() const;

 bool __declspec(property(get=__get__refreshIsNeeded, put=__set__refreshIsNeeded))  _refreshIsNeeded;

constexpr void __set__refreshIsNeeded(bool value) ;

constexpr bool __get__refreshIsNeeded() const;

 bool __declspec(property(get=__get__enableClear, put=__set__enableClear))  _enableClear;

constexpr void __set__enableClear(bool value) ;

constexpr bool __get__enableClear() const;


// Properties

 GlobalNamespace::LocalLeaderboardsModel __declspec(property(get=get_leaderboardsModel))  leaderboardsModel;


// Methods

/// @brief Method get_leaderboardsModel addr 0x2170f50 size 0x8 virtual false final false
 GlobalNamespace::LocalLeaderboardsModel get_leaderboardsModel() ;

/// @brief Method OnEnable addr 0x2170f58 size 0x24 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2170f7c size 0x24 virtual false final false
 void OnDisable() ;

/// @brief Method Setup addr 0x2170fa0 size 0xc virtual false final false
 void Setup(bool enableClear) ;

/// @brief Method SetData addr 0x2170fac size 0x2c virtual true final false
 void SetData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method DidActivate addr 0x217103c size 0x1e0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2171620 size 0x10c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x217172c size 0x98 virtual true final false
 void OnDestroy() ;

/// @brief Method RefreshScopeSegmentedControl addr 0x217121c size 0x2d4 virtual false final false
 void RefreshScopeSegmentedControl() ;

/// @brief Method HandleScopeSegmentedControlDidSelectCell addr 0x21714f0 size 0x130 virtual false final false
 void HandleScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl segmentedControl, int32_t cellNumber) ;

/// @brief Method ClearLeaderboards addr 0x21717c4 size 0x60 virtual false final false
 void ClearLeaderboards() ;

/// @brief Method SetContent addr 0x2171824 size 0x78 virtual false final false
 void SetContent(::StringW leaderboardID, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType) ;

/// @brief Method HandleNewScoreWasAddedToLeaderboard addr 0x217189c size 0xa8 virtual false final false
 void HandleNewScoreWasAddedToLeaderboard(::StringW leaderboardID, GlobalNamespace::GlobalNamespace__LocalLeaderboardsModel__LeaderboardType leaderboardType) ;

/// @brief Method Refresh addr 0x2170fd8 size 0x64 virtual false final false
 void Refresh() ;

static GlobalNamespace::LocalLeaderboardViewController New_ctor() ;

/// @brief Method .ctor addr 0x2171944 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__21_0 addr 0x2171954 size 0x60 virtual false final false
 void _DidActivate_b__21_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LocalLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalLeaderboardViewController, "", "LocalLeaderboardViewController");
