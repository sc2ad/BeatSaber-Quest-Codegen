#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionCancelEvent;
}
// Type: UnityEngine.UIElements::TransitionCancelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7287), inst: 4983 }), TypeDefinitionIndex(TypeDefinitionIndex(7287))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7291))
// CS Name: UnityEngine.UIElements.TransitionCancelEvent
class CORDL_TYPE TransitionCancelEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionCancelEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TransitionCancelEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: " const&", def_value: None }]
constexpr TransitionCancelEvent(TransitionCancelEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "&&", def_value: None }]
constexpr TransitionCancelEvent(TransitionCancelEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransitionCancelEvent(void* ptr) noexcept : ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionCancelEvent>(ptr) {
}


  constexpr TransitionCancelEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransitionCancelEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransitionCancelEvent& operator=(TransitionCancelEvent&& o) noexcept = default;
  constexpr TransitionCancelEvent& operator=(TransitionCancelEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TransitionCancelEvent() ;

/// @brief Method .ctor addr 0x2cd7658 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::TransitionCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionCancelEvent, "UnityEngine.UIElements", "TransitionCancelEvent");
