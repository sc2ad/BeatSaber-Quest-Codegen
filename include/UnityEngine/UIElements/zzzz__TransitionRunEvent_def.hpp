#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionRunEvent;
}
// Type: UnityEngine.UIElements::TransitionRunEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7287)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7287), inst: 4985 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7288))
// CS Name: UnityEngine.UIElements.TransitionRunEvent
class CORDL_TYPE TransitionRunEvent : public UnityEngine::UIElements::TransitionEventBase_1<UnityEngine::UIElements::TransitionRunEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TransitionRunEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent", modifiers: " const&", def_value: None }]
constexpr TransitionRunEvent(TransitionRunEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent", modifiers: "&&", def_value: None }]
constexpr TransitionRunEvent(TransitionRunEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransitionRunEvent(void* ptr) noexcept : UnityEngine::UIElements::TransitionEventBase_1<UnityEngine::UIElements::TransitionRunEvent>(ptr) {
}


  constexpr TransitionRunEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransitionRunEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransitionRunEvent& operator=(TransitionRunEvent&& o) noexcept = default;
  constexpr TransitionRunEvent& operator=(TransitionRunEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TransitionRunEvent() ;

/// @brief Method .ctor addr 0x2cd7580 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TransitionRunEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TransitionRunEvent, "UnityEngine.UIElements", "TransitionRunEvent");
