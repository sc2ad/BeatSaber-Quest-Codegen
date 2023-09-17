#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::UIElements {
class PropagationPaths;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDebugger;
}
// Type: UnityEngine.UIElements::EventDebugger
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7454))
// CS Name: UnityEngine.UIElements.EventDebugger
class CORDL_TYPE EventDebugger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EventDebugger() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDebugger", modifiers: " const&", def_value: None }]
constexpr EventDebugger(EventDebugger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDebugger", modifiers: "&&", def_value: None }]
constexpr EventDebugger(EventDebugger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventDebugger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventDebugger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventDebugger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventDebugger& operator=(EventDebugger&& o) noexcept = default;
  constexpr EventDebugger& operator=(EventDebugger const& o) noexcept = default;
                


// Methods

/// @brief Method LogPropagationPaths addr 0x2d0d310 size 0x4 virtual false final false
static void LogPropagationPaths(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::PropagationPaths paths) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::EventDebugger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDebugger, "UnityEngine.UIElements", "EventDebugger");
