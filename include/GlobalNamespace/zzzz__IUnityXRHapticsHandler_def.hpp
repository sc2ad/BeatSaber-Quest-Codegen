#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
// Type: ::IUnityXRHapticsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13913))
// CS Name: IUnityXRHapticsHandler
class CORDL_TYPE IUnityXRHapticsHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IUnityXRHapticsHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnityXRHapticsHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method TriggerHapticPulse addr 0x0 size 0xffffffffffffffff virtual true final false
 void TriggerHapticPulse(float_t strength, float_t duration) ;

/// @brief Method StopHaptics addr 0x0 size 0xffffffffffffffff virtual true final false
 void StopHaptics() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnityXRHapticsHandler, "", "IUnityXRHapticsHandler");
