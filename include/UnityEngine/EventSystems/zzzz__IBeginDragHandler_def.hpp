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
class IBeginDragHandler;
}
// Type: UnityEngine.EventSystems::IBeginDragHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13116))
// CS Name: UnityEngine.EventSystems.IBeginDragHandler
class CORDL_TYPE IBeginDragHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

~IBeginDragHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeginDragHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnBeginDrag addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::IBeginDragHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IBeginDragHandler, "UnityEngine.EventSystems", "IBeginDragHandler");
