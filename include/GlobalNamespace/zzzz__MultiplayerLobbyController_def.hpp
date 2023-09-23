#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MenuEnvironmentManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyCenterStageManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlaceManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyController;
}
// Type: ::MultiplayerLobbyController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5670))
// CS Name: MultiplayerLobbyController
class CORDL_TYPE MultiplayerLobbyController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerLobbyController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyController(MultiplayerLobbyController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyController(MultiplayerLobbyController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyController& operator=(MultiplayerLobbyController&& o) noexcept = default;
  constexpr MultiplayerLobbyController& operator=(MultiplayerLobbyController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__innerCircleRadius, put=__set__innerCircleRadius))  _innerCircleRadius;

constexpr void __set__innerCircleRadius(float_t value) ;

constexpr float_t __get__innerCircleRadius() const;

 float_t __declspec(property(get=__get__minOuterCircleRadius, put=__set__minOuterCircleRadius))  _minOuterCircleRadius;

constexpr void __set__minOuterCircleRadius(float_t value) ;

constexpr float_t __get__minOuterCircleRadius() const;

 GlobalNamespace::MultiplayerLobbyAvatarManager __declspec(property(get=__get__multiplayerLobbyAvatarManager, put=__set__multiplayerLobbyAvatarManager))  _multiplayerLobbyAvatarManager;

constexpr void __set__multiplayerLobbyAvatarManager(GlobalNamespace::MultiplayerLobbyAvatarManager value) ;

constexpr GlobalNamespace::MultiplayerLobbyAvatarManager __get__multiplayerLobbyAvatarManager() const;

 GlobalNamespace::MultiplayerLobbyCenterStageManager __declspec(property(get=__get__multiplayerLobbyCenterStageManager, put=__set__multiplayerLobbyCenterStageManager))  _multiplayerLobbyCenterStageManager;

constexpr void __set__multiplayerLobbyCenterStageManager(GlobalNamespace::MultiplayerLobbyCenterStageManager value) ;

constexpr GlobalNamespace::MultiplayerLobbyCenterStageManager __get__multiplayerLobbyCenterStageManager() const;

 GlobalNamespace::MultiplayerLobbyAvatarPlaceManager __declspec(property(get=__get__multiplayerLobbyAvatarPlaceManager, put=__set__multiplayerLobbyAvatarPlaceManager))  _multiplayerLobbyAvatarPlaceManager;

constexpr void __set__multiplayerLobbyAvatarPlaceManager(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager value) ;

constexpr GlobalNamespace::MultiplayerLobbyAvatarPlaceManager __get__multiplayerLobbyAvatarPlaceManager() const;

 GlobalNamespace::MenuEnvironmentManager __declspec(property(get=__get__menuEnvironmentManager, put=__set__menuEnvironmentManager))  _menuEnvironmentManager;

constexpr void __set__menuEnvironmentManager(GlobalNamespace::MenuEnvironmentManager value) ;

constexpr GlobalNamespace::MenuEnvironmentManager __get__menuEnvironmentManager() const;

 bool __declspec(property(get=__get__lobbyActivated_k__BackingField, put=__set__lobbyActivated_k__BackingField))  _lobbyActivated_k__BackingField;

constexpr void __set__lobbyActivated_k__BackingField(bool value) ;

constexpr bool __get__lobbyActivated_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_lobbyActivated, put=set_lobbyActivated))  lobbyActivated;


// Methods

/// @brief Method get_lobbyActivated addr 0x214f864 size 0x8 virtual false final false
 bool get_lobbyActivated() ;

/// @brief Method set_lobbyActivated addr 0x214f86c size 0xc virtual false final false
 void set_lobbyActivated(bool value) ;

/// @brief Method ActivateMultiplayerLobby addr 0x214f878 size 0x94 virtual false final false
 void ActivateMultiplayerLobby() ;

/// @brief Method DeactivateMultiplayerLobby addr 0x214f90c size 0x70 virtual false final false
 void DeactivateMultiplayerLobby() ;

// Ctor Parameters []
explicit MultiplayerLobbyController() ;

/// @brief Method .ctor addr 0x214f97c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLobbyController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyController, "", "MultiplayerLobbyController");
