#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
// Type: UnityEngine.InputSystem.LowLevel::IInputStateChangeMonitor
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6645))
// CS Name: UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor
class CORDL_TYPE IInputStateChangeMonitor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputStateChangeMonitor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputStateChangeMonitor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method NotifyControlStateChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyControlStateChanged(UnityEngine::InputSystem::InputControl control, double_t time, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) ;

/// @brief Method NotifyTimerExpired addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyTimerExpired(UnityEngine::InputSystem::InputControl control, double_t time, int64_t monitorIndex, int32_t timerIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor, "UnityEngine.InputSystem.LowLevel", "IInputStateChangeMonitor");
