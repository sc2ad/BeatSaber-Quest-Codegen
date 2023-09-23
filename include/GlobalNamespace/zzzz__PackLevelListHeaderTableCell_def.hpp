#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
class PackLevelListHeaderTableCell;
}
// Type: ::PackLevelListHeaderTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5534))
// CS Name: PackLevelListHeaderTableCell
class CORDL_TYPE PackLevelListHeaderTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PackLevelListHeaderTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "PackLevelListHeaderTableCell", modifiers: " const&", def_value: None }]
constexpr PackLevelListHeaderTableCell(PackLevelListHeaderTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PackLevelListHeaderTableCell", modifiers: "&&", def_value: None }]
constexpr PackLevelListHeaderTableCell(PackLevelListHeaderTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PackLevelListHeaderTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr PackLevelListHeaderTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PackLevelListHeaderTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PackLevelListHeaderTableCell& operator=(PackLevelListHeaderTableCell&& o) noexcept = default;
  constexpr PackLevelListHeaderTableCell& operator=(PackLevelListHeaderTableCell const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__selectedHighlightElementsColor, put=__set__selectedHighlightElementsColor))  _selectedHighlightElementsColor;

constexpr void __set__selectedHighlightElementsColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__selectedHighlightElementsColor() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 UnityEngine::UI::Image __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__bgImage() const;

 UnityEngine::UI::Image __declspec(property(get=__get__highlightImage, put=__set__highlightImage))  _highlightImage;

constexpr void __set__highlightImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__highlightImage() const;

 UnityEngine::UI::Image __declspec(property(get=__get__arrowImage, put=__set__arrowImage))  _arrowImage;

constexpr void __set__arrowImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__arrowImage() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;


// Methods

/// @brief Method set_text addr 0x2126fc0 size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_text addr 0x2126fe4 size 0x24 virtual false final false
 ::StringW get_text() ;

/// @brief Method SelectionDidChange addr 0x2127008 size 0x4 virtual true final false
 void SelectionDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x2127094 size 0x4 virtual true final false
 void HighlightDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x212700c size 0x88 virtual false final false
 void RefreshVisuals() ;

// Ctor Parameters []
explicit PackLevelListHeaderTableCell() ;

/// @brief Method .ctor addr 0x2127098 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PackLevelListHeaderTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PackLevelListHeaderTableCell, "", "PackLevelListHeaderTableCell");
