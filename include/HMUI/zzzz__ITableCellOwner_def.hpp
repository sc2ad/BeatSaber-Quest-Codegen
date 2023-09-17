#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace HMUI {
struct TableViewSelectionType;
}
// Forward declare root types
namespace HMUI {
class ITableCellOwner;
}
// Type: HMUI::ITableCellOwner
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13711))
// CS Name: HMUI.ITableCellOwner
class CORDL_TYPE ITableCellOwner : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITableCellOwner() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITableCellOwner(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::HMUI::TableViewSelectionType __declspec(property(get=get_selectionType))  selectionType;

 bool __declspec(property(get=get_canSelectSelectedCell))  canSelectSelectedCell;

 int32_t __declspec(property(get=get_numberOfCells))  numberOfCells;


// Methods

/// @brief Method get_selectionType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::HMUI::TableViewSelectionType get_selectionType() ;

/// @brief Method get_canSelectSelectedCell addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canSelectSelectedCell() ;

/// @brief Method get_numberOfCells addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_numberOfCells() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::ITableCellOwner);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ITableCellOwner, "HMUI", "ITableCellOwner");
