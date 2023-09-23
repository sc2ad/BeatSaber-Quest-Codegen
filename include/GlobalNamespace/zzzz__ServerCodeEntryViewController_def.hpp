#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class InputFieldViewChangeBinder;
}
namespace HMUI {
class InputFieldView;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class UIKeyboard;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerCodeEntryViewController;
}
// Type: ::ServerCodeEntryViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5817))
// CS Name: ServerCodeEntryViewController
class CORDL_TYPE ServerCodeEntryViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ServerCodeEntryViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCodeEntryViewController", modifiers: " const&", def_value: None }]
constexpr ServerCodeEntryViewController(ServerCodeEntryViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCodeEntryViewController", modifiers: "&&", def_value: None }]
constexpr ServerCodeEntryViewController(ServerCodeEntryViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerCodeEntryViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr ServerCodeEntryViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerCodeEntryViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerCodeEntryViewController& operator=(ServerCodeEntryViewController&& o) noexcept = default;
  constexpr ServerCodeEntryViewController& operator=(ServerCodeEntryViewController const& o) noexcept = default;
                


// Fields

 HMUI::UIKeyboard __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard))  _uiKeyboard;

constexpr void __set__uiKeyboard(HMUI::UIKeyboard value) ;

constexpr HMUI::UIKeyboard __get__uiKeyboard() const;

 HMUI::InputFieldView __declspec(property(get=__get__codeInputField, put=__set__codeInputField))  _codeInputField;

constexpr void __set__codeInputField(HMUI::InputFieldView value) ;

constexpr HMUI::InputFieldView __get__codeInputField() const;

 UnityEngine::UI::Button __declspec(property(get=__get__joinButton, put=__set__joinButton))  _joinButton;

constexpr void __set__joinButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__joinButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelButton, put=__set__cancelButton))  _cancelButton;

constexpr void __set__cancelButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelButton() const;

 System::Action_2<bool,::StringW> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<bool,::StringW> value) ;

constexpr System::Action_2<bool,::StringW> __get_didFinishEvent() const;

 HMUI::InputFieldViewChangeBinder __declspec(property(get=__get__inputFieldViewChangeBinder, put=__set__inputFieldViewChangeBinder))  _inputFieldViewChangeBinder;

constexpr void __set__inputFieldViewChangeBinder(HMUI::InputFieldViewChangeBinder value) ;

constexpr HMUI::InputFieldViewChangeBinder __get__inputFieldViewChangeBinder() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x2179204 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<bool,::StringW> value) ;

/// @brief Method remove_didFinishEvent addr 0x21792b4 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<bool,::StringW> value) ;

/// @brief Method DidActivate addr 0x2179364 size 0x1b0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2179514 size 0x30 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleInputFieldChanged addr 0x2179544 size 0x38 virtual false final false
 void HandleInputFieldChanged(HMUI::InputFieldView obj) ;

/// @brief Method OnDestroy addr 0x217957c size 0x28 virtual true final false
 void OnDestroy() ;

/// @brief Method HandleJoinButtonPressed addr 0x21795a4 size 0x3c virtual false final false
 void HandleJoinButtonPressed() ;

/// @brief Method HandleCancelButtonPressed addr 0x21795e0 size 0x24 virtual false final false
 void HandleCancelButtonPressed() ;

// Ctor Parameters []
explicit ServerCodeEntryViewController() ;

/// @brief Method .ctor addr 0x2179604 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ServerCodeEntryViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerCodeEntryViewController, "", "ServerCodeEntryViewController");
