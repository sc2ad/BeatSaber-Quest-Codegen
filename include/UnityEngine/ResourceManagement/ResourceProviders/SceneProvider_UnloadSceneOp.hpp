// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneProvider.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider/UnloadSceneOp
  class SceneProvider::UnloadSceneOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
    public:
    // private UnityEngine.ResourceManagement.ResourceProviders.SceneInstance m_Instance
    // Size: 0x10
    // Offset: 0x88
    UnityEngine::ResourceManagement::ResourceProviders::SceneInstance m_Instance;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance) == 0x10);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> m_sceneLoadHandle
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> m_sceneLoadHandle;
    // Creating value type constructor for type: UnloadSceneOp
    UnloadSceneOp(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance m_Instance_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> m_sceneLoadHandle_ = {}) noexcept : m_Instance{m_Instance_}, m_sceneLoadHandle{m_sceneLoadHandle_} {}
    // public System.Void Init(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> sceneLoadHandle)
    // Offset: 0x19CC484
    void Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle);
    // private System.Void UnloadSceneCompleted(UnityEngine.AsyncOperation obj)
    // Offset: 0x19CD20C
    void UnloadSceneCompleted(UnityEngine::AsyncOperation* obj);
    // private System.Void UnloadSceneCompletedNoRelease(UnityEngine.AsyncOperation obj)
    // Offset: 0x19CD1A8
    void UnloadSceneCompletedNoRelease(UnityEngine::AsyncOperation* obj);
    // protected override System.Void Execute()
    // Offset: 0x19CD090
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x19CD2AC
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Single get_Progress()
    // Offset: 0x19CD324
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Single AsyncOperationBase_1::get_Progress()
    float get_Progress();
    // public System.Void .ctor()
    // Offset: 0x19CC434
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneProvider::UnloadSceneOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneProvider::UnloadSceneOp*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.SceneProvider/UnloadSceneOp
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider/UnloadSceneOp");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Init)> {
  static const MethodInfo* get() {
    static auto* sceneLoadHandle = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneLoadHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompleted
// Il2CppName: UnloadSceneCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)(UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompleted)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "UnloadSceneCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompletedNoRelease
// Il2CppName: UnloadSceneCompletedNoRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)(UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::UnloadSceneCompletedNoRelease)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "UnloadSceneCompletedNoRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::get_Progress
// Il2CppName: get_Progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::get_Progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp*), "get_Progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
