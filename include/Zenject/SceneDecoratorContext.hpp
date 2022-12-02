// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MonoInstaller
  class MonoInstaller;
  // Forward declaring type: ScriptableObjectInstaller
  class ScriptableObjectInstaller;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: MonoBehaviour because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneDecoratorContext
  class SceneDecoratorContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SceneDecoratorContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneDecoratorContext*, "Zenject", "SceneDecoratorContext");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneDecoratorContext
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneDecoratorContext : public ::Zenject::Context {
    public:
    public:
    // private System.Collections.Generic.List`1<Zenject.MonoInstaller> _lateInstallers
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* lateInstallers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*) == 0x8);
    // private System.Collections.Generic.List`1<Zenject.MonoInstaller> _lateInstallerPrefabs
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* lateInstallerPrefabs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*) == 0x8);
    // private System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller> _lateScriptableObjectInstallers
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* lateScriptableObjectInstallers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10E35FC
    // private System.String _decoratedContractName
    // Size: 0x8
    // Offset: 0x58
    ::StringW decoratedContractName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x60
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> _injectableMonoBehaviours
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableMonoBehaviours;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.MonoInstaller> _lateInstallers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& dyn__lateInstallers();
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.MonoInstaller> _lateInstallerPrefabs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& dyn__lateInstallerPrefabs();
    // Get instance field reference: private System.Collections.Generic.List`1<Zenject.ScriptableObjectInstaller> _lateScriptableObjectInstallers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*& dyn__lateScriptableObjectInstallers();
    // Get instance field reference: private System.String _decoratedContractName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__decoratedContractName();
    // Get instance field reference: private Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> _injectableMonoBehaviours
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*& dyn__injectableMonoBehaviours();
    // public System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> get_LateInstallers()
    // Offset: 0x1DB4FFC
    ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* get_LateInstallers();
    // public System.Void set_LateInstallers(System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> value)
    // Offset: 0x1DB5004
    void set_LateInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> get_LateInstallerPrefabs()
    // Offset: 0x1DB5084
    ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* get_LateInstallerPrefabs();
    // public System.Void set_LateInstallerPrefabs(System.Collections.Generic.IEnumerable`1<Zenject.MonoInstaller> value)
    // Offset: 0x1DB508C
    void set_LateInstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);
    // public System.Collections.Generic.IEnumerable`1<Zenject.ScriptableObjectInstaller> get_LateScriptableObjectInstallers()
    // Offset: 0x1DB510C
    ::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* get_LateScriptableObjectInstallers();
    // public System.Void set_LateScriptableObjectInstallers(System.Collections.Generic.IEnumerable`1<Zenject.ScriptableObjectInstaller> value)
    // Offset: 0x1DB5114
    void set_LateScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* value);
    // public System.String get_DecoratedContractName()
    // Offset: 0x1DB5194
    ::StringW get_DecoratedContractName();
    // public System.Void Initialize(Zenject.DiContainer container)
    // Offset: 0x1DB5210
    void Initialize(::Zenject::DiContainer* container);
    // public System.Void InstallDecoratorSceneBindings()
    // Offset: 0x1DB535C
    void InstallDecoratorSceneBindings();
    // public System.Void InstallDecoratorInstallers()
    // Offset: 0x1DB53DC
    void InstallDecoratorInstallers();
    // public System.Void InstallLateDecoratorInstallers()
    // Offset: 0x1DB5434
    void InstallLateDecoratorInstallers();
    // public override Zenject.DiContainer get_Container()
    // Offset: 0x1DB519C
    // Implemented from: Zenject.Context
    // Base method: Zenject.DiContainer Context::get_Container()
    ::Zenject::DiContainer* get_Container();
    // public System.Void .ctor()
    // Offset: 0x1DB54DC
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneDecoratorContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SceneDecoratorContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneDecoratorContext*, creationType>()));
    }
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects()
    // Offset: 0x1DB51C8
    // Implemented from: Zenject.Context
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Context::GetRootGameObjects()
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetRootGameObjects();
    // protected override System.Void GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0x1DB53E4
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DB55BC
    // Implemented from: Zenject.Context
    // Base method: Zenject.InjectTypeInfo Context::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SceneDecoratorContext
  #pragma pack(pop)
  static check_size<sizeof(SceneDecoratorContext), 104 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*)> __Zenject_SceneDecoratorContextSizeCheck;
  static_assert(sizeof(SceneDecoratorContext) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::get_LateInstallers
// Il2CppName: get_LateInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::get_LateInstallers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "get_LateInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::set_LateInstallers
// Il2CppName: set_LateInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*)>(&Zenject::SceneDecoratorContext::set_LateInstallers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "set_LateInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::get_LateInstallerPrefabs
// Il2CppName: get_LateInstallerPrefabs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::get_LateInstallerPrefabs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "get_LateInstallerPrefabs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::set_LateInstallerPrefabs
// Il2CppName: set_LateInstallerPrefabs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>*)>(&Zenject::SceneDecoratorContext::set_LateInstallerPrefabs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "MonoInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "set_LateInstallerPrefabs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::get_LateScriptableObjectInstallers
// Il2CppName: get_LateScriptableObjectInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::get_LateScriptableObjectInstallers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "get_LateScriptableObjectInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::set_LateScriptableObjectInstallers
// Il2CppName: set_LateScriptableObjectInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>*)>(&Zenject::SceneDecoratorContext::set_LateScriptableObjectInstallers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "ScriptableObjectInstaller")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "set_LateScriptableObjectInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::get_DecoratedContractName
// Il2CppName: get_DecoratedContractName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::get_DecoratedContractName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "get_DecoratedContractName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)(::Zenject::DiContainer*)>(&Zenject::SceneDecoratorContext::Initialize)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::InstallDecoratorSceneBindings
// Il2CppName: InstallDecoratorSceneBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::InstallDecoratorSceneBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "InstallDecoratorSceneBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::InstallDecoratorInstallers
// Il2CppName: InstallDecoratorInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::InstallDecoratorInstallers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "InstallDecoratorInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::InstallLateDecoratorInstallers
// Il2CppName: InstallLateDecoratorInstallers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::InstallLateDecoratorInstallers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "InstallLateDecoratorInstallers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* (Zenject::SceneDecoratorContext::*)()>(&Zenject::SceneDecoratorContext::GetRootGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::GetInjectableMonoBehaviours
// Il2CppName: GetInjectableMonoBehaviours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneDecoratorContext::*)(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*)>(&Zenject::SceneDecoratorContext::GetInjectableMonoBehaviours)> {
  static const MethodInfo* get() {
    static auto* monoBehaviours = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "GetInjectableMonoBehaviours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monoBehaviours});
  }
};
// Writing MetadataGetter for method: Zenject::SceneDecoratorContext::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneDecoratorContext::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneDecoratorContext*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
