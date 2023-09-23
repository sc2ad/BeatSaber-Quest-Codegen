#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Animations {
class IAnimationWindowPreview;
}
// Type: UnityEngine.Animations::IAnimationWindowPreview
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15073))
// CS Name: UnityEngine.Animations.IAnimationWindowPreview
class CORDL_TYPE IAnimationWindowPreview : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAnimationWindowPreview() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAnimationWindowPreview(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method UpdatePreviewGraph addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdatePreviewGraph(UnityEngine::Playables::PlayableGraph graph) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
NEED_NO_BOX(UnityEngine::Animations::IAnimationWindowPreview);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::IAnimationWindowPreview, "UnityEngine.Animations", "IAnimationWindowPreview");
