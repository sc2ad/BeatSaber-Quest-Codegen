#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableExtensions;
}
// Type: UnityEngine.Animations::AnimationPlayableExtensions
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15062))
// CS Name: UnityEngine.Animations.AnimationPlayableExtensions
class CORDL_TYPE AnimationPlayableExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AnimationPlayableExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableExtensions", modifiers: " const&", def_value: None }]
constexpr AnimationPlayableExtensions(AnimationPlayableExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableExtensions", modifiers: "&&", def_value: None }]
constexpr AnimationPlayableExtensions(AnimationPlayableExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationPlayableExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimationPlayableExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationPlayableExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationPlayableExtensions& operator=(AnimationPlayableExtensions&& o) noexcept = default;
  constexpr AnimationPlayableExtensions& operator=(AnimationPlayableExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SetAnimatedProperties addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetAnimatedProperties(U playable, ::UnityEngine::AnimationClip clip) ;

/// @brief Method SetAnimatedPropertiesInternal addr 0x2b21ae0 size 0x44 virtual false final false
static void SetAnimatedPropertiesInternal(ByRef<::UnityEngine::Playables::PlayableHandle> playable, ::UnityEngine::AnimationClip animatedProperties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableExtensions, "UnityEngine.Animations", "AnimationPlayableExtensions");
