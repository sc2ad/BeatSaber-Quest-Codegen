#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template<typename TType>
class RpcHandler_1;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__GameplayRpcManager__RpcType;
}
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__NoteCutRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc;
}
// Type: ::RpcType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12683))
// CS Name: GameplayRpcManager::RpcType
struct CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__RpcType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__RpcType(uint8_t value__) noexcept;


                    constexpr ____GlobalNamespace__GameplayRpcManager__RpcType(____GlobalNamespace__GameplayRpcManager__RpcType const&) = default;
                    constexpr ____GlobalNamespace__GameplayRpcManager__RpcType(____GlobalNamespace__GameplayRpcManager__RpcType&&) = default;
                    constexpr ____GlobalNamespace__GameplayRpcManager__RpcType& operator=(____GlobalNamespace__GameplayRpcManager__RpcType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__GameplayRpcManager__RpcType& operator=(____GlobalNamespace__GameplayRpcManager__RpcType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__RpcType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__GameplayRpcManager__RpcType_Unwrapped : uint8_t {
__SetGameplaySceneSyncFinish = 0u,
__SetGameplaySceneReady = 1u,
__GetGameplaySceneReady = 2u,
__SetActivePlayerFailedToConnect = 3u,
__SetGameplaySongReady = 4u,
__GetGameplaySongReady = 5u,
__SetSongStartTime = 6u,
__NoteCut = 7u,
__NoteMissed = 8u,
__LevelFinished = 9u,
__ReturnToMenu = 10u,
__RequestReturnToMenu = 11u,
__NoteSpawned = 12u,
__ObstacleSpawned = 13u,
__SliderSpawned = 14u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__GameplayRpcManager__RpcType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__GameplayRpcManager__RpcType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field SetGameplaySceneSyncFinish offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const SetGameplaySceneSyncFinish;

/// @brief Field SetGameplaySceneReady offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const SetGameplaySceneReady;

/// @brief Field GetGameplaySceneReady offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const GetGameplaySceneReady;

/// @brief Field SetActivePlayerFailedToConnect offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const SetActivePlayerFailedToConnect;

/// @brief Field SetGameplaySongReady offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const SetGameplaySongReady;

/// @brief Field GetGameplaySongReady offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const GetGameplaySongReady;

/// @brief Field SetSongStartTime offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const SetSongStartTime;

/// @brief Field NoteCut offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const NoteCut;

/// @brief Field NoteMissed offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const NoteMissed;

/// @brief Field LevelFinished offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const LevelFinished;

/// @brief Field ReturnToMenu offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const ReturnToMenu;

/// @brief Field RequestReturnToMenu offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const RequestReturnToMenu;

/// @brief Field NoteSpawned offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const NoteSpawned;

/// @brief Field ObstacleSpawned offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const ObstacleSpawned;

/// @brief Field SliderSpawned offset 0
static ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType const SliderSpawned;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetGameplaySceneSyncFinishedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12877)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 4762 }), TypeDefinitionIndex(TypeDefinitionIndex(12865))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12684))
// CS Name: GameplayRpcManager::SetGameplaySceneSyncFinishedRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_2<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc() ;

/// @brief Method .ctor addr 0xdae8ec size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetGameplaySceneReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 3679 }), TypeDefinitionIndex(TypeDefinitionIndex(12866)), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12685))
// CS Name: GameplayRpcManager::SetGameplaySceneReadyRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc() ;

/// @brief Method .ctor addr 0xdae934 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetGameplaySceneReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12686))
// CS Name: GameplayRpcManager::GetGameplaySceneReadyRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc(____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc(____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc() ;

/// @brief Method .ctor addr 0xdae97c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetPlayerDidConnectLateRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12865)), TypeDefinitionIndex(TypeDefinitionIndex(12878)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12878), inst: 637 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12687))
// CS Name: GameplayRpcManager::SetPlayerDidConnectLateRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc : public ::GlobalNamespace::RemoteProcedureCall_3<::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc(____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc(____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_3<::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc() ;

/// @brief Method .ctor addr 0xdae984 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetGameplaySongReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12688))
// CS Name: GameplayRpcManager::SetGameplaySongReadyRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc(____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc(____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc() ;

