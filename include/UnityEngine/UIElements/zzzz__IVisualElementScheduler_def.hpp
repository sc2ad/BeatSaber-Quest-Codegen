#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
struct TimerState;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementScheduler;
}
// Type: UnityEngine.UIElements::IVisualElementScheduler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6831))
// CS Name: UnityEngine.UIElements.IVisualElementScheduler
class CORDL_TYPE IVisualElementScheduler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVisualElementScheduler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVisualElementScheduler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::IVisualElementScheduledItem Execute(System::Action_1<UnityEngine::UIElements::TimerState> timerUpdateEvent) ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::IVisualElementScheduledItem Execute(System::Action updateEvent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IVisualElementScheduler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IVisualElementScheduler, "UnityEngine.UIElements", "IVisualElementScheduler");
