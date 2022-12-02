// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ProjectKernel
#include "Zenject/ProjectKernel.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ProjectKernel::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProjectKernel::$$c__DisplayClass4_0*, "Zenject", "ProjectKernel/<>c__DisplayClass4_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ProjectKernel/Zenject.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ProjectKernel::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene> sceneOrder
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* sceneOrder;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*) == 0x8);
    // public System.Func`2<Zenject.SceneContext,System.Int32> <>9__0
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_2<::Zenject::SceneContext*, int>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Func_2<::Zenject::SceneContext*, int>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.SceneManagement.Scene> sceneOrder
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*& dyn_sceneOrder();
    // Get instance field reference: public System.Func`2<Zenject.SceneContext,System.Int32> <>9__0
    [[deprecated("Use field access instead!")]] ::System::Func_2<::Zenject::SceneContext*, int>*& dyn_$$9__0();
    // public System.Void .ctor()
    // Offset: 0x1CC140C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProjectKernel::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ProjectKernel::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProjectKernel::$$c__DisplayClass4_0*, creationType>()));
    }
    // System.Int32 <ForceUnloadAllScenes>b__0(Zenject.SceneContext x)
    // Offset: 0x1CC1904
    int $ForceUnloadAllScenes$b__0(::Zenject::SceneContext* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CC198C
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CC19E8
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ProjectKernel/Zenject.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(ProjectKernel::$$c__DisplayClass4_0), 24 + sizeof(::System::Func_2<::Zenject::SceneContext*, int>*)> __Zenject_ProjectKernel_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(ProjectKernel::$$c__DisplayClass4_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ProjectKernel::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ProjectKernel::$$c__DisplayClass4_0::$ForceUnloadAllScenes$b__0
// Il2CppName: <ForceUnloadAllScenes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::ProjectKernel::$$c__DisplayClass4_0::*)(::Zenject::SceneContext*)>(&Zenject::ProjectKernel::$$c__DisplayClass4_0::$ForceUnloadAllScenes$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "SceneContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectKernel::$$c__DisplayClass4_0*), "<ForceUnloadAllScenes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectKernel::$$c__DisplayClass4_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ProjectKernel::$$c__DisplayClass4_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectKernel::$$c__DisplayClass4_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectKernel::$$c__DisplayClass4_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ProjectKernel::$$c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectKernel::$$c__DisplayClass4_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
