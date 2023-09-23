#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
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
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicTableCell;
}
// Type: ::BeatmapCharacteristicTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5509))
// CS Name: BeatmapCharacteristicTableCell
class CORDL_TYPE BeatmapCharacteristicTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~BeatmapCharacteristicTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicTableCell", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicTableCell(BeatmapCharacteristicTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicTableCell", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicTableCell(BeatmapCharacteristicTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr BeatmapCharacteristicTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicTableCell& operator=(BeatmapCharacteristicTableCell&& o) noexcept = default;
  constexpr BeatmapCharacteristicTableCell& operator=(BeatmapCharacteristicTableCell const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__nameText() const;

 UnityEngine::UI::Image __declspec(property(get=__get__iconImage, put=__set__iconImage))  _iconImage;

constexpr void __set__iconImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__iconImage() const;

 UnityEngine::UI::Image __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__bgImage() const;

 UnityEngine::UI::Image __declspec(property(get=__get__selectionImage, put=__set__selectionImage))  _selectionImage;

constexpr void __set__selectionImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__selectionImage() const;

 UnityEngine::Color __declspec(property(get=__get__bgNormalColor, put=__set__bgNormalColor))  _bgNormalColor;

constexpr void __set__bgNormalColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__bgNormalColor() const;

 UnityEngine::Color __declspec(property(get=__get__bgHighlightColor, put=__set__bgHighlightColor))  _bgHighlightColor;

constexpr void __set__bgHighlightColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__bgHighlightColor() const;


// Methods

/// @brief Method SetData addr 0x2122708 size 0x60 virtual false final false
 void SetData(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method SelectionDidChange addr 0x2122768 size 0x4 virtual true final false
 void SelectionDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x21227e8 size 0x4 virtual true final false
 void HighlightDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x212276c size 0x7c virtual false final false
 void RefreshVisuals() ;

// Ctor Parameters []
explicit BeatmapCharacteristicTableCell() ;

/// @brief Method .ctor addr 0x21227ec size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapCharacteristicTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicTableCell, "", "BeatmapCharacteristicTableCell");
