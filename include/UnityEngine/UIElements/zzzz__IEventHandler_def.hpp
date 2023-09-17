#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Type: UnityEngine.UIElements::IEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7309))
// CS Name: UnityEngine.UIElements.IEventHandler
class CORDL_TYPE IEventHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEventHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEventHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SendEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendEvent(::UnityEngine::UIElements::EventBase e) ;

/// @brief Method HandleEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleEvent(::UnityEngine::UIElements::EventBase evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEventHandler, "UnityEngine.UIElements", "IEventHandler");
