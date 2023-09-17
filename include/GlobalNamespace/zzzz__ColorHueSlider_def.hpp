#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__CircleSlider_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class CircleSlider;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorHueSlider;
}
// Type: ::ColorHueSlider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5494))
// CS Name: ColorHueSlider
class CORDL_TYPE ColorHueSlider : public ::HMUI::CircleSlider {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~ColorHueSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorHueSlider", modifiers: " const&", def_value: None }]
constexpr ColorHueSlider(ColorHueSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorHueSlider", modifiers: "&&", def_value: None }]
constexpr ColorHueSlider(ColorHueSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorHueSlider(void* ptr) noexcept : ::HMUI::CircleSlider(ptr) {
}


  constexpr ColorHueSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorHueSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorHueSlider& operator=(ColorHueSlider&& o) noexcept = default;
  constexpr ColorHueSlider& operator=(ColorHueSlider const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Color __declspec(property(get=__get__darkColor, put=__set__darkColor))  _darkColor;

constexpr void __set__darkColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__darkColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__lightColor, put=__set__lightColor))  _lightColor;

constexpr void __set__lightColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__lightColor() const;

 ::System::Action_3<::GlobalNamespace::ColorHueSlider,float_t,::GlobalNamespace::ColorChangeUIEventType> __declspec(property(get=__get_colorHueDidChangeEvent, put=__set_colorHueDidChangeEvent))  colorHueDidChangeEvent;

constexpr void __set_colorHueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorHueSlider,float_t,::GlobalNamespace::ColorChangeUIEventType> value) ;

constexpr ::System::Action_3<::GlobalNamespace::ColorHueSlider,float_t,::GlobalNamespace::ColorChangeUIEventType> __get_colorHueDidChangeEvent() const;


// Methods

/// @brief Method add_colorHueDidChangeEvent addr 0x211cb08 size 0xb4 virtual false final false
 void add_colorHueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorHueSlider,float_t,::GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method remove_colorHueDidChangeEvent addr 0x211cbbc size 0xb4 virtual false final false
 void remove_colorHueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorHueSlider,float_t,::GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method Awake addr 0x211cc70 size 0x90 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x211cd00 size 0x90 virtual true final false
 void OnDestroy() ;

/// @brief Method UpdateVisuals addr 0x211cd90 size 0xa8 virtual true final false
 void UpdateVisuals() ;

/// @brief Method HandleNormalizedValueDidChange addr 0x211ce38 size 0x24 virtual false final false
 void HandleNormalizedValueDidChange(::HMUI::CircleSlider slider, float_t normalizedValue) ;

/// @brief Method OnPointerUp addr 0x211ce5c size 0x40 virtual true final false
 void OnPointerUp(::UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit ColorHueSlider() ;

/// @brief Method .ctor addr 0x211ce9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorHueSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorHueSlider, "", "ColorHueSlider");
