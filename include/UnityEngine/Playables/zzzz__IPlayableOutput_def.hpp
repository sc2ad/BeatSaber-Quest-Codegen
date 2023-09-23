#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayableOutput;
}
// Type: UnityEngine.Playables::IPlayableOutput
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10365))
// CS Name: UnityEngine.Playables.IPlayableOutput
class CORDL_TYPE IPlayableOutput : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPlayableOutput() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlayableOutput(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::IPlayableOutput);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::IPlayableOutput, "UnityEngine.Playables", "IPlayableOutput");
