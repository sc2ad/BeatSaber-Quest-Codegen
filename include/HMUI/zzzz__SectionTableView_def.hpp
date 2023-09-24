#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HMUI {
class TableCell;
}
namespace HMUI {
struct HMUI__TableView__ScrollPositionType;
}
namespace HMUI {
struct HMUI__SectionTableView__Section;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace HMUI {
class HMUI__SectionTableView__IDataSource;
}
namespace HMUI {
class TableView;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace HMUI {
class HMUI__SectionTableView__IDataSource;
}
namespace HMUI {
class SectionTableView;
}
namespace HMUI {
struct HMUI__SectionTableView__Section;
}
// Type: ::IDataSource
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13712))
// CS Name: HMUI.SectionTableView::IDataSource
class CORDL_TYPE HMUI__SectionTableView__IDataSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~HMUI__SectionTableView__IDataSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__SectionTableView__IDataSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method RowHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t RowHeight() ;

/// @brief Method NumberOfSections addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t NumberOfSections() ;

/// @brief Method NumberOfRowsInSection addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t NumberOfRowsInSection(int32_t section) ;

/// @brief Method CellForSectionHeader addr 0x0 size 0xffffffffffffffff virtual true final false
 HMUI::TableCell CellForSectionHeader(int32_t section, bool unfolded) ;

