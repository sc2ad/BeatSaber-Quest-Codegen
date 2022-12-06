// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameLiftConnectionManager
#include "GlobalNamespace/GameLiftConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
}
// Forward declaring namespace: BGNet::Core::GameLift
namespace BGNet::Core::GameLift {
  // Forward declaring type: IGameLiftPlayerSessionProvider
  class IGameLiftPlayerSessionProvider;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase*, "", "GameLiftConnectionManager/GameLiftConnectionManagerParamsBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: GameLiftConnectionManager/GameLiftConnectionManagerParamsBase
  // [TokenAttribute] Offset: FFFFFFFF
  class GameLiftConnectionManager::GameLiftConnectionManagerParamsBase : public ::Il2CppObject/*, public ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*/ {
    public:
    public:
    // public System.Threading.Tasks.Task`1<IAuthenticationTokenProvider> authenticationTokenProviderTask
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* authenticationTokenProviderTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*) == 0x8);
    // public BGNet.Core.GameLift.IGameLiftPlayerSessionProvider gameLiftPlayerSessionProvider
    // Size: 0x8
    // Offset: 0x18
    ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* gameLiftPlayerSessionProvider;
    // Field size check
    static_assert(sizeof(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*) == 0x8);
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x20
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x38
    ::GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>
    operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*>(this);
    }
    // Creating interface conversion operator: i_GameLiftConnectionManager
    inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>* i_GameLiftConnectionManager() noexcept {
      return reinterpret_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*>(this);
    }
    // Get instance field reference: public System.Threading.Tasks.Task`1<IAuthenticationTokenProvider> authenticationTokenProviderTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& dyn_authenticationTokenProviderTask();
    // Get instance field reference: public BGNet.Core.GameLift.IGameLiftPlayerSessionProvider gameLiftPlayerSessionProvider
    [[deprecated("Use field access instead!")]] ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& dyn_gameLiftPlayerSessionProvider();
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public GameplayServerConfiguration configuration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // protected System.Void .ctor()
    // Offset: 0x16CC218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftConnectionManager::GameLiftConnectionManagerParamsBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftConnectionManager::GameLiftConnectionManagerParamsBase*, creationType>()));
    }
  }; // GameLiftConnectionManager/GameLiftConnectionManagerParamsBase
  #pragma pack(pop)
  static check_size<sizeof(GameLiftConnectionManager::GameLiftConnectionManagerParamsBase), 56 + sizeof(::GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_GameLiftConnectionManager_GameLiftConnectionManagerParamsBaseSizeCheck;
  static_assert(sizeof(GameLiftConnectionManager::GameLiftConnectionManagerParamsBase) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
