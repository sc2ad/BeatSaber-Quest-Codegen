#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class AvatarVisualController;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerAvatarVisualProvider;
}
// Type: ::MultiplayerAvatarVisualProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4095))
// CS Name: MultiplayerAvatarVisualProvider
class CORDL_TYPE MultiplayerAvatarVisualProvider : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerAvatarVisualProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarVisualProvider", modifiers: " const&", def_value: None }]
constexpr MultiplayerAvatarVisualProvider(MultiplayerAvatarVisualProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarVisualProvider", modifiers: "&&", def_value: None }]
constexpr MultiplayerAvatarVisualProvider(MultiplayerAvatarVisualProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerAvatarVisualProvider(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerAvatarVisualProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerAvatarVisualProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerAvatarVisualProvider& operator=(MultiplayerAvatarVisualProvider&& o) noexcept = default;
  constexpr MultiplayerAvatarVisualProvider& operator=(MultiplayerAvatarVisualProvider const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AvatarVisualController __declspec(property(get=__get__avatarVisualController, put=__set__avatarVisualController))  _avatarVisualController;

constexpr void __set__avatarVisualController(GlobalNamespace::AvatarVisualController value) ;

constexpr GlobalNamespace::AvatarVisualController __get__avatarVisualController() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Methods

/// @brief Method Start addr 0x20c39c8 size 0xe4 virtual false final false
 void Start() ;

static GlobalNamespace::MultiplayerAvatarVisualProvider New_ctor() ;

/// @brief Method .ctor addr 0x20c3aac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerAvatarVisualProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerAvatarVisualProvider, "", "MultiplayerAvatarVisualProvider");
