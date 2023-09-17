#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
// Type: UnityEngine.EventSystems::IScrollHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13121))
// CS Name: UnityEngine.EventSystems.IScrollHandler
class CORDL_TYPE IScrollHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IScrollHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IScrollHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnScroll addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnScroll(::UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::IScrollHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IScrollHandler, "UnityEngine.EventSystems", "IScrollHandler");
