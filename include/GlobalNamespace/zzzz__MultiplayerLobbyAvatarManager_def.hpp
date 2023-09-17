#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLobbyAvatarController__Factory;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAvatarManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13;
}
// Type: ::<RemovePlayerAndDestroy>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4101))
// CS Name: MultiplayerLobbyAvatarManager::<RemovePlayerAndDestroy>d__13
class CORDL_TYPE ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13& operator=(____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13& operator=(____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::MultiplayerLobbyAvatarManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerLobbyAvatarManager value) ;

constexpr ::GlobalNamespace::MultiplayerLobbyAvatarManager __get___4__this() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::GlobalNamespace::MultiplayerLobbyAvatarController __declspec(property(get=__get_multiplayerAvatar, put=__set_multiplayerAvatar))  multiplayerAvatar;

constexpr void __set_multiplayerAvatar(::GlobalNamespace::MultiplayerLobbyAvatarController value) ;

constexpr ::GlobalNamespace::MultiplayerLobbyAvatarController __get_multiplayerAvatar() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20c4ec4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20c4fb8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20c4fbc size 0x120 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20c50dc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20c50e4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20c5124 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLobbyAvatarManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4102))
// CS Name: MultiplayerLobbyAvatarManager
class CORDL_TYPE MultiplayerLobbyAvatarManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RemovePlayerAndDestroy_d__13 = ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerLobbyAvatarManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyAvatarManager(MultiplayerLobbyAvatarManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyAvatarManager(MultiplayerLobbyAvatarManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyAvatarManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyAvatarManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarManager& operator=(MultiplayerLobbyAvatarManager&& o) noexcept = default;
  constexpr MultiplayerLobbyAvatarManager& operator=(MultiplayerLobbyAvatarManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ILobbyStateDataModel __declspec(property(get=__get__lobbyStateDataModel, put=__set__lobbyStateDataModel))  _lobbyStateDataModel;

constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel value) ;

constexpr ::GlobalNamespace::ILobbyStateDataModel __get__lobbyStateDataModel() const;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarController__Factory __declspec(property(get=__get__avatarControllerFactory, put=__set__avatarControllerFactory))  _avatarControllerFactory;

constexpr void __set__avatarControllerFactory(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarController__Factory value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarController__Factory __get__avatarControllerFactory() const;

 float_t __declspec(property(get=__get__innerCircleRadius, put=__set__innerCircleRadius))  _innerCircleRadius;

constexpr void __set__innerCircleRadius(float_t value) ;

constexpr float_t __get__innerCircleRadius() const;

 float_t __declspec(property(get=__get__minOuterCircleRadius, put=__set__minOuterCircleRadius))  _minOuterCircleRadius;

constexpr void __set__minOuterCircleRadius(float_t value) ;

constexpr float_t __get__minOuterCircleRadius() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLobbyAvatarController> __declspec(property(get=__get__playerIdToAvatarMap, put=__set__playerIdToAvatarMap))  _playerIdToAvatarMap;

constexpr void __set__playerIdToAvatarMap(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLobbyAvatarController> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLobbyAvatarController> __get__playerIdToAvatarMap() const;

 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController> __declspec(property(get=__get__inProgressDespawnAnimations, put=__set__inProgressDespawnAnimations))  _inProgressDespawnAnimations;

constexpr void __set__inProgressDespawnAnimations(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController> __get__inProgressDespawnAnimations() const;


// Methods

/// @brief Method Init addr 0x20c4178 size 0x8 virtual false final false
 void Init(float_t innerCircleRadius, float_t minOuterCircleRadius) ;

/// @brief Method ActivateMultiplayerLobbyAvatarManager addr 0x20c4180 size 0x2f4 virtual false final false
 void ActivateMultiplayerLobbyAvatarManager() ;

/// @brief Method DeactivateMultiplayerLobbyAvatarManager addr 0x20c48b8 size 0x424 virtual false final false
 void DeactivateMultiplayerLobbyAvatarManager() ;

/// @brief Method HandleLobbyStateDataModelPlayerConnected addr 0x20c4cdc size 0x4 virtual false final false
 void HandleLobbyStateDataModelPlayerConnected(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method HandleLobbyStateDataModelPlayerDisconnected addr 0x20c4ce0 size 0x4 virtual false final false
 void HandleLobbyStateDataModelPlayerDisconnected(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method AddPlayer addr 0x20c4474 size 0x444 virtual false final false
 void AddPlayer(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method RemovePlayer addr 0x20c4ce4 size 0x164 virtual false final false
 void RemovePlayer(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method RemovePlayerAndDestroy addr 0x20c4e48 size 0x7c virtual false final false
 ::System::Collections::IEnumerator RemovePlayerAndDestroy(::StringW userId, ::GlobalNamespace::MultiplayerLobbyAvatarController multiplayerAvatar) ;

// Ctor Parameters []
explicit MultiplayerLobbyAvatarManager() ;

/// @brief Method .ctor addr 0x20c4eec size 0xcc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarManager, "", "MultiplayerLobbyAvatarManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLobbyAvatarManager___RemovePlayerAndDestroy_d__13, "", "MultiplayerLobbyAvatarManager/<RemovePlayerAndDestroy>d__13");
