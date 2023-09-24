#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorPickerButtonController;
}
// Type: ::ColorPickerButtonController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5510))
// CS Name: ColorPickerButtonController
class CORDL_TYPE ColorPickerButtonController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ColorPickerButtonController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: " const&", def_value: None }]
constexpr ColorPickerButtonController(ColorPickerButtonController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: "&&", def_value: None }]
constexpr ColorPickerButtonController(ColorPickerButtonController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorPickerButtonController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorPickerButtonController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorPickerButtonController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorPickerButtonController& operator=(ColorPickerButtonController&& o) noexcept = default;
  constexpr ColorPickerButtonController& operator=(ColorPickerButtonController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;

 UnityEngine::UI::Image __declspec(property(get=__get__colorImage, put=__set__colorImage))  _colorImage;

constexpr void __set__colorImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__colorImage() const;


// Properties

 UnityEngine::UI::Button __declspec(property(get=get_button))  button;


// Methods

/// @brief Method get_button addr 0x2122808 size 0x8 virtual false final false
 UnityEngine::UI::Button get_button() ;

/// @brief Method SetColor addr 0x2122810 size 0x28 virtual false final false
 void SetColor(UnityEngine::Color color) ;

static GlobalNamespace::ColorPickerButtonController New_ctor() ;

/// @brief Method .ctor addr 0x2122838 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorPickerButtonController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorPickerButtonController, "", "ColorPickerButtonController");
