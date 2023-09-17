#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
struct ____HMUI__SelectableCell__TransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserTableCell;
}
// Type: ::FileBrowserTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5584))
// CS Name: FileBrowserTableCell
class CORDL_TYPE FileBrowserTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~FileBrowserTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableCell", modifiers: " const&", def_value: None }]
constexpr FileBrowserTableCell(FileBrowserTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableCell", modifiers: "&&", def_value: None }]
constexpr FileBrowserTableCell(FileBrowserTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileBrowserTableCell(void* ptr) noexcept : ::HMUI::TableCell(ptr) {
}


  constexpr FileBrowserTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileBrowserTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileBrowserTableCell& operator=(FileBrowserTableCell&& o) noexcept = default;
  constexpr FileBrowserTableCell& operator=(FileBrowserTableCell const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__text() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__bgImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__highlightImage, put=__set__highlightImage))  _highlightImage;

constexpr void __set__highlightImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__highlightImage() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method set_text addr 0x21305fc size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_text addr 0x2130620 size 0x24 virtual false final false
 ::StringW get_text() ;

/// @brief Method SelectionDidChange addr 0x2130644 size 0xa4 virtual true final false
 void SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x21306e8 size 0x40 virtual true final false
 void HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

// Ctor Parameters []
explicit FileBrowserTableCell() ;

/// @brief Method .ctor addr 0x2130728 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserTableCell, "", "FileBrowserTableCell");
