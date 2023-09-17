#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class ColorSchemeTableCell;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace HMUI {
class ____HMUI__TableView__IDataSource;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
class ColorSchemeView;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeDropdown;
}
// Type: ::ColorSchemeDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5498))
// CS Name: ColorSchemeDropdown
class CORDL_TYPE ColorSchemeDropdown : public ::HMUI::DropdownWithTableView {
public:
// Declarations
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr operator  ::HMUI::____HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ColorSchemeDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeDropdown", modifiers: " const&", def_value: None }]
constexpr ColorSchemeDropdown(ColorSchemeDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeDropdown", modifiers: "&&", def_value: None }]
constexpr ColorSchemeDropdown(ColorSchemeDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeDropdown(void* ptr) noexcept : ::HMUI::DropdownWithTableView(ptr) {
}


  constexpr ColorSchemeDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemeDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemeDropdown& operator=(ColorSchemeDropdown&& o) noexcept = default;
  constexpr ColorSchemeDropdown& operator=(ColorSchemeDropdown const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::GlobalNamespace::ColorSchemeView __declspec(property(get=__get__colorSchemeView, put=__set__colorSchemeView))  _colorSchemeView;

constexpr void __set__colorSchemeView(::GlobalNamespace::ColorSchemeView value) ;

constexpr ::GlobalNamespace::ColorSchemeView __get__colorSchemeView() const;

 ::GlobalNamespace::ColorSchemeTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(::GlobalNamespace::ColorSchemeTableCell value) ;

constexpr ::GlobalNamespace::ColorSchemeTableCell __get__cellPrefab() const;

 ::StringW __declspec(property(get=__get__cellReuseIdentifier, put=__set__cellReuseIdentifier))  _cellReuseIdentifier;

constexpr void __set__cellReuseIdentifier(::StringW value) ;

constexpr ::StringW __get__cellReuseIdentifier() const;

 float_t __declspec(property(get=__get__cellSize, put=__set__cellSize))  _cellSize;

constexpr void __set__cellSize(float_t value) ;

constexpr float_t __get__cellSize() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme> __declspec(property(get=__get__colorSchemes, put=__set__colorSchemes))  _colorSchemes;

constexpr void __set__colorSchemes(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme> __get__colorSchemes() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method LazyInit addr 0x211dbf0 size 0xb0 virtual false final false
 void LazyInit() ;

/// @brief Method OnDestroy addr 0x211dca0 size 0x90 virtual true final false
 void OnDestroy() ;

/// @brief Method Init addr 0x211dd30 size 0x40 virtual false final false
 void Init(::HMUI::____HMUI__TableView__IDataSource initTableViewDataSource) ;

/// @brief Method SetData addr 0x211dd70 size 0x158 virtual false final false
 void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme> colorSchemes) ;

/// @brief Method CellSize addr 0x211dfbc size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x211dfc4 size 0xac virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x211e070 size 0x294 virtual true final true
 ::HMUI::TableCell CellForIdx(::HMUI::TableView tableView, int32_t idx) ;

/// @brief Method SelectCellWithIdx addr 0x211e3c0 size 0xc4 virtual true final false
 void SelectCellWithIdx(int32_t idx) ;

/// @brief Method HandleDidSelectCellWithIdx addr 0x211e484 size 0x138 virtual false final false
 void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

/// @brief Method RefreshUI addr 0x211dec8 size 0xf4 virtual false final false
 void RefreshUI(::GlobalNamespace::ColorScheme colorScheme) ;

// Ctor Parameters []
explicit ColorSchemeDropdown() ;

/// @brief Method .ctor addr 0x211e774 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeDropdown, "", "ColorSchemeDropdown");
