#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace System {
struct Int32Enum;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class StateBuffer_3;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
template<>
class MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TState>
class MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState>;
}
// Type: ::MultiplayerSyncState`3
// Type: ::MultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TState>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4558))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4558), inst: 4982 })
// CS Name: MultiplayerSyncState`3
class CORDL_TYPE MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MultiplayerSyncState_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: " const&", def_value: None }]
constexpr MultiplayerSyncState_3(MultiplayerSyncState_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "&&", def_value: None }]
constexpr MultiplayerSyncState_3(MultiplayerSyncState_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSyncState_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerSyncState_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSyncState_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSyncState_3& operator=(MultiplayerSyncState_3&& o) noexcept = default;
  constexpr MultiplayerSyncState_3& operator=(MultiplayerSyncState_3 const& o) noexcept = default;
                


// Properties

 GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> __declspec(property(get=get_stateBuffer))  stateBuffer;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_player))  player;


// Methods

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_player() ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetLatestTime() ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
 TState GetLatestState(System::Int32Enum type) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual true final false
 TState GetState(System::Int32Enum type, float_t time) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearBufferedStates() ;

static GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,TState> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSyncState`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4558))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4558), inst: 4981 })
// CS Name: MultiplayerSyncState`3
class CORDL_TYPE MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MultiplayerSyncState_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: " const&", def_value: None }]
constexpr MultiplayerSyncState_3(MultiplayerSyncState_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSyncState_3", modifiers: "&&", def_value: None }]
constexpr MultiplayerSyncState_3(MultiplayerSyncState_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSyncState_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerSyncState_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSyncState_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSyncState_3& operator=(MultiplayerSyncState_3&& o) noexcept = default;
  constexpr MultiplayerSyncState_3& operator=(MultiplayerSyncState_3 const& o) noexcept = default;
                


// Properties

 GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=get_stateBuffer))  stateBuffer;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_player))  player;


// Methods

/// @brief Method get_stateBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> get_stateBuffer() ;

/// @brief Method get_player addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_player() ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetLatestTime() ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::PoseSerializable GetLatestState(System::Int32Enum type) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PoseSerializable GetState(System::Int32Enum type, float_t time) ;

/// @brief Method ClearBufferedStates addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearBufferedStates() ;

static GlobalNamespace::MultiplayerSyncState_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MultiplayerSyncState_3, "", "MultiplayerSyncState`3");
