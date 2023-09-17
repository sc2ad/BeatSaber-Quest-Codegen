#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class AudioPlayerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutSongPreviewPlayerOnSceneTransitionStart;
}
// Type: ::FadeOutSongPreviewPlayerOnSceneTransitionStart
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4049))
// CS Name: FadeOutSongPreviewPlayerOnSceneTransitionStart
class CORDL_TYPE FadeOutSongPreviewPlayerOnSceneTransitionStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FadeOutSongPreviewPlayerOnSceneTransitionStart() = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutSongPreviewPlayerOnSceneTransitionStart", modifiers: " const&", def_value: None }]
constexpr FadeOutSongPreviewPlayerOnSceneTransitionStart(FadeOutSongPreviewPlayerOnSceneTransitionStart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutSongPreviewPlayerOnSceneTransitionStart", modifiers: "&&", def_value: None }]
constexpr FadeOutSongPreviewPlayerOnSceneTransitionStart(FadeOutSongPreviewPlayerOnSceneTransitionStart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FadeOutSongPreviewPlayerOnSceneTransitionStart(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FadeOutSongPreviewPlayerOnSceneTransitionStart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FadeOutSongPreviewPlayerOnSceneTransitionStart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FadeOutSongPreviewPlayerOnSceneTransitionStart& operator=(FadeOutSongPreviewPlayerOnSceneTransitionStart&& o) noexcept = default;
  constexpr FadeOutSongPreviewPlayerOnSceneTransitionStart& operator=(FadeOutSongPreviewPlayerOnSceneTransitionStart const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AudioPlayerBase __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(::GlobalNamespace::AudioPlayerBase value) ;

constexpr ::GlobalNamespace::AudioPlayerBase __get__songPreviewPlayer() const;

 ::GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager value) ;

constexpr ::GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Methods

/// @brief Method Start addr 0x20bb874 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20bb900 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleGameScenesManagerTransitionDidStart addr 0x20bb9d4 size 0x38 virtual false final false
 void HandleGameScenesManagerTransitionDidStart(float_t duration) ;

// Ctor Parameters []
explicit FadeOutSongPreviewPlayerOnSceneTransitionStart() ;

/// @brief Method .ctor addr 0x20bba0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart, "", "FadeOutSongPreviewPlayerOnSceneTransitionStart");
