// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: SceneSetupData
  class SceneSetupData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScenesTransitionSetupDataSO*, "", "ScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: ScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ScenesTransitionSetupDataSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::ScenesTransitionSetupDataSO::$BeforeScenesWillBeActivated$d__10
    struct $BeforeScenesWillBeActivated$d__10;
    // Nested type: ::GlobalNamespace::ScenesTransitionSetupDataSO::$$BeforeScenesWillBeActivated$b__10_0$d
    struct $$BeforeScenesWillBeActivated$b__10_0$d;
    public:
    // private SceneInfo[] <scenes>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::SceneInfo*> scenes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SceneInfo*>) == 0x8);
    // private SceneSetupData[] _sceneSetupDataArray
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupDataArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SceneSetupData*>) == 0x8);
    // private System.Boolean <beforeScenesWillBeActivatedTaskIsComplete>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool beforeScenesWillBeActivatedTaskIsComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SceneInfo[] <scenes>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SceneInfo*>& dyn_$scenes$k__BackingField();
    // Get instance field reference: private SceneSetupData[] _sceneSetupDataArray
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SceneSetupData*>& dyn__sceneSetupDataArray();
    // Get instance field reference: private System.Boolean <beforeScenesWillBeActivatedTaskIsComplete>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$beforeScenesWillBeActivatedTaskIsComplete$k__BackingField();
    // public SceneInfo[] get_scenes()
    // Offset: 0x2A81CE0
    ::ArrayW<::GlobalNamespace::SceneInfo*> get_scenes();
    // private System.Void set_scenes(SceneInfo[] value)
    // Offset: 0x2A81CE8
    void set_scenes(::ArrayW<::GlobalNamespace::SceneInfo*> value);
    // public System.Boolean get_beforeScenesWillBeActivatedTaskIsComplete()
    // Offset: 0x2A81CF0
    bool get_beforeScenesWillBeActivatedTaskIsComplete();
    // private System.Void set_beforeScenesWillBeActivatedTaskIsComplete(System.Boolean value)
    // Offset: 0x2A81CF8
    void set_beforeScenesWillBeActivatedTaskIsComplete(bool value);
    // protected System.Void Init(SceneInfo[] scenes, SceneSetupData[] sceneSetupData)
    // Offset: 0x2A81D04
    void Init(::ArrayW<::GlobalNamespace::SceneInfo*> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);
    // public System.Void BeforeScenesWillBeActivated(System.Boolean runAsync)
    // Offset: 0x2A81D10
    void BeforeScenesWillBeActivated(bool runAsync);
    // protected System.Threading.Tasks.Task BeforeScenesWillBeActivatedAsync()
    // Offset: 0x2A81DDC
    ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();
    // public System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x2A81E3C
    void InstallBindings(::Zenject::DiContainer* container);
    // private System.Threading.Tasks.Task <BeforeScenesWillBeActivated>b__10_0()
    // Offset: 0x2A81F80
    ::System::Threading::Tasks::Task* $BeforeScenesWillBeActivated$b__10_0();
    // protected System.Void .ctor()
    // Offset: 0x2A81F78
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // ScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(ScenesTransitionSetupDataSO), 40 + sizeof(bool)> __GlobalNamespace_ScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(ScenesTransitionSetupDataSO) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes
// Il2CppName: get_scenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SceneInfo*> (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::get_scenes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "get_scenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes
// Il2CppName: set_scenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(::ArrayW<::GlobalNamespace::SceneInfo*>)>(&GlobalNamespace::ScenesTransitionSetupDataSO::set_scenes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "SceneInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "set_scenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::get_beforeScenesWillBeActivatedTaskIsComplete
// Il2CppName: get_beforeScenesWillBeActivatedTaskIsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::get_beforeScenesWillBeActivatedTaskIsComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "get_beforeScenesWillBeActivatedTaskIsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::set_beforeScenesWillBeActivatedTaskIsComplete
// Il2CppName: set_beforeScenesWillBeActivatedTaskIsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(bool)>(&GlobalNamespace::ScenesTransitionSetupDataSO::set_beforeScenesWillBeActivatedTaskIsComplete)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "set_beforeScenesWillBeActivatedTaskIsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(::ArrayW<::GlobalNamespace::SceneInfo*>, ::ArrayW<::GlobalNamespace::SceneSetupData*>)>(&GlobalNamespace::ScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* scenes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "SceneInfo"), 1)->byval_arg;
    static auto* sceneSetupData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "SceneSetupData"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenes, sceneSetupData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated
// Il2CppName: BeforeScenesWillBeActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(bool)>(&GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivated)> {
  static const MethodInfo* get() {
    static auto* runAsync = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "BeforeScenesWillBeActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runAsync});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync
// Il2CppName: BeforeScenesWillBeActivatedAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::BeforeScenesWillBeActivatedAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "BeforeScenesWillBeActivatedAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(::Zenject::DiContainer*)>(&GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::$BeforeScenesWillBeActivated$b__10_0
// Il2CppName: <BeforeScenesWillBeActivated>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::$BeforeScenesWillBeActivated$b__10_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "<BeforeScenesWillBeActivated>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
