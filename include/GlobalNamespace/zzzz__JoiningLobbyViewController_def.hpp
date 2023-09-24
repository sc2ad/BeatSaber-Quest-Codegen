#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Action;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class JoiningLobbyViewController;
}
// Type: ::JoiningLobbyViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5810))
// CS Name: JoiningLobbyViewController
class CORDL_TYPE JoiningLobbyViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~JoiningLobbyViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "JoiningLobbyViewController", modifiers: " const&", def_value: None }]
constexpr JoiningLobbyViewController(JoiningLobbyViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JoiningLobbyViewController", modifiers: "&&", def_value: None }]
constexpr JoiningLobbyViewController(JoiningLobbyViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JoiningLobbyViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr JoiningLobbyViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JoiningLobbyViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JoiningLobbyViewController& operator=(JoiningLobbyViewController&& o) noexcept = default;
  constexpr JoiningLobbyViewController& operator=(JoiningLobbyViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__cancelJoiningButton, put=__set__cancelJoiningButton))  _cancelJoiningButton;

constexpr void __set__cancelJoiningButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelJoiningButton() const;

 GlobalNamespace::LoadingControl __declspec(property(get=__get__loadingControl, put=__set__loadingControl))  _loadingControl;

constexpr void __set__loadingControl(GlobalNamespace::LoadingControl value) ;

constexpr GlobalNamespace::LoadingControl __get__loadingControl() const;

 ::StringW __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::StringW value) ;

constexpr ::StringW __get__text() const;

 System::Action __declspec(property(get=__get_didCancelEvent, put=__set_didCancelEvent))  didCancelEvent;

constexpr void __set_didCancelEvent(System::Action value) ;

constexpr System::Action __get_didCancelEvent() const;


// Methods

/// @brief Method add_didCancelEvent addr 0x2176a18 size 0x9c virtual false final false
 void add_didCancelEvent(System::Action value) ;

/// @brief Method remove_didCancelEvent addr 0x2176ab4 size 0x9c virtual false final false
 void remove_didCancelEvent(System::Action value) ;

/// @brief Method Init addr 0x2176b50 size 0x34 virtual false final false
 void Init(::StringW text) ;

/// @brief Method HideLoading addr 0x2176b84 size 0x40 virtual false final false
 void HideLoading() ;

/// @brief Method DidActivate addr 0x2176bc4 size 0xc8 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

static GlobalNamespace::JoiningLobbyViewController New_ctor() ;

/// @brief Method .ctor addr 0x2176c8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x2176c94 size 0x1c virtual false final false
 void _DidActivate_b__8_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::JoiningLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JoiningLobbyViewController, "", "JoiningLobbyViewController");
