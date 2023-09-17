#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct CallbackPhase;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
// Type: UnityEngine.UIElements::EventCallbackFunctorBase
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7282))
// CS Name: UnityEngine.UIElements.EventCallbackFunctorBase
class CORDL_TYPE EventCallbackFunctorBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EventCallbackFunctorBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctorBase", modifiers: " const&", def_value: None }]
constexpr EventCallbackFunctorBase(EventCallbackFunctorBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctorBase", modifiers: "&&", def_value: None }]
constexpr EventCallbackFunctorBase(EventCallbackFunctorBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventCallbackFunctorBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventCallbackFunctorBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventCallbackFunctorBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventCallbackFunctorBase& operator=(EventCallbackFunctorBase&& o) noexcept = default;
  constexpr EventCallbackFunctorBase& operator=(EventCallbackFunctorBase const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::CallbackPhase __declspec(property(get=__get__phase_k__BackingField, put=__set__phase_k__BackingField))  _phase_k__BackingField;

constexpr void __set__phase_k__BackingField(::UnityEngine::UIElements::CallbackPhase value) ;

constexpr ::UnityEngine::UIElements::CallbackPhase __get__phase_k__BackingField() const;

 ::UnityEngine::UIElements::InvokePolicy __declspec(property(get=__get__invokePolicy_k__BackingField, put=__set__invokePolicy_k__BackingField))  _invokePolicy_k__BackingField;

constexpr void __set__invokePolicy_k__BackingField(::UnityEngine::UIElements::InvokePolicy value) ;

constexpr ::UnityEngine::UIElements::InvokePolicy __get__invokePolicy_k__BackingField() const;


// Properties

 ::UnityEngine::UIElements::CallbackPhase __declspec(property(get=get_phase))  phase;

 ::UnityEngine::UIElements::InvokePolicy __declspec(property(get=get_invokePolicy))  invokePolicy;


// Methods

/// @brief Method get_phase addr 0x2cd6cc8 size 0x8 virtual false final false
 ::UnityEngine::UIElements::CallbackPhase get_phase() ;

/// @brief Method get_invokePolicy addr 0x2cd6cd0 size 0x8 virtual false final false
 ::UnityEngine::UIElements::InvokePolicy get_invokePolicy() ;

// Ctor Parameters [CppParam { name: "phase", ty: "::UnityEngine::UIElements::CallbackPhase", modifiers: "", def_value: None }, CppParam { name: "invokePolicy", ty: "::UnityEngine::UIElements::InvokePolicy", modifiers: "", def_value: None }]
explicit EventCallbackFunctorBase(::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy) ;

/// @brief Method .ctor addr 0x2cd6cd8 size 0x2c virtual false final false
 void _ctor(::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase) ;

/// @brief Method IsEquivalentTo addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate callback, ::UnityEngine::UIElements::CallbackPhase phase) ;

/// @brief Method PhaseMatches addr 0x2cd6d04 size 0x3c virtual false final false
 bool PhaseMatches(::UnityEngine::UIElements::PropagationPhase propagationPhase) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackFunctorBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackFunctorBase, "UnityEngine.UIElements", "EventCallbackFunctorBase");
