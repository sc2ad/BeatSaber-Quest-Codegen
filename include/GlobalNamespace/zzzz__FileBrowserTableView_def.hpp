#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class FileBrowserTableCell;
}
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserTableView;
}
// Type: ::FileBrowserTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5585))
// CS Name: FileBrowserTableView
class CORDL_TYPE FileBrowserTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FileBrowserTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableView", modifiers: " const&", def_value: None }]
constexpr FileBrowserTableView(FileBrowserTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableView", modifiers: "&&", def_value: None }]
constexpr FileBrowserTableView(FileBrowserTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileBrowserTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FileBrowserTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileBrowserTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileBrowserTableView& operator=(FileBrowserTableView&& o) noexcept = default;
  constexpr FileBrowserTableView& operator=(FileBrowserTableView const& o) noexcept = default;
                


// Fields

 HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(HMUI::TableView value) ;

constexpr HMUI::TableView __get__tableView() const;

 GlobalNamespace::FileBrowserTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(GlobalNamespace::FileBrowserTableCell value) ;

constexpr GlobalNamespace::FileBrowserTableCell __get__cellPrefab() const;

 float_t __declspec(property(get=__get__cellHeight, put=__set__cellHeight))  _cellHeight;

constexpr void __set__cellHeight(float_t value) ;

constexpr float_t __get__cellHeight() const;

 System::Action_2<GlobalNamespace::FileBrowserTableView,GlobalNamespace::FileBrowserItem> __declspec(property(get=__get_didSelectRow, put=__set_didSelectRow))  didSelectRow;

constexpr void __set_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView,GlobalNamespace::FileBrowserItem> value) ;

constexpr System::Action_2<GlobalNamespace::FileBrowserTableView,GlobalNamespace::FileBrowserItem> __get_didSelectRow() const;

/// @brief Field kCellIdentifier offset 0
static constexpr ::ConstString  kCellIdentifier{u"Cell"};

 ::ArrayW<GlobalNamespace::FileBrowserItem> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::ArrayW<GlobalNamespace::FileBrowserItem> value) ;

constexpr ::ArrayW<GlobalNamespace::FileBrowserItem> __get__items() const;


// Methods

/// @brief Method add_didSelectRow addr 0x2130730 size 0xb0 virtual false final false
 void add_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView,GlobalNamespace::FileBrowserItem> value) ;

/// @brief Method remove_didSelectRow addr 0x21307e0 size 0xb0 virtual false final false
 void remove_didSelectRow(System::Action_2<GlobalNamespace::FileBrowserTableView,GlobalNamespace::FileBrowserItem> value) ;

/// @brief Method Init addr 0x2130890 size 0x108 virtual false final false
 void Init(::ArrayW<GlobalNamespace::FileBrowserItem> items) ;

/// @brief Method SetItems addr 0x2130998 size 0x44 virtual false final false
 void SetItems(::ArrayW<GlobalNamespace::FileBrowserItem> items) ;

/// @brief Method SelectAndScrollRowToItemWithPath addr 0x21309dc size 0x94 virtual false final false
 bool SelectAndScrollRowToItemWithPath(::StringW folderPath) ;

/// @brief Method CellSize addr 0x2130abc size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2130ac4 size 0x18 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x2130adc size 0x178 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t row) ;

/// @brief Method HandleDidSelectRowEvent addr 0x2130c54 size 0x50 virtual false final false
 void HandleDidSelectRowEvent(HMUI::TableView tableView, int32_t row) ;

/// @brief Method SelectAndScrollRow addr 0x2130a70 size 0x4c virtual false final false
 void SelectAndScrollRow(int32_t row) ;

/// @brief Method ClearSelection addr 0x2130ca4 size 0x5c virtual false final false
 void ClearSelection(bool animated, bool scrollToRow0) ;

static GlobalNamespace::FileBrowserTableView New_ctor() ;

/// @brief Method .ctor addr 0x2130d00 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FileBrowserTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserTableView, "", "FileBrowserTableView");
