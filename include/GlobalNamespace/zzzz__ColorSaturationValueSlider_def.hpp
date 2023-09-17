#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__Slider2D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class Slider2D;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSaturationValueSlider;
}
// Type: ::ColorSaturationValueSlider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13612))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5495))
// CS Name: ColorSaturationValueSlider
class CORDL_TYPE ColorSaturationValueSlider : public ::HMUI::Slider2D {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x158};

virtual ~ColorSaturationValueSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSaturationValueSlider", modifiers: " const&", def_value: None }]
constexpr ColorSaturationValueSlider(ColorSaturationValueSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSaturationValueSlider", modifiers: "&&", def_value: None }]
constexpr ColorSaturationValueSlider(ColorSaturationValueSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSaturationValueSlider(void* ptr) noexcept : ::HMUI::Slider2D(ptr) {
}


  constexpr ColorSaturationValueSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSaturationValueSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSaturationValueSlider& operator=(ColorSaturationValueSlider&& o) noexcept = default;
  constexpr ColorSaturationValueSlider& operator=(ColorSaturationValueSlider const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__hue, put=__set__hue))  _hue;

constexpr void __set__hue(float_t value) ;

constexpr float_t __get__hue() const;

 ::ArrayW<::UnityEngine::UI::Graphic> __declspec(property(get=__get__graphics, put=__set__graphics))  _graphics;

constexpr void __set__graphics(::ArrayW<::UnityEngine::UI::Graphic> value) ;

constexpr ::ArrayW<::UnityEngine::UI::Graphic> __get__graphics() const;

 ::UnityEngine::Color __declspec(property(get=__get__darkColor, put=__set__darkColor))  _darkColor;

constexpr void __set__darkColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__darkColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__lightColor, put=__set__lightColor))  _lightColor;

constexpr void __set__lightColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__lightColor() const;

 ::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType> __declspec(property(get=__get_colorSaturationOrValueDidChangeEvent, put=__set_colorSaturationOrValueDidChangeEvent))  colorSaturationOrValueDidChangeEvent;

constexpr void __set_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType> value) ;

constexpr ::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType> __get_colorSaturationOrValueDidChangeEvent() const;


// Methods

/// @brief Method add_colorSaturationOrValueDidChangeEvent addr 0x211cea4 size 0xb4 virtual false final false
 void add_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method remove_colorSaturationOrValueDidChangeEvent addr 0x211cf58 size 0xb4 virtual false final false
 void remove_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method Awake addr 0x211d00c size 0x90 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x211d09c size 0x90 virtual true final false
 void OnDestroy() ;

/// @brief Method SetHue addr 0x211d12c size 0x14 virtual false final false
 void SetHue(float_t hue) ;

/// @brief Method UpdateVisuals addr 0x211d140 size 0x138 virtual true final false
 void UpdateVisuals() ;

/// @brief Method HandleNormalizedValueDidChange addr 0x211d278 size 0x24 virtual false final false
 void HandleNormalizedValueDidChange(::HMUI::Slider2D slider, ::UnityEngine::Vector2 normalizedValue) ;

/// @brief Method OnPointerUp addr 0x211d29c size 0x44 virtual true final false
 void OnPointerUp(::UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit ColorSaturationValueSlider() ;

/// @brief Method .ctor addr 0x211d2e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorSaturationValueSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSaturationValueSlider, "", "ColorSaturationValueSlider");
