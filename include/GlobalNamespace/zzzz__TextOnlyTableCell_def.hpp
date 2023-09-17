#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
struct ____HMUI__SelectableCell__TransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class TextOnlyTableCell;
}
// Type: ::TextOnlyTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5542))
// CS Name: TextOnlyTableCell
class CORDL_TYPE TextOnlyTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TextOnlyTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextOnlyTableCell", modifiers: " const&", def_value: None }]
constexpr TextOnlyTableCell(TextOnlyTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextOnlyTableCell", modifiers: "&&", def_value: None }]
constexpr TextOnlyTableCell(TextOnlyTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextOnlyTableCell(void* ptr) noexcept : ::HMUI::TableCell(ptr) {
}


  constexpr TextOnlyTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextOnlyTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextOnlyTableCell& operator=(TextOnlyTableCell&& o) noexcept = default;
  constexpr TextOnlyTableCell& operator=(TextOnlyTableCell const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Color __declspec(property(get=__get__selectedHighlightColor, put=__set__selectedHighlightColor))  _selectedHighlightColor;

constexpr void __set__selectedHighlightColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__selectedHighlightColor() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::HMUI::ImageView __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(::HMUI::ImageView value) ;

constexpr ::HMUI::ImageView __get__bgImage() const;

 ::HMUI::ImageView __declspec(property(get=__get__highlightImage, put=__set__highlightImage))  _highlightImage;

constexpr void __set__highlightImage(::HMUI::ImageView value) ;

constexpr ::HMUI::ImageView __get__highlightImage() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method get_text addr 0x2127a38 size 0x24 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2127a5c size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method SelectionDidChange addr 0x2127a80 size 0x4 virtual true final false
 void SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x2127b50 size 0x4 virtual true final false
 void HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x2127a84 size 0xcc virtual false final false
 void RefreshVisuals() ;

// Ctor Parameters []
explicit TextOnlyTableCell() ;

/// @brief Method .ctor addr 0x2127b54 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TextOnlyTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextOnlyTableCell, "", "TextOnlyTableCell");
