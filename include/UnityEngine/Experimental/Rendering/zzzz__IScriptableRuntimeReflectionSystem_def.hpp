#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
// Type: UnityEngine.Experimental.Rendering::IScriptableRuntimeReflectionSystem
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10344))
// CS Name: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
class CORDL_TYPE IScriptableRuntimeReflectionSystem : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IScriptableRuntimeReflectionSystem() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IScriptableRuntimeReflectionSystem(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method TickRealtimeProbes addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TickRealtimeProbes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem, "UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem");
