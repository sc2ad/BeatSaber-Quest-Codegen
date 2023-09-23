#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class GameState;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class MenuRpcManager;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayServerFiniteStateMachine__InitParams;
}
// Type: ::InitParams
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12703))
// CS Name: GameplayServerFiniteStateMachine::InitParams
struct CORDL_TYPE GlobalNamespace__GameplayServerFiniteStateMachine__InitParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "creatorId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "selectionMask", ty: "GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "configuration", ty: "GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "beatmapProvider", ty: "GlobalNamespace::IServerBeatmapProvider", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameplayServerFiniteStateMachine__InitParams(BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::StringW creatorId, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, GlobalNamespace::IServerBeatmapProvider beatmapProvider) noexcept;


                    constexpr GlobalNamespace__GameplayServerFiniteStateMachine__InitParams(GlobalNamespace__GameplayServerFiniteStateMachine__InitParams const&) = default;
                    constexpr GlobalNamespace__GameplayServerFiniteStateMachine__InitParams(GlobalNamespace__GameplayServerFiniteStateMachine__InitParams&&) = default;
                    constexpr GlobalNamespace__GameplayServerFiniteStateMachine__InitParams& operator=(GlobalNamespace__GameplayServerFiniteStateMachine__InitParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameplayServerFiniteStateMachine__InitParams& operator=(GlobalNamespace__GameplayServerFiniteStateMachine__InitParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayServerFiniteStateMachine__InitParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 BGNet::Core::ITaskUtility __declspec(property(get=__get_taskUtility, put=__set_taskUtility))  taskUtility;

constexpr void __set_taskUtility(BGNet::Core::ITaskUtility value) ;

constexpr BGNet::Core::ITaskUtility __get_taskUtility() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get_multiplayerSessionManager, put=__set_multiplayerSessionManager))  multiplayerSessionManager;

constexpr void __set_multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get_multiplayerSessionManager() const;

 ::StringW __declspec(property(get=__get_creatorId, put=__set_creatorId))  creatorId;

constexpr void __set_creatorId(::StringW value) ;

constexpr ::StringW __get_creatorId() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_configuration() const;

 GlobalNamespace::IServerBeatmapProvider __declspec(property(get=__get_beatmapProvider, put=__set_beatmapProvider))  beatmapProvider;

constexpr void __set_beatmapProvider(GlobalNamespace::IServerBeatmapProvider value) ;

constexpr GlobalNamespace::IServerBeatmapProvider __get_beatmapProvider() const;


// Methods

/// @brief Method .ctor addr 0xdaf0d8 size 0x2c virtual false final false
 void _ctor(BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, ::StringW creatorId, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, GlobalNamespace::IServerBeatmapProvider beatmapProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayServerFiniteStateMachine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12704))
// CS Name: GameplayServerFiniteStateMachine
class CORDL_TYPE GameplayServerFiniteStateMachine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InitParams = GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GameplayServerFiniteStateMachine() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: " const&", def_value: None }]
constexpr GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
constexpr GameplayServerFiniteStateMachine(GameplayServerFiniteStateMachine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayServerFiniteStateMachine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayServerFiniteStateMachine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayServerFiniteStateMachine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayServerFiniteStateMachine& operator=(GameplayServerFiniteStateMachine&& o) noexcept = default;
  constexpr GameplayServerFiniteStateMachine& operator=(GameplayServerFiniteStateMachine const& o) noexcept = default;
                


// Fields

 BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility_k__BackingField, put=__set__taskUtility_k__BackingField))  _taskUtility_k__BackingField;

constexpr void __set__taskUtility_k__BackingField(BGNet::Core::ITaskUtility value) ;

constexpr BGNet::Core::ITaskUtility __get__taskUtility_k__BackingField() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager_k__BackingField, put=__set__multiplayerSessionManager_k__BackingField))  _multiplayerSessionManager_k__BackingField;

constexpr void __set__multiplayerSessionManager_k__BackingField(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager_k__BackingField() const;

 ::StringW __declspec(property(get=__get__ownerUserId_k__BackingField, put=__set__ownerUserId_k__BackingField))  _ownerUserId_k__BackingField;

constexpr void __set__ownerUserId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ownerUserId_k__BackingField() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get__selectionMask_k__BackingField, put=__set__selectionMask_k__BackingField))  _selectionMask_k__BackingField;

constexpr void __set__selectionMask_k__BackingField(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get__selectionMask_k__BackingField() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get__configuration_k__BackingField, put=__set__configuration_k__BackingField))  _configuration_k__BackingField;

