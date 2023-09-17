#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace HMUI {
class ColorGradientSlider;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class RGBPanelController;
}
// Type: ::RGBPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5506))
// CS Name: RGBPanelController
class CORDL_TYPE RGBPanelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RGBPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: " const&", def_value: None }]
constexpr RGBPanelController(RGBPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: "&&", def_value: None }]
constexpr RGBPanelController(RGBPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RGBPanelController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RGBPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RGBPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RGBPanelController& operator=(RGBPanelController&& o) noexcept = default;
  constexpr RGBPanelController& operator=(RGBPanelController const& o) noexcept = default;
                


// Fields

 ::HMUI::ColorGradientSlider __declspec(property(get=__get__redSlider, put=__set__redSlider))  _redSlider;

constexpr void __set__redSlider(::HMUI::ColorGradientSlider value) ;

constexpr ::HMUI::ColorGradientSlider __get__redSlider() const;

 ::HMUI::ColorGradientSlider __declspec(property(get=__get__greenSlider, put=__set__greenSlider))  _greenSlider;

constexpr void __set__greenSlider(::HMUI::ColorGradientSlider value) ;

constexpr ::HMUI::ColorGradientSlider __get__greenSlider() const;

 ::HMUI::ColorGradientSlider __declspec(property(get=__get__blueSlider, put=__set__blueSlider))  _blueSlider;

constexpr void __set__blueSlider(::HMUI::ColorGradientSlider value) ;

constexpr ::HMUI::ColorGradientSlider __get__blueSlider() const;

 ::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType> __declspec(property(get=__get_colorDidChangeEvent, put=__set_colorDidChangeEvent))  colorDidChangeEvent;

constexpr void __set_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType> value) ;

constexpr ::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType> __get_colorDidChangeEvent() const;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method add_colorDidChangeEvent addr 0x2120410 size 0xb0 virtual false final false
 void add_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method remove_colorDidChangeEvent addr 0x21206b0 size 0xb0 virtual false final false
 void remove_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method get_color addr 0x2120f10 size 0xc virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x21204c0 size 0x20 virtual false final false
 void set_color(::UnityEngine::Color value) ;

/// @brief Method Awake addr 0x21210e0 size 0x104 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x21211e4 size 0x1ac virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSliderColorDidChange addr 0x2121390 size 0x3c virtual false final false
 void HandleSliderColorDidChange(::HMUI::ColorGradientSlider slider, ::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) ;

/// @brief Method RefreshSlidersValues addr 0x2121094 size 0x4c virtual false final false
 void RefreshSlidersValues() ;

/// @brief Method RefreshSlidersColors addr 0x2120f1c size 0x178 virtual false final false
 void RefreshSlidersColors() ;

// Ctor Parameters []
explicit RGBPanelController() ;

/// @brief Method .ctor addr 0x21213cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RGBPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RGBPanelController, "", "RGBPanelController");
