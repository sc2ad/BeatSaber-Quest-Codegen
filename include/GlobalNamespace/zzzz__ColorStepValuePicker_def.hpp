#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Action;
}
namespace HMUI {
class ImageView;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorStepValuePicker;
}
// Type: ::ColorStepValuePicker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5511))
// CS Name: ColorStepValuePicker
class CORDL_TYPE ColorStepValuePicker : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ColorStepValuePicker() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorStepValuePicker", modifiers: " const&", def_value: None }]
constexpr ColorStepValuePicker(ColorStepValuePicker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorStepValuePicker", modifiers: "&&", def_value: None }]
constexpr ColorStepValuePicker(ColorStepValuePicker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorStepValuePicker(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorStepValuePicker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorStepValuePicker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorStepValuePicker& operator=(ColorStepValuePicker&& o) noexcept = default;
  constexpr ColorStepValuePicker& operator=(ColorStepValuePicker const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__decButton, put=__set__decButton))  _decButton;

constexpr void __set__decButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__decButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__incButton, put=__set__incButton))  _incButton;

constexpr void __set__incButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__incButton() const;

 HMUI::ImageView __declspec(property(get=__get__valueImage, put=__set__valueImage))  _valueImage;

constexpr void __set__valueImage(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__valueImage() const;

 System::Action __declspec(property(get=__get_decButtonWasPressedEvent, put=__set_decButtonWasPressedEvent))  decButtonWasPressedEvent;

constexpr void __set_decButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_decButtonWasPressedEvent() const;

 System::Action __declspec(property(get=__get_incButtonWasPressedEvent, put=__set_incButtonWasPressedEvent))  incButtonWasPressedEvent;

constexpr void __set_incButtonWasPressedEvent(System::Action value) ;

constexpr System::Action __get_incButtonWasPressedEvent() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 bool __declspec(property(put=set_decButtonInteractable))  decButtonInteractable;

 bool __declspec(property(put=set_incButtonInteractable))  incButtonInteractable;


// Methods

/// @brief Method add_decButtonWasPressedEvent addr 0x2122840 size 0x9c virtual false final false
 void add_decButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_decButtonWasPressedEvent addr 0x21228dc size 0x9c virtual false final false
 void remove_decButtonWasPressedEvent(System::Action value) ;

/// @brief Method add_incButtonWasPressedEvent addr 0x2122978 size 0x9c virtual false final false
 void add_incButtonWasPressedEvent(System::Action value) ;

/// @brief Method remove_incButtonWasPressedEvent addr 0x2122a14 size 0x9c virtual false final false
 void remove_incButtonWasPressedEvent(System::Action value) ;

/// @brief Method get_color addr 0x2122ab0 size 0x24 virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2122ad4 size 0x24 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method set_decButtonInteractable addr 0x2122af8 size 0x20 virtual false final false
 void set_decButtonInteractable(bool value) ;

/// @brief Method set_incButtonInteractable addr 0x2122b18 size 0x20 virtual false final false
 void set_incButtonInteractable(bool value) ;

/// @brief Method OnEnable addr 0x2122b38 size 0xf0 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2122c28 size 0xf0 virtual false final false
 void OnDisable() ;

/// @brief Method IncButtonPressed addr 0x2122d18 size 0x1c virtual false final false
 void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x2122d34 size 0x1c virtual false final false
 void DecButtonPressed() ;

static GlobalNamespace::ColorStepValuePicker New_ctor() ;

/// @brief Method .ctor addr 0x2122d50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorStepValuePicker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorStepValuePicker, "", "ColorStepValuePicker");
