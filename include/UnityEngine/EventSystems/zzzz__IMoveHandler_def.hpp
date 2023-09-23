#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
// Type: UnityEngine.EventSystems::IMoveHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13125))
// CS Name: UnityEngine.EventSystems.IMoveHandler
class CORDL_TYPE IMoveHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IMoveHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMoveHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnMove addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnMove(UnityEngine::EventSystems::AxisEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::IMoveHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IMoveHandler, "UnityEngine.EventSystems", "IMoveHandler");
