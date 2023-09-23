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
class IPointerUpHandler;
}
// Type: UnityEngine.EventSystems::IPointerUpHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13114))
// CS Name: UnityEngine.EventSystems.IPointerUpHandler
class CORDL_TYPE IPointerUpHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IPointerUpHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPointerUpHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnPointerUp addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::IPointerUpHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IPointerUpHandler, "UnityEngine.EventSystems", "IPointerUpHandler");
