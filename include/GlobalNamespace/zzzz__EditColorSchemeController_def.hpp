#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class PreviousColorPanelController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace GlobalNamespace {
class RGBPanelController;
}
namespace GlobalNamespace {
class ColorSchemeColorsToggleGroup;
}
namespace GlobalNamespace {
class HSVPanelController;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class EditColorSchemeController;
}
// Type: ::EditColorSchemeController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5503))
// CS Name: EditColorSchemeController
class CORDL_TYPE EditColorSchemeController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~EditColorSchemeController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditColorSchemeController", modifiers: " const&", def_value: None }]
constexpr EditColorSchemeController(EditColorSchemeController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditColorSchemeController", modifiers: "&&", def_value: None }]
constexpr EditColorSchemeController(EditColorSchemeController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditColorSchemeController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EditColorSchemeController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditColorSchemeController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditColorSchemeController& operator=(EditColorSchemeController&& o) noexcept = default;
  constexpr EditColorSchemeController& operator=(EditColorSchemeController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorSchemeColorsToggleGroup __declspec(property(get=__get__colorSchemeColorsToggleGroup, put=__set__colorSchemeColorsToggleGroup))  _colorSchemeColorsToggleGroup;

constexpr void __set__colorSchemeColorsToggleGroup(::GlobalNamespace::ColorSchemeColorsToggleGroup value) ;

constexpr ::GlobalNamespace::ColorSchemeColorsToggleGroup __get__colorSchemeColorsToggleGroup() const;

 ::GlobalNamespace::RGBPanelController __declspec(property(get=__get__rgbPanelController, put=__set__rgbPanelController))  _rgbPanelController;

constexpr void __set__rgbPanelController(::GlobalNamespace::RGBPanelController value) ;

constexpr ::GlobalNamespace::RGBPanelController __get__rgbPanelController() const;

 ::GlobalNamespace::HSVPanelController __declspec(property(get=__get__hsvPanelController, put=__set__hsvPanelController))  _hsvPanelController;

constexpr void __set__hsvPanelController(::GlobalNamespace::HSVPanelController value) ;

constexpr ::GlobalNamespace::HSVPanelController __get__hsvPanelController() const;

 ::GlobalNamespace::PreviousColorPanelController __declspec(property(get=__get__previousColorPanelController, put=__set__previousColorPanelController))  _previousColorPanelController;

constexpr void __set__previousColorPanelController(::GlobalNamespace::PreviousColorPanelController value) ;

constexpr ::GlobalNamespace::PreviousColorPanelController __get__previousColorPanelController() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__closeButton, put=__set__closeButton))  _closeButton;

constexpr void __set__closeButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__closeButton() const;

 ::System::Action __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action value) ;

constexpr ::System::Action __get_didFinishEvent() const;

 ::System::Action_1<::GlobalNamespace::ColorScheme> __declspec(property(get=__get_didChangeColorSchemeEvent, put=__set_didChangeColorSchemeEvent))  didChangeColorSchemeEvent;

constexpr void __set_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme> value) ;

constexpr ::System::Action_1<::GlobalNamespace::ColorScheme> __get_didChangeColorSchemeEvent() const;

 ::HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder value) ;

constexpr ::HMUI::ButtonBinder __get__buttonBinder() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x211ea70 size 0x9c virtual false final false
 void add_didFinishEvent(::System::Action value) ;

/// @brief Method remove_didFinishEvent addr 0x211edf8 size 0x9c virtual false final false
 void remove_didFinishEvent(::System::Action value) ;

/// @brief Method add_didChangeColorSchemeEvent addr 0x211eb0c size 0xb0 virtual false final false
 void add_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme> value) ;

/// @brief Method remove_didChangeColorSchemeEvent addr 0x211ee94 size 0xb0 virtual false final false
 void remove_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme> value) ;

/// @brief Method SetColorScheme addr 0x211f57c size 0x18 virtual false final false
 void SetColorScheme(::GlobalNamespace::ColorScheme colorScheme) ;

/// @brief Method Start addr 0x2120198 size 0x278 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21204e0 size 0x1d0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleColorSchemeColorsToggleGroupSelectedColorDidChange addr 0x2120760 size 0x74 virtual false final false
 void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(::UnityEngine::Color color) ;

/// @brief Method HandleRGBPanelControllerColorDidChange addr 0x21207d4 size 0xcc virtual false final false
 void HandleRGBPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) ;

/// @brief Method HandleHSVPanelControllerColorDidChange addr 0x21208a0 size 0xcc virtual false final false
 void HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) ;

/// @brief Method HandlePreviousColorPanelControllerColorWasSelected addr 0x212096c size 0xb4 virtual false final false
 void HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color) ;

// Ctor Parameters []
explicit EditColorSchemeController() ;

/// @brief Method .ctor addr 0x2120a20 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__13_0 addr 0x2120a28 size 0x1c virtual false final false
 void _Start_b__13_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EditColorSchemeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditColorSchemeController, "", "EditColorSchemeController");
