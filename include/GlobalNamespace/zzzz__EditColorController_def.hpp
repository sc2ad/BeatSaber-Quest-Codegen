#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace GlobalNamespace {
class PreviousColorPanelController;
}
namespace System {
template<typename T>
class Action_1;
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
class HSVPanelController;
}
// Forward declare root types
namespace GlobalNamespace {
class EditColorController;
}
// Type: ::EditColorController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5502))
// CS Name: EditColorController
class CORDL_TYPE EditColorController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~EditColorController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditColorController", modifiers: " const&", def_value: None }]
constexpr EditColorController(EditColorController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditColorController", modifiers: "&&", def_value: None }]
constexpr EditColorController(EditColorController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditColorController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr EditColorController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditColorController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditColorController& operator=(EditColorController&& o) noexcept = default;
  constexpr EditColorController& operator=(EditColorController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::HSVPanelController __declspec(property(get=__get__hsvPanelController, put=__set__hsvPanelController))  _hsvPanelController;

constexpr void __set__hsvPanelController(GlobalNamespace::HSVPanelController value) ;

constexpr GlobalNamespace::HSVPanelController __get__hsvPanelController() const;

 GlobalNamespace::PreviousColorPanelController __declspec(property(get=__get__previousColorPanelController, put=__set__previousColorPanelController))  _previousColorPanelController;

constexpr void __set__previousColorPanelController(GlobalNamespace::PreviousColorPanelController value) ;

constexpr GlobalNamespace::PreviousColorPanelController __get__previousColorPanelController() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelButton, put=__set__cancelButton))  _cancelButton;

constexpr void __set__cancelButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__applyButton, put=__set__applyButton))  _applyButton;

constexpr void __set__applyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__applyButton() const;

 System::Action_1<UnityEngine::Color> __declspec(property(get=__get_didChangeColorEvent, put=__set_didChangeColorEvent))  didChangeColorEvent;

constexpr void __set_didChangeColorEvent(System::Action_1<UnityEngine::Color> value) ;

constexpr System::Action_1<UnityEngine::Color> __get_didChangeColorEvent() const;

 System::Action_1<bool> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_didFinishEvent() const;

 System::Action_1<UnityEngine::Color> __declspec(property(get=__get__colorCallback, put=__set__colorCallback))  _colorCallback;

constexpr void __set__colorCallback(System::Action_1<UnityEngine::Color> value) ;

constexpr System::Action_1<UnityEngine::Color> __get__colorCallback() const;

 UnityEngine::Color __declspec(property(get=__get__initialColor, put=__set__initialColor))  _initialColor;

constexpr void __set__initialColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__initialColor() const;

 bool __declspec(property(get=__get__colorChanged, put=__set__colorChanged))  _colorChanged;

constexpr void __set__colorChanged(bool value) ;

constexpr bool __get__colorChanged() const;


// Methods

/// @brief Method add_didChangeColorEvent addr 0x211f628 size 0xb0 virtual false final false
 void add_didChangeColorEvent(System::Action_1<UnityEngine::Color> value) ;

/// @brief Method remove_didChangeColorEvent addr 0x211f6d8 size 0xb0 virtual false final false
 void remove_didChangeColorEvent(System::Action_1<UnityEngine::Color> value) ;

/// @brief Method add_didFinishEvent addr 0x211f788 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<bool> value) ;

/// @brief Method remove_didFinishEvent addr 0x211f838 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<bool> value) ;

/// @brief Method SetColorCallback addr 0x211f8e8 size 0x8 virtual false final false
 void SetColorCallback(System::Action_1<UnityEngine::Color> colorCallback) ;

/// @brief Method SetColor addr 0x211f8f0 size 0x60 virtual false final false
 void SetColor(UnityEngine::Color color) ;

/// @brief Method DidActivate addr 0x211fa40 size 0x1b8 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x211fd58 size 0xec virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleHSVPanelControllerColorDidChange addr 0x211ffa4 size 0x6c virtual false final false
 void HandleHSVPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) ;

/// @brief Method HandlePreviousColorPanelControllerColorWasSelected addr 0x21200a4 size 0x68 virtual false final false
 void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine::Color color) ;

/// @brief Method HandleCancelButtonWasPressed addr 0x2120118 size 0x58 virtual false final false
 void HandleCancelButtonWasPressed() ;

/// @brief Method HandleApplyButtonWasPressed addr 0x2120170 size 0x20 virtual false final false
 void HandleApplyButtonWasPressed() ;

/// @brief Method ChangeColor addr 0x2120010 size 0x94 virtual false final false
 void ChangeColor(UnityEngine::Color color) ;

// Ctor Parameters []
explicit EditColorController() ;

/// @brief Method .ctor addr 0x2120190 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EditColorController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditColorController, "", "EditColorController");
