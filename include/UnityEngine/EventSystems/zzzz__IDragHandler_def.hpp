#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IDragHandler;
}
// Type: UnityEngine.EventSystems::IDragHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13118))
// CS Name: UnityEngine.EventSystems.IDragHandler
class CORDL_TYPE IDragHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IDragHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDragHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnDrag addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::IDragHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IDragHandler, "UnityEngine.EventSystems", "IDragHandler");
