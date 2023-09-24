#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
struct TrickleDown;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
class EventCallbackRegistry;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CallbackEventHandler;
}
// Type: UnityEngine.UIElements::CallbackEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7310))
// CS Name: UnityEngine.UIElements.CallbackEventHandler
class CORDL_TYPE CallbackEventHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IEventHandler
constexpr operator  UnityEngine::UIElements::IEventHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CallbackEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbackEventHandler", modifiers: " const&", def_value: None }]
constexpr CallbackEventHandler(CallbackEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallbackEventHandler", modifiers: "&&", def_value: None }]
constexpr CallbackEventHandler(CallbackEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallbackEventHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CallbackEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallbackEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallbackEventHandler& operator=(CallbackEventHandler&& o) noexcept = default;
  constexpr CallbackEventHandler& operator=(CallbackEventHandler const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::EventCallbackRegistry __declspec(property(get=__get_m_CallbackRegistry, put=__set_m_CallbackRegistry))  m_CallbackRegistry;

constexpr void __set_m_CallbackRegistry(UnityEngine::UIElements::EventCallbackRegistry value) ;

constexpr UnityEngine::UIElements::EventCallbackRegistry __get_m_CallbackRegistry() const;


// Methods

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEventType>
 void RegisterCallback(UnityEngine::UIElements::EventCallback_1<TEventType> callback, UnityEngine::UIElements::TrickleDown useTrickleDown) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEventType>
 void RegisterCallback(UnityEngine::UIElements::EventCallback_1<TEventType> callback, UnityEngine::UIElements::InvokePolicy invokePolicy, UnityEngine::UIElements::TrickleDown useTrickleDown) ;

/// @brief Method UnregisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEventType>
 void UnregisterCallback(UnityEngine::UIElements::EventCallback_1<TEventType> callback, UnityEngine::UIElements::TrickleDown useTrickleDown) ;

/// @brief Method SendEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendEvent(UnityEngine::UIElements::EventBase e) ;

/// @brief Method SendEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendEvent(UnityEngine::UIElements::EventBase e, UnityEngine::UIElements::DispatchMode dispatchMode) ;

/// @brief Method HandleEventAtTargetPhase addr 0x2cd654c size 0x6c virtual false final false
 void HandleEventAtTargetPhase(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method HandleEvent addr 0x2cd95dc size 0x2c0 virtual true final false
 void HandleEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method HasTrickleDownHandlers addr 0x2cd57e4 size 0x28 virtual true final true
 bool HasTrickleDownHandlers() ;

/// @brief Method HasBubbleUpHandlers addr 0x2cd580c size 0x28 virtual true final true
 bool HasBubbleUpHandlers() ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2cd989c size 0x4 virtual true final false
 void ExecuteDefaultActionAtTarget(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultAction addr 0x2cd98a0 size 0x4 virtual true final false
 void ExecuteDefaultAction(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultActionDisabledAtTarget addr 0x2cd98a4 size 0x4 virtual true final false
 void ExecuteDefaultActionDisabledAtTarget(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultActionDisabled addr 0x2cd98a8 size 0x4 virtual true final false
 void ExecuteDefaultActionDisabled(UnityEngine::UIElements::EventBase evt) ;

static UnityEngine::UIElements::CallbackEventHandler New_ctor() ;

/// @brief Method .ctor addr 0x2cd98ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::CallbackEventHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::CallbackEventHandler, "UnityEngine.UIElements", "CallbackEventHandler");
