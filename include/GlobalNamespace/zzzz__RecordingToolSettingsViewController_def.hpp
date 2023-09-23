#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace HMUI {
class TextPageScrollView;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
// Type: ::RecordingToolSettingsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5836))
// CS Name: RecordingToolSettingsViewController
class CORDL_TYPE RecordingToolSettingsViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~RecordingToolSettingsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: " const&", def_value: None }]
constexpr RecordingToolSettingsViewController(RecordingToolSettingsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: "&&", def_value: None }]
constexpr RecordingToolSettingsViewController(RecordingToolSettingsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolSettingsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr RecordingToolSettingsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolSettingsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolSettingsViewController& operator=(RecordingToolSettingsViewController&& o) noexcept = default;
  constexpr RecordingToolSettingsViewController& operator=(RecordingToolSettingsViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(HMUI::TextPageScrollView value) ;

constexpr HMUI::TextPageScrollView __get__textPageScrollView() const;

 GlobalNamespace::RecordingToolManager __declspec(property(get=__get__recordingToolManager, put=__set__recordingToolManager))  _recordingToolManager;

constexpr void __set__recordingToolManager(GlobalNamespace::RecordingToolManager value) ;

constexpr GlobalNamespace::RecordingToolManager __get__recordingToolManager() const;

 System::Action __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action value) ;

constexpr System::Action __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x217eed8 size 0x9c virtual false final false
 void add_didFinishEvent(System::Action value) ;

/// @brief Method remove_didFinishEvent addr 0x217ef74 size 0x9c virtual false final false
 void remove_didFinishEvent(System::Action value) ;

/// @brief Method DidActivate addr 0x217f010 size 0x120 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit RecordingToolSettingsViewController() ;

/// @brief Method .ctor addr 0x217f130 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__6_0 addr 0x217f138 size 0x1c virtual false final false
 void _DidActivate_b__6_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolSettingsViewController, "", "RecordingToolSettingsViewController");
