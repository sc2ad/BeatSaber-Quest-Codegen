#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableGraphExtensions;
}
// Type: UnityEngine.Animations::AnimationPlayableGraphExtensions
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15063))
// CS Name: UnityEngine.Animations.AnimationPlayableGraphExtensions
class CORDL_TYPE AnimationPlayableGraphExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AnimationPlayableGraphExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: " const&", def_value: None }]
constexpr AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: "&&", def_value: None }]
constexpr AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationPlayableGraphExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationPlayableGraphExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationPlayableGraphExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationPlayableGraphExtensions& operator=(AnimationPlayableGraphExtensions&& o) noexcept = default;
  constexpr AnimationPlayableGraphExtensions& operator=(AnimationPlayableGraphExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method InternalCreateAnimationOutput addr 0x2b21b24 size 0x54 virtual false final false
static bool InternalCreateAnimationOutput(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name, ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableGraphExtensions, "UnityEngine.Animations", "AnimationPlayableGraphExtensions");
