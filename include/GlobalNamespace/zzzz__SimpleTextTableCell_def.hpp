#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextTableCell;
}
// Type: ::SimpleTextTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13554))
// CS Name: SimpleTextTableCell
class CORDL_TYPE SimpleTextTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SimpleTextTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: " const&", def_value: None }]
constexpr SimpleTextTableCell(SimpleTextTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: "&&", def_value: None }]
constexpr SimpleTextTableCell(SimpleTextTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleTextTableCell(void* ptr) noexcept : ::HMUI::TableCell(ptr) {
}


  constexpr SimpleTextTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleTextTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleTextTableCell& operator=(SimpleTextTableCell&& o) noexcept = default;
  constexpr SimpleTextTableCell& operator=(SimpleTextTableCell const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method set_text addr 0x1fa3754 size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_text addr 0x1fa3778 size 0x24 virtual false final false
 ::StringW get_text() ;

// Ctor Parameters []
explicit SimpleTextTableCell() ;

/// @brief Method .ctor addr 0x1fa379c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextTableCell, "", "SimpleTextTableCell");
