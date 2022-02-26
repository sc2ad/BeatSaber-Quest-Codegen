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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ScenesTransitionSetupDataSO : public ::GlobalNamespace::PersistentScriptableObject {
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
    // private SceneInfo[] <scenes>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::SceneInfo*> scenes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SceneInfo*>) == 0x8);
    // private SceneSetupData[] <sceneSetupDataArray>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupDataArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SceneSetupData*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SceneInfo[] <scenes>k__BackingField
    ::ArrayW<::GlobalNamespace::SceneInfo*>& dyn_$scenes$k__BackingField();
    // Get instance field reference: private SceneSetupData[] <sceneSetupDataArray>k__BackingField
    ::ArrayW<::GlobalNamespace::SceneSetupData*>& dyn_$sceneSetupDataArray$k__BackingField();
    // public SceneInfo[] get_scenes()
    // Offset: 0x299BF8C
    ::ArrayW<::GlobalNamespace::SceneInfo*> get_scenes();
    // private System.Void set_scenes(SceneInfo[] value)
    // Offset: 0x299BF94
    void set_scenes(::ArrayW<::GlobalNamespace::SceneInfo*> value);
    // public SceneSetupData[] get_sceneSetupDataArray()
    // Offset: 0x299BF9C
    ::ArrayW<::GlobalNamespace::SceneSetupData*> get_sceneSetupDataArray();
    // private System.Void set_sceneSetupDataArray(SceneSetupData[] value)
    // Offset: 0x299BFA4
    void set_sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*> value);
    // protected System.Void Init(SceneInfo[] scenes, SceneSetupData[] sceneSetupData)
    // Offset: 0x299BFAC
    void Init(::ArrayW<::GlobalNamespace::SceneInfo*> scenes, ::ArrayW<::GlobalNamespace::SceneSetupData*> sceneSetupData);
    // public System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x299BFB4
    void InstallBindings(::Zenject::DiContainer* container);
    // public T Get()
    // Offset: 0xFFFFFFFF
    template<class T>
    T Get() {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::SceneSetupData*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScenesTransitionSetupDataSO::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // protected System.Void .ctor()
    // Offset: 0x299C0F0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // ScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(ScenesTransitionSetupDataSO), 32 + sizeof(::ArrayW<::GlobalNamespace::SceneSetupData*>)> __GlobalNamespace_ScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(ScenesTransitionSetupDataSO) == 0x28);
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
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::get_sceneSetupDataArray
// Il2CppName: get_sceneSetupDataArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SceneSetupData*> (GlobalNamespace::ScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::ScenesTransitionSetupDataSO::get_sceneSetupDataArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "get_sceneSetupDataArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::set_sceneSetupDataArray
// Il2CppName: set_sceneSetupDataArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(::ArrayW<::GlobalNamespace::SceneSetupData*>)>(&GlobalNamespace::ScenesTransitionSetupDataSO::set_sceneSetupDataArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "SceneSetupData"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "set_sceneSetupDataArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
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
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScenesTransitionSetupDataSO::*)(::Zenject::DiContainer*)>(&GlobalNamespace::ScenesTransitionSetupDataSO::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScenesTransitionSetupDataSO*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
