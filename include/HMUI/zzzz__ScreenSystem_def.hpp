#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace HMUI {
class TitleViewController;
}
namespace HMUI {
class Screen;
}
namespace System {
class Action;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace HMUI {
class ScreenSystem;
}
// Type: HMUI::ScreenSystem
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13645))
// CS Name: HMUI.ScreenSystem
class CORDL_TYPE ScreenSystem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~ScreenSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSystem", modifiers: " const&", def_value: None }]
constexpr ScreenSystem(ScreenSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSystem", modifiers: "&&", def_value: None }]
constexpr ScreenSystem(ScreenSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenSystem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScreenSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenSystem& operator=(ScreenSystem&& o) noexcept = default;
  constexpr ScreenSystem& operator=(ScreenSystem const& o) noexcept = default;
                


// Fields

 HMUI::Screen __declspec(property(get=__get__mainScreen, put=__set__mainScreen))  _mainScreen;

constexpr void __set__mainScreen(HMUI::Screen value) ;

constexpr HMUI::Screen __get__mainScreen() const;

 HMUI::Screen __declspec(property(get=__get__leftScreen, put=__set__leftScreen))  _leftScreen;

constexpr void __set__leftScreen(HMUI::Screen value) ;

constexpr HMUI::Screen __get__leftScreen() const;

 HMUI::Screen __declspec(property(get=__get__rightScreen, put=__set__rightScreen))  _rightScreen;

constexpr void __set__rightScreen(HMUI::Screen value) ;

constexpr HMUI::Screen __get__rightScreen() const;

 HMUI::Screen __declspec(property(get=__get__bottomScreen, put=__set__bottomScreen))  _bottomScreen;

constexpr void __set__bottomScreen(HMUI::Screen value) ;

constexpr HMUI::Screen __get__bottomScreen() const;

 HMUI::Screen __declspec(property(get=__get__topScreen, put=__set__topScreen))  _topScreen;

constexpr void __set__topScreen(HMUI::Screen value) ;

constexpr HMUI::Screen __get__topScreen() const;

 UnityEngine::UI::Button __declspec(property(get=__get__backButton, put=__set__backButton))  _backButton;

constexpr void __set__backButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__backButton() const;

 HMUI::TitleViewController __declspec(property(get=__get__titleViewController, put=__set__titleViewController))  _titleViewController;

constexpr void __set__titleViewController(HMUI::TitleViewController value) ;

constexpr HMUI::TitleViewController __get__titleViewController() const;

 System::Action __declspec(property(get=__get_backButtonWasPressedEvent, put=__set_backButtonWasPressedEvent))  backButtonWasPressedEvent;

constexpr void __set_backButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_backButtonWasPressedEvent() const;

 bool __declspec(property(get=__get__backButtonIsVisible, put=__set__backButtonIsVisible))  _backButtonIsVisible;

constexpr void __set__backButtonIsVisible(bool value) ;

constexpr bool __get__backButtonIsVisible() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;


// Properties

 HMUI::TitleViewController __declspec(property(get=get_titleViewController))  titleViewController;

 HMUI::Screen __declspec(property(get=get_mainScreen))  mainScreen;

 HMUI::Screen __declspec(property(get=get_leftScreen))  leftScreen;

 HMUI::Screen __declspec(property(get=get_rightScreen))  rightScreen;

 HMUI::Screen __declspec(property(get=get_bottomScreen))  bottomScreen;

 HMUI::Screen __declspec(property(get=get_topScreen))  topScreen;


// Methods

/// @brief Method get_titleViewController addr 0x1fb8d6c size 0x8 virtual false final false
 HMUI::TitleViewController get_titleViewController() ;

/// @brief Method get_mainScreen addr 0x1fb8d74 size 0x8 virtual false final false
 HMUI::Screen get_mainScreen() ;

/// @brief Method get_leftScreen addr 0x1fb8d7c size 0x8 virtual false final false
 HMUI::Screen get_leftScreen() ;

/// @brief Method get_rightScreen addr 0x1fb8d84 size 0x8 virtual false final false
 HMUI::Screen get_rightScreen() ;

/// @brief Method get_bottomScreen addr 0x1fb8d8c size 0x8 virtual false final false
 HMUI::Screen get_bottomScreen() ;

/// @brief Method get_topScreen addr 0x1fb8d94 size 0x8 virtual false final false
 HMUI::Screen get_topScreen() ;

/// @brief Method add_backButtonWasPressedEvent addr 0x1fb8d9c size 0x9c virtual false final false
 void add_backButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_backButtonWasPressedEvent addr 0x1fb8e38 size 0x9c virtual false final false
 void remove_backButtonWasPressedEvent(System::Action value) ;

/// @brief Method Awake addr 0x1fb8ed4 size 0xc4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x1fb8f98 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method SetBackButton addr 0x1fb8fb4 size 0x30 virtual false final false
 void SetBackButton(bool visible, bool animated) ;

// Ctor Parameters []
explicit ScreenSystem() ;

/// @brief Method .ctor addr 0x1fb8fe4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__24_0 addr 0x1fb8fec size 0x1c virtual false final false
 void _Awake_b__24_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ScreenSystem);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScreenSystem, "HMUI", "ScreenSystem");
