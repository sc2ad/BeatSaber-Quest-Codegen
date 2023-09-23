#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class ITextInputReceiver;
}
// Type: UnityEngine.InputSystem.LowLevel::ITextInputReceiver
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6582))
// CS Name: UnityEngine.InputSystem.LowLevel.ITextInputReceiver
class CORDL_TYPE ITextInputReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITextInputReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITextInputReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnTextInput addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnTextInput(char16_t character) ;

/// @brief Method OnIMECompositionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnIMECompositionChanged(UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::ITextInputReceiver);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::ITextInputReceiver, "UnityEngine.InputSystem.LowLevel", "ITextInputReceiver");
