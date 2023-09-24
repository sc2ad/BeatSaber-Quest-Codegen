#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__DragEventsProcessor__DragState;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class PointerLeaveEvent;
}
namespace UnityEngine::UIElements {
class DefaultDragAndDropClient;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__DragEventsProcessor__DragState;
}
namespace UnityEngine::UIElements {
class DragEventsProcessor;
}
// Type: ::DragState
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7055))
// CS Name: UnityEngine.UIElements.DragEventsProcessor::DragState
struct CORDL_TYPE UnityEngine__UIElements__DragEventsProcessor__DragState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__DragEventsProcessor__DragState(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__DragEventsProcessor__DragState(UnityEngine__UIElements__DragEventsProcessor__DragState const&) = default;
                    constexpr UnityEngine__UIElements__DragEventsProcessor__DragState(UnityEngine__UIElements__DragEventsProcessor__DragState&&) = default;
                    constexpr UnityEngine__UIElements__DragEventsProcessor__DragState& operator=(UnityEngine__UIElements__DragEventsProcessor__DragState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__DragEventsProcessor__DragState& operator=(UnityEngine__UIElements__DragEventsProcessor__DragState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__DragEventsProcessor__DragState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__DragEventsProcessor__DragState_Unwrapped : int32_t {
__None = 0,
__CanStartDrag = 1,
__Dragging = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__DragEventsProcessor__DragState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__DragEventsProcessor__DragState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState const None;

/// @brief Field CanStartDrag offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState const CanStartDrag;

/// @brief Field Dragging offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState const Dragging;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::DragEventsProcessor
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7056))
// CS Name: UnityEngine.UIElements.DragEventsProcessor
class CORDL_TYPE DragEventsProcessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DragState = UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DragEventsProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "DragEventsProcessor", modifiers: " const&", def_value: None }]
constexpr DragEventsProcessor(DragEventsProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DragEventsProcessor", modifiers: "&&", def_value: None }]
constexpr DragEventsProcessor(DragEventsProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DragEventsProcessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DragEventsProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DragEventsProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DragEventsProcessor& operator=(DragEventsProcessor&& o) noexcept = default;
  constexpr DragEventsProcessor& operator=(DragEventsProcessor const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_IsRegistered, put=__set_m_IsRegistered))  m_IsRegistered;

constexpr void __set_m_IsRegistered(bool value) ;

constexpr bool __get_m_IsRegistered() const;

 UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState __declspec(property(get=__get_m_DragState, put=__set_m_DragState))  m_DragState;

constexpr void __set_m_DragState(UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState __get_m_DragState() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Start, put=__set_m_Start))  m_Start;

constexpr void __set_m_Start(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Start() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Target() const;

 UnityEngine::UIElements::DefaultDragAndDropClient __declspec(property(get=__get_dragAndDropClient, put=__set_dragAndDropClient))  dragAndDropClient;

constexpr void __set_dragAndDropClient(UnityEngine::UIElements::DefaultDragAndDropClient value) ;

constexpr UnityEngine::UIElements::DefaultDragAndDropClient __get_dragAndDropClient() const;


// Properties

 bool __declspec(property(get=get_supportsDragEvents))  supportsDragEvents;

 bool __declspec(property(get=get_useDragEvents))  useDragEvents;

 bool __declspec(property(get=get_isEditorContext))  isEditorContext;


// Methods

/// @brief Method get_supportsDragEvents addr 0x2c94a14 size 0x8 virtual true final false
 bool get_supportsDragEvents() ;

/// @brief Method get_useDragEvents addr 0x2c92d14 size 0x30 virtual false final false
 bool get_useDragEvents() ;

/// @brief Method get_isEditorContext addr 0x2c94a1c size 0x120 virtual false final false
 bool get_isEditorContext() ;

static UnityEngine::UIElements::DragEventsProcessor New_ctor(UnityEngine::UIElements::VisualElement target) ;

/// @brief Method .ctor addr 0x2c91154 size 0x13c virtual false final false
 void _ctor(UnityEngine::UIElements::VisualElement target) ;

/// @brief Method RegisterCallbacksFromTarget addr 0x2c94de8 size 0x4 virtual false final false
 void RegisterCallbacksFromTarget(UnityEngine::UIElements::AttachToPanelEvent evt) ;

/// @brief Method RegisterCallbacksFromTarget addr 0x2c94b3c size 0x2ac virtual false final false
 void RegisterCallbacksFromTarget() ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x2c94dec size 0x8 virtual false final false
 void UnregisterCallbacksFromTarget(UnityEngine::UIElements::DetachFromPanelEvent evt) ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x2c94df4 size 0x398 virtual false final false
 void UnregisterCallbacksFromTarget(bool unregisterPanelEvents) ;

/// @brief Method CanStartDrag addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanStartDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method StartDrag addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::StartDragArgs StartDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method UpdateDrag addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::DragVisualMode UpdateDrag(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method OnDrop addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDrop(UnityEngine::Vector3 pointerPosition) ;

/// @brief Method ClearDragAndDropUI addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearDragAndDropUI() ;

/// @brief Method OnPointerDownEvent addr 0x2c9518c size 0x94 virtual false final false
 void OnPointerDownEvent(UnityEngine::UIElements::PointerDownEvent evt) ;

/// @brief Method OnPointerUpEvent addr 0x2c95220 size 0xc4 virtual false final false
 void OnPointerUpEvent(UnityEngine::UIElements::PointerUpEvent evt) ;

/// @brief Method OnPointerLeaveEvent addr 0x2c952e4 size 0x44 virtual false final false
 void OnPointerLeaveEvent(UnityEngine::UIElements::PointerLeaveEvent evt) ;

/// @brief Method OnPointerCancelEvent addr 0x2c95328 size 0x40 virtual false final false
 void OnPointerCancelEvent(UnityEngine::UIElements::PointerCancelEvent evt) ;

/// @brief Method OnPointerMoveEvent addr 0x2c95368 size 0x244 virtual false final false
 void OnPointerMoveEvent(UnityEngine::UIElements::PointerMoveEvent evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__DragEventsProcessor__DragState, "UnityEngine.UIElements", "DragEventsProcessor/DragState");
NEED_NO_BOX(UnityEngine::UIElements::DragEventsProcessor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DragEventsProcessor, "UnityEngine.UIElements", "DragEventsProcessor");
