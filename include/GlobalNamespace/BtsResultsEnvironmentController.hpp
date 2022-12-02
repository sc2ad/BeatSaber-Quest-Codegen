// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseResultsEnvironmentController
#include "GlobalNamespace/BaseResultsEnvironmentController.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
// Including type: BTSCharacterDataModel
#include "GlobalNamespace/BTSCharacterDataModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BtsResultsEnvironmentController
  class BtsResultsEnvironmentController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BtsResultsEnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BtsResultsEnvironmentController*, "", "BtsResultsEnvironmentController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BtsResultsEnvironmentController
  // [TokenAttribute] Offset: FFFFFFFF
  class BtsResultsEnvironmentController : public ::GlobalNamespace::BaseResultsEnvironmentController {
    public:
    // Nested type: ::GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation
    class BTSResultCharacterPlaceWithAnimation;
    // Nested type: ::GlobalNamespace::BtsResultsEnvironmentController::$DestroyCharactersDelayed$d__11
    class $DestroyCharactersDelayed$d__11;
    public:
    // private UnityEngine.GameObject _btsCharacterAnimationWrapper
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* btsCharacterAnimationWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private BTSCharacterDataModel _btsCharacterDataModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BTSCharacterDataModel* btsCharacterDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BTSCharacterDataModel*) == 0x8);
    // private UnityEngine.Playables.PlayableDirector _btsCharactersResultsAppearPlayableDirector
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Playables::PlayableDirector* btsCharactersResultsAppearPlayableDirector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [SpaceAttribute] Offset: 0x110C130
    // private BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation[] _resultPlacesWithAnimations
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*> resultPlacesWithAnimations;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*>) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> _handles
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private BasicBeatmapEventType kCharacterDisplayEventType
    static constexpr const int kCharacterDisplayEventType = 40;
    // Get static field: static private BasicBeatmapEventType kCharacterDisplayEventType
    static ::GlobalNamespace::BasicBeatmapEventType _get_kCharacterDisplayEventType();
    // Set static field: static private BasicBeatmapEventType kCharacterDisplayEventType
    static void _set_kCharacterDisplayEventType(::GlobalNamespace::BasicBeatmapEventType value);
    // Get instance field reference: private UnityEngine.GameObject _btsCharacterAnimationWrapper
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__btsCharacterAnimationWrapper();
    // Get instance field reference: private BTSCharacterDataModel _btsCharacterDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BTSCharacterDataModel*& dyn__btsCharacterDataModel();
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _btsCharactersResultsAppearPlayableDirector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn__btsCharactersResultsAppearPlayableDirector();
    // Get instance field reference: private BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation[] _resultPlacesWithAnimations
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation*>& dyn__resultPlacesWithAnimations();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> _handles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& dyn__handles();
    // private System.Void SpawnBtsCharacters(BTSCharacterDataModel/PrefabWithId btsCharacterPrefabToSpawn, System.Boolean useAlternativeMaterial)
    // Offset: 0x13E3084
    void SpawnBtsCharacters(::GlobalNamespace::BTSCharacterDataModel::PrefabWithId* btsCharacterPrefabToSpawn, bool useAlternativeMaterial);
    // private System.Collections.IEnumerator DestroyCharactersDelayed()
    // Offset: 0x13E3630
    ::System::Collections::IEnumerator* DestroyCharactersDelayed();
    // private System.Void DestroyCharactersAndStopAnimations()
    // Offset: 0x13E35A0
    void DestroyCharactersAndStopAnimations();
    // public System.Void .ctor()
    // Offset: 0x13E37D4
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BtsResultsEnvironmentController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BtsResultsEnvironmentController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BtsResultsEnvironmentController*, creationType>()));
    }
    // public override System.Void Setup(IReadonlyBeatmapData beatmapData)
    // Offset: 0x13E2C74
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::Setup(IReadonlyBeatmapData beatmapData)
    void Setup(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // public override System.Void Activate(System.Boolean immediately)
    // Offset: 0x13E3348
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::Activate(System.Boolean immediately)
    void Activate(bool immediately);
    // public override System.Void Deactivate(System.Boolean immediately)
    // Offset: 0x13E33F0
    // Implemented from: BaseResultsEnvironmentController
    // Base method: System.Void BaseResultsEnvironmentController::Deactivate(System.Boolean immediately)
    void Deactivate(bool immediately);
  }; // BtsResultsEnvironmentController
  #pragma pack(pop)
  static check_size<sizeof(BtsResultsEnvironmentController), 56 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)> __GlobalNamespace_BtsResultsEnvironmentControllerSizeCheck;
  static_assert(sizeof(BtsResultsEnvironmentController) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BtsResultsEnvironmentController::SpawnBtsCharacters
// Il2CppName: SpawnBtsCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BtsResultsEnvironmentController::*)(::GlobalNamespace::BTSCharacterDataModel::PrefabWithId*, bool)>(&GlobalNamespace::BtsResultsEnvironmentController::SpawnBtsCharacters)> {
  static const MethodInfo* get() {
    static auto* btsCharacterPrefabToSpawn = &::il2cpp_utils::GetClassFromName("", "BTSCharacterDataModel/PrefabWithId")->byval_arg;
    static auto* useAlternativeMaterial = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BtsResultsEnvironmentController*), "SpawnBtsCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btsCharacterPrefabToSpawn, useAlternativeMaterial});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersDelayed
// Il2CppName: DestroyCharactersDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BtsResultsEnvironmentController::*)()>(&GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersDelayed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BtsResultsEnvironmentController*), "DestroyCharactersDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersAndStopAnimations
// Il2CppName: DestroyCharactersAndStopAnimations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BtsResultsEnvironmentController::*)()>(&GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersAndStopAnimations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BtsResultsEnvironmentController*), "DestroyCharactersAndStopAnimations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BtsResultsEnvironmentController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BtsResultsEnvironmentController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BtsResultsEnvironmentController::*)(::GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::BtsResultsEnvironmentController::Setup)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BtsResultsEnvironmentController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BtsResultsEnvironmentController::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BtsResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BtsResultsEnvironmentController::Activate)> {
  static const MethodInfo* get() {
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BtsResultsEnvironmentController*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{immediately});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BtsResultsEnvironmentController::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BtsResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BtsResultsEnvironmentController::Deactivate)> {
  static const MethodInfo* get() {
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BtsResultsEnvironmentController*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{immediately});
  }
};
