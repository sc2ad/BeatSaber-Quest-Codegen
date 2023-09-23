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
class ISubmitHandler;
}
// Type: UnityEngine.EventSystems::ISubmitHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13126))
// CS Name: UnityEngine.EventSystems.ISubmitHandler
class CORDL_TYPE ISubmitHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~ISubmitHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISubmitHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnSubmit addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::ISubmitHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::ISubmitHandler, "UnityEngine.EventSystems", "ISubmitHandler");
