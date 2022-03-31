// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContextRegistry
  class SceneContextRegistry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SceneContextRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContextRegistry*, "Zenject", "SceneContextRegistry");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContextRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneContextRegistry : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext> _map
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>* map;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>*() const noexcept {
      return map;
    }
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.SceneManagement.Scene,Zenject.SceneContext> _map
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>*& dyn__map();
    // public System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> get_SceneContexts()
    // Offset: 0x1BE267C
    ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* get_SceneContexts();
    // public System.Void Add(Zenject.SceneContext context)
    // Offset: 0x1BE6A40
    void Add(::Zenject::SceneContext* context);
    // public Zenject.SceneContext GetSceneContextForScene(System.String name)
    // Offset: 0x1BE6B14
    ::Zenject::SceneContext* GetSceneContextForScene(::StringW name);
    // public Zenject.SceneContext GetSceneContextForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1BE6BC8
    ::Zenject::SceneContext* GetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene);
    // public Zenject.SceneContext TryGetSceneContextForScene(System.String name)
    // Offset: 0x1BE6C30
    ::Zenject::SceneContext* TryGetSceneContextForScene(::StringW name);
    // public Zenject.SceneContext TryGetSceneContextForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1BE6CE4
    ::Zenject::SceneContext* TryGetSceneContextForScene(::UnityEngine::SceneManagement::Scene scene);
    // public Zenject.DiContainer GetContainerForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1BE6D64
    ::Zenject::DiContainer* GetContainerForScene(::UnityEngine::SceneManagement::Scene scene);
    // public Zenject.DiContainer TryGetContainerForScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1BE6E38
    ::Zenject::DiContainer* TryGetContainerForScene(::UnityEngine::SceneManagement::Scene scene);
    // public System.Void Remove(Zenject.SceneContext context)
    // Offset: 0x1BE6F38
    void Remove(::Zenject::SceneContext* context);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1BE70E4
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1BE713C
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1BE7074
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContextRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SceneContextRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContextRegistry*, creationType>()));
    }
  }; // Zenject.SceneContextRegistry
  #pragma pack(pop)
  static check_size<sizeof(SceneContextRegistry), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::SceneManagement::Scene, ::Zenject::SceneContext*>*)> __Zenject_SceneContextRegistrySizeCheck;
  static_assert(sizeof(SceneContextRegistry) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::get_SceneContexts
// Il2CppName: get_SceneContexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* (Zenject::SceneContextRegistry::*)()>(&Zenject::SceneContextRegistry::get_SceneContexts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "get_SceneContexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistry::*)(::Zenject::SceneContext*)>(&Zenject::SceneContextRegistry::Add)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "SceneContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::GetSceneContextForScene
// Il2CppName: GetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(::StringW)>(&Zenject::SceneContextRegistry::GetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "GetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::GetSceneContextForScene
// Il2CppName: GetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::GetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "GetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::TryGetSceneContextForScene
// Il2CppName: TryGetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(::StringW)>(&Zenject::SceneContextRegistry::TryGetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "TryGetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::TryGetSceneContextForScene
// Il2CppName: TryGetSceneContextForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SceneContext* (Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::TryGetSceneContextForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "TryGetSceneContextForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::GetContainerForScene
// Il2CppName: GetContainerForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::GetContainerForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "GetContainerForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::TryGetContainerForScene
// Il2CppName: TryGetContainerForScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SceneContextRegistry::*)(::UnityEngine::SceneManagement::Scene)>(&Zenject::SceneContextRegistry::TryGetContainerForScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "TryGetContainerForScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistry::*)(::Zenject::SceneContext*)>(&Zenject::SceneContextRegistry::Remove)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "SceneContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SceneContextRegistry::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneContextRegistry::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistry*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