/// @brief Method .ctor addr 0xdae9cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetGameplaySongReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12689))
// CS Name: GameplayRpcManager::GetGameplaySongReadyRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc(____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc(____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc() ;

/// @brief Method .ctor addr 0xdae9d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetSongStartTimeRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12876)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12690))
// CS Name: GameplayRpcManager::SetSongStartTimeRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc : public ::GlobalNamespace::RemoteProcedureCall_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc(____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc(____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<float_t>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc() ;

/// @brief Method .ctor addr 0xdae9dc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteSpawnedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15117)), TypeDefinitionIndex(TypeDefinitionIndex(12877)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 4765 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12691))
// CS Name: GameplayRpcManager::NoteSpawnedRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::NoteSpawnInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc(____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc(____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::NoteSpawnInfoNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc() ;

/// @brief Method .ctor addr 0xdaea24 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObstacleSpawnedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12877)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 4766 }), TypeDefinitionIndex(TypeDefinitionIndex(15118))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12692))
// CS Name: GameplayRpcManager::ObstacleSpawnedRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::ObstacleSpawnInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc(____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc(____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::ObstacleSpawnInfoNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc() ;

/// @brief Method .ctor addr 0xdaea6c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SliderSpawnedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 4767 }), TypeDefinitionIndex(TypeDefinitionIndex(12877)), TypeDefinitionIndex(TypeDefinitionIndex(15135))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12693))
// CS Name: GameplayRpcManager::SliderSpawnedRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::SliderSpawnInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc(____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc(____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::SliderSpawnInfoNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc() ;

/// @brief Method .ctor addr 0xdaeab4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteCutRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12877)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 4763 }), TypeDefinitionIndex(TypeDefinitionIndex(15115))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12694))
// CS Name: GameplayRpcManager::NoteCutRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__NoteCutRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::NoteCutInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__GameplayRpcManager__NoteCutRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__NoteCutRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__NoteCutRpc(____GlobalNamespace__GameplayRpcManager__NoteCutRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__NoteCutRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__NoteCutRpc(____GlobalNamespace__GameplayRpcManager__NoteCutRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__NoteCutRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::NoteCutInfoNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(____GlobalNamespace__GameplayRpcManager__NoteCutRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(____GlobalNamespace__GameplayRpcManager__NoteCutRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__NoteCutRpc() ;

/// @brief Method .ctor addr 0xdaeafc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteMissedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12877)), TypeDefinitionIndex(TypeDefinitionIndex(15116)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12877), inst: 4764 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12695))
// CS Name: GameplayRpcManager::NoteMissedRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc : public ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::NoteMissInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__GameplayRpcManager__NoteMissedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__NoteMissedRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc(____GlobalNamespace__GameplayRpcManager__NoteMissedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__NoteMissedRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc(____GlobalNamespace__GameplayRpcManager__NoteMissedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_2<float_t,::GlobalNamespace::NoteMissInfoNetSerializable>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(____GlobalNamespace__GameplayRpcManager__NoteMissedRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(____GlobalNamespace__GameplayRpcManager__NoteMissedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__NoteMissedRpc() ;

/// @brief Method .ctor addr 0xdaeb44 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelFinishedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12819)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12876), inst: 342 }), TypeDefinitionIndex(TypeDefinitionIndex(12876))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12696))
// CS Name: GameplayRpcManager::LevelFinishedRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc : public ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerLevelCompletionResults> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc(____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc(____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall_1<::GlobalNamespace::MultiplayerLevelCompletionResults>(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc() ;

/// @brief Method .ctor addr 0xdaeb8c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ReturnToMenuRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12697))
// CS Name: GameplayRpcManager::ReturnToMenuRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc(____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc(____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc() ;

