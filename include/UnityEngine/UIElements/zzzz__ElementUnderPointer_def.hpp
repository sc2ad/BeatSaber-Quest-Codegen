#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ElementUnderPointer;
}
// Type: UnityEngine.UIElements::ElementUnderPointer
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7255))
// CS Name: UnityEngine.UIElements.ElementUnderPointer
class CORDL_TYPE ElementUnderPointer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ElementUnderPointer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElementUnderPointer", modifiers: " const&", def_value: None }]
constexpr ElementUnderPointer(ElementUnderPointer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElementUnderPointer", modifiers: "&&", def_value: None }]
constexpr ElementUnderPointer(ElementUnderPointer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElementUnderPointer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ElementUnderPointer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElementUnderPointer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElementUnderPointer& operator=(ElementUnderPointer&& o) noexcept = default;
  constexpr ElementUnderPointer& operator=(ElementUnderPointer const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_PendingTopElementUnderPointer, put=__set_m_PendingTopElementUnderPointer))  m_PendingTopElementUnderPointer;

constexpr void __set_m_PendingTopElementUnderPointer(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_m_PendingTopElementUnderPointer() const;

 ::ArrayW<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_TopElementUnderPointer, put=__set_m_TopElementUnderPointer))  m_TopElementUnderPointer;

constexpr void __set_m_TopElementUnderPointer(::ArrayW<UnityEngine::UIElements::VisualElement> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VisualElement> __get_m_TopElementUnderPointer() const;

 ::ArrayW<UnityEngine::UIElements::IPointerEvent> __declspec(property(get=__get_m_TriggerPointerEvent, put=__set_m_TriggerPointerEvent))  m_TriggerPointerEvent;

constexpr void __set_m_TriggerPointerEvent(::ArrayW<UnityEngine::UIElements::IPointerEvent> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::IPointerEvent> __get_m_TriggerPointerEvent() const;

 ::ArrayW<UnityEngine::UIElements::IMouseEvent> __declspec(property(get=__get_m_TriggerMouseEvent, put=__set_m_TriggerMouseEvent))  m_TriggerMouseEvent;

constexpr void __set_m_TriggerMouseEvent(::ArrayW<UnityEngine::UIElements::IMouseEvent> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::IMouseEvent> __get_m_TriggerMouseEvent() const;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_m_PickingPointerPositions, put=__set_m_PickingPointerPositions))  m_PickingPointerPositions;

constexpr void __set_m_PickingPointerPositions(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get_m_PickingPointerPositions() const;

 ::ArrayW<bool> __declspec(property(get=__get_m_IsPickingPointerTemporaries, put=__set_m_IsPickingPointerTemporaries))  m_IsPickingPointerTemporaries;

constexpr void __set_m_IsPickingPointerTemporaries(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_m_IsPickingPointerTemporaries() const;


// Methods

/// @brief Method GetTopElementUnderPointer addr 0x2cd0bb4 size 0x74 virtual false final false
 UnityEngine::UIElements::VisualElement GetTopElementUnderPointer(int32_t pointerId, ByRef<UnityEngine::Vector2> pickPosition, ByRef<bool> isTemporary) ;

/// @brief Method GetTopElementUnderPointer addr 0x2cd0c28 size 0x30 virtual false final false
 UnityEngine::UIElements::VisualElement GetTopElementUnderPointer(int32_t pointerId) ;

/// @brief Method SetElementUnderPointer addr 0x2cd0c58 size 0x160 virtual false final false
 void SetElementUnderPointer(UnityEngine::UIElements::VisualElement newElementUnderPointer, int32_t pointerId, UnityEngine::Vector2 pointerPos) ;

/// @brief Method GetEventPointerPosition addr 0x2cd0db8 size 0x1b8 virtual false final false
 UnityEngine::Vector2 GetEventPointerPosition(UnityEngine::UIElements::EventBase triggerEvent) ;

/// @brief Method SetTemporaryElementUnderPointer addr 0x2cd0f70 size 0x8 virtual false final false
 void SetTemporaryElementUnderPointer(UnityEngine::UIElements::VisualElement newElementUnderPointer, int32_t pointerId, UnityEngine::UIElements::EventBase triggerEvent) ;

/// @brief Method SetElementUnderPointer addr 0x2cd11c4 size 0x8 virtual false final false
 void SetElementUnderPointer(UnityEngine::UIElements::VisualElement newElementUnderPointer, int32_t pointerId, UnityEngine::UIElements::EventBase triggerEvent) ;

/// @brief Method SetElementUnderPointer addr 0x2cd0f78 size 0x24c virtual false final false
 void SetElementUnderPointer(UnityEngine::UIElements::VisualElement newElementUnderPointer, int32_t pointerId, UnityEngine::UIElements::EventBase triggerEvent, bool temporary) ;

/// @brief Method CommitElementUnderPointers addr 0x2cd11cc size 0xc54 virtual false final false
 void CommitElementUnderPointers(UnityEngine::UIElements::EventDispatcher dispatcher, UnityEngine::UIElements::ContextType contextType) ;

// Ctor Parameters []
explicit ElementUnderPointer() ;

/// @brief Method .ctor addr 0x2cd2594 size 0x15c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ElementUnderPointer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ElementUnderPointer, "UnityEngine.UIElements", "ElementUnderPointer");
