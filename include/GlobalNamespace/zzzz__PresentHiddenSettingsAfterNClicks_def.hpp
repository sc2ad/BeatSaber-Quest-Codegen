#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class PresentHiddenSettingsAfterNClicks;
}
// Type: ::PresentHiddenSettingsAfterNClicks
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5700))
// CS Name: PresentHiddenSettingsAfterNClicks
class CORDL_TYPE PresentHiddenSettingsAfterNClicks : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PresentHiddenSettingsAfterNClicks() = default;

// Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: " const&", def_value: None }]
constexpr PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PresentHiddenSettingsAfterNClicks", modifiers: "&&", def_value: None }]
constexpr PresentHiddenSettingsAfterNClicks(PresentHiddenSettingsAfterNClicks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PresentHiddenSettingsAfterNClicks(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PresentHiddenSettingsAfterNClicks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PresentHiddenSettingsAfterNClicks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PresentHiddenSettingsAfterNClicks& operator=(PresentHiddenSettingsAfterNClicks&& o) noexcept = default;
  constexpr PresentHiddenSettingsAfterNClicks& operator=(PresentHiddenSettingsAfterNClicks const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__hiddenSettingsButton, put=__set__hiddenSettingsButton))  _hiddenSettingsButton;

constexpr void __set__hiddenSettingsButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__hiddenSettingsButton() const;

 HMUI::ViewController __declspec(property(get=__get__hiddenSettingsViewController, put=__set__hiddenSettingsViewController))  _hiddenSettingsViewController;

constexpr void __set__hiddenSettingsViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__hiddenSettingsViewController() const;

 int32_t __declspec(property(get=__get__numberOfClicksRequired, put=__set__numberOfClicksRequired))  _numberOfClicksRequired;

constexpr void __set__numberOfClicksRequired(int32_t value) ;

constexpr int32_t __get__numberOfClicksRequired() const;

 GlobalNamespace::SettingsFlowCoordinator __declspec(property(get=__get__settingsFlowCoordinator, put=__set__settingsFlowCoordinator))  _settingsFlowCoordinator;

constexpr void __set__settingsFlowCoordinator(GlobalNamespace::SettingsFlowCoordinator value) ;

constexpr GlobalNamespace::SettingsFlowCoordinator __get__settingsFlowCoordinator() const;

 int32_t __declspec(property(get=__get__currentNumberOfClicks, put=__set__currentNumberOfClicks))  _currentNumberOfClicks;

constexpr void __set__currentNumberOfClicks(int32_t value) ;

constexpr int32_t __get__currentNumberOfClicks() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;


// Methods

/// @brief Method OnEnable addr 0x2154774 size 0x9c virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2154810 size 0x1c virtual false final false
 void OnDisable() ;

static GlobalNamespace::PresentHiddenSettingsAfterNClicks New_ctor() ;

/// @brief Method .ctor addr 0x215482c size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method <OnEnable>b__6_0 addr 0x215489c size 0x44 virtual false final false
 void _OnEnable_b__6_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PresentHiddenSettingsAfterNClicks);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PresentHiddenSettingsAfterNClicks, "", "PresentHiddenSettingsAfterNClicks");
