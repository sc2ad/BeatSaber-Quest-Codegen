#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionEndEvent;
}
// Type: UnityEngine.UIElements::TransitionEndEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7287)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7287), inst: 4984 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7290))
// CS Name: UnityEngine.UIElements.TransitionEndEvent
class CORDL_TYPE TransitionEndEvent : public UnityEngine::UIElements::TransitionEventBase_1<UnityEngine::UIElements::TransitionEndEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TransitionEndEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionEndEvent", modifiers: " const&", def_value: None }]
constexpr TransitionEndEvent(TransitionEndEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionEndEvent", modifiers: "&&", def_value: None }]
constexpr TransitionEndEvent(TransitionEndEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransitionEndEvent(void* ptr) noexcept : UnityEngine::UIElements::TransitionEventBase_1<UnityEngine::UIElements::TransitionEndEvent>(ptr) {
}


  constexpr TransitionEndEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransitionEndEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransitionEndEvent& operator=(TransitionEndEvent&& o) noexcept = default;
  constexpr TransitionEndEvent& operator=(TransitionEndEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TransitionEndEvent() ;

/// @brief Method .ctor addr 0x2cd7610 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TransitionEndEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TransitionEndEvent, "UnityEngine.UIElements", "TransitionEndEvent");
