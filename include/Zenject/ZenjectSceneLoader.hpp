// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ProjectKernel
  class ProjectKernel;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: LoadSceneRelationship
  struct LoadSceneRelationship;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectSceneLoader
  class ZenjectSceneLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ZenjectSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSceneLoader*, "Zenject", "ZenjectSceneLoader");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ZenjectSceneLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenjectSceneLoader : public ::Il2CppObject {
    public:
    public:
    // private readonly Zenject.ProjectKernel _projectKernel
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::ProjectKernel* projectKernel;
    // Field size check
    static_assert(sizeof(::Zenject::ProjectKernel*) == 0x8);
    // private readonly Zenject.DiContainer _sceneContainer
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::DiContainer* sceneContainer;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    public:
    // Get instance field reference: private readonly Zenject.ProjectKernel _projectKernel
    [[deprecated("Use field access instead!")]] ::Zenject::ProjectKernel*& dyn__projectKernel();
    // Get instance field reference: private readonly Zenject.DiContainer _sceneContainer
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__sceneContainer();
    // public System.Void .ctor(Zenject.SceneContext sceneRoot, Zenject.ProjectKernel projectKernel)
    // Offset: 0x1DC8814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectSceneLoader* New_ctor(::Zenject::SceneContext* sceneRoot, ::Zenject::ProjectKernel* projectKernel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenjectSceneLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectSceneLoader*, creationType>(sceneRoot, projectKernel)));
    }
    // public System.Void LoadScene(System.String sceneName)
    // Offset: 0x1DC88CC
    void LoadScene(::StringW sceneName);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x1DC88E0
    void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x1DC88F0
    void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x1DC88FC
    void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x1DC8904
    void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName)
    // Offset: 0x1DC8BE8
    ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x1DC8C00
    ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x1DC8C14
    ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x1DC8C28
    ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindingsEarly, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x1DC8C3C
    ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);
    // private System.Void PrepareForLoadScene(UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindingsEarly, System.Action`1<Zenject.DiContainer> extraBindings, System.Action`1<Zenject.DiContainer> extraBindingsLate, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x1DC89E0
    void PrepareForLoadScene(::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate, ::Zenject::LoadSceneRelationship containerMode);
    // public System.Void LoadScene(System.Int32 sceneIndex)
    // Offset: 0x1DC8D1C
    void LoadScene(int sceneIndex);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x1DC8D30
    void LoadScene(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x1DC8D40
    void LoadScene(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x1DC8D4C
    void LoadScene(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x1DC8D54
    void LoadScene(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex)
    // Offset: 0x1DC8E50
    ::UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x1DC8E64
    ::UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x1DC8E74
    ::UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x1DC8E80
    ::UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x1DC8E88
    ::UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DC8F84
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DC909C
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ZenjectSceneLoader
  #pragma pack(pop)
  static check_size<sizeof(ZenjectSceneLoader), 24 + sizeof(::Zenject::DiContainer*)> __Zenject_ZenjectSceneLoaderSizeCheck;
  static_assert(sizeof(ZenjectSceneLoader) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(::StringW)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode, extraBindings});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode, extraBindings, containerMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    static auto* extraBindingsLate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode, extraBindings, containerMode, extraBindingsLate});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(::StringW)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode, extraBindings});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode, extraBindings, containerMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindingsEarly = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    static auto* extraBindingsLate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, loadMode, extraBindingsEarly, extraBindings, containerMode, extraBindingsLate});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::PrepareForLoadScene
// Il2CppName: PrepareForLoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&Zenject::ZenjectSceneLoader::PrepareForLoadScene)> {
  static const MethodInfo* get() {
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindingsEarly = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* extraBindingsLate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "PrepareForLoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadMode, extraBindingsEarly, extraBindings, extraBindingsLate, containerMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(int)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode, extraBindings});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode, extraBindings, containerMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadScene
// Il2CppName: LoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadScene)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    static auto* extraBindingsLate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode, extraBindings, containerMode, extraBindingsLate});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(int)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode, extraBindings});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode, extraBindings, containerMode});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::LoadSceneAsync
// Il2CppName: LoadSceneAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (Zenject::ZenjectSceneLoader::*)(int, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* extraBindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    static auto* containerMode = &::il2cpp_utils::GetClassFromName("Zenject", "LoadSceneRelationship")->byval_arg;
    static auto* extraBindingsLate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "LoadSceneAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, loadMode, extraBindings, containerMode, extraBindingsLate});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ZenjectSceneLoader::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectSceneLoader::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ZenjectSceneLoader::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectSceneLoader*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
