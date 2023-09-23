#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MultiplayerAvatarPoseController;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class AvatarVisualController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsAvatarController;
}
// Type: ::MultiplayerResultsAvatarController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5331))
// CS Name: MultiplayerResultsAvatarController
class CORDL_TYPE MultiplayerResultsAvatarController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerResultsAvatarController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsAvatarController", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsAvatarController(MultiplayerResultsAvatarController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsAvatarController", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsAvatarController(MultiplayerResultsAvatarController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsAvatarController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerResultsAvatarController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsAvatarController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsAvatarController& operator=(MultiplayerResultsAvatarController&& o) noexcept = default;
  constexpr MultiplayerResultsAvatarController& operator=(MultiplayerResultsAvatarController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AvatarVisualController __declspec(property(get=__get__avatarVisualController, put=__set__avatarVisualController))  _avatarVisualController;

constexpr void __set__avatarVisualController(GlobalNamespace::AvatarVisualController value) ;

constexpr GlobalNamespace::AvatarVisualController __get__avatarVisualController() const;

 GlobalNamespace::MultiplayerAvatarPoseController __declspec(property(get=__get__multiplayerAvatarPoseController, put=__set__multiplayerAvatarPoseController))  _multiplayerAvatarPoseController;

constexpr void __set__multiplayerAvatarPoseController(GlobalNamespace::MultiplayerAvatarPoseController value) ;

constexpr GlobalNamespace::MultiplayerAvatarPoseController __get__multiplayerAvatarPoseController() const;


// Methods

/// @brief Method SetScale addr 0x2100db8 size 0x38 virtual false final false
 void SetScale(float_t scale) ;

/// @brief Method Setup addr 0x2100df0 size 0x134 virtual false final false
 void Setup(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

// Ctor Parameters []
explicit MultiplayerResultsAvatarController() ;

/// @brief Method .ctor addr 0x2100f24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerResultsAvatarController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsAvatarController, "", "MultiplayerResultsAvatarController");
