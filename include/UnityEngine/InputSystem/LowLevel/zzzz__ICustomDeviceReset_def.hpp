#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class ICustomDeviceReset;
}
// Type: UnityEngine.InputSystem.LowLevel::ICustomDeviceReset
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6578))
// CS Name: UnityEngine.InputSystem.LowLevel.ICustomDeviceReset
class CORDL_TYPE ICustomDeviceReset : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICustomDeviceReset() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICustomDeviceReset(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::ICustomDeviceReset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::ICustomDeviceReset, "UnityEngine.InputSystem.LowLevel", "ICustomDeviceReset");
