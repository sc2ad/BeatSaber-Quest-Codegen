#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOutEvent;
}
// Type: UnityEngine.UIElements::MouseOutEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4511 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7325))
// CS Name: UnityEngine.UIElements.MouseOutEvent
class CORDL_TYPE MouseOutEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseOutEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseOutEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: " const&", def_value: None }]
constexpr MouseOutEvent(MouseOutEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: "&&", def_value: None }]
constexpr MouseOutEvent(MouseOutEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseOutEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::MouseOutEvent>(ptr) {
}


  constexpr MouseOutEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseOutEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseOutEvent& operator=(MouseOutEvent&& o) noexcept = default;
  constexpr MouseOutEvent& operator=(MouseOutEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::MouseOutEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cda948 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseOutEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseOutEvent, "UnityEngine.UIElements", "MouseOutEvent");
