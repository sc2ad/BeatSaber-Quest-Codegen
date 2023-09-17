#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeAnimationPlayer;
}
// Type: ::SongTimeAnimationPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5471))
// CS Name: SongTimeAnimationPlayer
class CORDL_TYPE SongTimeAnimationPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SongTimeAnimationPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: " const&", def_value: None }]
constexpr SongTimeAnimationPlayer(SongTimeAnimationPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: "&&", def_value: None }]
constexpr SongTimeAnimationPlayer(SongTimeAnimationPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongTimeAnimationPlayer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongTimeAnimationPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongTimeAnimationPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongTimeAnimationPlayer& operator=(SongTimeAnimationPlayer&& o) noexcept = default;
  constexpr SongTimeAnimationPlayer& operator=(SongTimeAnimationPlayer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AnimationClip __declspec(property(get=__get__animationClip, put=__set__animationClip))  _animationClip;

constexpr void __set__animationClip(::UnityEngine::AnimationClip value) ;

constexpr ::UnityEngine::AnimationClip __get__animationClip() const;

 ::GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;


// Methods

/// @brief Method Update addr 0x2117098 size 0x44 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit SongTimeAnimationPlayer() ;

/// @brief Method .ctor addr 0x21170dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SongTimeAnimationPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeAnimationPlayer, "", "SongTimeAnimationPlayer");
