#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IEventPreProcessor;
}
// Type: UnityEngine.InputSystem.LowLevel::IEventPreProcessor
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6580))
// CS Name: UnityEngine.InputSystem.LowLevel.IEventPreProcessor
class CORDL_TYPE IEventPreProcessor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEventPreProcessor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEventPreProcessor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PreProcessEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor, "UnityEngine.InputSystem.LowLevel", "IEventPreProcessor");
