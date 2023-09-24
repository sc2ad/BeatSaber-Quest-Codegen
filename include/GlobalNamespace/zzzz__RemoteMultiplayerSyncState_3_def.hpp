#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class StateBuffer_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace System {
struct Int32Enum;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteStateBuffer_3;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteMultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<>
class RemoteMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TState>
class RemoteMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>;
}
// Type: ::RemoteMultiplayerSyncState`3
// Type: ::RemoteMultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4560)), TypeDefinitionIndex(TypeDefinitionIndex(4558)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4558), inst: 3698 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4560), inst: 4982 })
// CS Name: RemoteMultiplayerSyncState`3
class CORDL_TYPE RemoteMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> : public GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteMultiplayerSyncState_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: " const&", def_value: None }]
constexpr RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
constexpr RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteMultiplayerSyncState_3(void* ptr) noexcept : GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>(ptr) {
}


  constexpr RemoteMultiplayerSyncState_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteMultiplayerSyncState_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteMultiplayerSyncState_3& operator=(RemoteMultiplayerSyncState_3&& o) noexcept = default;
  constexpr RemoteMultiplayerSyncState_3& operator=(RemoteMultiplayerSyncState_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__player, put=__set__player))  _player;

constexpr void __set__player(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__player() const;

 GlobalNamespace::RemoteStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> __declspec(property(get=__get__stateBuffer, put=__set__stateBuffer))  _stateBuffer;

constexpr void __set__stateBuffer(GlobalNamespace::RemoteStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> value) ;

constexpr GlobalNamespace::RemoteStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> __get__stateBuffer() const;


// Properties

 GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> __declspec(property(get=get_stateBuffer))  stateBuffer;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_player))  player;


// Methods

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_player() ;

/// @brief Method UpdateState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void UpdateState(T serializable) ;

/// @brief Method UpdateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void UpdateDelta(T serializable) ;

static GlobalNamespace::RemoteMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> New_ctor(GlobalNamespace::IConnectedPlayer player, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::IConnectedPlayer player, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> smoother) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteMultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4560)), TypeDefinitionIndex(TypeDefinitionIndex(4558)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4558), inst: 3698 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4560), inst: 4981 })
// CS Name: RemoteMultiplayerSyncState`3
class CORDL_TYPE RemoteMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteMultiplayerSyncState_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: " const&", def_value: None }]
constexpr RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteMultiplayerSyncState_3", modifiers: "&&", def_value: None }]
constexpr RemoteMultiplayerSyncState_3(RemoteMultiplayerSyncState_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteMultiplayerSyncState_3(void* ptr) noexcept : GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>(ptr) {
}


  constexpr RemoteMultiplayerSyncState_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteMultiplayerSyncState_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteMultiplayerSyncState_3& operator=(RemoteMultiplayerSyncState_3&& o) noexcept = default;
  constexpr RemoteMultiplayerSyncState_3& operator=(RemoteMultiplayerSyncState_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__player, put=__set__player))  _player;

constexpr void __set__player(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__player() const;

 GlobalNamespace::RemoteStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=__get__stateBuffer, put=__set__stateBuffer))  _stateBuffer;

constexpr void __set__stateBuffer(GlobalNamespace::RemoteStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> value) ;

constexpr GlobalNamespace::RemoteStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __get__stateBuffer() const;


// Properties

 GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=get_stateBuffer))  stateBuffer;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_player))  player;


// Methods

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_player() ;

/// @brief Method UpdateState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void UpdateState(T serializable) ;

/// @brief Method UpdateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void UpdateDelta(T serializable) ;

static GlobalNamespace::RemoteMultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> New_ctor(GlobalNamespace::IConnectedPlayer player, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::IConnectedPlayer player, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteMultiplayerSyncState_3, "", "RemoteMultiplayerSyncState`3");
