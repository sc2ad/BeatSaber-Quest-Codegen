#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class LocalMultiplayerSyncState_3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class IScoreSyncStateManager_5;
}
// Type: ::IScoreSyncStateManager`5
namespace GlobalNamespace {
// cpp template
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4539))
// CS Name: IScoreSyncStateManager`5
class CORDL_TYPE IScoreSyncStateManager_5 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IScoreSyncStateManager_5() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IScoreSyncStateManager_5(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_syncTime))  syncTime;

 int32_t __declspec(property(get=get_connectedPlayerCount))  connectedPlayerCount;

 ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState> __declspec(property(get=get_localState))  localState;


// Methods

/// @brief Method get_syncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_syncTime() ;

/// @brief Method get_connectedPlayerCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_connectedPlayerCount() ;

/// @brief Method get_localState addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable,TType,TState> get_localState() ;

/// @brief Method GetSyncStateForPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState> GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method GetSyncState addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::MultiplayerSyncState_3<TStateTable,TType,TState> GetSyncState(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IScoreSyncStateManager_5, "", "IScoreSyncStateManager`5");
