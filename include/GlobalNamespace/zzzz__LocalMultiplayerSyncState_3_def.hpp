#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class LocalStateBuffer_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class StateBuffer_3;
}
namespace System {
struct Int32Enum;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class LocalMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<>
class LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TState>
class LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>;
}
// Type: ::LocalMultiplayerSyncState`3
// Type: ::LocalMultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4559)), TypeDefinitionIndex(TypeDefinitionIndex(4558)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4558), inst: 3694 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4559), inst: 4982 })
// CS Name: LocalMultiplayerSyncState`3
class CORDL_TYPE LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> : public GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocalMultiplayerSyncState_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalMultiplayerSyncState_3", modifiers: " const&", def_value: None }]
constexpr LocalMultiplayerSyncState_3(LocalMultiplayerSyncState_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
constexpr LocalMultiplayerSyncState_3(LocalMultiplayerSyncState_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalMultiplayerSyncState_3(void* ptr) noexcept : GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>(ptr) {
}


  constexpr LocalMultiplayerSyncState_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalMultiplayerSyncState_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalMultiplayerSyncState_3& operator=(LocalMultiplayerSyncState_3&& o) noexcept = default;
  constexpr LocalMultiplayerSyncState_3& operator=(LocalMultiplayerSyncState_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__player, put=__set__player))  _player;

constexpr void __set__player(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__player() const;

 GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> __declspec(property(get=__get__stateBuffer, put=__set__stateBuffer))  _stateBuffer;

constexpr void __set__stateBuffer(GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> value) ;

constexpr GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> __get__stateBuffer() const;


// Properties

 GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> __declspec(property(get=get_stateBuffer))  stateBuffer;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_player))  player;

 TState __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_player() ;

static GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> New_ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> smoother) ;

/// @brief Method TryGetSerializedState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool TryGetSerializedState(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable) ;

/// @brief Method TryGetSerializedStateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool TryGetSerializedStateDelta(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable) ;

/// @brief Method SetDirty addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDirty() ;

/// @brief Method SetCurrentTime addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCurrentTime(float_t time) ;

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetState(System::Int32Enum type, TState state) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
 TState GetState(System::Int32Enum type) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 TState get_Item(System::Int32Enum t) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(System::Int32Enum t, TState value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalMultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4558), inst: 3694 }), TypeDefinitionIndex(TypeDefinitionIndex(4558)), TypeDefinitionIndex(TypeDefinitionIndex(4559))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4559), inst: 4981 })
// CS Name: LocalMultiplayerSyncState`3
class CORDL_TYPE LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocalMultiplayerSyncState_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalMultiplayerSyncState_3", modifiers: " const&", def_value: None }]
constexpr LocalMultiplayerSyncState_3(LocalMultiplayerSyncState_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
constexpr LocalMultiplayerSyncState_3(LocalMultiplayerSyncState_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalMultiplayerSyncState_3(void* ptr) noexcept : GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>(ptr) {
}


  constexpr LocalMultiplayerSyncState_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalMultiplayerSyncState_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalMultiplayerSyncState_3& operator=(LocalMultiplayerSyncState_3&& o) noexcept = default;
  constexpr LocalMultiplayerSyncState_3& operator=(LocalMultiplayerSyncState_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__player, put=__set__player))  _player;

constexpr void __set__player(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__player() const;

 GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=__get__stateBuffer, put=__set__stateBuffer))  _stateBuffer;

constexpr void __set__stateBuffer(GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> value) ;

constexpr GlobalNamespace::LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __get__stateBuffer() const;


// Properties

 GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=get_stateBuffer))  stateBuffer;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_player))  player;

 GlobalNamespace::PoseSerializable __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_player() ;

static GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> New_ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::IConnectedPlayer player, float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method TryGetSerializedState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool TryGetSerializedState(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable) ;

/// @brief Method TryGetSerializedStateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool TryGetSerializedStateDelta(GlobalNamespace::IPacketPool_1<T> pool, ByRef<T> serializable) ;

/// @brief Method SetDirty addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDirty() ;

/// @brief Method SetCurrentTime addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetCurrentTime(float_t time) ;

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetState(System::Int32Enum type, GlobalNamespace::PoseSerializable state) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::PoseSerializable GetState(System::Int32Enum type) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::PoseSerializable get_Item(System::Int32Enum t) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(System::Int32Enum t, GlobalNamespace::PoseSerializable value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LocalMultiplayerSyncState_3, "", "LocalMultiplayerSyncState`3");
