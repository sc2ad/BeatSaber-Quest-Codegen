#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerIntroAnimator;
}
// Type: ::MultiplayerConnectedPlayerIntroAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5225))
// CS Name: MultiplayerConnectedPlayerIntroAnimator
class CORDL_TYPE MultiplayerConnectedPlayerIntroAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerConnectedPlayerIntroAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerIntroAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerIntroAnimator(MultiplayerConnectedPlayerIntroAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerIntroAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerIntroAnimator(MultiplayerConnectedPlayerIntroAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerIntroAnimator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerIntroAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerIntroAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerIntroAnimator& operator=(MultiplayerConnectedPlayerIntroAnimator&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerIntroAnimator& operator=(MultiplayerConnectedPlayerIntroAnimator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__introPlayableDirector, put=__set__introPlayableDirector))  _introPlayableDirector;

constexpr void __set__introPlayableDirector(::UnityEngine::Playables::PlayableDirector value) ;

constexpr ::UnityEngine::Playables::PlayableDirector __get__introPlayableDirector() const;


// Methods

/// @brief Method SetBeforeIntroValues addr 0x20e0e84 size 0x1c virtual false final false
 void SetBeforeIntroValues() ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerIntroAnimator() ;

/// @brief Method .ctor addr 0x20e0ea0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator, "", "MultiplayerConnectedPlayerIntroAnimator");
