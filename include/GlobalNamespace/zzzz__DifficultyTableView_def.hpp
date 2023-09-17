#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace HMUI {
class ____HMUI__TableView__IDataSource;
}
namespace GlobalNamespace {
class DifficultyTableCell;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyTableView;
}
// Type: ::DifficultyTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5863))
// CS Name: DifficultyTableView
class CORDL_TYPE DifficultyTableView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr operator  ::HMUI::____HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DifficultyTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyTableView", modifiers: " const&", def_value: None }]
constexpr DifficultyTableView(DifficultyTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DifficultyTableView", modifiers: "&&", def_value: None }]
constexpr DifficultyTableView(DifficultyTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DifficultyTableView(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DifficultyTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DifficultyTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DifficultyTableView& operator=(DifficultyTableView&& o) noexcept = default;
  constexpr DifficultyTableView& operator=(DifficultyTableView const& o) noexcept = default;
                


// Fields

 ::HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(::HMUI::TableView value) ;

constexpr ::HMUI::TableView __get__tableView() const;

 ::GlobalNamespace::DifficultyTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(::GlobalNamespace::DifficultyTableCell value) ;

constexpr ::GlobalNamespace::DifficultyTableCell __get__cellPrefab() const;

 ::GlobalNamespace::DifficultyTableCell __declspec(property(get=__get__nonSelectableCellPrefab, put=__set__nonSelectableCellPrefab))  _nonSelectableCellPrefab;

constexpr void __set__nonSelectableCellPrefab(::GlobalNamespace::DifficultyTableCell value) ;

constexpr ::GlobalNamespace::DifficultyTableCell __get__nonSelectableCellPrefab() const;

 float_t __declspec(property(get=__get__cellHeight, put=__set__cellHeight))  _cellHeight;

constexpr void __set__cellHeight(float_t value) ;

constexpr float_t __get__cellHeight() const;

 ::System::Action_2<::GlobalNamespace::DifficultyTableView,int32_t> __declspec(property(get=__get_didSelectRow, put=__set_didSelectRow))  didSelectRow;

constexpr void __set_didSelectRow(::System::Action_2<::GlobalNamespace::DifficultyTableView,int32_t> value) ;

constexpr ::System::Action_2<::GlobalNamespace::DifficultyTableView,int32_t> __get_didSelectRow() const;

/// @brief Field kCellIdentifier offset 0
static constexpr ::ConstString  kCellIdentifier{u"Cell"};

/// @brief Field kNonSelectableCellIdentifier offset 0
static constexpr ::ConstString  kNonSelectableCellIdentifier{u"NonSelectableCell"};

 ::ArrayW<::GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get__difficultyBeatmaps, put=__set__difficultyBeatmaps))  _difficultyBeatmaps;

constexpr void __set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr ::ArrayW<::GlobalNamespace::IDifficultyBeatmap> __get__difficultyBeatmaps() const;


// Methods

/// @brief Method add_didSelectRow addr 0x2185b9c size 0xb0 virtual false final false
 void add_didSelectRow(::System::Action_2<::GlobalNamespace::DifficultyTableView,int32_t> value) ;

/// @brief Method remove_didSelectRow addr 0x2185c4c size 0xb0 virtual false final false
 void remove_didSelectRow(::System::Action_2<::GlobalNamespace::DifficultyTableView,int32_t> value) ;

/// @brief Method Init addr 0x2185cfc size 0xec virtual false final false
 void Init(::ArrayW<::GlobalNamespace::IDifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method SetDifficultyBeatmaps addr 0x2185de8 size 0x28 virtual false final false
 void SetDifficultyBeatmaps(::ArrayW<::GlobalNamespace::IDifficultyBeatmap> difficultyBeatmaps) ;

/// @brief Method CellSize addr 0x2185e10 size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2185e18 size 0x20 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x2185e38 size 0x354 virtual true final true
 ::HMUI::TableCell CellForIdx(::HMUI::TableView tableView, int32_t row) ;

/// @brief Method HandleDidSelectRowEvent addr 0x218618c size 0x54 virtual false final false
 void HandleDidSelectRowEvent(::HMUI::TableView tableView, int32_t row) ;

/// @brief Method SelectRow addr 0x21861e0 size 0x20 virtual false final false
 void SelectRow(int32_t row, bool callbackTable) ;

/// @brief Method SelectRow addr 0x2186200 size 0x84 virtual false final false
 void SelectRow(::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, bool callbackTable) ;

/// @brief Method ClearSelection addr 0x2186284 size 0x1c virtual false final false
 void ClearSelection() ;

// Ctor Parameters []
explicit DifficultyTableView() ;

/// @brief Method .ctor addr 0x21862a0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DifficultyTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyTableView, "", "DifficultyTableView");
