#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseLeaveEvent;
}
// Type: UnityEngine.UIElements::MouseLeaveEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4508 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7321))
// CS Name: UnityEngine.UIElements.MouseLeaveEvent
class CORDL_TYPE MouseLeaveEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseLeaveEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseLeaveEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: " const&", def_value: None }]
constexpr MouseLeaveEvent(MouseLeaveEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: "&&", def_value: None }]
constexpr MouseLeaveEvent(MouseLeaveEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseLeaveEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseLeaveEvent>(ptr) {
}


  constexpr MouseLeaveEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseLeaveEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseLeaveEvent& operator=(MouseLeaveEvent&& o) noexcept = default;
  constexpr MouseLeaveEvent& operator=(MouseLeaveEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cda2e8 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cda33c size 0xc virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit MouseLeaveEvent() ;

/// @brief Method .ctor addr 0x2cda348 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseLeaveEvent, "UnityEngine.UIElements", "MouseLeaveEvent");
