#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace UnityEngine::UI {
class Button;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class LanguageSettingsController;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLanguageViewController;
}
// Type: ::SelectLanguageViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5842))
// CS Name: SelectLanguageViewController
class CORDL_TYPE SelectLanguageViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SelectLanguageViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLanguageViewController", modifiers: " const&", def_value: None }]
constexpr SelectLanguageViewController(SelectLanguageViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLanguageViewController", modifiers: "&&", def_value: None }]
constexpr SelectLanguageViewController(SelectLanguageViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectLanguageViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr SelectLanguageViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectLanguageViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectLanguageViewController& operator=(SelectLanguageViewController&& o) noexcept = default;
  constexpr SelectLanguageViewController& operator=(SelectLanguageViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 GlobalNamespace::LanguageSettingsController __declspec(property(get=__get__languageSettingsController, put=__set__languageSettingsController))  _languageSettingsController;

constexpr void __set__languageSettingsController(GlobalNamespace::LanguageSettingsController value) ;

constexpr GlobalNamespace::LanguageSettingsController __get__languageSettingsController() const;

 System::Action __declspec(property(get=__get_didChangeLanguageEvent, put=__set_didChangeLanguageEvent))  didChangeLanguageEvent;

constexpr void __set_didChangeLanguageEvent(System::Action value) ;

constexpr System::Action __get_didChangeLanguageEvent() const;

 System::Action __declspec(property(get=__get_didPressContinueButtonEvent, put=__set_didPressContinueButtonEvent))  didPressContinueButtonEvent;

constexpr void __set_didPressContinueButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressContinueButtonEvent() const;


// Methods

/// @brief Method add_didChangeLanguageEvent addr 0x2180d44 size 0x9c virtual false final false
 void add_didChangeLanguageEvent(System::Action value) ;

/// @brief Method remove_didChangeLanguageEvent addr 0x2180de0 size 0x9c virtual false final false
 void remove_didChangeLanguageEvent(System::Action value) ;

/// @brief Method add_didPressContinueButtonEvent addr 0x2180e7c size 0x9c virtual false final false
 void add_didPressContinueButtonEvent(System::Action value) ;

/// @brief Method remove_didPressContinueButtonEvent addr 0x2180f18 size 0x9c virtual false final false
 void remove_didPressContinueButtonEvent(System::Action value) ;

/// @brief Method DidActivate addr 0x2180fb4 size 0x100 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method OnDestroy addr 0x21810b4 size 0xe0 virtual true final false
 void OnDestroy() ;

/// @brief Method HandleLanguageSettingsControllerOndropDownValueDidChange addr 0x2181194 size 0x1c virtual false final false
 void HandleLanguageSettingsControllerOndropDownValueDidChange() ;

// Ctor Parameters []
explicit SelectLanguageViewController() ;

/// @brief Method .ctor addr 0x21811b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x21811b8 size 0x1c virtual false final false
 void _DidActivate_b__8_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SelectLanguageViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLanguageViewController, "", "SelectLanguageViewController");
