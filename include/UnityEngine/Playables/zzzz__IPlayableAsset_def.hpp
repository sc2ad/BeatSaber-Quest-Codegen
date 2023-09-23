#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayableAsset;
}
// Type: UnityEngine.Playables::IPlayableAsset
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10357))
// CS Name: UnityEngine.Playables.IPlayableAsset
class CORDL_TYPE IPlayableAsset : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPlayableAsset() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlayableAsset(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 double_t __declspec(property(get=get_duration))  duration;


// Methods

/// @brief Method CreatePlayable addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject owner) ;

/// @brief Method get_duration addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_duration() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::IPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::IPlayableAsset, "UnityEngine.Playables", "IPlayableAsset");
