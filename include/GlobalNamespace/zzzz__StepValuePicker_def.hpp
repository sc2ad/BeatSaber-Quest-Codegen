#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class StepValuePicker;
}
// Type: ::StepValuePicker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5539))
// CS Name: StepValuePicker
class CORDL_TYPE StepValuePicker : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~StepValuePicker() = default;

// Ctor Parameters [CppParam { name: "", ty: "StepValuePicker", modifiers: " const&", def_value: None }]
constexpr StepValuePicker(StepValuePicker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StepValuePicker", modifiers: "&&", def_value: None }]
constexpr StepValuePicker(StepValuePicker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StepValuePicker(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StepValuePicker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StepValuePicker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StepValuePicker& operator=(StepValuePicker&& o) noexcept = default;
  constexpr StepValuePicker& operator=(StepValuePicker const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__decButton, put=__set__decButton))  _decButton;

constexpr void __set__decButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__decButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__incButton, put=__set__incButton))  _incButton;

constexpr void __set__incButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__incButton() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__valueText, put=__set__valueText))  _valueText;

constexpr void __set__valueText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__valueText() const;

 System::Action __declspec(property(get=__get_decButtonWasPressedEvent, put=__set_decButtonWasPressedEvent))  decButtonWasPressedEvent;

constexpr void __set_decButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_decButtonWasPressedEvent() const;

 System::Action __declspec(property(get=__get_incButtonWasPressedEvent, put=__set_incButtonWasPressedEvent))  incButtonWasPressedEvent;

constexpr void __set_incButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_incButtonWasPressedEvent() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(put=set_decButtonInteractable))  decButtonInteractable;

 bool __declspec(property(put=set_incButtonInteractable))  incButtonInteractable;


// Methods

/// @brief Method add_decButtonWasPressedEvent addr 0x21274f0 size 0x9c virtual false final false
 void add_decButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_decButtonWasPressedEvent addr 0x212758c size 0x9c virtual false final false
 void remove_decButtonWasPressedEvent(System::Action value) ;

/// @brief Method add_incButtonWasPressedEvent addr 0x2127628 size 0x9c virtual false final false
 void add_incButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_incButtonWasPressedEvent addr 0x21276c4 size 0x9c virtual false final false
 void remove_incButtonWasPressedEvent(System::Action value) ;

/// @brief Method get_text addr 0x2127760 size 0x24 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2127784 size 0x24 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method set_decButtonInteractable addr 0x21277a8 size 0x20 virtual false final false
 void set_decButtonInteractable(bool value) ;

/// @brief Method set_incButtonInteractable addr 0x21277c8 size 0x20 virtual false final false
 void set_incButtonInteractable(bool value) ;

/// @brief Method OnEnable addr 0x21277e8 size 0xf0 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x21278d8 size 0xf0 virtual false final false
 void OnDisable() ;

/// @brief Method IncButtonPressed addr 0x21279c8 size 0x1c virtual false final false
 void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x21279e4 size 0x1c virtual false final false
 void DecButtonPressed() ;

static GlobalNamespace::StepValuePicker New_ctor() ;

/// @brief Method .ctor addr 0x2127a00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StepValuePicker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StepValuePicker, "", "StepValuePicker");
