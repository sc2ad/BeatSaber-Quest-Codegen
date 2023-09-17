#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
struct Int32Enum;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class LocalMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteMultiplayerSyncState_3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class MultiplayerSyncStateManager_5;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class ____GlobalNamespace__MultiplayerSyncStateManager_5____c;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
class MultiplayerSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
class MultiplayerSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t,TSerializable,TDeltaSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
class ____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t,TSerializable,TDeltaSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
class ____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable>;
}
// Type: ::<>c
// Type: ::MultiplayerSyncStateManager`5
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4561))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4561), inst: 5935 })
// CS Name: MultiplayerSyncStateManager`5::<>c
class CORDL_TYPE ____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__MultiplayerSyncStateManager_5____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerSyncStateManager_5____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c(____GlobalNamespace__MultiplayerSyncStateManager_5____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerSyncStateManager_5____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c(____GlobalNamespace__MultiplayerSyncStateManager_5____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerSyncStateManager_5____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(____GlobalNamespace__MultiplayerSyncStateManager_5____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(____GlobalNamespace__MultiplayerSyncStateManager_5____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable> value) ;

static ::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable> __get___9() ;

static ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>,int32_t> __declspec(property(get=__get___9__37_0, put=__set___9__37_0))  __9__37_0;

static void __set___9__37_0(::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>,int32_t> value) ;

static ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>,int32_t> __get___9__37_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerSyncStateManager_5____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <HandlePlayerConnected>b__37_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t _HandlePlayerConnected_b__37_0(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4561))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4561), inst: 5936 })
// CS Name: MultiplayerSyncStateManager`5::<>c
class CORDL_TYPE ____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t,TSerializable,TDeltaSerializable> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__MultiplayerSyncStateManager_5____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerSyncStateManager_5____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c(____GlobalNamespace__MultiplayerSyncStateManager_5____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerSyncStateManager_5____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c(____GlobalNamespace__MultiplayerSyncStateManager_5____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerSyncStateManager_5____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(____GlobalNamespace__MultiplayerSyncStateManager_5____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerSyncStateManager_5____c& operator=(____GlobalNamespace__MultiplayerSyncStateManager_5____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t,TSerializable,TDeltaSerializable> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t,TSerializable,TDeltaSerializable> value) ;

static ::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t,TSerializable,TDeltaSerializable> __get___9() ;

static ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>,int32_t> __declspec(property(get=__get___9__37_0, put=__set___9__37_0))  __9__37_0;

static void __set___9__37_0(::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>,int32_t> value) ;

static ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>,int32_t> __get___9__37_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerSyncStateManager_5____c() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <HandlePlayerConnected>b__37_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t _HandlePlayerConnected_b__37_0(::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSyncStateManager`5
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166)), TypeDefinitionIndex(TypeDefinitionIndex(4562))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4562), inst: 5935 })
// CS Name: MultiplayerSyncStateManager`5
class CORDL_TYPE MultiplayerSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable,TSerializable,TDeltaSerializable> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::NodePoseSyncState, ::System::Int32Enum, ::GlobalNamespace::PoseSerializable, TSerializable, TDeltaSerializable>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerSyncStateManager_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: " const&", def_value: None }]
constexpr MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "&&", def_value: None }]
constexpr MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSyncStateManager_5(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerSyncStateManager_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSyncStateManager_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSyncStateManager_5& operator=(MultiplayerSyncStateManager_5&& o) noexcept = default;
  constexpr MultiplayerSyncStateManager_5& operator=(MultiplayerSyncStateManager_5 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> __declspec(property(get=__get__localState, put=__set__localState))  _localState;

constexpr void __set__localState(::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> value) ;

constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> __get__localState() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>> __declspec(property(get=__get__connectedPlayerStates, put=__set__connectedPlayerStates))  _connectedPlayerStates;

constexpr void __set__connectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>> __get__connectedPlayerStates() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>> __declspec(property(get=__get__disconnectedPlayerStates, put=__set__disconnectedPlayerStates))  _disconnectedPlayerStates;

constexpr void __set__disconnectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable>> __get__disconnectedPlayerStates() const;


// Properties

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=get_multiplayerSessionManager))  multiplayerSessionManager;

 ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> __declspec(property(get=get_localState))  localState;

 int32_t __declspec(property(get=get_connectedPlayerCount))  connectedPlayerCount;

 int32_t __declspec(property(get=get_disconnectedPlayerCount))  disconnectedPlayerCount;

 float_t __declspec(property(get=get_syncTime))  syncTime;

 float_t __declspec(property(get=get_deltaUpdateFrequency))  deltaUpdateFrequency;

 float_t __declspec(property(get=get_fullStateUpdateFrequency))  fullStateUpdateFrequency;

 int32_t __declspec(property(get=get_localBufferSize))  localBufferSize;

 int32_t __declspec(property(get=get_remoteBufferSize))  remoteBufferSize;

 ::GlobalNamespace::IPacketPool_1<TSerializable> __declspec(property(get=get_serializablePool))  serializablePool;

 ::GlobalNamespace::IPacketPool_1<TDeltaSerializable> __declspec(property(get=get_deltaSerializablePool))  deltaSerializablePool;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_messageType))  messageType;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_deltaMessageType))  deltaMessageType;


