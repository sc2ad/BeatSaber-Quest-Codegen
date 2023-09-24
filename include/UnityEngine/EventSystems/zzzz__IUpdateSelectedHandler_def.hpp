#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
// Type: UnityEngine.EventSystems::IUpdateSelectedHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13122))
// CS Name: UnityEngine.EventSystems.IUpdateSelectedHandler
class CORDL_TYPE IUpdateSelectedHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IUpdateSelectedHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUpdateSelectedHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnUpdateSelected addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnUpdateSelected(UnityEngine::EventSystems::BaseEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::IUpdateSelectedHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IUpdateSelectedHandler, "UnityEngine.EventSystems", "IUpdateSelectedHandler");
