#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionStartEvent;
}
// Type: UnityEngine.UIElements::TransitionStartEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7287), inst: 4986 }), TypeDefinitionIndex(TypeDefinitionIndex(7287))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7289))
// CS Name: UnityEngine.UIElements.TransitionStartEvent
class CORDL_TYPE TransitionStartEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionStartEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TransitionStartEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: " const&", def_value: None }]
constexpr TransitionStartEvent(TransitionStartEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: "&&", def_value: None }]
constexpr TransitionStartEvent(TransitionStartEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransitionStartEvent(void* ptr) noexcept : ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionStartEvent>(ptr) {
}


  constexpr TransitionStartEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransitionStartEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransitionStartEvent& operator=(TransitionStartEvent&& o) noexcept = default;
  constexpr TransitionStartEvent& operator=(TransitionStartEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TransitionStartEvent() ;

/// @brief Method .ctor addr 0x2cd75c8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::TransitionStartEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionStartEvent, "UnityEngine.UIElements", "TransitionStartEvent");
