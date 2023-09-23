#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_def.hpp"
#include <cstdint>
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
template<typename TEventType>
class EventCallback_1;
}
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallbackFunctor_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TEventType>
class EventCallbackFunctor_1<TEventType>;
}
// Type: UnityEngine.UIElements::EventCallbackFunctor`1
// Type: UnityEngine.UIElements::EventCallbackFunctor`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TEventType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7283)), TypeDefinitionIndex(TypeDefinitionIndex(7282))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7283), inst: 2 })
// CS Name: UnityEngine.UIElements.EventCallbackFunctor`1
class CORDL_TYPE EventCallbackFunctor_1<TEventType> : public UnityEngine::UIElements::EventCallbackFunctorBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EventCallbackFunctor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: " const&", def_value: None }]
constexpr EventCallbackFunctor_1(EventCallbackFunctor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctor_1", modifiers: "&&", def_value: None }]
constexpr EventCallbackFunctor_1(EventCallbackFunctor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventCallbackFunctor_1(void* ptr) noexcept : UnityEngine::UIElements::EventCallbackFunctorBase(ptr) {
}


  constexpr EventCallbackFunctor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventCallbackFunctor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventCallbackFunctor_1& operator=(EventCallbackFunctor_1&& o) noexcept = default;
  constexpr EventCallbackFunctor_1& operator=(EventCallbackFunctor_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::EventCallback_1<TEventType> __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(UnityEngine::UIElements::EventCallback_1<TEventType> value) ;

constexpr UnityEngine::UIElements::EventCallback_1<TEventType> __get_m_Callback() const;

 int64_t __declspec(property(get=__get_m_EventTypeId, put=__set_m_EventTypeId))  m_EventTypeId;

constexpr void __set_m_EventTypeId(int64_t value) ;

constexpr int64_t __get_m_EventTypeId() const;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "UnityEngine::UIElements::EventCallback_1<TEventType>", modifiers: "", def_value: None }, CppParam { name: "phase", ty: "UnityEngine::UIElements::CallbackPhase", modifiers: "", def_value: None }, CppParam { name: "invokePolicy", ty: "UnityEngine::UIElements::InvokePolicy", modifiers: "", def_value: None }]
explicit EventCallbackFunctor_1(UnityEngine::UIElements::EventCallback_1<TEventType> callback, UnityEngine::UIElements::CallbackPhase phase, UnityEngine::UIElements::InvokePolicy invokePolicy) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::EventCallback_1<TEventType> callback, UnityEngine::UIElements::CallbackPhase phase, UnityEngine::UIElements::InvokePolicy invokePolicy) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::PropagationPhase propagationPhase) ;

/// @brief Method IsEquivalentTo addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsEquivalentTo(int64_t eventTypeId, System::Delegate callback, UnityEngine::UIElements::CallbackPhase phase) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::EventCallbackFunctor_1, "UnityEngine.UIElements", "EventCallbackFunctor`1");
