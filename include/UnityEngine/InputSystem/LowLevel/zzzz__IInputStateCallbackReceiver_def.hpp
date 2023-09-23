#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
// Type: UnityEngine.InputSystem.LowLevel::IInputStateCallbackReceiver
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6644))
// CS Name: UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver
class CORDL_TYPE IInputStateCallbackReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputStateCallbackReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputStateCallbackReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnNextUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNextUpdate() ;

/// @brief Method OnStateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method GetStateOffsetForEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetStateOffsetForEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver, "UnityEngine.InputSystem.LowLevel", "IInputStateCallbackReceiver");
