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
class IDropHandler;
}
// Type: UnityEngine.EventSystems::IDropHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13120))
// CS Name: UnityEngine.EventSystems.IDropHandler
class CORDL_TYPE IDropHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IDropHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDropHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnDrop addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDrop(::UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::IDropHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IDropHandler, "UnityEngine.EventSystems", "IDropHandler");
