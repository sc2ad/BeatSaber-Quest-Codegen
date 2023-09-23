#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeColorToggleController;
}
// Type: ::ColorSchemeColorToggleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5497))
// CS Name: ColorSchemeColorToggleController
class CORDL_TYPE ColorSchemeColorToggleController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ColorSchemeColorToggleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: " const&", def_value: None }]
constexpr ColorSchemeColorToggleController(ColorSchemeColorToggleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: "&&", def_value: None }]
constexpr ColorSchemeColorToggleController(ColorSchemeColorToggleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeColorToggleController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorSchemeColorToggleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemeColorToggleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemeColorToggleController& operator=(ColorSchemeColorToggleController&& o) noexcept = default;
  constexpr ColorSchemeColorToggleController& operator=(ColorSchemeColorToggleController const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UI::Graphic> __declspec(property(get=__get__colorGraphics, put=__set__colorGraphics))  _colorGraphics;

constexpr void __set__colorGraphics(::ArrayW<UnityEngine::UI::Graphic> value) ;

constexpr ::ArrayW<UnityEngine::UI::Graphic> __get__colorGraphics() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__toggle, put=__set__toggle))  _toggle;

constexpr void __set__toggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__toggle() const;


// Properties

 UnityEngine::UI::Toggle __declspec(property(get=get_toggle))  toggle;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method get_toggle addr 0x211dbe0 size 0x8 virtual false final false
 UnityEngine::UI::Toggle get_toggle() ;

/// @brief Method get_color addr 0x211d460 size 0x38 virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x211d4b0 size 0x98 virtual false final false
 void set_color(UnityEngine::Color value) ;

// Ctor Parameters []
explicit ColorSchemeColorToggleController() ;

/// @brief Method .ctor addr 0x211dbe8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSchemeColorToggleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeColorToggleController, "", "ColorSchemeColorToggleController");
