#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardTableView__ScoreData;
}
namespace GlobalNamespace {
class LeaderboardTableCell;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LeaderboardTableView__ScoreData;
}
namespace GlobalNamespace {
class LeaderboardTableView;
}
// Type: ::ScoreData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5875))
// CS Name: LeaderboardTableView::ScoreData
class CORDL_TYPE GlobalNamespace__LeaderboardTableView__ScoreData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__LeaderboardTableView__ScoreData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardTableView__ScoreData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LeaderboardTableView__ScoreData(GlobalNamespace__LeaderboardTableView__ScoreData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LeaderboardTableView__ScoreData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LeaderboardTableView__ScoreData(GlobalNamespace__LeaderboardTableView__ScoreData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LeaderboardTableView__ScoreData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LeaderboardTableView__ScoreData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardTableView__ScoreData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LeaderboardTableView__ScoreData& operator=(GlobalNamespace__LeaderboardTableView__ScoreData&& o) noexcept = default;
  constexpr GlobalNamespace__LeaderboardTableView__ScoreData& operator=(GlobalNamespace__LeaderboardTableView__ScoreData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__score_k__BackingField, put=__set__score_k__BackingField))  _score_k__BackingField;

constexpr void __set__score_k__BackingField(int32_t value) ;

constexpr int32_t __get__score_k__BackingField() const;

 ::StringW __declspec(property(get=__get__playerName_k__BackingField, put=__set__playerName_k__BackingField))  _playerName_k__BackingField;

constexpr void __set__playerName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerName_k__BackingField() const;

 int32_t __declspec(property(get=__get__rank_k__BackingField, put=__set__rank_k__BackingField))  _rank_k__BackingField;

constexpr void __set__rank_k__BackingField(int32_t value) ;

constexpr int32_t __get__rank_k__BackingField() const;

 bool __declspec(property(get=__get__fullCombo_k__BackingField, put=__set__fullCombo_k__BackingField))  _fullCombo_k__BackingField;

constexpr void __set__fullCombo_k__BackingField(bool value) ;

constexpr bool __get__fullCombo_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_score, put=set_score))  score;

 ::StringW __declspec(property(get=get_playerName, put=set_playerName))  playerName;

 int32_t __declspec(property(get=get_rank, put=set_rank))  rank;

 bool __declspec(property(get=get_fullCombo, put=set_fullCombo))  fullCombo;


// Methods

/// @brief Method get_score addr 0x2189494 size 0x8 virtual false final false
 int32_t get_score() ;

/// @brief Method set_score addr 0x218949c size 0x8 virtual false final false
 void set_score(int32_t value) ;

/// @brief Method get_playerName addr 0x21894a4 size 0x8 virtual false final false
 ::StringW get_playerName() ;

/// @brief Method set_playerName addr 0x21894ac size 0x8 virtual false final false
 void set_playerName(::StringW value) ;

/// @brief Method get_rank addr 0x21894b4 size 0x8 virtual false final false
 int32_t get_rank() ;

/// @brief Method set_rank addr 0x21894bc size 0x8 virtual false final false
 void set_rank(int32_t value) ;

/// @brief Method get_fullCombo addr 0x21894c4 size 0x8 virtual false final false
 bool get_fullCombo() ;

/// @brief Method set_fullCombo addr 0x21894cc size 0xc virtual false final false
 void set_fullCombo(bool value) ;

static GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData New_ctor(int32_t score, ::StringW playerName, int32_t rank, bool fullCombo) ;

/// @brief Method .ctor addr 0x21894d8 size 0x4c virtual false final false
 void _ctor(int32_t score, ::StringW playerName, int32_t rank, bool fullCombo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LeaderboardTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5876))
// CS Name: LeaderboardTableView
class CORDL_TYPE LeaderboardTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ScoreData = GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData;

/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LeaderboardTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableView", modifiers: " const&", def_value: None }]
constexpr LeaderboardTableView(LeaderboardTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableView", modifiers: "&&", def_value: None }]
constexpr LeaderboardTableView(LeaderboardTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LeaderboardTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardTableView& operator=(LeaderboardTableView&& o) noexcept = default;
  constexpr LeaderboardTableView& operator=(LeaderboardTableView const& o) noexcept = default;
                


// Fields

 HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(HMUI::TableView value) ;

constexpr HMUI::TableView __get__tableView() const;

 GlobalNamespace::LeaderboardTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(GlobalNamespace::LeaderboardTableCell value) ;

constexpr GlobalNamespace::LeaderboardTableCell __get__cellPrefab() const;

 float_t __declspec(property(get=__get__rowHeight, put=__set__rowHeight))  _rowHeight;

constexpr void __set__rowHeight(float_t value) ;

constexpr float_t __get__rowHeight() const;

/// @brief Field kCellIdentifier offset 0
static constexpr ::ConstString  kCellIdentifier{u"Cell"};

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData> __declspec(property(get=__get__scores, put=__set__scores))  _scores;

constexpr void __set__scores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData> __get__scores() const;

 int32_t __declspec(property(get=__get__specialScorePos, put=__set__specialScorePos))  _specialScorePos;

constexpr void __set__specialScorePos(int32_t value) ;

constexpr int32_t __get__specialScorePos() const;


// Methods

/// @brief Method CellSize addr 0x2189210 size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2189218 size 0x4c virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x2189264 size 0x1f0 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t row) ;

/// @brief Method SetScores addr 0x2189454 size 0x30 virtual false final false
 void SetScores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData> scores, int32_t specialScorePos) ;

static GlobalNamespace::LeaderboardTableView New_ctor() ;

/// @brief Method .ctor addr 0x2189484 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LeaderboardTableView__ScoreData, "", "LeaderboardTableView/ScoreData");
NEED_NO_BOX(GlobalNamespace::LeaderboardTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableView, "", "LeaderboardTableView");