// Methods

/// @brief Method get_multiplayerSessionManager addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::IMultiplayerSessionManager get_multiplayerSessionManager() ;

/// @brief Method get_localState addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> get_localState() ;

/// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_connectedPlayerCount() ;

/// @brief Method get_disconnectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_disconnectedPlayerCount() ;

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_syncTime() ;

/// @brief Method get_deltaUpdateFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_deltaUpdateFrequency() ;

/// @brief Method get_fullStateUpdateFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_fullStateUpdateFrequency() ;

/// @brief Method get_localBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_localBufferSize() ;

/// @brief Method get_remoteBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_remoteBufferSize() ;

/// @brief Method get_serializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IPacketPool_1<TSerializable> get_serializablePool() ;

/// @brief Method get_deltaSerializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IPacketPool_1<TDeltaSerializable> get_deltaSerializablePool() ;

/// @brief Method get_messageType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType get_messageType() ;

/// @brief Method get_deltaMessageType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType get_deltaMessageType() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void LateUpdate() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::PoseSerializable Interpolate(::GlobalNamespace::PoseSerializable a, float_t timeA, ::GlobalNamespace::PoseSerializable b, float_t timeB, float_t time) ;

/// @brief Method Smooth addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::PoseSerializable Smooth(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b, float_t smoooth) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual true final true
 void ClearBufferedStates() ;

/// @brief Method TryCreateLocalState addr 0x0 size 0xffffffffffffffff virtual false final false
 void TryCreateLocalState() ;

/// @brief Method HandlePlayerConnected addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerDisconnected addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleSyncPacket addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleSyncPacket(TSerializable packet, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleSyncDeltaPacket addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleSyncDeltaPacket(TDeltaSerializable packet, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method GetSyncState addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> GetSyncState(int32_t i) ;

/// @brief Method GetSyncStateForPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method GetDisconnectedSyncState addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::NodePoseSyncState,::System::Int32Enum,::GlobalNamespace::PoseSerializable> GetDisconnectedSyncState(int32_t i) ;

