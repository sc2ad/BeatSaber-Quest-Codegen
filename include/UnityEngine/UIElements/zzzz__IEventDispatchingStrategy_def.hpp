#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
// Type: UnityEngine.UIElements::IEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7356))
// CS Name: UnityEngine.UIElements.IEventDispatchingStrategy
class CORDL_TYPE IEventDispatchingStrategy : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEventDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEventDispatchingStrategy(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CanDispatchEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanDispatchEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void DispatchEvent(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEventDispatchingStrategy, "UnityEngine.UIElements", "IEventDispatchingStrategy");
