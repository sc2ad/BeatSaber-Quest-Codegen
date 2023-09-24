#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
// Forward declare root types
namespace HMUI {
class TextSlider;
}
// Type: HMUI::TextSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13613))
// CS Name: HMUI.TextSlider
class CORDL_TYPE TextSlider : public UnityEngine::UI::Selectable {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x140};

virtual ~TextSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSlider", modifiers: " const&", def_value: None }]
constexpr TextSlider(TextSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSlider", modifiers: "&&", def_value: None }]
constexpr TextSlider(TextSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextSlider(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr TextSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextSlider& operator=(TextSlider&& o) noexcept = default;
  constexpr TextSlider& operator=(TextSlider const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__valueText, put=__set__valueText))  _valueText;

constexpr void __set__valueText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__valueText() const;

 UnityEngine::RectTransform __declspec(property(get=__get__handleRect, put=__set__handleRect))  _handleRect;

constexpr void __set__handleRect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__handleRect() const;

 bool __declspec(property(get=__get__enableDragging, put=__set__enableDragging))  _enableDragging;

constexpr void __set__enableDragging(bool value) ;

constexpr bool __get__enableDragging() const;

 float_t __declspec(property(get=__get__handleSize, put=__set__handleSize))  _handleSize;

constexpr void __set__handleSize(float_t value) ;

constexpr float_t __get__handleSize() const;

 float_t __declspec(property(get=__get__valueSize, put=__set__valueSize))  _valueSize;

constexpr void __set__valueSize(float_t value) ;

constexpr float_t __get__valueSize() const;

 float_t __declspec(property(get=__get__separatorSize, put=__set__separatorSize))  _separatorSize;

constexpr void __set__separatorSize(float_t value) ;

constexpr float_t __get__separatorSize() const;

 int32_t __declspec(property(get=__get__numberOfSteps, put=__set__numberOfSteps))  _numberOfSteps;

constexpr void __set__numberOfSteps(int32_t value) ;

constexpr int32_t __get__numberOfSteps() const;

 float_t __declspec(property(get=__get__normalizedValue, put=__set__normalizedValue))  _normalizedValue;

constexpr void __set__normalizedValue(float_t value) ;

constexpr float_t __get__normalizedValue() const;

 System::Action_2<HMUI::TextSlider,float_t> __declspec(property(get=__get_normalizedValueDidChangeEvent, put=__set_normalizedValueDidChangeEvent))  normalizedValueDidChangeEvent;

constexpr void __set_normalizedValueDidChangeEvent(System::Action_2<HMUI::TextSlider,float_t> value) ;

constexpr System::Action_2<HMUI::TextSlider,float_t> __get_normalizedValueDidChangeEvent() const;

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

 UnityEngine::Color __declspec(property(put=set_valueTextColor))  valueTextColor;

 UnityEngine::RectTransform __declspec(property(get=get_handleRect, put=set_handleRect))  handleRect;

 UnityEngine::Color __declspec(property(put=set_handleColor))  handleColor;

 float_t __declspec(property(get=get_handleSize, put=set_handleSize))  handleSize;

 float_t __declspec(property(get=get_valueSize, put=set_valueSize))  valueSize;

 float_t __declspec(property(get=get_separatorSize, put=set_separatorSize))  separatorSize;

 int32_t __declspec(property(get=get_numberOfSteps, put=set_numberOfSteps))  numberOfSteps;

 float_t __declspec(property(get=get_normalizedValue, put=set_normalizedValue))  normalizedValue;


// Methods

/// @brief Method set_valueTextColor addr 0x1faeee0 size 0x24 virtual false final false
 void set_valueTextColor(UnityEngine::Color value) ;

/// @brief Method get_handleRect addr 0x1fb064c size 0x8 virtual false final false
 UnityEngine::RectTransform get_handleRect() ;

/// @brief Method set_handleRect addr 0x1fb0654 size 0x88 virtual false final false
 void set_handleRect(UnityEngine::RectTransform value) ;

/// @brief Method set_handleColor addr 0x1faee1c size 0xc4 virtual false final false
 void set_handleColor(UnityEngine::Color value) ;

/// @brief Method get_handleSize addr 0x1fb0814 size 0x8 virtual false final false
 float_t get_handleSize() ;

/// @brief Method set_handleSize addr 0x1fb081c size 0x80 virtual false final false
 void set_handleSize(float_t value) ;

/// @brief Method get_valueSize addr 0x1fb089c size 0x8 virtual false final false
 float_t get_valueSize() ;

/// @brief Method set_valueSize addr 0x1fb08a4 size 0x80 virtual false final false
 void set_valueSize(float_t value) ;

/// @brief Method get_separatorSize addr 0x1fb0924 size 0x8 virtual false final false
 float_t get_separatorSize() ;

/// @brief Method set_separatorSize addr 0x1fb092c size 0x80 virtual false final false
 void set_separatorSize(float_t value) ;

/// @brief Method get_numberOfSteps addr 0x1fb09ac size 0x8 virtual false final false
 int32_t get_numberOfSteps() ;

/// @brief Method set_numberOfSteps addr 0x1fae51c size 0x90 virtual false final false
 void set_numberOfSteps(int32_t value) ;

/// @brief Method get_normalizedValue addr 0x1faed64 size 0xb8 virtual false final false
 float_t get_normalizedValue() ;

/// @brief Method set_normalizedValue addr 0x1faf4f8 size 0x8 virtual false final false
 void set_normalizedValue(float_t value) ;

/// @brief Method add_normalizedValueDidChangeEvent addr 0x1fae5ac size 0xb4 virtual false final false
 void add_normalizedValueDidChangeEvent(System::Action_2<HMUI::TextSlider,float_t> value) ;

/// @brief Method remove_normalizedValueDidChangeEvent addr 0x1fae6ec size 0xb4 virtual false final false
 void remove_normalizedValueDidChangeEvent(System::Action_2<HMUI::TextSlider,float_t> value) ;

/// @brief Method Rebuild addr 0x1fb0a48 size 0x4 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method LayoutComplete addr 0x1fb0a4c size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x1fb0a50 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method OnEnable addr 0x1fb0a54 size 0x40 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1fb0a94 size 0x24 virtual true final false
 void OnDisable() ;

/// @brief Method UpdateCachedReferences addr 0x1fb06dc size 0x138 virtual false final false
 void UpdateCachedReferences() ;

/// @brief Method SetNormalizedValue addr 0x1fafa30 size 0x8 virtual false final false
 void SetNormalizedValue(float_t input) ;

/// @brief Method SetNormalizedValue addr 0x1fb09b4 size 0x94 virtual false final false
 void SetNormalizedValue(float_t input, bool sendCallback) ;

/// @brief Method OnRectTransformDimensionsChange addr 0x1fb0ab8 size 0x44 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method UpdateVisuals addr 0x1fae974 size 0x3f0 virtual true final false
 void UpdateVisuals() ;

/// @brief Method UpdateDrag addr 0x1fb0afc size 0x2e0 virtual false final false
 void UpdateDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method MayDrag addr 0x1fb0ddc size 0x64 virtual false final false
 bool MayDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x1fb0e40 size 0x88 virtual true final false
 void OnBeginDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x1fb0ec8 size 0x98 virtual true final false
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x1fb0f60 size 0xa0 virtual true final false
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnInitializePotentialDrag addr 0x1fb1000 size 0x18 virtual true final false
 void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method TextForNormalizedValue addr 0x1fb1018 size 0x1c virtual true final false
 ::StringW TextForNormalizedValue(float_t normalizedValue) ;

static HMUI::TextSlider New_ctor() ;

/// @brief Method .ctor addr 0x1faf1a0 size 0x78 virtual false final false
 void _ctor() ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x1fb1034 size 0x8 virtual true final true
 UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::TextSlider);
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSlider, "HMUI", "TextSlider");
