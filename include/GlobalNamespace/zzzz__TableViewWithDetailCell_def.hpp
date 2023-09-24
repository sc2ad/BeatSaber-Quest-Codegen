#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include <cmath>
#include <cstdint>
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class GlobalNamespace__TableViewWithDetailCell__IDataSource;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TableViewWithDetailCell__IDataSource;
}
namespace GlobalNamespace {
class TableViewWithDetailCell;
}
// Type: ::IDataSource
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13557))
// CS Name: TableViewWithDetailCell::IDataSource
class CORDL_TYPE GlobalNamespace__TableViewWithDetailCell__IDataSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~GlobalNamespace__TableViewWithDetailCell__IDataSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TableViewWithDetailCell__IDataSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CellSize addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t NumberOfCells() ;

/// @brief Method CellForContent addr 0x0 size 0xffffffffffffffff virtual true final false
 HMUI::TableCell CellForContent(GlobalNamespace::TableViewWithDetailCell tableView, int32_t idx, bool detailOpened) ;

/// @brief Method CellForDetail addr 0x0 size 0xffffffffffffffff virtual true final false
 HMUI::TableCell CellForDetail(GlobalNamespace::TableViewWithDetailCell tableView, int32_t contentIdx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TableViewWithDetailCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13720))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13558))
// CS Name: TableViewWithDetailCell
class CORDL_TYPE TableViewWithDetailCell : public HMUI::TableView {
public:
// Declarations
using IDataSource = GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource;

/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~TableViewWithDetailCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "TableViewWithDetailCell", modifiers: " const&", def_value: None }]
constexpr TableViewWithDetailCell(TableViewWithDetailCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TableViewWithDetailCell", modifiers: "&&", def_value: None }]
constexpr TableViewWithDetailCell(TableViewWithDetailCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TableViewWithDetailCell(void* ptr) noexcept : HMUI::TableView(ptr) {
}


  constexpr TableViewWithDetailCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TableViewWithDetailCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TableViewWithDetailCell& operator=(TableViewWithDetailCell&& o) noexcept = default;
  constexpr TableViewWithDetailCell& operator=(TableViewWithDetailCell const& o) noexcept = default;
                


// Fields

 System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> __declspec(property(get=__get_didSelectContentCellEvent, put=__set_didSelectContentCellEvent))  didSelectContentCellEvent;

constexpr void __set_didSelectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> value) ;

constexpr System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> __get_didSelectContentCellEvent() const;

 System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> __declspec(property(get=__get_didDeselectContentCellEvent, put=__set_didDeselectContentCellEvent))  didDeselectContentCellEvent;

constexpr void __set_didDeselectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> value) ;

constexpr System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> __get_didDeselectContentCellEvent() const;

 GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource __declspec(property(get=__get__dataSource, put=__set__dataSource))  _dataSource;

constexpr void __set__dataSource(GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource value) ;

constexpr GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource __get__dataSource() const;

 int32_t __declspec(property(get=__get__selectedId, put=__set__selectedId))  _selectedId;

constexpr void __set__selectedId(int32_t value) ;

constexpr int32_t __get__selectedId() const;


// Properties

 GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource __declspec(property(get=get_dataSource, put=set_dataSource))  dataSource;


// Methods

/// @brief Method add_didSelectContentCellEvent addr 0x1fa38f0 size 0xb0 virtual false final false
 void add_didSelectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> value) ;

/// @brief Method remove_didSelectContentCellEvent addr 0x1fa39a0 size 0xb0 virtual false final false
 void remove_didSelectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> value) ;

/// @brief Method add_didDeselectContentCellEvent addr 0x1fa3a50 size 0xb0 virtual false final false
 void add_didDeselectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> value) ;

/// @brief Method remove_didDeselectContentCellEvent addr 0x1fa3b00 size 0xb0 virtual false final false
 void remove_didDeselectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell,int32_t> value) ;

/// @brief Method get_dataSource addr 0x1fa3bb0 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource get_dataSource() ;

/// @brief Method set_dataSource addr 0x1fa3bb8 size 0x24 virtual false final false
 void set_dataSource(GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource value) ;

/// @brief Method CellSize addr 0x1fa3bdc size 0xa0 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x1fa3c7c size 0xb4 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x1fa3d30 size 0x1e0 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t idx) ;

/// @brief Method ReloadData addr 0x1fa3f10 size 0x28 virtual true final false
 void ReloadData() ;

/// @brief Method ReloadData addr 0x1fa3f38 size 0x3c virtual false final false
 void ReloadData(int32_t currentNewIndex) ;

/// @brief Method DidSelectCellWithIdx addr 0x1fa3f74 size 0x130 virtual true final false
 void DidSelectCellWithIdx(int32_t idx) ;

static GlobalNamespace::TableViewWithDetailCell New_ctor() ;

/// @brief Method .ctor addr 0x1fa40a4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource, "", "TableViewWithDetailCell/IDataSource");
NEED_NO_BOX(GlobalNamespace::TableViewWithDetailCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TableViewWithDetailCell, "", "TableViewWithDetailCell");
