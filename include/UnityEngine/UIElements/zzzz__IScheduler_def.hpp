#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class ScheduledItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IScheduler;
}
// Type: UnityEngine.UIElements::IScheduler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7027))
// CS Name: UnityEngine.UIElements.IScheduler
class CORDL_TYPE IScheduler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IScheduler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IScheduler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Unschedule addr 0x0 size 0xffffffffffffffff virtual true final false
 void Unschedule(UnityEngine::UIElements::ScheduledItem item) ;

/// @brief Method Schedule addr 0x0 size 0xffffffffffffffff virtual true final false
 void Schedule(UnityEngine::UIElements::ScheduledItem item) ;

/// @brief Method UpdateScheduledEvents addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateScheduledEvents() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IScheduler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IScheduler, "UnityEngine.UIElements", "IScheduler");
