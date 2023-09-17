#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
// Forward declare root types
namespace HMUI {
class CircleSlider;
}
// Type: HMUI::CircleSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13607))
// CS Name: HMUI.CircleSlider
class CORDL_TYPE CircleSlider : public ::UnityEngine::UI::Selectable {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IBeginDragHandler
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IDragHandler
constexpr operator  ::UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr operator  ::UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::ICanvasElement
constexpr operator  ::UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~CircleSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CircleSlider", modifiers: " const&", def_value: None }]
constexpr CircleSlider(CircleSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CircleSlider", modifiers: "&&", def_value: None }]
constexpr CircleSlider(CircleSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CircleSlider(void* ptr) noexcept : ::UnityEngine::UI::Selectable(ptr) {
}


  constexpr CircleSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CircleSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CircleSlider& operator=(CircleSlider&& o) noexcept = default;
  constexpr CircleSlider& operator=(CircleSlider const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RectTransform __declspec(property(get=__get__handleRect, put=__set__handleRect))  _handleRect;

constexpr void __set__handleRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__handleRect() const;

 float_t __declspec(property(get=__get__cursorRadius, put=__set__cursorRadius))  _cursorRadius;

constexpr void __set__cursorRadius(float_t value) ;

constexpr float_t __get__cursorRadius() const;

 float_t __declspec(property(get=__get__normalizedValue, put=__set__normalizedValue))  _normalizedValue;

constexpr void __set__normalizedValue(float_t value) ;

constexpr float_t __get__normalizedValue() const;

 ::System::Action_2<::HMUI::CircleSlider,float_t> __declspec(property(get=__get_normalizedValueDidChangeEvent, put=__set_normalizedValueDidChangeEvent))  normalizedValueDidChangeEvent;

constexpr void __set_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::CircleSlider,float_t> value) ;

constexpr ::System::Action_2<::HMUI::CircleSlider,float_t> __get_normalizedValueDidChangeEvent() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__containerRect, put=__set__containerRect))  _containerRect;

constexpr void __set__containerRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__containerRect() const;

 ::UnityEngine::UI::Graphic __declspec(property(get=__get__handleGraphic, put=__set__handleGraphic))  _handleGraphic;

constexpr void __set__handleGraphic(::UnityEngine::UI::Graphic value) ;

constexpr ::UnityEngine::UI::Graphic __get__handleGraphic() const;

 ::UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get__tracker, put=__set__tracker))  _tracker;

constexpr void __set__tracker(::UnityEngine::DrivenRectTransformTracker value) ;

constexpr ::UnityEngine::DrivenRectTransformTracker __get__tracker() const;


// Properties

 ::UnityEngine::RectTransform __declspec(property(get=get_handleRect, put=set_handleRect))  handleRect;

 ::UnityEngine::Color __declspec(property(put=set_handleColor))  handleColor;

 float_t __declspec(property(get=get_normalizedValue, put=set_normalizedValue))  normalizedValue;


// Methods

/// @brief Method get_handleRect addr 0x1fad710 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_handleRect() ;

/// @brief Method set_handleRect addr 0x1fad718 size 0x88 virtual false final false
 void set_handleRect(::UnityEngine::RectTransform value) ;

/// @brief Method set_handleColor addr 0x1fad8d8 size 0xc4 virtual false final false
 void set_handleColor(::UnityEngine::Color value) ;

/// @brief Method get_normalizedValue addr 0x1fad99c size 0x8 virtual false final false
 float_t get_normalizedValue() ;

/// @brief Method set_normalizedValue addr 0x1fad9a4 size 0x38 virtual false final false
 void set_normalizedValue(float_t value) ;

/// @brief Method add_normalizedValueDidChangeEvent addr 0x1fada58 size 0xb4 virtual false final false
 void add_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::CircleSlider,float_t> value) ;

/// @brief Method remove_normalizedValueDidChangeEvent addr 0x1fadb0c size 0xb4 virtual false final false
 void remove_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::CircleSlider,float_t> value) ;

/// @brief Method Rebuild addr 0x1fadbc0 size 0x4 virtual true final false
 void Rebuild(::UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method LayoutComplete addr 0x1fadbc4 size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x1fadbc8 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method OnEnable addr 0x1fadbcc size 0x68 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1fadc34 size 0x24 virtual true final false
 void OnDisable() ;

/// @brief Method UpdateCachedReferences addr 0x1fad7a0 size 0x138 virtual false final false
 void UpdateCachedReferences() ;

/// @brief Method SetNormalizedValue addr 0x1fadc58 size 0x8 virtual false final false
 void SetNormalizedValue(float_t input) ;

/// @brief Method SetNormalizedValue addr 0x1fad9dc size 0x7c virtual false final false
 void SetNormalizedValue(float_t input, bool sendCallback) ;

/// @brief Method OnRectTransformDimensionsChange addr 0x1fadc60 size 0x44 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method UpdateVisuals addr 0x1fadca4 size 0x168 virtual true final false
 void UpdateVisuals() ;

/// @brief Method UpdateDrag addr 0x1fade0c size 0x27c virtual false final false
 void UpdateDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method MayDrag addr 0x1fae088 size 0x64 virtual false final false
 bool MayDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x1fae0ec size 0x80 virtual true final false
 void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x1fae16c size 0x90 virtual true final false
 void OnDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x1fae1fc size 0xa0 virtual true final false
 void OnPointerDown(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnInitializePotentialDrag addr 0x1fae29c size 0x18 virtual true final false
 void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

// Ctor Parameters []
explicit CircleSlider() ;

/// @brief Method .ctor addr 0x1fae2b4 size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x1fae314 size 0x8 virtual true final true
 ::UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::CircleSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CircleSlider, "HMUI", "CircleSlider");
