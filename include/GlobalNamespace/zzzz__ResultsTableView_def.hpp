#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class ResultsTableCell;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace HMUI {
class ____HMUI__TableView__IDataSource;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace HMUI {
class TableCell;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsTableView;
}
// Type: ::ResultsTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5899))
// CS Name: ResultsTableView
class CORDL_TYPE ResultsTableView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr operator  ::HMUI::____HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ResultsTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsTableView", modifiers: " const&", def_value: None }]
constexpr ResultsTableView(ResultsTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultsTableView", modifiers: "&&", def_value: None }]
constexpr ResultsTableView(ResultsTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResultsTableView(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ResultsTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResultsTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResultsTableView& operator=(ResultsTableView&& o) noexcept = default;
  constexpr ResultsTableView& operator=(ResultsTableView const& o) noexcept = default;
                


// Fields

/// @brief Field kCellIdentifier offset 0
static constexpr ::ConstString  kCellIdentifier{u"Cell"};

 ::HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(::HMUI::TableView value) ;

constexpr ::HMUI::TableView __get__tableView() const;

 ::GlobalNamespace::ResultsTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(::GlobalNamespace::ResultsTableCell value) ;

constexpr ::GlobalNamespace::ResultsTableCell __get__cellPrefab() const;

 float_t __declspec(property(get=__get__rowHeight, put=__set__rowHeight))  _rowHeight;

constexpr void __set__rowHeight(float_t value) ;

constexpr float_t __get__rowHeight() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __declspec(property(get=__get__dataList, put=__set__dataList))  _dataList;

constexpr void __set__dataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __get__dataList() const;


// Methods

/// @brief Method CellSize addr 0x218f184 size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x218f18c size 0xa0 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x218f22c size 0x1d0 virtual true final true
 ::HMUI::TableCell CellForIdx(::HMUI::TableView tableView, int32_t idx) ;

/// @brief Method SetData addr 0x218f3fc size 0x2c virtual false final false
 void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> dataList) ;

// Ctor Parameters []
explicit ResultsTableView() ;

/// @brief Method .ctor addr 0x218f428 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ResultsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsTableView, "", "ResultsTableView");
