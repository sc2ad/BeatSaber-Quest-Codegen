#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct TrickleDown;
}
namespace UnityEngine::UIElements {
class EventCallbackListPool;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackRegistry;
}
// Type: UnityEngine.UIElements::EventCallbackRegistry
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7266))
// CS Name: UnityEngine.UIElements.EventCallbackRegistry
class CORDL_TYPE EventCallbackRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EventCallbackRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackRegistry", modifiers: " const&", def_value: None }]
constexpr EventCallbackRegistry(EventCallbackRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackRegistry", modifiers: "&&", def_value: None }]
constexpr EventCallbackRegistry(EventCallbackRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventCallbackRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventCallbackRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventCallbackRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventCallbackRegistry& operator=(EventCallbackRegistry&& o) noexcept = default;
  constexpr EventCallbackRegistry& operator=(EventCallbackRegistry const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::EventCallbackListPool __declspec(property(get=__get_s_ListPool, put=__set_s_ListPool))  s_ListPool;

static void __set_s_ListPool(UnityEngine::UIElements::EventCallbackListPool value) ;

static UnityEngine::UIElements::EventCallbackListPool __get_s_ListPool() ;

 UnityEngine::UIElements::EventCallbackList __declspec(property(get=__get_m_Callbacks, put=__set_m_Callbacks))  m_Callbacks;

constexpr void __set_m_Callbacks(UnityEngine::UIElements::EventCallbackList value) ;

constexpr UnityEngine::UIElements::EventCallbackList __get_m_Callbacks() const;

 UnityEngine::UIElements::EventCallbackList __declspec(property(get=__get_m_TemporaryCallbacks, put=__set_m_TemporaryCallbacks))  m_TemporaryCallbacks;

constexpr void __set_m_TemporaryCallbacks(UnityEngine::UIElements::EventCallbackList value) ;

constexpr UnityEngine::UIElements::EventCallbackList __get_m_TemporaryCallbacks() const;

 int32_t __declspec(property(get=__get_m_IsInvoking, put=__set_m_IsInvoking))  m_IsInvoking;

constexpr void __set_m_IsInvoking(int32_t value) ;

constexpr int32_t __get_m_IsInvoking() const;


// Methods

/// @brief Method GetCallbackList addr 0x2cd4278 size 0x68 virtual false final false
static UnityEngine::UIElements::EventCallbackList GetCallbackList(UnityEngine::UIElements::EventCallbackList initializer) ;

/// @brief Method ReleaseCallbackList addr 0x2cd42e0 size 0x68 virtual false final false
static void ReleaseCallbackList(UnityEngine::UIElements::EventCallbackList toRelease) ;

// Ctor Parameters []
explicit EventCallbackRegistry() ;

/// @brief Method .ctor addr 0x2cd4348 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method GetCallbackListForWriting addr 0x2cd4364 size 0xb0 virtual false final false
 UnityEngine::UIElements::EventCallbackList GetCallbackListForWriting() ;

/// @brief Method GetCallbackListForReading addr 0x2cd4414 size 0x1c virtual false final false
 UnityEngine::UIElements::EventCallbackList GetCallbackListForReading() ;

/// @brief Method UnregisterCallback addr 0x2cd4430 size 0x54 virtual false final false
 bool UnregisterCallback(int64_t eventTypeId, System::Delegate callback, UnityEngine::UIElements::TrickleDown useTrickleDown) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEventType>
 void RegisterCallback(UnityEngine::UIElements::EventCallback_1<TEventType> callback, UnityEngine::UIElements::TrickleDown useTrickleDown, UnityEngine::UIElements::InvokePolicy invokePolicy) ;

/// @brief Method UnregisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEventType>
 bool UnregisterCallback(UnityEngine::UIElements::EventCallback_1<TEventType> callback, UnityEngine::UIElements::TrickleDown useTrickleDown) ;

/// @brief Method InvokeCallbacks addr 0x2cd4484 size 0x198 virtual false final false
 void InvokeCallbacks(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::PropagationPhase propagationPhase) ;

/// @brief Method HasTrickleDownHandlers addr 0x2cd4634 size 0x20 virtual false final false
 bool HasTrickleDownHandlers() ;

/// @brief Method HasBubbleHandlers addr 0x2cd4654 size 0x20 virtual false final false
 bool HasBubbleHandlers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::EventCallbackRegistry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::EventCallbackRegistry, "UnityEngine.UIElements", "EventCallbackRegistry");