/// @brief Method .ctor addr 0xdaebd4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RequestReturnToMenuRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12698))
// CS Name: GameplayRpcManager::RequestReturnToMenuRpc
class CORDL_TYPE ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc : public ::GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc(____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc(____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc(void* ptr) noexcept : ::GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc() ;

/// @brief Method .ctor addr 0xdaebdc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayRpcManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12699))
// CS Name: GameplayRpcManager
class CORDL_TYPE GameplayRpcManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RequestReturnToMenuRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc;

using ReturnToMenuRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc;

using LevelFinishedRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc;

using NoteMissedRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteMissedRpc;

using NoteCutRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteCutRpc;

using SliderSpawnedRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc;

using ObstacleSpawnedRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc;

using NoteSpawnedRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc;

using SetSongStartTimeRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc;

using GetGameplaySongReadyRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc;

using SetGameplaySongReadyRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc;

using SetPlayerDidConnectLateRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc;

using GetGameplaySceneReadyRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc;

using SetGameplaySceneReadyRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc;

using SetGameplaySceneSyncFinishedRpc = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;

using RpcType = ::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IGameplayRpcManager
constexpr operator  ::GlobalNamespace::IGameplayRpcManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~GameplayRpcManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: " const&", def_value: None }]
constexpr GameplayRpcManager(GameplayRpcManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: "&&", def_value: None }]
constexpr GameplayRpcManager(GameplayRpcManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayRpcManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayRpcManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayRpcManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayRpcManager& operator=(GameplayRpcManager&& o) noexcept = default;
  constexpr GameplayRpcManager& operator=(GameplayRpcManager const& o) noexcept = default;
                


// Fields

/// @brief Field kGameplayState offset 0
static constexpr ::ConstString  kGameplayState{u"in_gameplay"};

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType> __declspec(property(get=__get__rpcHandler, put=__set__rpcHandler))  _rpcHandler;

constexpr void __set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType> value) ;

constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType> __get__rpcHandler() const;

 ::System::Action_3<::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __declspec(property(get=__get_setGameplaySceneSyncFinishedEvent, put=__set_setGameplaySceneSyncFinishedEvent))  setGameplaySceneSyncFinishedEvent;

constexpr void __set_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

constexpr ::System::Action_3<::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __get_setGameplaySceneSyncFinishedEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::PlayerSpecificSettingsNetSerializable> __declspec(property(get=__get_setGameplaySceneReadyEvent, put=__set_setGameplaySceneReadyEvent))  setGameplaySceneReadyEvent;

constexpr void __set_setGameplaySceneReadyEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::PlayerSpecificSettingsNetSerializable> __get_setGameplaySceneReadyEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getGameplaySceneReadyEvent, put=__set_getGameplaySceneReadyEvent))  getGameplaySceneReadyEvent;

constexpr void __set_getGameplaySceneReadyEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getGameplaySceneReadyEvent() const;

 ::System::Action_4<::StringW,::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __declspec(property(get=__get_setPlayerDidConnectLateEvent, put=__set_setPlayerDidConnectLateEvent))  setPlayerDidConnectLateEvent;

constexpr void __set_setPlayerDidConnectLateEvent(::System::Action_4<::StringW,::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

constexpr ::System::Action_4<::StringW,::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __get_setPlayerDidConnectLateEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_setGameplaySongReadyEvent, put=__set_setGameplaySongReadyEvent))  setGameplaySongReadyEvent;

constexpr void __set_setGameplaySongReadyEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_setGameplaySongReadyEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_getGameplaySongReadyEvent, put=__set_getGameplaySongReadyEvent))  getGameplaySongReadyEvent;

constexpr void __set_getGameplaySongReadyEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_getGameplaySongReadyEvent() const;

 ::System::Action_2<::StringW,float_t> __declspec(property(get=__get_setSongStartTimeEvent, put=__set_setSongStartTimeEvent))  setSongStartTimeEvent;

constexpr void __set_setSongStartTimeEvent(::System::Action_2<::StringW,float_t> value) ;

constexpr ::System::Action_2<::StringW,float_t> __get_setSongStartTimeEvent() const;

 ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteSpawnInfoNetSerializable> __declspec(property(get=__get_noteWasSpawnedEvent, put=__set_noteWasSpawnedEvent))  noteWasSpawnedEvent;

constexpr void __set_noteWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

