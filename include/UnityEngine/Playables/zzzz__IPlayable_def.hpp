#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayable;
}
// Type: UnityEngine.Playables::IPlayable
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10372))
// CS Name: UnityEngine.Playables.IPlayable
class CORDL_TYPE IPlayable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPlayable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlayable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Playables::PlayableHandle GetHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::IPlayable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::IPlayable, "UnityEngine.Playables", "IPlayable");