constexpr void __set__configuration_k__BackingField(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get__configuration_k__BackingField() const;

 GlobalNamespace::IServerBeatmapProvider __declspec(property(get=__get__beatmapProvider_k__BackingField, put=__set__beatmapProvider_k__BackingField))  _beatmapProvider_k__BackingField;

constexpr void __set__beatmapProvider_k__BackingField(GlobalNamespace::IServerBeatmapProvider value) ;

constexpr GlobalNamespace::IServerBeatmapProvider __get__beatmapProvider_k__BackingField() const;

 GlobalNamespace::MenuRpcManager __declspec(property(get=__get__menuRpcManager_k__BackingField, put=__set__menuRpcManager_k__BackingField))  _menuRpcManager_k__BackingField;

constexpr void __set__menuRpcManager_k__BackingField(GlobalNamespace::MenuRpcManager value) ;

constexpr GlobalNamespace::MenuRpcManager __get__menuRpcManager_k__BackingField() const;

 GlobalNamespace::GameplayRpcManager __declspec(property(get=__get__gameplayRpcManager_k__BackingField, put=__set__gameplayRpcManager_k__BackingField))  _gameplayRpcManager_k__BackingField;

constexpr void __set__gameplayRpcManager_k__BackingField(GlobalNamespace::GameplayRpcManager value) ;

constexpr GlobalNamespace::GameplayRpcManager __get__gameplayRpcManager_k__BackingField() const;

 GlobalNamespace::GameState __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(GlobalNamespace::GameState value) ;

constexpr GlobalNamespace::GameState __get_state() const;

 bool __declspec(property(get=__get_enteringState, put=__set_enteringState))  enteringState;

constexpr void __set_enteringState(bool value) ;

constexpr bool __get_enteringState() const;


// Properties

 BGNet::Core::ITaskUtility __declspec(property(get=get_taskUtility, put=set_taskUtility))  taskUtility;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=get_multiplayerSessionManager, put=set_multiplayerSessionManager))  multiplayerSessionManager;

 ::StringW __declspec(property(get=get_ownerUserId, put=set_ownerUserId))  ownerUserId;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask, put=set_selectionMask))  selectionMask;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration, put=set_configuration))  configuration;

 GlobalNamespace::IServerBeatmapProvider __declspec(property(get=get_beatmapProvider, put=set_beatmapProvider))  beatmapProvider;

 GlobalNamespace::MenuRpcManager __declspec(property(get=get_menuRpcManager, put=set_menuRpcManager))  menuRpcManager;

 GlobalNamespace::GameplayRpcManager __declspec(property(get=get_gameplayRpcManager, put=set_gameplayRpcManager))  gameplayRpcManager;


// Methods

/// @brief Method get_taskUtility addr 0xdaf028 size 0x8 virtual false final false
 BGNet::Core::ITaskUtility get_taskUtility() ;

/// @brief Method set_taskUtility addr 0xdaf030 size 0x8 virtual false final false
 void set_taskUtility(BGNet::Core::ITaskUtility value) ;

/// @brief Method get_multiplayerSessionManager addr 0xdaf038 size 0x8 virtual false final false
 GlobalNamespace::IMultiplayerSessionManager get_multiplayerSessionManager() ;

/// @brief Method set_multiplayerSessionManager addr 0xdaf040 size 0x8 virtual false final false
 void set_multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

/// @brief Method get_ownerUserId addr 0xdaf048 size 0x8 virtual false final false
 ::StringW get_ownerUserId() ;

/// @brief Method set_ownerUserId addr 0xdaf050 size 0x8 virtual false final false
 void set_ownerUserId(::StringW value) ;

/// @brief Method get_selectionMask addr 0xdaf058 size 0x14 virtual false final false
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method set_selectionMask addr 0xdaf06c size 0x14 virtual false final false
 void set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

/// @brief Method get_configuration addr 0xdaf080 size 0x14 virtual false final false
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method set_configuration addr 0xdaf094 size 0x14 virtual false final false
 void set_configuration(GlobalNamespace::GameplayServerConfiguration value) ;

/// @brief Method get_beatmapProvider addr 0xdaf0a8 size 0x8 virtual false final false
 GlobalNamespace::IServerBeatmapProvider get_beatmapProvider() ;

/// @brief Method set_beatmapProvider addr 0xdaf0b0 size 0x8 virtual false final false
 void set_beatmapProvider(GlobalNamespace::IServerBeatmapProvider value) ;

/// @brief Method get_menuRpcManager addr 0xdaf0b8 size 0x8 virtual false final false
 GlobalNamespace::MenuRpcManager get_menuRpcManager() ;

/// @brief Method set_menuRpcManager addr 0xdaf0c0 size 0x8 virtual false final false
 void set_menuRpcManager(GlobalNamespace::MenuRpcManager value) ;

/// @brief Method get_gameplayRpcManager addr 0xdaf0c8 size 0x8 virtual false final false
 GlobalNamespace::GameplayRpcManager get_gameplayRpcManager() ;

/// @brief Method set_gameplayRpcManager addr 0xdaf0d0 size 0x8 virtual false final false
 void set_gameplayRpcManager(GlobalNamespace::GameplayRpcManager value) ;

// Ctor Parameters [CppParam { name: "initParams", ty: "GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams", modifiers: "", def_value: None }]
explicit GameplayServerFiniteStateMachine(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

/// @brief Method .ctor addr 0xdaef0c size 0x11c virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFiniteStateMachine, "", "GameplayServerFiniteStateMachine");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams, "", "GameplayServerFiniteStateMachine/InitParams");
