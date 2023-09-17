#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class BuiltinRuntimeReflectionSystem;
}
// Type: UnityEngine.Experimental.Rendering::BuiltinRuntimeReflectionSystem
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10346))
// CS Name: UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
class CORDL_TYPE BuiltinRuntimeReflectionSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem
constexpr operator  ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BuiltinRuntimeReflectionSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinRuntimeReflectionSystem", modifiers: " const&", def_value: None }]
constexpr BuiltinRuntimeReflectionSystem(BuiltinRuntimeReflectionSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinRuntimeReflectionSystem", modifiers: "&&", def_value: None }]
constexpr BuiltinRuntimeReflectionSystem(BuiltinRuntimeReflectionSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BuiltinRuntimeReflectionSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BuiltinRuntimeReflectionSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BuiltinRuntimeReflectionSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BuiltinRuntimeReflectionSystem& operator=(BuiltinRuntimeReflectionSystem&& o) noexcept = default;
  constexpr BuiltinRuntimeReflectionSystem& operator=(BuiltinRuntimeReflectionSystem const& o) noexcept = default;
                


// Methods

/// @brief Method TickRealtimeProbes addr 0x2b7b520 size 0x28 virtual true final true
 bool TickRealtimeProbes() ;

/// @brief Method Dispose addr 0x2b7b570 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2b7b574 size 0x4 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method BuiltinUpdate addr 0x2b7b548 size 0x28 virtual false final false
static bool BuiltinUpdate() ;

/// @brief Method Internal_BuiltinRuntimeReflectionSystem_New addr 0x2b7b578 size 0x5c virtual false final false
static ::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New() ;

// Ctor Parameters []
explicit BuiltinRuntimeReflectionSystem() ;

/// @brief Method .ctor addr 0x2b7b5d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
