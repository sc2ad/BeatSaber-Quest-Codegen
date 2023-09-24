#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__SelectionState;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
// Forward declare root types
namespace HMUI {
class Slider2D;
}
// Type: HMUI::Slider2D
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13612))
// CS Name: HMUI.Slider2D
class CORDL_TYPE Slider2D : public UnityEngine::UI::Selectable {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IBeginDragHandler
constexpr operator  UnityEngine::EventSystems::IBeginDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDragHandler
constexpr operator  UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr operator  UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ICanvasElement
constexpr operator  UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~Slider2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Slider2D", modifiers: " const&", def_value: None }]
constexpr Slider2D(Slider2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Slider2D", modifiers: "&&", def_value: None }]
constexpr Slider2D(Slider2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Slider2D(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr Slider2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Slider2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Slider2D& operator=(Slider2D&& o) noexcept = default;
  constexpr Slider2D& operator=(Slider2D const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__handleRect, put=__set__handleRect))  _handleRect;

constexpr void __set__handleRect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__handleRect() const;

 UnityEngine::Vector2 __declspec(property(get=__get__normalizedValue, put=__set__normalizedValue))  _normalizedValue;

constexpr void __set__normalizedValue(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__normalizedValue() const;

 System::Action_2<HMUI::Slider2D,UnityEngine::Vector2> __declspec(property(get=__get_normalizedValueDidChangeEvent, put=__set_normalizedValueDidChangeEvent))  normalizedValueDidChangeEvent;

constexpr void __set_normalizedValueDidChangeEvent(System::Action_2<HMUI::Slider2D,UnityEngine::Vector2> value) ;

constexpr System::Action_2<HMUI::Slider2D,UnityEngine::Vector2> __get_normalizedValueDidChangeEvent() const;

 UnityEngine::RectTransform __declspec(property(get=__get__containerRect, put=__set__containerRect))  _containerRect;

constexpr void __set__containerRect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__containerRect() const;

 UnityEngine::UI::Graphic __declspec(property(get=__get__handleGraphic, put=__set__handleGraphic))  _handleGraphic;

constexpr void __set__handleGraphic(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get__handleGraphic() const;

 UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get__tracker, put=__set__tracker))  _tracker;

constexpr void __set__tracker(UnityEngine::DrivenRectTransformTracker value) ;

constexpr UnityEngine::DrivenRectTransformTracker __get__tracker() const;


// Properties

 UnityEngine::RectTransform __declspec(property(get=get_handleRect, put=set_handleRect))  handleRect;

 UnityEngine::Color __declspec(property(put=set_handleColor))  handleColor;

 UnityEngine::Vector2 __declspec(property(get=get_normalizedValue, put=set_normalizedValue))  normalizedValue;


// Methods

/// @brief Method get_handleRect addr 0x1fafa7c size 0x8 virtual false final false
 UnityEngine::RectTransform get_handleRect() ;

/// @brief Method set_handleRect addr 0x1fafa84 size 0x88 virtual false final false
 void set_handleRect(UnityEngine::RectTransform value) ;

/// @brief Method set_handleColor addr 0x1fafc44 size 0xc4 virtual false final false
 void set_handleColor(UnityEngine::Color value) ;

/// @brief Method get_normalizedValue addr 0x1fafd08 size 0xc virtual false final false
 UnityEngine::Vector2 get_normalizedValue() ;

/// @brief Method set_normalizedValue addr 0x1fafd14 size 0x8 virtual false final false
 void set_normalizedValue(UnityEngine::Vector2 value) ;

/// @brief Method add_normalizedValueDidChangeEvent addr 0x1fafdcc size 0xb4 virtual false final false
 void add_normalizedValueDidChangeEvent(System::Action_2<HMUI::Slider2D,UnityEngine::Vector2> value) ;

/// @brief Method remove_normalizedValueDidChangeEvent addr 0x1fafe80 size 0xb4 virtual false final false
 void remove_normalizedValueDidChangeEvent(System::Action_2<HMUI::Slider2D,UnityEngine::Vector2> value) ;

/// @brief Method Rebuild addr 0x1faff34 size 0x4 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method LayoutComplete addr 0x1faff38 size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x1faff3c size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method OnEnable addr 0x1faff40 size 0x44 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1faff84 size 0x24 virtual true final false
 void OnDisable() ;

/// @brief Method UpdateCachedReferences addr 0x1fafb0c size 0x138 virtual false final false
 void UpdateCachedReferences() ;

/// @brief Method SetNormalizedValue addr 0x1faffa8 size 0x8 virtual false final false
 void SetNormalizedValue(UnityEngine::Vector2 input) ;

/// @brief Method SetNormalizedValue addr 0x1fafd1c size 0xb0 virtual false final false
 void SetNormalizedValue(UnityEngine::Vector2 input, bool sendCallback) ;

/// @brief Method OnRectTransformDimensionsChange addr 0x1faffb0 size 0x44 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method UpdateVisuals addr 0x1fafff4 size 0x188 virtual true final false
 void UpdateVisuals() ;

/// @brief Method UpdateDrag addr 0x1fb017c size 0x230 virtual false final false
 void UpdateDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method MayDrag addr 0x1fb03ac size 0x64 virtual false final false
 bool MayDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x1fb0410 size 0x80 virtual true final false
 void OnBeginDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x1fb0490 size 0x90 virtual true final false
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x1fb0520 size 0xa0 virtual true final false
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerEnter addr 0x1fb05c0 size 0x8 virtual true final false
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method DoStateTransition addr 0x1fb05c8 size 0xc virtual true final false
 void DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

/// @brief Method OnInitializePotentialDrag addr 0x1fb05d4 size 0x18 virtual true final false
 void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

static HMUI::Slider2D New_ctor() ;

/// @brief Method .ctor addr 0x1fb05ec size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x1fb0644 size 0x8 virtual true final true
 UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::Slider2D);
DEFINE_IL2CPP_ARG_TYPE(HMUI::Slider2D, "HMUI", "Slider2D");
