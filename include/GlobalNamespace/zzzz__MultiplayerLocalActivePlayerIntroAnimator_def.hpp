#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerIntroAnimator;
}
// Type: ::MultiplayerLocalActivePlayerIntroAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5256))
// CS Name: MultiplayerLocalActivePlayerIntroAnimator
class CORDL_TYPE MultiplayerLocalActivePlayerIntroAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerLocalActivePlayerIntroAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerIntroAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActivePlayerIntroAnimator(MultiplayerLocalActivePlayerIntroAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerIntroAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActivePlayerIntroAnimator(MultiplayerLocalActivePlayerIntroAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActivePlayerIntroAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActivePlayerIntroAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerIntroAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerIntroAnimator& operator=(MultiplayerLocalActivePlayerIntroAnimator&& o) noexcept = default;
  constexpr MultiplayerLocalActivePlayerIntroAnimator& operator=(MultiplayerLocalActivePlayerIntroAnimator const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__introPlayableDirector, put=__set__introPlayableDirector))  _introPlayableDirector;

constexpr void __set__introPlayableDirector(UnityEngine::Playables::PlayableDirector value) ;

constexpr UnityEngine::Playables::PlayableDirector __get__introPlayableDirector() const;


// Methods

/// @brief Method SetBeforeIntroValues addr 0x20e814c size 0x1c virtual false final false
 void SetBeforeIntroValues() ;

/// @brief Method SetAfterIntroValues addr 0x20e8168 size 0x48 virtual false final false
 void SetAfterIntroValues() ;

static GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator New_ctor() ;

/// @brief Method .ctor addr 0x20e81b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator, "", "MultiplayerLocalActivePlayerIntroAnimator");
