// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerLobbyAvatarController
#include "GlobalNamespace/MultiplayerLobbyAvatarController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLobbyAvatarManager
  class MultiplayerLobbyAvatarManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyAvatarManager*, "", "MultiplayerLobbyAvatarManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyAvatarManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyAvatarManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerLobbyAvatarManager::$RemovePlayerAndDestroy$d__13
    class $RemovePlayerAndDestroy$d__13;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x124B518
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x124B528
    // private readonly MultiplayerLobbyAvatarController/Factory _avatarControllerFactory
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerLobbyAvatarController::Factory* avatarControllerFactory;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLobbyAvatarController::Factory*) == 0x8);
    // private System.Single _innerCircleRadius
    // Size: 0x4
    // Offset: 0x28
    float innerCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOuterCircleRadius
    // Size: 0x4
    // Offset: 0x2C
    float minOuterCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerLobbyAvatarController> _playerIdToAvatarMap
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>* playerIdToAvatarMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<MultiplayerLobbyAvatarController> _inProgressDespawnAnimations
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>* inProgressDespawnAnimations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly ILobbyStateDataModel _lobbyStateDataModel
    ::GlobalNamespace::ILobbyStateDataModel*& dyn__lobbyStateDataModel();
    // Get instance field reference: private readonly MultiplayerLobbyAvatarController/Factory _avatarControllerFactory
    ::GlobalNamespace::MultiplayerLobbyAvatarController::Factory*& dyn__avatarControllerFactory();
    // Get instance field reference: private System.Single _innerCircleRadius
    float& dyn__innerCircleRadius();
    // Get instance field reference: private System.Single _minOuterCircleRadius
    float& dyn__minOuterCircleRadius();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerLobbyAvatarController> _playerIdToAvatarMap
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*>*& dyn__playerIdToAvatarMap();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<MultiplayerLobbyAvatarController> _inProgressDespawnAnimations
    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>*& dyn__inProgressDespawnAnimations();
    // public System.Void Init(System.Single innerCircleRadius, System.Single minOuterCircleRadius)
    // Offset: 0x13F9B20
    void Init(float innerCircleRadius, float minOuterCircleRadius);
    // public System.Void ActivateMultiplayerLobbyAvatarManager()
    // Offset: 0x13F9B28
    void ActivateMultiplayerLobbyAvatarManager();
    // public System.Void DeactivateMultiplayerLobbyAvatarManager()
    // Offset: 0x13FA25C
    void DeactivateMultiplayerLobbyAvatarManager();
    // private System.Void HandleLobbyStateDataModelPlayerConnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x13FA58C
    void HandleLobbyStateDataModelPlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandleLobbyStateDataModelPlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x13FA590
    void HandleLobbyStateDataModelPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void AddPlayer(IConnectedPlayer connectedPlayer)
    // Offset: 0x13F9DC8
    void AddPlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void RemovePlayer(IConnectedPlayer connectedPlayer)
    // Offset: 0x13FA594
    void RemovePlayer(::GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Collections.IEnumerator RemovePlayerAndDestroy(System.String userId, MultiplayerLobbyAvatarController multiplayerAvatar)
    // Offset: 0x13FA70C
    ::System::Collections::IEnumerator* RemovePlayerAndDestroy(::StringW userId, ::GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerAvatar);
    // public System.Void .ctor()
    // Offset: 0x13FA7BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyAvatarManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLobbyAvatarManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyAvatarManager*, creationType>()));
    }
  }; // MultiplayerLobbyAvatarManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyAvatarManager), 56 + sizeof(::System::Collections::Generic::HashSet_1<::GlobalNamespace::MultiplayerLobbyAvatarController*>*)> __GlobalNamespace_MultiplayerLobbyAvatarManagerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyAvatarManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::*)(float, float)>(&GlobalNamespace::MultiplayerLobbyAvatarManager::Init)> {
  static const MethodInfo* get() {
    static auto* innerCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* minOuterCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerCircleRadius, minOuterCircleRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::ActivateMultiplayerLobbyAvatarManager
// Il2CppName: ActivateMultiplayerLobbyAvatarManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarManager::ActivateMultiplayerLobbyAvatarManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "ActivateMultiplayerLobbyAvatarManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::DeactivateMultiplayerLobbyAvatarManager
// Il2CppName: DeactivateMultiplayerLobbyAvatarManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarManager::DeactivateMultiplayerLobbyAvatarManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "DeactivateMultiplayerLobbyAvatarManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::HandleLobbyStateDataModelPlayerConnected
// Il2CppName: HandleLobbyStateDataModelPlayerConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerLobbyAvatarManager::HandleLobbyStateDataModelPlayerConnected)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "HandleLobbyStateDataModelPlayerConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::HandleLobbyStateDataModelPlayerDisconnected
// Il2CppName: HandleLobbyStateDataModelPlayerDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerLobbyAvatarManager::HandleLobbyStateDataModelPlayerDisconnected)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "HandleLobbyStateDataModelPlayerDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::AddPlayer
// Il2CppName: AddPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerLobbyAvatarManager::AddPlayer)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "AddPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::RemovePlayer
// Il2CppName: RemovePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerLobbyAvatarManager::RemovePlayer)> {
  static const MethodInfo* get() {
    static auto* connectedPlayer = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "RemovePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::RemovePlayerAndDestroy
// Il2CppName: RemovePlayerAndDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MultiplayerLobbyAvatarManager::*)(::StringW, ::GlobalNamespace::MultiplayerLobbyAvatarController*)>(&GlobalNamespace::MultiplayerLobbyAvatarManager::RemovePlayerAndDestroy)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* multiplayerAvatar = &::il2cpp_utils::GetClassFromName("", "MultiplayerLobbyAvatarController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarManager*), "RemovePlayerAndDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, multiplayerAvatar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
