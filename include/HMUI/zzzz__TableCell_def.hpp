#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HMUI {
class ITableCellOwner;
}
// Forward declare root types
namespace HMUI {
class TableCell;
}
// Type: HMUI::TableCell
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13715))
// CS Name: HMUI.TableCell
class CORDL_TYPE TableCell : public ::HMUI::SelectableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "TableCell", modifiers: " const&", def_value: None }]
constexpr TableCell(TableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TableCell", modifiers: "&&", def_value: None }]
constexpr TableCell(TableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TableCell(void* ptr) noexcept : ::HMUI::SelectableCell(ptr) {
}


  constexpr TableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TableCell& operator=(TableCell&& o) noexcept = default;
  constexpr TableCell& operator=(TableCell const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__idx_k__BackingField, put=__set__idx_k__BackingField))  _idx_k__BackingField;

constexpr void __set__idx_k__BackingField(int32_t value) ;

constexpr int32_t __get__idx_k__BackingField() const;

 ::StringW __declspec(property(get=__get__reuseIdentifier, put=__set__reuseIdentifier))  _reuseIdentifier;

constexpr void __set__reuseIdentifier(::StringW value) ;

constexpr ::StringW __get__reuseIdentifier() const;

 ::HMUI::ITableCellOwner __declspec(property(get=__get__tableCellOwner, put=__set__tableCellOwner))  _tableCellOwner;

constexpr void __set__tableCellOwner(::HMUI::ITableCellOwner value) ;

constexpr ::HMUI::ITableCellOwner __get__tableCellOwner() const;


// Properties

 ::StringW __declspec(property(get=get_reuseIdentifier, put=set_reuseIdentifier))  reuseIdentifier;

 int32_t __declspec(property(get=get_idx, put=set_idx))  idx;

 ::HMUI::ITableCellOwner __declspec(property(get=get_tableCellOwner))  tableCellOwner;


// Methods

/// @brief Method get_reuseIdentifier addr 0x1fd4f5c size 0x8 virtual false final false
 ::StringW get_reuseIdentifier() ;

/// @brief Method set_reuseIdentifier addr 0x1fd4f64 size 0x8 virtual false final false
 void set_reuseIdentifier(::StringW value) ;

/// @brief Method get_idx addr 0x1fd4f6c size 0x8 virtual false final false
 int32_t get_idx() ;

/// @brief Method set_idx addr 0x1fd4f74 size 0x8 virtual false final false
 void set_idx(int32_t value) ;

/// @brief Method get_tableCellOwner addr 0x1fd4f7c size 0x8 virtual false final false
 ::HMUI::ITableCellOwner get_tableCellOwner() ;

/// @brief Method TableViewSetup addr 0x1fd4f84 size 0xc virtual true final false
 void TableViewSetup(::HMUI::ITableCellOwner tableCellOwner, int32_t idx) ;

/// @brief Method MoveIdx addr 0x1fd4f90 size 0x10 virtual false final false
 void MoveIdx(int32_t offset) ;

/// @brief Method InternalToggle addr 0x1fd4fa0 size 0x1f4 virtual true final false
 void InternalToggle() ;

/// @brief Method __WasPreparedForReuse addr 0x1fd5194 size 0x10 virtual false final false
 void __WasPreparedForReuse() ;

/// @brief Method WasPreparedForReuse addr 0x1fd51a4 size 0x4 virtual true final false
 void WasPreparedForReuse() ;

// Ctor Parameters []
explicit TableCell() ;

/// @brief Method .ctor addr 0x1fd51a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::TableCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableCell, "HMUI", "TableCell");