constexpr ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteSpawnInfoNetSerializable> __get_noteWasSpawnedEvent() const;

 ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::ObstacleSpawnInfoNetSerializable> __declspec(property(get=__get_obstacleWasSpawnedEvent, put=__set_obstacleWasSpawnedEvent))  obstacleWasSpawnedEvent;

constexpr void __set_obstacleWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

constexpr ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::ObstacleSpawnInfoNetSerializable> __get_obstacleWasSpawnedEvent() const;

 ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::SliderSpawnInfoNetSerializable> __declspec(property(get=__get_sliderWasSpawnedEvent, put=__set_sliderWasSpawnedEvent))  sliderWasSpawnedEvent;

constexpr void __set_sliderWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

constexpr ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::SliderSpawnInfoNetSerializable> __get_sliderWasSpawnedEvent() const;

 ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteCutInfoNetSerializable> __declspec(property(get=__get_noteWasCutEvent, put=__set_noteWasCutEvent))  noteWasCutEvent;

constexpr void __set_noteWasCutEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteCutInfoNetSerializable> value) ;

constexpr ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteCutInfoNetSerializable> __get_noteWasCutEvent() const;

 ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteMissInfoNetSerializable> __declspec(property(get=__get_noteWasMissedEvent, put=__set_noteWasMissedEvent))  noteWasMissedEvent;

constexpr void __set_noteWasMissedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteMissInfoNetSerializable> value) ;

constexpr ::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteMissInfoNetSerializable> __get_noteWasMissedEvent() const;

 ::System::Action_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent))  levelFinishedEvent;

constexpr void __set_levelFinishedEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr ::System::Action_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> __get_levelFinishedEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_returnToMenuEvent, put=__set_returnToMenuEvent))  returnToMenuEvent;

constexpr void __set_returnToMenuEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_returnToMenuEvent() const;

 ::System::Action_1<::StringW> __declspec(property(get=__get_requestReturnToMenuEvent, put=__set_requestReturnToMenuEvent))  requestReturnToMenuEvent;

constexpr void __set_requestReturnToMenuEvent(::System::Action_1<::StringW> value) ;

constexpr ::System::Action_1<::StringW> __get_requestReturnToMenuEvent() const;


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;


// Methods

/// @brief Method get_enabled addr 0xdac3f4 size 0xc0 virtual true final true
 bool get_enabled() ;

/// @brief Method set_enabled addr 0xdac4b4 size 0xc8 virtual true final true
 void set_enabled(bool value) ;

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
explicit GameplayRpcManager(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method .ctor addr 0xdac57c size 0x750 virtual false final false
 void _ctor(::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method Dispose addr 0xdacccc size 0x5c virtual true final true
 void Dispose() ;

/// @brief Method add_setGameplaySceneSyncFinishedEvent addr 0xdacd28 size 0xb0 virtual true final true
 void add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method remove_setGameplaySceneSyncFinishedEvent addr 0xdacdd8 size 0xb0 virtual true final true
 void remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method SetGameplaySceneSyncFinished addr 0xdace88 size 0x68 virtual true final true
 void SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method InvokeSetGameplaySceneSyncFinishCallback addr 0xdacef0 size 0x1c virtual false final false
 void InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, ::StringW sessionGameId) ;

/// @brief Method add_setGameplaySceneReadyEvent addr 0xdacf0c size 0xb0 virtual true final true
 void add_setGameplaySceneReadyEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

/// @brief Method remove_setGameplaySceneReadyEvent addr 0xdacfbc size 0xb0 virtual true final true
 void remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW,::GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

/// @brief Method SetGameplaySceneReady addr 0xdad06c size 0x58 virtual true final true
 void SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettings) ;

/// @brief Method InvokeSetGameplaySceneReadyCallback addr 0xdad0c4 size 0x1c virtual false final false
 void InvokeSetGameplaySceneReadyCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettingsNetSerializable) ;

/// @brief Method add_getGameplaySceneReadyEvent addr 0xdad0e0 size 0xb0 virtual true final true
 void add_getGameplaySceneReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getGameplaySceneReadyEvent addr 0xdad190 size 0xb0 virtual true final true
 void remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetGameplaySceneReady addr 0xdad240 size 0x50 virtual true final true
 void GetGameplaySceneReady() ;

