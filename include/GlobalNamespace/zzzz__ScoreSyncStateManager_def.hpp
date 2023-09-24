#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
class StandardScoreSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class IScoreSyncStateManager_5;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardScoreSyncState__Score;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreSyncStateManager;
}
// Type: ::ScoreSyncStateManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4562), inst: 3689 }), TypeDefinitionIndex(TypeDefinitionIndex(4562)), TypeDefinitionIndex(TypeDefinitionIndex(12919)), TypeDefinitionIndex(TypeDefinitionIndex(12918)), TypeDefinitionIndex(TypeDefinitionIndex(12917)), TypeDefinitionIndex(TypeDefinitionIndex(12916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4601))
// CS Name: ScoreSyncStateManager
class CORDL_TYPE ScoreSyncStateManager : public GlobalNamespace::MultiplayerSyncStateManager_5<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t,GlobalNamespace::StandardScoreSyncStateNetSerializable,GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable> {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IScoreSyncStateManager
constexpr operator  GlobalNamespace::IScoreSyncStateManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::IScoreSyncStateManager_5<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t,GlobalNamespace::StandardScoreSyncStateNetSerializable,GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable>
constexpr operator  GlobalNamespace::IScoreSyncStateManager_5<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t,GlobalNamespace::StandardScoreSyncStateNetSerializable,GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ScoreSyncStateManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreSyncStateManager", modifiers: " const&", def_value: None }]
constexpr ScoreSyncStateManager(ScoreSyncStateManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreSyncStateManager", modifiers: "&&", def_value: None }]
constexpr ScoreSyncStateManager(ScoreSyncStateManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreSyncStateManager(void* ptr) noexcept : GlobalNamespace::MultiplayerSyncStateManager_5<GlobalNamespace::StandardScoreSyncState,GlobalNamespace::GlobalNamespace__StandardScoreSyncState__Score,int32_t,GlobalNamespace::StandardScoreSyncStateNetSerializable,GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable>(ptr) {
}


  constexpr ScoreSyncStateManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreSyncStateManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreSyncStateManager& operator=(ScoreSyncStateManager&& o) noexcept = default;
  constexpr ScoreSyncStateManager& operator=(ScoreSyncStateManager const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_deltaUpdateFrequency))  deltaUpdateFrequency;

 float_t __declspec(property(get=get_fullStateUpdateFrequency))  fullStateUpdateFrequency;

 int32_t __declspec(property(get=get_localBufferSize))  localBufferSize;

 int32_t __declspec(property(get=get_remoteBufferSize))  remoteBufferSize;

 GlobalNamespace::IPacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable> __declspec(property(get=get_serializablePool))  serializablePool;

 GlobalNamespace::IPacketPool_1<GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable> __declspec(property(get=get_deltaSerializablePool))  deltaSerializablePool;

 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_messageType))  messageType;

 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType __declspec(property(get=get_deltaMessageType))  deltaMessageType;


// Methods

/// @brief Method get_deltaUpdateFrequency addr 0x2211ee8 size 0xc virtual true final false
 float_t get_deltaUpdateFrequency() ;

/// @brief Method get_fullStateUpdateFrequency addr 0x2211ef4 size 0x8 virtual true final false
 float_t get_fullStateUpdateFrequency() ;

/// @brief Method get_localBufferSize addr 0x2211efc size 0x8 virtual true final false
 int32_t get_localBufferSize() ;

/// @brief Method get_remoteBufferSize addr 0x2211f04 size 0x8 virtual true final false
 int32_t get_remoteBufferSize() ;

/// @brief Method get_serializablePool addr 0x2211f0c size 0x8 virtual true final false
 GlobalNamespace::IPacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable> get_serializablePool() ;

/// @brief Method get_deltaSerializablePool addr 0x2211f14 size 0x8 virtual true final false
 GlobalNamespace::IPacketPool_1<GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable> get_deltaSerializablePool() ;

/// @brief Method get_messageType addr 0x2211f1c size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType get_messageType() ;

/// @brief Method get_deltaMessageType addr 0x2211f24 size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType get_deltaMessageType() ;

/// @brief Method Interpolate addr 0x2211f2c size 0xf8 virtual true final false
 int32_t Interpolate(int32_t prev, float_t prevTime, int32_t curr, float_t currTime, float_t time) ;

static GlobalNamespace::ScoreSyncStateManager New_ctor() ;

/// @brief Method .ctor addr 0x2212024 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScoreSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreSyncStateManager, "", "ScoreSyncStateManager");
