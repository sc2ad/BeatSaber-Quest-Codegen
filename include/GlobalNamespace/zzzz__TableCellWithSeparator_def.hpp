#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class ITableCellOwner;
}
// Forward declare root types
namespace GlobalNamespace {
class TableCellWithSeparator;
}
// Type: ::TableCellWithSeparator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13556))
// CS Name: TableCellWithSeparator
class CORDL_TYPE TableCellWithSeparator : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TableCellWithSeparator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TableCellWithSeparator", modifiers: " const&", def_value: None }]
constexpr TableCellWithSeparator(TableCellWithSeparator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TableCellWithSeparator", modifiers: "&&", def_value: None }]
constexpr TableCellWithSeparator(TableCellWithSeparator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TableCellWithSeparator(void* ptr) noexcept : ::HMUI::TableCell(ptr) {
}


  constexpr TableCellWithSeparator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TableCellWithSeparator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TableCellWithSeparator& operator=(TableCellWithSeparator&& o) noexcept = default;
  constexpr TableCellWithSeparator& operator=(TableCellWithSeparator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__separator, put=__set__separator))  _separator;

constexpr void __set__separator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__separator() const;


// Methods

/// @brief Method TableViewSetup addr 0x1fa3804 size 0xe4 virtual true final false
 void TableViewSetup(::HMUI::ITableCellOwner tableCellOwner, int32_t idx) ;

// Ctor Parameters []
explicit TableCellWithSeparator() ;

/// @brief Method .ctor addr 0x1fa38e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TableCellWithSeparator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TableCellWithSeparator, "", "TableCellWithSeparator");