/// @brief Method InvokeGetGameplaySceneReadyCallback addr 0xdad290 size 0x1c virtual false final false
 void InvokeGetGameplaySceneReadyCallback(::StringW userId) ;

/// @brief Method add_setPlayerDidConnectLateEvent addr 0xdad2ac size 0xb0 virtual true final true
 void add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW,::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method remove_setPlayerDidConnectLateEvent addr 0xdad35c size 0xb0 virtual true final true
 void remove_setPlayerDidConnectLateEvent(::System::Action_4<::StringW,::StringW,::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method SetPlayerDidConnectLate addr 0xdad40c size 0x70 virtual true final true
 void SetPlayerDidConnectLate(::StringW usedId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method InvokeSetPlayerDidConnectLate addr 0xdad47c size 0x1c virtual false final false
 void InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method add_setGameplaySongReadyEvent addr 0xdad498 size 0xb0 virtual true final true
 void add_setGameplaySongReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_setGameplaySongReadyEvent addr 0xdad548 size 0xb0 virtual true final true
 void remove_setGameplaySongReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method SetGameplaySongReady addr 0xdad5f8 size 0x50 virtual true final true
 void SetGameplaySongReady() ;

/// @brief Method InvokeSetGameplaySongReadyCallback addr 0xdad648 size 0x1c virtual false final false
 void InvokeSetGameplaySongReadyCallback(::StringW userId) ;

/// @brief Method add_getGameplaySongReadyEvent addr 0xdad664 size 0xb0 virtual true final true
 void add_getGameplaySongReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_getGameplaySongReadyEvent addr 0xdad714 size 0xb0 virtual true final true
 void remove_getGameplaySongReadyEvent(::System::Action_1<::StringW> value) ;

/// @brief Method GetGameplaySongReady addr 0xdad7c4 size 0x50 virtual true final true
 void GetGameplaySongReady() ;

/// @brief Method InvokeGetGameplayLevelReadyCallback addr 0xdad814 size 0x1c virtual false final false
 void InvokeGetGameplayLevelReadyCallback(::StringW userId) ;

/// @brief Method add_setSongStartTimeEvent addr 0xdad830 size 0xb0 virtual true final true
 void add_setSongStartTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method remove_setSongStartTimeEvent addr 0xdad8e0 size 0xb0 virtual true final true
 void remove_setSongStartTimeEvent(::System::Action_2<::StringW,float_t> value) ;

/// @brief Method SetSongStartTime addr 0xdad990 size 0x60 virtual true final true
 void SetSongStartTime(float_t startTime) ;

/// @brief Method InvokeSetSongStartTimeCallback addr 0xdad9f0 size 0x1c virtual false final false
 void InvokeSetSongStartTimeCallback(::StringW userId, float_t startTime) ;

/// @brief Method add_noteWasSpawnedEvent addr 0xdada0c size 0xb0 virtual true final true
 void add_noteWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method remove_noteWasSpawnedEvent addr 0xdadabc size 0xb0 virtual true final true
 void remove_noteWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method NoteSpawned addr 0xdadb6c size 0x68 virtual true final true
 void NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfoNetSerializable) ;

/// @brief Method InvokeNoteWasSpawnedCallback addr 0xdadbd4 size 0x1c virtual false final false
 void InvokeNoteWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo) ;

/// @brief Method add_obstacleWasSpawnedEvent addr 0xdadbf0 size 0xb0 virtual true final true
 void add_obstacleWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method remove_obstacleWasSpawnedEvent addr 0xdadca0 size 0xb0 virtual true final true
 void remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method ObstacleSpawned addr 0xdadd50 size 0x68 virtual true final true
 void ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfoNetSerializable) ;

/// @brief Method InvokeObstacleWasSpawnedCallback addr 0xdaddb8 size 0x1c virtual false final false
 void InvokeObstacleWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfo) ;

/// @brief Method add_sliderWasSpawnedEvent addr 0xdaddd4 size 0xb0 virtual true final true
 void add_sliderWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method remove_sliderWasSpawnedEvent addr 0xdade84 size 0xb0 virtual true final true
 void remove_sliderWasSpawnedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method SliderSpawned addr 0xdadf34 size 0x68 virtual true final true
 void SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfoNetSerializable) ;

