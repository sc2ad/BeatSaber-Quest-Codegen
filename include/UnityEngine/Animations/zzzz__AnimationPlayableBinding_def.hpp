#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableBinding;
}
// Type: UnityEngine.Animations::AnimationPlayableBinding
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15076))
// CS Name: UnityEngine.Animations.AnimationPlayableBinding
class CORDL_TYPE AnimationPlayableBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AnimationPlayableBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableBinding", modifiers: " const&", def_value: None }]
constexpr AnimationPlayableBinding(AnimationPlayableBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableBinding", modifiers: "&&", def_value: None }]
constexpr AnimationPlayableBinding(AnimationPlayableBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationPlayableBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationPlayableBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationPlayableBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationPlayableBinding& operator=(AnimationPlayableBinding&& o) noexcept = default;
  constexpr AnimationPlayableBinding& operator=(AnimationPlayableBinding const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2b2391c size 0x13c virtual false final false
static UnityEngine::Playables::PlayableBinding Create(::StringW name, UnityEngine::Object key) ;

/// @brief Method CreateAnimationOutput addr 0x2b23a58 size 0x40 virtual false final false
static UnityEngine::Playables::PlayableOutput CreateAnimationOutput(UnityEngine::Playables::PlayableGraph graph, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
NEED_NO_BOX(UnityEngine::Animations::AnimationPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationPlayableBinding, "UnityEngine.Animations", "AnimationPlayableBinding");
