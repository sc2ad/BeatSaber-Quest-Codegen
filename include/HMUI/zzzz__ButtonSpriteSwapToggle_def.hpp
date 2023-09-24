#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ButtonSpriteSwap_def.hpp"
namespace HMUI {
struct HMUI__NoTransitionsButton__SelectionState;
}
// Forward declare root types
namespace HMUI {
class ButtonSpriteSwapToggle;
}
// Type: HMUI::ButtonSpriteSwapToggle
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13670))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13671))
// CS Name: HMUI.ButtonSpriteSwapToggle
class CORDL_TYPE ButtonSpriteSwapToggle : public HMUI::ButtonSpriteSwap {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ButtonSpriteSwapToggle() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapToggle", modifiers: " const&", def_value: None }]
constexpr ButtonSpriteSwapToggle(ButtonSpriteSwapToggle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonSpriteSwapToggle", modifiers: "&&", def_value: None }]
constexpr ButtonSpriteSwapToggle(ButtonSpriteSwapToggle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonSpriteSwapToggle(void* ptr) noexcept : HMUI::ButtonSpriteSwap(ptr) {
}


  constexpr ButtonSpriteSwapToggle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonSpriteSwapToggle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonSpriteSwapToggle& operator=(ButtonSpriteSwapToggle&& o) noexcept = default;
  constexpr ButtonSpriteSwapToggle& operator=(ButtonSpriteSwapToggle const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__resetToggleOnEnable, put=__set__resetToggleOnEnable))  _resetToggleOnEnable;

constexpr void __set__resetToggleOnEnable(bool value) ;

constexpr bool __get__resetToggleOnEnable() const;

 bool __declspec(property(get=__get__ignoreHighlight, put=__set__ignoreHighlight))  _ignoreHighlight;

constexpr void __set__ignoreHighlight(bool value) ;

constexpr bool __get__ignoreHighlight() const;

 bool __declspec(property(get=__get__isToggled, put=__set__isToggled))  _isToggled;

constexpr void __set__isToggled(bool value) ;

constexpr bool __get__isToggled() const;


// Properties

 bool __declspec(property(get=get_isToggled, put=set_isToggled))  isToggled;


// Methods

/// @brief Method get_isToggled addr 0x1fbcdf0 size 0x8 virtual false final false
 bool get_isToggled() ;

/// @brief Method set_isToggled addr 0x1fbcdf8 size 0x40 virtual false final false
 void set_isToggled(bool value) ;

/// @brief Method OnEnable addr 0x1fbce38 size 0x30 virtual true final false
 void OnEnable() ;

/// @brief Method HandleButtonSelectionStateDidChange addr 0x1fbce68 size 0x14c virtual true final false
 void HandleButtonSelectionStateDidChange(HMUI::HMUI__NoTransitionsButton__SelectionState state) ;

static HMUI::ButtonSpriteSwapToggle New_ctor() ;

/// @brief Method .ctor addr 0x1fbcfb4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ButtonSpriteSwapToggle);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonSpriteSwapToggle, "HMUI", "ButtonSpriteSwapToggle");
