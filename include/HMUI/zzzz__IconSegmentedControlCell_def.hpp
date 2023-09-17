#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
class HoverHint;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class IconSegmentedControlCell;
}
// Type: HMUI::IconSegmentedControlCell
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13601))
// CS Name: HMUI.IconSegmentedControlCell
class CORDL_TYPE IconSegmentedControlCell : public ::HMUI::SegmentedControlCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~IconSegmentedControlCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: " const&", def_value: None }]
constexpr IconSegmentedControlCell(IconSegmentedControlCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: "&&", def_value: None }]
constexpr IconSegmentedControlCell(IconSegmentedControlCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IconSegmentedControlCell(void* ptr) noexcept : ::HMUI::SegmentedControlCell(ptr) {
}


  constexpr IconSegmentedControlCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IconSegmentedControlCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IconSegmentedControlCell& operator=(IconSegmentedControlCell&& o) noexcept = default;
  constexpr IconSegmentedControlCell& operator=(IconSegmentedControlCell const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Image __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__icon() const;

 ::HMUI::HoverHint __declspec(property(get=__get__hoverHint, put=__set__hoverHint))  _hoverHint;

constexpr void __set__hoverHint(::HMUI::HoverHint value) ;

constexpr ::HMUI::HoverHint __get__hoverHint() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__backgroundGameObject, put=__set__backgroundGameObject))  _backgroundGameObject;

constexpr void __set__backgroundGameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__backgroundGameObject() const;


// Properties

 ::UnityEngine::Sprite __declspec(property(get=get_sprite, put=set_sprite))  sprite;

 ::StringW __declspec(property(put=set_hintText))  hintText;

 float_t __declspec(property(put=set_iconSize))  iconSize;

 bool __declspec(property(put=set_hideBackgroundImage))  hideBackgroundImage;


// Methods

/// @brief Method set_sprite addr 0x1fac5e0 size 0x1c virtual false final false
 void set_sprite(::UnityEngine::Sprite value) ;

/// @brief Method get_sprite addr 0x1fac858 size 0x1c virtual false final false
 ::UnityEngine::Sprite get_sprite() ;

/// @brief Method set_hintText addr 0x1fac5fc size 0x1c virtual false final false
 void set_hintText(::StringW value) ;

/// @brief Method set_iconSize addr 0x1fac6b4 size 0x3c virtual false final false
 void set_iconSize(float_t value) ;

/// @brief Method set_hideBackgroundImage addr 0x1fac618 size 0x9c virtual false final false
 void set_hideBackgroundImage(bool value) ;

// Ctor Parameters []
explicit IconSegmentedControlCell() ;

/// @brief Method .ctor addr 0x1fac874 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::IconSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControlCell, "HMUI", "IconSegmentedControlCell");