/// @brief Method InvokeSliderWasSpawnedCallback addr 0xdadf9c size 0x1c virtual false final false
 void InvokeSliderWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfo) ;

/// @brief Method add_noteWasCutEvent addr 0xdadfb8 size 0xb0 virtual true final true
 void add_noteWasCutEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method remove_noteWasCutEvent addr 0xdae068 size 0xb0 virtual true final true
 void remove_noteWasCutEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method NoteCut addr 0xdae118 size 0x68 virtual true final true
 void NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable noteCutInfoNetSerializable) ;

/// @brief Method InvokeNoteWasCutCallback addr 0xdae180 size 0x1c virtual false final false
 void InvokeNoteWasCutCallback(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo) ;

/// @brief Method add_noteWasMissedEvent addr 0xdae19c size 0xb0 virtual true final true
 void add_noteWasMissedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method remove_noteWasMissedEvent addr 0xdae24c size 0xb0 virtual true final true
 void remove_noteWasMissedEvent(::System::Action_4<::StringW,float_t,float_t,::GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method NoteMissed addr 0xdae2fc size 0x68 virtual true final true
 void NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable noteMissInfoNetSerializable) ;

/// @brief Method InvokeNoteWasMissedCallback addr 0xdae364 size 0x1c virtual false final false
 void InvokeNoteWasMissedCallback(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable noteMissInfo) ;

/// @brief Method add_levelFinishedEvent addr 0xdae380 size 0xb0 virtual true final true
 void add_levelFinishedEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_levelFinishedEvent addr 0xdae430 size 0xb0 virtual true final true
 void remove_levelFinishedEvent(::System::Action_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method LevelFinished addr 0xdae4e0 size 0x58 virtual true final true
 void LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method InvokeLevelFinishedCallback addr 0xdae538 size 0x1c virtual false final false
 void InvokeLevelFinishedCallback(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method add_returnToMenuEvent addr 0xdae554 size 0xb0 virtual true final true
 void add_returnToMenuEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_returnToMenuEvent addr 0xdae604 size 0xb0 virtual true final true
 void remove_returnToMenuEvent(::System::Action_1<::StringW> value) ;

/// @brief Method ReturnToMenu addr 0xdae6b4 size 0x50 virtual true final true
 void ReturnToMenu() ;

/// @brief Method InvokeReturnToMenuCallback addr 0xdae704 size 0x1c virtual false final false
 void InvokeReturnToMenuCallback(::StringW userId) ;

/// @brief Method add_requestReturnToMenuEvent addr 0xdae720 size 0xb0 virtual true final true
 void add_requestReturnToMenuEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_requestReturnToMenuEvent addr 0xdae7d0 size 0xb0 virtual true final true
 void remove_requestReturnToMenuEvent(::System::Action_1<::StringW> value) ;

/// @brief Method RequestReturnToMenu addr 0xdae880 size 0x50 virtual true final true
 void RequestReturnToMenu() ;

/// @brief Method InvokeRequestReturnToMenuCallback addr 0xdae8d0 size 0x1c virtual false final false
 void InvokeRequestReturnToMenuCallback(::StringW userId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RpcType, "", "GameplayRpcManager/RpcType");
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager, "", "GameplayRpcManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc, "", "GameplayRpcManager/GetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc, "", "GameplayRpcManager/GetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__LevelFinishedRpc, "", "GameplayRpcManager/LevelFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteCutRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteCutRpc, "", "GameplayRpcManager/NoteCutRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteMissedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteMissedRpc, "", "GameplayRpcManager/NoteMissedRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc, "", "GameplayRpcManager/NoteSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc, "", "GameplayRpcManager/ObstacleSpawnedRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc, "", "GameplayRpcManager/RequestReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc, "", "GameplayRpcManager/ReturnToMenuRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc, "", "GameplayRpcManager/SetGameplaySceneReadyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc, "", "GameplayRpcManager/SetGameplaySongReadyRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc, "", "GameplayRpcManager/SetSongStartTimeRpc");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc, "", "GameplayRpcManager/SliderSpawnedRpc");
