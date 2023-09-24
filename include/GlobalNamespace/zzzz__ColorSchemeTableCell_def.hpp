#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorSchemeView;
}
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeTableCell;
}
// Type: ::ColorSchemeTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5499))
// CS Name: ColorSchemeTableCell
class CORDL_TYPE ColorSchemeTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ColorSchemeTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeTableCell", modifiers: " const&", def_value: None }]
constexpr ColorSchemeTableCell(ColorSchemeTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeTableCell", modifiers: "&&", def_value: None }]
constexpr ColorSchemeTableCell(ColorSchemeTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr ColorSchemeTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemeTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemeTableCell& operator=(ColorSchemeTableCell&& o) noexcept = default;
  constexpr ColorSchemeTableCell& operator=(ColorSchemeTableCell const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 GlobalNamespace::ColorSchemeView __declspec(property(get=__get__colorSchemeView, put=__set__colorSchemeView))  _colorSchemeView;

constexpr void __set__colorSchemeView(GlobalNamespace::ColorSchemeView value) ;

constexpr GlobalNamespace::ColorSchemeView __get__colorSchemeView() const;

 UnityEngine::UI::Image __declspec(property(get=__get__editIcon, put=__set__editIcon))  _editIcon;

constexpr void __set__editIcon(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__editIcon() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(put=set_showEditIcon))  showEditIcon;


// Methods

/// @brief Method set_text addr 0x211e324 size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_text addr 0x211e7cc size 0x24 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_showEditIcon addr 0x211e304 size 0x20 virtual false final false
 void set_showEditIcon(bool value) ;

/// @brief Method SetColors addr 0x211e348 size 0x78 virtual false final false
 void SetColors(UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environment0Color, UnityEngine::Color environment1Color, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost, UnityEngine::Color obstacleColor) ;

static GlobalNamespace::ColorSchemeTableCell New_ctor() ;

/// @brief Method .ctor addr 0x211e7f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSchemeTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeTableCell, "", "ColorSchemeTableCell");
