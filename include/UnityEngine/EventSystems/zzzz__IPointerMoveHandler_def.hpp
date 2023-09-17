#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
// Type: UnityEngine.EventSystems::IPointerMoveHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13110))
// CS Name: UnityEngine.EventSystems.IPointerMoveHandler
class CORDL_TYPE IPointerMoveHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IPointerMoveHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPointerMoveHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnPointerMove addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPointerMove(::UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::IPointerMoveHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IPointerMoveHandler, "UnityEngine.EventSystems", "IPointerMoveHandler");
