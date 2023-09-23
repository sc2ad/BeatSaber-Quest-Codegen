#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
// Type: UnityEngine.InputSystem.LowLevel::IInputEventTypeInfo
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6608))
// CS Name: UnityEngine.InputSystem.LowLevel.IInputEventTypeInfo
class CORDL_TYPE IInputEventTypeInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputEventTypeInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputEventTypeInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_typeStatic addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo, "UnityEngine.InputSystem.LowLevel", "IInputEventTypeInfo");
