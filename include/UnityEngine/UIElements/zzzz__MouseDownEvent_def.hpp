#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
// Type: UnityEngine.UIElements::MouseDownEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4505 }), TypeDefinitionIndex(TypeDefinitionIndex(7314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7315))
// CS Name: UnityEngine.UIElements.MouseDownEvent
class CORDL_TYPE MouseDownEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseDownEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseDownEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseDownEvent", modifiers: " const&", def_value: None }]
constexpr MouseDownEvent(MouseDownEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseDownEvent", modifiers: "&&", def_value: None }]
constexpr MouseDownEvent(MouseDownEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseDownEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseDownEvent>(ptr) {
}


  constexpr MouseDownEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseDownEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseDownEvent& operator=(MouseDownEvent&& o) noexcept = default;
  constexpr MouseDownEvent& operator=(MouseDownEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cd9aac size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd9b00 size 0xc virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::MouseDownEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd9b0c size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method MakeFromPointerEvent addr 0x2cd9b60 size 0x18c virtual false final false
static UnityEngine::UIElements::MouseDownEvent MakeFromPointerEvent(UnityEngine::UIElements::IPointerEvent pointerEvent) ;

/// @brief Method GetPooled addr 0x2cd7ee8 size 0x4 virtual false final false
static UnityEngine::UIElements::MouseDownEvent GetPooled(UnityEngine::UIElements::PointerDownEvent pointerEvent) ;

/// @brief Method GetPooled addr 0x2cd86b4 size 0x4 virtual false final false
static UnityEngine::UIElements::MouseDownEvent GetPooled(UnityEngine::UIElements::PointerMoveEvent pointerEvent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseDownEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseDownEvent, "UnityEngine.UIElements", "MouseDownEvent");
