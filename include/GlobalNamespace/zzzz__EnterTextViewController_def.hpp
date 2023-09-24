#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class VRTextEntryController;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class EnterTextViewController;
}
// Type: ::EnterTextViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5722))
// CS Name: EnterTextViewController
class CORDL_TYPE EnterTextViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~EnterTextViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnterTextViewController", modifiers: " const&", def_value: None }]
constexpr EnterTextViewController(EnterTextViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnterTextViewController", modifiers: "&&", def_value: None }]
constexpr EnterTextViewController(EnterTextViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnterTextViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr EnterTextViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnterTextViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnterTextViewController& operator=(EnterTextViewController&& o) noexcept = default;
  constexpr EnterTextViewController& operator=(EnterTextViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::VRTextEntryController __declspec(property(get=__get__textEntryController, put=__set__textEntryController))  _textEntryController;

constexpr void __set__textEntryController(GlobalNamespace::VRTextEntryController value) ;

constexpr GlobalNamespace::VRTextEntryController __get__textEntryController() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__titleText, put=__set__titleText))  _titleText;

constexpr void __set__titleText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__titleText() const;

 UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__okButton() const;

 System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> value) ;

constexpr System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x215a664 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> value) ;

/// @brief Method remove_didFinishEvent addr 0x215a714 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController,::StringW> value) ;

/// @brief Method Init addr 0x215a7c4 size 0x24 virtual false final false
 void Init(::StringW titleText) ;

/// @brief Method DidActivate addr 0x215a7e8 size 0xe4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method OkButtonPressed addr 0x215a8cc size 0x98 virtual false final false
 void OkButtonPressed() ;

static GlobalNamespace::EnterTextViewController New_ctor() ;

/// @brief Method .ctor addr 0x215a964 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnterTextViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterTextViewController, "", "EnterTextViewController");
