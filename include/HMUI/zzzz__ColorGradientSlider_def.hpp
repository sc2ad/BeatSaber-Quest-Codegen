#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace HMUI {
class TextSlider;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace HMUI {
class ImageView;
}
// Forward declare root types
namespace HMUI {
class ColorGradientSlider;
}
// Type: HMUI::ColorGradientSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13608))
// CS Name: HMUI.ColorGradientSlider
class CORDL_TYPE ColorGradientSlider : public HMUI::TextSlider {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~ColorGradientSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: " const&", def_value: None }]
constexpr ColorGradientSlider(ColorGradientSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: "&&", def_value: None }]
constexpr ColorGradientSlider(ColorGradientSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorGradientSlider(void* ptr) noexcept : HMUI::TextSlider(ptr) {
}


  constexpr ColorGradientSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorGradientSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorGradientSlider& operator=(ColorGradientSlider&& o) noexcept = default;
  constexpr ColorGradientSlider& operator=(ColorGradientSlider const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__textPrefix, put=__set__textPrefix))  _textPrefix;

constexpr void __set__textPrefix(::StringW value) ;

constexpr ::StringW __get__textPrefix() const;

 UnityEngine::Color __declspec(property(get=__get__color0, put=__set__color0))  _color0;

constexpr void __set__color0(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color0() const;

 UnityEngine::Color __declspec(property(get=__get__color1, put=__set__color1))  _color1;

constexpr void __set__color1(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color1() const;

 ::ArrayW<HMUI::ImageView> __declspec(property(get=__get__gradientImages, put=__set__gradientImages))  _gradientImages;

constexpr void __set__gradientImages(::ArrayW<HMUI::ImageView> value) ;

constexpr ::ArrayW<HMUI::ImageView> __get__gradientImages() const;

 UnityEngine::Color __declspec(property(get=__get__darkColor, put=__set__darkColor))  _darkColor;

constexpr void __set__darkColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__darkColor() const;

 UnityEngine::Color __declspec(property(get=__get__lightColor, put=__set__lightColor))  _lightColor;

constexpr void __set__lightColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__lightColor() const;

 System::Action_3<HMUI::ColorGradientSlider,UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> __declspec(property(get=__get_colorDidChangeEvent, put=__set_colorDidChangeEvent))  colorDidChangeEvent;

constexpr void __set_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider,UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> value) ;

constexpr System::Action_3<HMUI::ColorGradientSlider,UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> __get_colorDidChangeEvent() const;

static System::Text::StringBuilder __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder))  _stringBuilder;

static void __set__stringBuilder(System::Text::StringBuilder value) ;

static System::Text::StringBuilder __get__stringBuilder() ;


// Methods

/// @brief Method add_colorDidChangeEvent addr 0x1fae31c size 0xb4 virtual false final false
 void add_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider,UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method remove_colorDidChangeEvent addr 0x1fae3d0 size 0xb4 virtual false final false
 void remove_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider,UnityEngine::Color,GlobalNamespace::ColorChangeUIEventType> value) ;

/// @brief Method Awake addr 0x1fae484 size 0x98 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x1fae660 size 0x8c virtual true final false
 void OnDestroy() ;

/// @brief Method SetColors addr 0x1fae7a0 size 0x30 virtual false final false
 void SetColors(UnityEngine::Color color0, UnityEngine::Color color1) ;

/// @brief Method UpdateVisuals addr 0x1fae7d0 size 0x1a4 virtual true final false
 void UpdateVisuals() ;

/// @brief Method TextForNormalizedValue addr 0x1faef04 size 0x1a0 virtual true final false
 ::StringW TextForNormalizedValue(float_t normalizedValue) ;

/// @brief Method HandleNormalizedValueDidChange addr 0x1faf0a4 size 0x58 virtual false final false
 void HandleNormalizedValueDidChange(HMUI::TextSlider slider, float_t normalizedValue) ;

/// @brief Method OnPointerUp addr 0x1faf0fc size 0xa0 virtual true final false
 void OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit ColorGradientSlider() ;

/// @brief Method .ctor addr 0x1faf19c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ColorGradientSlider);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ColorGradientSlider, "HMUI", "ColorGradientSlider");
