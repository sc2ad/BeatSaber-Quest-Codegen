#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Type: UnityEngine.EventSystems::IEventSystemHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13109))
// CS Name: UnityEngine.EventSystems.IEventSystemHandler
class CORDL_TYPE IEventSystemHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEventSystemHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEventSystemHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::IEventSystemHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IEventSystemHandler, "UnityEngine.EventSystems", "IEventSystemHandler");
