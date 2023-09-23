#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
// Type: UnityEngine.Playables::IPlayableBehaviour
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10377))
// CS Name: UnityEngine.Playables.IPlayableBehaviour
class CORDL_TYPE IPlayableBehaviour : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPlayableBehaviour() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPlayableBehaviour(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnGraphStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnGraphStart(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnGraphStop addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnGraphStop(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnPlayableCreate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPlayableCreate(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnPlayableDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

/// @brief Method OnBehaviourPlay addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method OnBehaviourPause addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method PrepareFrame addr 0x0 size 0xffffffffffffffff virtual true final false
 void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info) ;

/// @brief Method ProcessFrame addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
NEED_NO_BOX(UnityEngine::Playables::IPlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::IPlayableBehaviour, "UnityEngine.Playables", "IPlayableBehaviour");
