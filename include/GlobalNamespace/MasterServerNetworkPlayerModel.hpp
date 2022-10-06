// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkPlayerModel`1
#include "GlobalNamespace/NetworkPlayerModel_1.hpp"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectionInitParams`1<T>
  template<typename T>
  class IConnectionInitParams_1;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Skipping declaration: BeatmapLevelSelectionMask because it is already included!
  // Skipping declaration: GameplayServerConfiguration because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MasterServerNetworkPlayerModel
  class MasterServerNetworkPlayerModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MasterServerNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MasterServerNetworkPlayerModel*, "", "MasterServerNetworkPlayerModel");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServerNetworkPlayerModel
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerNetworkPlayerModel : public ::GlobalNamespace::NetworkPlayerModel_1<::GlobalNamespace::MasterServerConnectionManager*> {
    public:
    public:
    // [InjectAttribute] Offset: 0x10FBB94
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0xF0
    ::GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkConfig*) == 0x8);
    // private readonly MasterServerConnectionManager/ConnectToServerParams _cachedConnectToServerParams
    // Size: 0x8
    // Offset: 0xF8
    ::GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams* cachedConnectToServerParams;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams*) == 0x8);
    // private readonly MasterServerConnectionManager/StartClientParams _cachedStartClientParams
    // Size: 0x8
    // Offset: 0x100
    ::GlobalNamespace::MasterServerConnectionManager::StartClientParams* cachedStartClientParams;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MasterServerConnectionManager::StartClientParams*) == 0x8);
    public:
    // Get instance field reference: private readonly INetworkConfig _networkConfig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INetworkConfig*& dyn__networkConfig();
    // Get instance field reference: private readonly MasterServerConnectionManager/ConnectToServerParams _cachedConnectToServerParams
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MasterServerConnectionManager::ConnectToServerParams*& dyn__cachedConnectToServerParams();
    // Get instance field reference: private readonly MasterServerConnectionManager/StartClientParams _cachedStartClientParams
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MasterServerConnectionManager::StartClientParams*& dyn__cachedStartClientParams();
    // protected IConnectionInitParams`1<MasterServerConnectionManager> GetConnectToServerParams(BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.String secret, System.String code)
    // Offset: 0x1321AB8
    ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>* GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code);
    // protected IConnectionInitParams`1<MasterServerConnectionManager> GetStartClientParams(BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x1321C28
    ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>* GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);
    // public override System.String get_secret()
    // Offset: 0x13217D8
    // Implemented from: NetworkPlayerModel`1
    // Base method: System.String NetworkPlayerModel_1::get_secret()
    ::StringW get_secret();
    // public override System.String get_code()
    // Offset: 0x1321840
    // Implemented from: NetworkPlayerModel`1
    // Base method: System.String NetworkPlayerModel_1::get_code()
    ::StringW get_code();
    // public override System.String get_partyOwnerId()
    // Offset: 0x132189C
    // Implemented from: NetworkPlayerModel`1
    // Base method: System.String NetworkPlayerModel_1::get_partyOwnerId()
    ::StringW get_partyOwnerId();
    // public override GameplayServerConfiguration get_configuration()
    // Offset: 0x13218F8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: GameplayServerConfiguration BaseNetworkPlayerModel::get_configuration()
    ::GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public override BeatmapLevelSelectionMask get_selectionMask()
    // Offset: 0x1321978
    // Implemented from: BaseNetworkPlayerModel
    // Base method: BeatmapLevelSelectionMask BaseNetworkPlayerModel::get_selectionMask()
    ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();
    // public System.Void .ctor()
    // Offset: 0x1321D70
    // Implemented from: NetworkPlayerModel`1
    // Base method: System.Void NetworkPlayerModel_1::.ctor()
    // Base method: System.Void BaseNetworkPlayerModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MasterServerNetworkPlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerNetworkPlayerModel*, creationType>()));
    }
    // protected override System.Void RefreshPublicServers(BeatmapLevelSelectionMask localSelectionMask, GameplayServerConfiguration localConfiguration, System.Action`1<System.Collections.Generic.IReadOnlyList`1<PublicServerInfo>> onSuccess, System.Action`1<ConnectionFailedReason> onFailure)
    // Offset: 0x13219F8
    // Implemented from: NetworkPlayerModel`1
    // Base method: System.Void NetworkPlayerModel_1::RefreshPublicServers(BeatmapLevelSelectionMask localSelectionMask, GameplayServerConfiguration localConfiguration, System.Action`1<System.Collections.Generic.IReadOnlyList`1<PublicServerInfo>> onSuccess, System.Action`1<ConnectionFailedReason> onFailure)
    void RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, ::GlobalNamespace::GameplayServerConfiguration localConfiguration, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure);
  }; // MasterServerNetworkPlayerModel
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::GetConnectToServerParams
// Il2CppName: GetConnectToServerParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>* (GlobalNamespace::MasterServerNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW)>(&GlobalNamespace::MasterServerNetworkPlayerModel::GetConnectToServerParams)> {
  static const MethodInfo* get() {
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "GetConnectToServerParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionMask, configuration, secret, code});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::GetStartClientParams
// Il2CppName: GetStartClientParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>* (GlobalNamespace::MasterServerNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::MasterServerNetworkPlayerModel::GetStartClientParams)> {
  static const MethodInfo* get() {
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "GetStartClientParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::get_secret
// Il2CppName: get_secret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MasterServerNetworkPlayerModel::*)()>(&GlobalNamespace::MasterServerNetworkPlayerModel::get_secret)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "get_secret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::get_code
// Il2CppName: get_code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MasterServerNetworkPlayerModel::*)()>(&GlobalNamespace::MasterServerNetworkPlayerModel::get_code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "get_code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::get_partyOwnerId
// Il2CppName: get_partyOwnerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MasterServerNetworkPlayerModel::*)()>(&GlobalNamespace::MasterServerNetworkPlayerModel::get_partyOwnerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "get_partyOwnerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::MasterServerNetworkPlayerModel::*)()>(&GlobalNamespace::MasterServerNetworkPlayerModel::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::get_selectionMask
// Il2CppName: get_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::MasterServerNetworkPlayerModel::*)()>(&GlobalNamespace::MasterServerNetworkPlayerModel::get_selectionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "get_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MasterServerNetworkPlayerModel::RefreshPublicServers
// Il2CppName: RefreshPublicServers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MasterServerNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&GlobalNamespace::MasterServerNetworkPlayerModel::RefreshPublicServers)> {
  static const MethodInfo* get() {
    static auto* localSelectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* localConfiguration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PublicServerInfo")})})->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ConnectionFailedReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerNetworkPlayerModel*), "RefreshPublicServers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localSelectionMask, localConfiguration, onSuccess, onFailure});
  }
};