// Ctor Parameters []
explicit MultiplayerSyncStateManager_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSyncStateManager`5
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSerializable,::cordl_internals::il2cpp_reference_type TDeltaSerializable>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4562)), TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4562), inst: 5936 })
// CS Name: MultiplayerSyncStateManager`5
class CORDL_TYPE MultiplayerSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t,TSerializable,TDeltaSerializable> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c<::GlobalNamespace::StandardScoreSyncState, ::System::Int32Enum, int32_t, TSerializable, TDeltaSerializable>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerSyncStateManager_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: " const&", def_value: None }]
constexpr MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncStateManager_5", modifiers: "&&", def_value: None }]
constexpr MultiplayerSyncStateManager_5(MultiplayerSyncStateManager_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSyncStateManager_5(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerSyncStateManager_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSyncStateManager_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSyncStateManager_5& operator=(MultiplayerSyncStateManager_5&& o) noexcept = default;
  constexpr MultiplayerSyncStateManager_5& operator=(MultiplayerSyncStateManager_5 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> __declspec(property(get=__get__localState, put=__set__localState))  _localState;

constexpr void __set__localState(::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> value) ;

constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> __get__localState() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>> __declspec(property(get=__get__connectedPlayerStates, put=__set__connectedPlayerStates))  _connectedPlayerStates;

constexpr void __set__connectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>> __get__connectedPlayerStates() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>> __declspec(property(get=__get__disconnectedPlayerStates, put=__set__disconnectedPlayerStates))  _disconnectedPlayerStates;

constexpr void __set__disconnectedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t>> __get__disconnectedPlayerStates() const;


// Properties

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=get_multiplayerSessionManager))  multiplayerSessionManager;

 ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> __declspec(property(get=get_localState))  localState;

 int32_t __declspec(property(get=get_connectedPlayerCount))  connectedPlayerCount;

 int32_t __declspec(property(get=get_disconnectedPlayerCount))  disconnectedPlayerCount;

 float_t __declspec(property(get=get_syncTime))  syncTime;

 float_t __declspec(property(get=get_deltaUpdateFrequency))  deltaUpdateFrequency;

 float_t __declspec(property(get=get_fullStateUpdateFrequency))  fullStateUpdateFrequency;

 int32_t __declspec(property(get=get_localBufferSize))  localBufferSize;

 int32_t __declspec(property(get=get_remoteBufferSize))  remoteBufferSize;

 ::GlobalNamespace::IPacketPool_1<TSerializable> __declspec(property(get=get_serializablePool))  serializablePool;

 ::GlobalNamespace::IPacketPool_1<TDeltaSerializable> __declspec(property(get=get_deltaSerializablePool))  deltaSerializablePool;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_messageType))  messageType;

 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_deltaMessageType))  deltaMessageType;


// Methods

/// @brief Method get_multiplayerSessionManager addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::IMultiplayerSessionManager get_multiplayerSessionManager() ;

/// @brief Method get_localState addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::LocalMultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> get_localState() ;

/// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_connectedPlayerCount() ;

/// @brief Method get_disconnectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_disconnectedPlayerCount() ;

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_syncTime() ;

/// @brief Method get_deltaUpdateFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_deltaUpdateFrequency() ;

/// @brief Method get_fullStateUpdateFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_fullStateUpdateFrequency() ;

/// @brief Method get_localBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_localBufferSize() ;

/// @brief Method get_remoteBufferSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_remoteBufferSize() ;

/// @brief Method get_serializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IPacketPool_1<TSerializable> get_serializablePool() ;

/// @brief Method get_deltaSerializablePool addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IPacketPool_1<TDeltaSerializable> get_deltaSerializablePool() ;

/// @brief Method get_messageType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType get_messageType() ;

/// @brief Method get_deltaMessageType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__MultiplayerSessionManager__MessageType get_deltaMessageType() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void LateUpdate() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Interpolate(int32_t a, float_t timeA, int32_t b, float_t timeB, float_t time) ;

/// @brief Method Smooth addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Smooth(int32_t a, int32_t b, float_t smoooth) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual true final true
 void ClearBufferedStates() ;

/// @brief Method TryCreateLocalState addr 0x0 size 0xffffffffffffffff virtual false final false
 void TryCreateLocalState() ;

/// @brief Method HandlePlayerConnected addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerDisconnected addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleSyncPacket addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleSyncPacket(TSerializable packet, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleSyncDeltaPacket addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleSyncDeltaPacket(TDeltaSerializable packet, ::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method GetSyncState addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> GetSyncState(int32_t i) ;

/// @brief Method GetSyncStateForPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
 ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method GetDisconnectedSyncState addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,::System::Int32Enum,int32_t> GetDisconnectedSyncState(int32_t i) ;

// Ctor Parameters []
explicit MultiplayerSyncStateManager_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MultiplayerSyncStateManager_5, "", "MultiplayerSyncStateManager`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__MultiplayerSyncStateManager_5____c, "", "MultiplayerSyncStateManager`5/<>c");
