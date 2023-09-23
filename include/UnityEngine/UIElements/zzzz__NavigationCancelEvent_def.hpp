#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
// Type: UnityEngine.UIElements::NavigationCancelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7347)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7347), inst: 4560 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7352))
// CS Name: UnityEngine.UIElements.NavigationCancelEvent
class CORDL_TYPE NavigationCancelEvent : public UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationCancelEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NavigationCancelEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: " const&", def_value: None }]
constexpr NavigationCancelEvent(NavigationCancelEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "&&", def_value: None }]
constexpr NavigationCancelEvent(NavigationCancelEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigationCancelEvent(void* ptr) noexcept : UnityEngine::UIElements::NavigationEventBase_1<UnityEngine::UIElements::NavigationCancelEvent>(ptr) {
}


  constexpr NavigationCancelEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigationCancelEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigationCancelEvent& operator=(NavigationCancelEvent&& o) noexcept = default;
  constexpr NavigationCancelEvent& operator=(NavigationCancelEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NavigationCancelEvent() ;

/// @brief Method .ctor addr 0x2cdbeb0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::NavigationCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::NavigationCancelEvent, "UnityEngine.UIElements", "NavigationCancelEvent");
