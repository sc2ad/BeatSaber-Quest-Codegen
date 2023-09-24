#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class MultiplayerController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerOutroAnimator;
}
// Type: ::MultiplayerLocalInactivePlayerOutroAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5263))
// CS Name: MultiplayerLocalInactivePlayerOutroAnimator
class CORDL_TYPE MultiplayerLocalInactivePlayerOutroAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerLocalInactivePlayerOutroAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerOutroAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerOutroAnimator(MultiplayerLocalInactivePlayerOutroAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerOutroAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerOutroAnimator(MultiplayerLocalInactivePlayerOutroAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalInactivePlayerOutroAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalInactivePlayerOutroAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerOutroAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerOutroAnimator& operator=(MultiplayerLocalInactivePlayerOutroAnimator&& o) noexcept = default;
  constexpr MultiplayerLocalInactivePlayerOutroAnimator& operator=(MultiplayerLocalInactivePlayerOutroAnimator const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__outroPlayableDirector, put=__set__outroPlayableDirector))  _outroPlayableDirector;

constexpr void __set__outroPlayableDirector(UnityEngine::Playables::PlayableDirector value) ;

constexpr UnityEngine::Playables::PlayableDirector __get__outroPlayableDirector() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;


// Methods

/// @brief Method Start addr 0x20e8e78 size 0x3c virtual false final false
 void Start() ;

static GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator New_ctor() ;

/// @brief Method .ctor addr 0x20e8eb4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator, "", "MultiplayerLocalInactivePlayerOutroAnimator");
