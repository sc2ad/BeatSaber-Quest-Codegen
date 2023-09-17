#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Type: UnityEngine.InputSystem.LowLevel::IInputStateTypeInfo
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6646))
// CS Name: UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo
class CORDL_TYPE IInputStateTypeInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputStateTypeInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputStateTypeInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_format addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo, "UnityEngine.InputSystem.LowLevel", "IInputStateTypeInfo");
