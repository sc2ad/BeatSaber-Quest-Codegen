#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class CreateServerFormController;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateServerViewController;
}
// Type: ::CreateServerViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5806))
// CS Name: CreateServerViewController
class CORDL_TYPE CreateServerViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~CreateServerViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerViewController", modifiers: " const&", def_value: None }]
constexpr CreateServerViewController(CreateServerViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerViewController", modifiers: "&&", def_value: None }]
constexpr CreateServerViewController(CreateServerViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CreateServerViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr CreateServerViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CreateServerViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CreateServerViewController& operator=(CreateServerViewController&& o) noexcept = default;
  constexpr CreateServerViewController& operator=(CreateServerViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__createServerButton, put=__set__createServerButton))  _createServerButton;

constexpr void __set__createServerButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__createServerButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelCreateServerButton, put=__set__cancelCreateServerButton))  _cancelCreateServerButton;

constexpr void __set__cancelCreateServerButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelCreateServerButton() const;

 GlobalNamespace::CreateServerFormController __declspec(property(get=__get__createServerFormController, put=__set__createServerFormController))  _createServerFormController;

constexpr void __set__createServerFormController(GlobalNamespace::CreateServerFormController value) ;

constexpr GlobalNamespace::CreateServerFormController __get__createServerFormController() const;

 System::Action_2<bool,GlobalNamespace::CreateServerFormData> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<bool,GlobalNamespace::CreateServerFormData> value) ;

constexpr System::Action_2<bool,GlobalNamespace::CreateServerFormData> __get_didFinishEvent() const;

 GlobalNamespace::MultiplayerModeSettings __declspec(property(get=__get__multiplayerModeSettings, put=__set__multiplayerModeSettings))  _multiplayerModeSettings;

constexpr void __set__multiplayerModeSettings(GlobalNamespace::MultiplayerModeSettings value) ;

constexpr GlobalNamespace::MultiplayerModeSettings __get__multiplayerModeSettings() const;


// Properties

 GlobalNamespace::MultiplayerModeSettings __declspec(property(get=get_multiplayerModeSettings))  multiplayerModeSettings;


// Methods

/// @brief Method add_didFinishEvent addr 0x21761a8 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<bool,GlobalNamespace::CreateServerFormData> value) ;

/// @brief Method remove_didFinishEvent addr 0x2176258 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<bool,GlobalNamespace::CreateServerFormData> value) ;

/// @brief Method get_multiplayerModeSettings addr 0x2176308 size 0x8 virtual false final false
 GlobalNamespace::MultiplayerModeSettings get_multiplayerModeSettings() ;

/// @brief Method Setup addr 0x2176310 size 0x44 virtual false final false
 void Setup(GlobalNamespace::MultiplayerModeSettings multiplayerModeSettings) ;

/// @brief Method DidActivate addr 0x2176354 size 0x108 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method ApplyAndGetData addr 0x217645c size 0xb8 virtual false final false
 GlobalNamespace::CreateServerFormData ApplyAndGetData() ;

static GlobalNamespace::CreateServerViewController New_ctor() ;

/// @brief Method .ctor addr 0x2176514 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__10_0 addr 0x217651c size 0x4c virtual false final false
 void _DidActivate_b__10_0() ;

/// @brief Method <DidActivate>b__10_1 addr 0x2176568 size 0x4c virtual false final false
 void _DidActivate_b__10_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CreateServerViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerViewController, "", "CreateServerViewController");
