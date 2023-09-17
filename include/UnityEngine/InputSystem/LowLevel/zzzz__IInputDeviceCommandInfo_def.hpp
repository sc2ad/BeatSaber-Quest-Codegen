#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
// Type: UnityEngine.InputSystem.LowLevel::IInputDeviceCommandInfo
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6549))
// CS Name: UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo
class CORDL_TYPE IInputDeviceCommandInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputDeviceCommandInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputDeviceCommandInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_typeStatic addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo, "UnityEngine.InputSystem.LowLevel", "IInputDeviceCommandInfo");
