#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
// Type: UnityEngine.UIElements::NavigationSubmitEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7347)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7347), inst: 4562 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7353))
// CS Name: UnityEngine.UIElements.NavigationSubmitEvent
class CORDL_TYPE NavigationSubmitEvent : public UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationSubmitEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NavigationSubmitEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent", modifiers: " const&", def_value: None }]
constexpr NavigationSubmitEvent(NavigationSubmitEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent", modifiers: "&&", def_value: None }]
constexpr NavigationSubmitEvent(NavigationSubmitEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigationSubmitEvent(void* ptr) noexcept : UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationSubmitEvent>(ptr) {
}


  constexpr NavigationSubmitEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigationSubmitEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigationSubmitEvent& operator=(NavigationSubmitEvent&& o) noexcept = default;
  constexpr NavigationSubmitEvent& operator=(NavigationSubmitEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NavigationSubmitEvent() ;

/// @brief Method .ctor addr 0x2cdbef8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::NavigationSubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::NavigationSubmitEvent, "UnityEngine.UIElements", "NavigationSubmitEvent");
