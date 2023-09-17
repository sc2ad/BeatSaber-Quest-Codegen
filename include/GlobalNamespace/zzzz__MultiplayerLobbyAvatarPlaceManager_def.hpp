#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlaceManager;
}
// Type: ::MultiplayerLobbyAvatarPlaceManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4105))
// CS Name: MultiplayerLobbyAvatarPlaceManager
class CORDL_TYPE MultiplayerLobbyAvatarPlaceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerLobbyAvatarPlaceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarPlaceManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyAvatarPlaceManager(MultiplayerLobbyAvatarPlaceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyAvatarPlaceManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyAvatarPlaceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarPlaceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarPlaceManager& operator=(MultiplayerLobbyAvatarPlaceManager&& o) noexcept = default;
  constexpr MultiplayerLobbyAvatarPlaceManager& operator=(MultiplayerLobbyAvatarPlaceManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ILobbyStateDataModel __declspec(property(get=__get__lobbyStateDataModel, put=__set__lobbyStateDataModel))  _lobbyStateDataModel;

constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel value) ;

constexpr ::GlobalNamespace::ILobbyStateDataModel __get__lobbyStateDataModel() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool __declspec(property(get=__get__avatarPlacesPool, put=__set__avatarPlacesPool))  _avatarPlacesPool;

constexpr void __set__avatarPlacesPool(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarPlace__Pool __get__avatarPlacesPool() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace> __declspec(property(get=__get__allPlaces, put=__set__allPlaces))  _allPlaces;

constexpr void __set__allPlaces(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerLobbyAvatarPlace> __get__allPlaces() const;

 float_t __declspec(property(get=__get__innerCircleRadius, put=__set__innerCircleRadius))  _innerCircleRadius;

constexpr void __set__innerCircleRadius(float_t value) ;

constexpr float_t __get__innerCircleRadius() const;

 float_t __declspec(property(get=__get__minOuterCircleRadius, put=__set__minOuterCircleRadius))  _minOuterCircleRadius;

constexpr void __set__minOuterCircleRadius(float_t value) ;

constexpr float_t __get__minOuterCircleRadius() const;


// Methods

/// @brief Method Activate addr 0x20c51f4 size 0x8 virtual false final false
 void Activate(float_t innerCircleRadius, float_t minOuterCircleRadius) ;

/// @brief Method Deactivate addr 0x20c5674 size 0x4 virtual false final false
 void Deactivate() ;

/// @brief Method OnDestroy addr 0x20c57c4 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method SpawnAllPlaces addr 0x20c51fc size 0x478 virtual false final false
 void SpawnAllPlaces() ;

/// @brief Method DespawnAllPlaces addr 0x20c5678 size 0x14c virtual false final false
 void DespawnAllPlaces() ;

// Ctor Parameters []
explicit MultiplayerLobbyAvatarPlaceManager() ;

/// @brief Method .ctor addr 0x20c57c8 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, "", "MultiplayerLobbyAvatarPlaceManager");
