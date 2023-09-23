#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IEventMerger;
}
// Type: UnityEngine.InputSystem.LowLevel::IEventMerger
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6579))
// CS Name: UnityEngine.InputSystem.LowLevel.IEventMerger
class CORDL_TYPE IEventMerger : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEventMerger() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEventMerger(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method MergeForward addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MergeForward(UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::IEventMerger);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::IEventMerger, "UnityEngine.InputSystem.LowLevel", "IEventMerger");
