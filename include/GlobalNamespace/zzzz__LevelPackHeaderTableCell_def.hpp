#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
// Type: ::LevelPackHeaderTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5527))
// CS Name: LevelPackHeaderTableCell
class CORDL_TYPE LevelPackHeaderTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~LevelPackHeaderTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelPackHeaderTableCell", modifiers: " const&", def_value: None }]
constexpr LevelPackHeaderTableCell(LevelPackHeaderTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelPackHeaderTableCell", modifiers: "&&", def_value: None }]
constexpr LevelPackHeaderTableCell(LevelPackHeaderTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelPackHeaderTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr LevelPackHeaderTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelPackHeaderTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelPackHeaderTableCell& operator=(LevelPackHeaderTableCell&& o) noexcept = default;
  constexpr LevelPackHeaderTableCell& operator=(LevelPackHeaderTableCell const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__nameText() const;

 UnityEngine::UI::Image __declspec(property(get=__get__backgroundImage, put=__set__backgroundImage))  _backgroundImage;

constexpr void __set__backgroundImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__backgroundImage() const;

 UnityEngine::Color __declspec(property(get=__get__highlightBackgroundColor, put=__set__highlightBackgroundColor))  _highlightBackgroundColor;

constexpr void __set__highlightBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__highlightBackgroundColor() const;

 UnityEngine::Color __declspec(property(get=__get__selectedBackgroundColor, put=__set__selectedBackgroundColor))  _selectedBackgroundColor;

constexpr void __set__selectedBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__selectedBackgroundColor() const;

 UnityEngine::Color __declspec(property(get=__get__selectedAndHighlightedBackgroundColor, put=__set__selectedAndHighlightedBackgroundColor))  _selectedAndHighlightedBackgroundColor;

constexpr void __set__selectedAndHighlightedBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__selectedAndHighlightedBackgroundColor() const;


// Methods

/// @brief Method SetData addr 0x212640c size 0x24 virtual false final false
 void SetData(::StringW headerText) ;

/// @brief Method SelectionDidChange addr 0x2126430 size 0x4 virtual true final false
 void SelectionDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x21264d0 size 0x4 virtual true final false
 void HighlightDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x2126434 size 0x9c virtual false final false
 void RefreshVisuals() ;

static GlobalNamespace::LevelPackHeaderTableCell New_ctor() ;

/// @brief Method .ctor addr 0x21264d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelPackHeaderTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackHeaderTableCell, "", "LevelPackHeaderTableCell");
