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
class IPointerExitHandler;
}
// Type: UnityEngine.EventSystems::IPointerExitHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13112))
// CS Name: UnityEngine.EventSystems.IPointerExitHandler
class CORDL_TYPE IPointerExitHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IPointerExitHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPointerExitHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnPointerExit addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::IPointerExitHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IPointerExitHandler, "UnityEngine.EventSystems", "IPointerExitHandler");