/// @brief Method CellForRowInSection addr 0x0 size 0xffffffffffffffff virtual true final false
 HMUI::TableCell CellForRowInSection(int32_t section, int32_t row) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::Section
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13713))
// CS Name: HMUI.SectionTableView::Section
struct CORDL_TYPE HMUI__SectionTableView__Section : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "unfolded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startBaseRow", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numberOfBaseRows", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__SectionTableView__Section(bool unfolded, int32_t startBaseRow, int32_t numberOfBaseRows) noexcept;


                    constexpr HMUI__SectionTableView__Section(HMUI__SectionTableView__Section const&) = default;
                    constexpr HMUI__SectionTableView__Section(HMUI__SectionTableView__Section&&) = default;
                    constexpr HMUI__SectionTableView__Section& operator=(HMUI__SectionTableView__Section const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__SectionTableView__Section& operator=(HMUI__SectionTableView__Section&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__SectionTableView__Section(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_unfolded, put=__set_unfolded))  unfolded;

constexpr void __set_unfolded(bool value) ;

constexpr bool __get_unfolded() const;

 int32_t __declspec(property(get=__get_startBaseRow, put=__set_startBaseRow))  startBaseRow;

constexpr void __set_startBaseRow(int32_t value) ;

constexpr int32_t __get_startBaseRow() const;

 int32_t __declspec(property(get=__get_numberOfBaseRows, put=__set_numberOfBaseRows))  numberOfBaseRows;

constexpr void __set_numberOfBaseRows(int32_t value) ;

constexpr int32_t __get_numberOfBaseRows() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::SectionTableView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13720))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13714))
// CS Name: HMUI.SectionTableView
class CORDL_TYPE SectionTableView : public HMUI::TableView {
public:
// Declarations
using Section = HMUI::HMUI__SectionTableView__Section;

using IDataSource = HMUI::HMUI__SectionTableView__IDataSource;

/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~SectionTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "SectionTableView", modifiers: " const&", def_value: None }]
constexpr SectionTableView(SectionTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SectionTableView", modifiers: "&&", def_value: None }]
constexpr SectionTableView(SectionTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SectionTableView(void* ptr) noexcept : HMUI::TableView(ptr) {
}


  constexpr SectionTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SectionTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SectionTableView& operator=(SectionTableView&& o) noexcept = default;
  constexpr SectionTableView& operator=(SectionTableView const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__unfoldSectionsByDefault, put=__set__unfoldSectionsByDefault))  _unfoldSectionsByDefault;

constexpr void __set__unfoldSectionsByDefault(bool value) ;

constexpr bool __get__unfoldSectionsByDefault() const;

 System::Action_3<HMUI::SectionTableView,int32_t,int32_t> __declspec(property(get=__get_didSelectRowInSectionEvent, put=__set_didSelectRowInSectionEvent))  didSelectRowInSectionEvent;

constexpr void __set_didSelectRowInSectionEvent(System::Action_3<HMUI::SectionTableView,int32_t,int32_t> value) ;

constexpr System::Action_3<HMUI::SectionTableView,int32_t,int32_t> __get_didSelectRowInSectionEvent() const;

 System::Action_2<HMUI::SectionTableView,int32_t> __declspec(property(get=__get_didSelectHeaderEvent, put=__set_didSelectHeaderEvent))  didSelectHeaderEvent;

constexpr void __set_didSelectHeaderEvent(System::Action_2<HMUI::SectionTableView,int32_t> value) ;

constexpr System::Action_2<HMUI::SectionTableView,int32_t> __get_didSelectHeaderEvent() const;

 HMUI::HMUI__SectionTableView__IDataSource __declspec(property(get=__get__dataSource, put=__set__dataSource))  _dataSource;

constexpr void __set__dataSource(HMUI::HMUI__SectionTableView__IDataSource value) ;

constexpr HMUI::HMUI__SectionTableView__IDataSource __get__dataSource() const;

 ::ArrayW<HMUI::HMUI__SectionTableView__Section> __declspec(property(get=__get__sections, put=__set__sections))  _sections;

constexpr void __set__sections(::ArrayW<HMUI::HMUI__SectionTableView__Section> value) ;

constexpr ::ArrayW<HMUI::HMUI__SectionTableView__Section> __get__sections() const;


// Properties

 HMUI::HMUI__SectionTableView__IDataSource __declspec(property(get=get_dataSource, put=set_dataSource))  dataSource;


// Methods

/// @brief Method add_didSelectRowInSectionEvent addr 0x1fd3758 size 0xb0 virtual false final false
 void add_didSelectRowInSectionEvent(System::Action_3<HMUI::SectionTableView,int32_t,int32_t> value) ;

/// @brief Method remove_didSelectRowInSectionEvent addr 0x1fd3808 size 0xb0 virtual false final false
 void remove_didSelectRowInSectionEvent(System::Action_3<HMUI::SectionTableView,int32_t,int32_t> value) ;

/// @brief Method add_didSelectHeaderEvent addr 0x1fd38b8 size 0xb0 virtual false final false
 void add_didSelectHeaderEvent(System::Action_2<HMUI::SectionTableView,int32_t> value) ;

/// @brief Method remove_didSelectHeaderEvent addr 0x1fd3968 size 0xb0 virtual false final false
 void remove_didSelectHeaderEvent(System::Action_2<HMUI::SectionTableView,int32_t> value) ;

/// @brief Method get_dataSource addr 0x1fd3a18 size 0x8 virtual false final false
 HMUI::HMUI__SectionTableView__IDataSource get_dataSource() ;

/// @brief Method set_dataSource addr 0x1fd3a20 size 0x24 virtual false final false
 void set_dataSource(HMUI::HMUI__SectionTableView__IDataSource value) ;

/// @brief Method IsSectionUnfolded addr 0x1fd3a44 size 0x34 virtual false final false
 bool IsSectionUnfolded(int32_t section) ;

/// @brief Method CellSize addr 0x1fd3a78 size 0xa0 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x1fd3b18 size 0x48 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x1fd3b60 size 0x184 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t baseRow) ;

/// @brief Method ReloadData addr 0x1fd3dc4 size 0x8 virtual true final false
 void ReloadData() ;

/// @brief Method ReloadData addr 0x1fd3dcc size 0x210 virtual false final false
 void ReloadData(bool resetFoldState) ;

/// @brief Method DidSelectCellWithIdx addr 0x1fd4310 size 0x7c virtual true final false
 void DidSelectCellWithIdx(int32_t baseRow) ;

/// @brief Method UnfoldAllSections addr 0x1fd438c size 0x58 virtual false final false
 void UnfoldAllSections() ;

/// @brief Method FoldAll addr 0x1fd43e4 size 0x54 virtual false final false
 void FoldAll() ;

/// @brief Method UnfoldSection addr 0x1fd4438 size 0x16c virtual false final false
 void UnfoldSection(int32_t section) ;

/// @brief Method FoldSection addr 0x1fd4954 size 0xa8 virtual false final false
 void FoldSection(int32_t section) ;

/// @brief Method ScrollToRow addr 0x1fd4d68 size 0x44 virtual false final false
 void ScrollToRow(int32_t section, int32_t row, HMUI::HMUI__TableView__ScrollPositionType scrollPositionType, bool animated) ;

/// @brief Method SectionAndRowForBaseRow addr 0x1fd3ce4 size 0xe0 virtual false final false
 void SectionAndRowForBaseRow(int32_t baseRow, ByRef<int32_t> section, ByRef<int32_t> row, ByRef<bool> isSectionHeader) ;

static HMUI::SectionTableView New_ctor() ;

/// @brief Method .ctor addr 0x1fd4e88 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__SectionTableView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__SectionTableView__IDataSource, "HMUI", "SectionTableView/IDataSource");
NEED_NO_BOX(HMUI::SectionTableView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::SectionTableView, "HMUI", "SectionTableView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__SectionTableView__Section, "HMUI", "SectionTableView/Section");
