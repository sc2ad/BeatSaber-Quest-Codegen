#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class SimpleTextTableCell;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class ____HMUI__TableView__IDataSource;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace HMUI {
class SimpleTextDropdown;
}
// Type: HMUI::SimpleTextDropdown
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13707))
// CS Name: HMUI.SimpleTextDropdown
class CORDL_TYPE SimpleTextDropdown : public ::HMUI::DropdownWithTableView {
public:
// Declarations
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr operator  ::HMUI::____HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SimpleTextDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextDropdown", modifiers: " const&", def_value: None }]
constexpr SimpleTextDropdown(SimpleTextDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextDropdown", modifiers: "&&", def_value: None }]
constexpr SimpleTextDropdown(SimpleTextDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleTextDropdown(void* ptr) noexcept : ::HMUI::DropdownWithTableView(ptr) {
}


  constexpr SimpleTextDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleTextDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleTextDropdown& operator=(SimpleTextDropdown&& o) noexcept = default;
  constexpr SimpleTextDropdown& operator=(SimpleTextDropdown const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::GlobalNamespace::SimpleTextTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(::GlobalNamespace::SimpleTextTableCell value) ;

constexpr ::GlobalNamespace::SimpleTextTableCell __get__cellPrefab() const;

 float_t __declspec(property(get=__get__cellSize, put=__set__cellSize))  _cellSize;

constexpr void __set__cellSize(float_t value) ;

constexpr float_t __get__cellSize() const;

/// @brief Field kCellReuseIdentifier offset 0
static constexpr ::ConstString  kCellReuseIdentifier{u"Cell"};

 ::System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=__get__texts, put=__set__texts))  _texts;

constexpr void __set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW> __get__texts() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method LazyInit addr 0x1fd2834 size 0xb0 virtual false final false
 void LazyInit() ;

/// @brief Method OnDestroy addr 0x1fd28e4 size 0x90 virtual true final false
 void OnDestroy() ;

/// @brief Method Init addr 0x1fd2974 size 0x40 virtual false final false
 void Init(::HMUI::____HMUI__TableView__IDataSource initTableViewDataSource) ;

/// @brief Method SetTexts addr 0x1fd29b4 size 0x1a0 virtual false final false
 void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW> texts) ;

/// @brief Method SelectCellWithIdx addr 0x1fd2b54 size 0x1ec virtual true final false
 void SelectCellWithIdx(int32_t idx) ;

/// @brief Method CellSize addr 0x1fd2d40 size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x1fd2d48 size 0xac virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x1fd2df4 size 0x1bc virtual true final true
 ::HMUI::TableCell CellForIdx(::HMUI::TableView tableView, int32_t idx) ;

/// @brief Method HandleDidSelectCellWithIdx addr 0x1fd309c size 0x14c virtual false final false
 void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

// Ctor Parameters []
explicit SimpleTextDropdown() ;

/// @brief Method .ctor addr 0x1fd31e8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::SimpleTextDropdown);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SimpleTextDropdown, "HMUI", "SimpleTextDropdown");
