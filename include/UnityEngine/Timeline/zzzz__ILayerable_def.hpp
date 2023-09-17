#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ILayerable;
}
// Type: UnityEngine.Timeline::ILayerable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14110))
// CS Name: UnityEngine.Timeline.ILayerable
class CORDL_TYPE ILayerable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILayerable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILayerable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateLayerMixer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Playables::Playable CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go, int32_t inputCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::ILayerable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ILayerable, "UnityEngine.Timeline", "ILayerable");
