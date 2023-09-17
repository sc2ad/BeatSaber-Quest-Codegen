#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class AutoSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class AutoSetupController;
}
// Type: ::AutoSetupController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5645))
// CS Name: AutoSetupController
class CORDL_TYPE AutoSetupController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~AutoSetupController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupController", modifiers: " const&", def_value: None }]
constexpr AutoSetupController(AutoSetupController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoSetupController", modifiers: "&&", def_value: None }]
constexpr AutoSetupController(AutoSetupController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AutoSetupController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AutoSetupController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AutoSetupController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AutoSetupController& operator=(AutoSetupController&& o) noexcept = default;
  constexpr AutoSetupController& operator=(AutoSetupController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__closeButton, put=__set__closeButton))  _closeButton;

constexpr void __set__closeButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__closeButton() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__selectBasedOnSuggestionsToggle, put=__set__selectBasedOnSuggestionsToggle))  _selectBasedOnSuggestionsToggle;

constexpr void __set__selectBasedOnSuggestionsToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__selectBasedOnSuggestionsToggle() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__autoStartWhenAllReadyToggle, put=__set__autoStartWhenAllReadyToggle))  _autoStartWhenAllReadyToggle;

constexpr void __set__autoStartWhenAllReadyToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__autoStartWhenAllReadyToggle() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__forceAutoStartAfterSongSelectionToggle, put=__set__forceAutoStartAfterSongSelectionToggle))  _forceAutoStartAfterSongSelectionToggle;

constexpr void __set__forceAutoStartAfterSongSelectionToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__forceAutoStartAfterSongSelectionToggle() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__randomSongIfNoneSuggestedToggle, put=__set__randomSongIfNoneSuggestedToggle))  _randomSongIfNoneSuggestedToggle;

constexpr void __set__randomSongIfNoneSuggestedToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__randomSongIfNoneSuggestedToggle() const;

 ::System::Action_1<::GlobalNamespace::AutoSetupData> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData> value) ;

constexpr ::System::Action_1<::GlobalNamespace::AutoSetupData> __get_didFinishEvent() const;

 ::HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder value) ;

constexpr ::HMUI::ButtonBinder __get__buttonBinder() const;

 ::HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(::HMUI::ToggleBinder value) ;

constexpr ::HMUI::ToggleBinder __get__toggleBinder() const;

 ::GlobalNamespace::AutoSetupData __declspec(property(get=__get__autoSetupData, put=__set__autoSetupData))  _autoSetupData;

constexpr void __set__autoSetupData(::GlobalNamespace::AutoSetupData value) ;

constexpr ::GlobalNamespace::AutoSetupData __get__autoSetupData() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x214b314 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData> value) ;

/// @brief Method remove_didFinishEvent addr 0x214b3c4 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData> value) ;

/// @brief Method Setup addr 0x214b474 size 0x8 virtual false final false
 void Setup(::GlobalNamespace::AutoSetupData autoSetupData) ;

/// @brief Method OnEnable addr 0x214b47c size 0x200 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x214b67c size 0x1c virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit AutoSetupController() ;

/// @brief Method .ctor addr 0x214b698 size 0xc8 virtual false final false
 void _ctor() ;

/// @brief Method <OnEnable>b__12_0 addr 0x214b768 size 0x20 virtual false final false
 void _OnEnable_b__12_0() ;

/// @brief Method <OnEnable>b__12_1 addr 0x214b788 size 0x20 virtual false final false
 void _OnEnable_b__12_1(bool isOn) ;

/// @brief Method <OnEnable>b__12_2 addr 0x214b7a8 size 0x20 virtual false final false
 void _OnEnable_b__12_2(bool isOn) ;

/// @brief Method <OnEnable>b__12_3 addr 0x214b7c8 size 0x20 virtual false final false
 void _OnEnable_b__12_3(bool isOn) ;

/// @brief Method <OnEnable>b__12_4 addr 0x214b7e8 size 0x20 virtual false final false
 void _OnEnable_b__12_4(bool isOn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AutoSetupController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupController, "", "AutoSetupController");
