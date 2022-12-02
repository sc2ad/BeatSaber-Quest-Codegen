// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core
namespace BGNet::Core {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
  // Forward declaring type: MenuRpcManager
  class MenuRpcManager;
  // Forward declaring type: GameplayRpcManager
  class GameplayRpcManager;
  // Forward declaring type: GameState
  class GameState;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerFiniteStateMachine
  class GameplayServerFiniteStateMachine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerFiniteStateMachine*, "", "GameplayServerFiniteStateMachine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: GameplayServerFiniteStateMachine
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayServerFiniteStateMachine : public ::Il2CppObject {
    public:
    public:
    // private BGNet.Core.ITimeProvider <timeProvider>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::BGNet::Core::ITimeProvider* timeProvider;
    // Field size check
    static_assert(sizeof(::BGNet::Core::ITimeProvider*) == 0x8);
    // private IMultiplayerSessionManager <multiplayerSessionManager>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private System.String <ownerUserId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW ownerUserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private BeatmapLevelSelectionMask <selectionMask>k__BackingField
    // Size: 0x18
    // Offset: 0x28
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // private GameplayServerConfiguration <configuration>k__BackingField
    // Size: 0x18
    // Offset: 0x40
    ::GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // private IServerBeatmapProvider <beatmapProvider>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IServerBeatmapProvider*) == 0x8);
    // private MenuRpcManager <menuRpcManager>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::MenuRpcManager* menuRpcManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuRpcManager*) == 0x8);
    // private GameplayRpcManager <gameplayRpcManager>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::GameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayRpcManager*) == 0x8);
    // protected GameState state
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::GameState* state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameState*) == 0x8);
    // protected System.Boolean enteringState
    // Size: 0x1
    // Offset: 0x78
    bool enteringState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private BGNet.Core.ITimeProvider <timeProvider>k__BackingField
    [[deprecated("Use field access instead!")]] ::BGNet::Core::ITimeProvider*& dyn_$timeProvider$k__BackingField();
    // Get instance field reference: private IMultiplayerSessionManager <multiplayerSessionManager>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn_$multiplayerSessionManager$k__BackingField();
    // Get instance field reference: private System.String <ownerUserId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ownerUserId$k__BackingField();
    // Get instance field reference: private BeatmapLevelSelectionMask <selectionMask>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_$selectionMask$k__BackingField();
    // Get instance field reference: private GameplayServerConfiguration <configuration>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerConfiguration& dyn_$configuration$k__BackingField();
    // Get instance field reference: private IServerBeatmapProvider <beatmapProvider>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IServerBeatmapProvider*& dyn_$beatmapProvider$k__BackingField();
    // Get instance field reference: private MenuRpcManager <menuRpcManager>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuRpcManager*& dyn_$menuRpcManager$k__BackingField();
    // Get instance field reference: private GameplayRpcManager <gameplayRpcManager>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayRpcManager*& dyn_$gameplayRpcManager$k__BackingField();
    // Get instance field reference: protected GameState state
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameState*& dyn_state();
    // Get instance field reference: protected System.Boolean enteringState
    [[deprecated("Use field access instead!")]] bool& dyn_enteringState();
    // public BGNet.Core.ITimeProvider get_timeProvider()
    // Offset: 0x16D0650
    ::BGNet::Core::ITimeProvider* get_timeProvider();
    // private System.Void set_timeProvider(BGNet.Core.ITimeProvider value)
    // Offset: 0x16D0658
    void set_timeProvider(::BGNet::Core::ITimeProvider* value);
    // public IMultiplayerSessionManager get_multiplayerSessionManager()
    // Offset: 0x16D0660
    ::GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager();
    // private System.Void set_multiplayerSessionManager(IMultiplayerSessionManager value)
    // Offset: 0x16D0668
    void set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);
    // public System.String get_ownerUserId()
    // Offset: 0x16D0670
    ::StringW get_ownerUserId();
    // private System.Void set_ownerUserId(System.String value)
    // Offset: 0x16D0678
    void set_ownerUserId(::StringW value);
    // public BeatmapLevelSelectionMask get_selectionMask()
    // Offset: 0x16D0680
    ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();
    // private System.Void set_selectionMask(BeatmapLevelSelectionMask value)
    // Offset: 0x16D0694
    void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x16D06A8
    ::GlobalNamespace::GameplayServerConfiguration get_configuration();
    // private System.Void set_configuration(GameplayServerConfiguration value)
    // Offset: 0x16D06BC
    void set_configuration(::GlobalNamespace::GameplayServerConfiguration value);
    // public IServerBeatmapProvider get_beatmapProvider()
    // Offset: 0x16D06D0
    ::GlobalNamespace::IServerBeatmapProvider* get_beatmapProvider();
    // private System.Void set_beatmapProvider(IServerBeatmapProvider value)
    // Offset: 0x16D06D8
    void set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider* value);
    // public MenuRpcManager get_menuRpcManager()
    // Offset: 0x16D06E0
    ::GlobalNamespace::MenuRpcManager* get_menuRpcManager();
    // private System.Void set_menuRpcManager(MenuRpcManager value)
    // Offset: 0x16D06E8
    void set_menuRpcManager(::GlobalNamespace::MenuRpcManager* value);
    // public GameplayRpcManager get_gameplayRpcManager()
    // Offset: 0x16D06F0
    ::GlobalNamespace::GameplayRpcManager* get_gameplayRpcManager();
    // private System.Void set_gameplayRpcManager(GameplayRpcManager value)
    // Offset: 0x16D06F8
    void set_gameplayRpcManager(::GlobalNamespace::GameplayRpcManager* value);
    // public System.Void .ctor(BGNet.Core.ITimeProvider timeProvider, IMultiplayerSessionManager multiplayerSessionManager, System.String ownerUserId, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, IServerBeatmapProvider beatmapProvider)
    // Offset: 0x16C6268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayServerFiniteStateMachine* New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::StringW ownerUserId, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayServerFiniteStateMachine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayServerFiniteStateMachine*, creationType>(timeProvider, multiplayerSessionManager, ownerUserId, selectionMask, configuration, beatmapProvider)));
    }
  }; // GameplayServerFiniteStateMachine
  #pragma pack(pop)
  static check_size<sizeof(GameplayServerFiniteStateMachine), 120 + sizeof(bool)> __GlobalNamespace_GameplayServerFiniteStateMachineSizeCheck;
  static_assert(sizeof(GameplayServerFiniteStateMachine) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_timeProvider
// Il2CppName: get_timeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::ITimeProvider* (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_timeProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_timeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_timeProvider
// Il2CppName: set_timeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::BGNet::Core::ITimeProvider*)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_timeProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("BGNet.Core", "ITimeProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_timeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager
// Il2CppName: get_multiplayerSessionManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMultiplayerSessionManager* (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_multiplayerSessionManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager
// Il2CppName: set_multiplayerSessionManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IMultiplayerSessionManager*)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IMultiplayerSessionManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_multiplayerSessionManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId
// Il2CppName: get_ownerUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_ownerUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId
// Il2CppName: set_ownerUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::StringW)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_ownerUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask
// Il2CppName: get_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask
// Il2CppName: set_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration
// Il2CppName: set_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider
// Il2CppName: get_beatmapProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IServerBeatmapProvider* (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_beatmapProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider
// Il2CppName: set_beatmapProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IServerBeatmapProvider*)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IServerBeatmapProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_beatmapProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager
// Il2CppName: get_menuRpcManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuRpcManager* (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_menuRpcManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager
// Il2CppName: set_menuRpcManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::MenuRpcManager*)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MenuRpcManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_menuRpcManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager
// Il2CppName: get_gameplayRpcManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayRpcManager* (GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "get_gameplayRpcManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager
// Il2CppName: set_gameplayRpcManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayRpcManager*)>(&GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GameplayRpcManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayServerFiniteStateMachine*), "set_gameplayRpcManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayServerFiniteStateMachine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
