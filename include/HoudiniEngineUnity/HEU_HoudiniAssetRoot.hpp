// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_HoudiniAssetRoot
  // [TokenAttribute] Offset: FFFFFFFF
  // [SelectionBaseAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class HEU_HoudiniAssetRoot : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public HoudiniEngineUnity.HEU_HoudiniAsset _houdiniAsset
    // Size: 0x8
    // Offset: 0x18
    HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_HoudiniAsset*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> _bakeTargets
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::GameObject*>* bakeTargets;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::GameObject*>*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public HoudiniEngineUnity.HEU_HoudiniAsset _houdiniAsset
    HoudiniEngineUnity::HEU_HoudiniAsset*& dyn__houdiniAsset();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> _bakeTargets
    System::Collections::Generic::List_1<UnityEngine::GameObject*>*& dyn__bakeTargets();
    // private System.Void OnDestroy()
    // Offset: 0x151CE08
    void OnDestroy();
    // public System.Void RemoveHoudiniEngineAssetData()
    // Offset: 0x151CFE0
    void RemoveHoudiniEngineAssetData();
    // public System.Void ClearHoudiniEngineReferences()
    // Offset: 0x151D0B8
    void ClearHoudiniEngineReferences();
    // static public System.Void DestroyRootComponent(HoudiniEngineUnity.HEU_HoudiniAssetRoot assetRoot)
    // Offset: 0x151D114
    static void DestroyRootComponent(HoudiniEngineUnity::HEU_HoudiniAssetRoot* assetRoot);
    // private System.Void Reset()
    // Offset: 0x151D124
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x151D224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_HoudiniAssetRoot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_HoudiniAssetRoot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_HoudiniAssetRoot*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_HoudiniAssetRoot
  #pragma pack(pop)
  static check_size<sizeof(HEU_HoudiniAssetRoot), 32 + sizeof(System::Collections::Generic::List_1<UnityEngine::GameObject*>*)> __HoudiniEngineUnity_HEU_HoudiniAssetRootSizeCheck;
  static_assert(sizeof(HEU_HoudiniAssetRoot) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HoudiniAssetRoot*, "HoudiniEngineUnity", "HEU_HoudiniAssetRoot");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAssetRoot::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_HoudiniAssetRoot::*)()>(&HoudiniEngineUnity::HEU_HoudiniAssetRoot::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAssetRoot*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAssetRoot::RemoveHoudiniEngineAssetData
// Il2CppName: RemoveHoudiniEngineAssetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_HoudiniAssetRoot::*)()>(&HoudiniEngineUnity::HEU_HoudiniAssetRoot::RemoveHoudiniEngineAssetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAssetRoot*), "RemoveHoudiniEngineAssetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAssetRoot::ClearHoudiniEngineReferences
// Il2CppName: ClearHoudiniEngineReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_HoudiniAssetRoot::*)()>(&HoudiniEngineUnity::HEU_HoudiniAssetRoot::ClearHoudiniEngineReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAssetRoot*), "ClearHoudiniEngineReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAssetRoot::DestroyRootComponent
// Il2CppName: DestroyRootComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HoudiniEngineUnity::HEU_HoudiniAssetRoot*)>(&HoudiniEngineUnity::HEU_HoudiniAssetRoot::DestroyRootComponent)> {
  static const MethodInfo* get() {
    static auto* assetRoot = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAssetRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAssetRoot*), "DestroyRootComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetRoot});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAssetRoot::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_HoudiniAssetRoot::*)()>(&HoudiniEngineUnity::HEU_HoudiniAssetRoot::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_HoudiniAssetRoot*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_HoudiniAssetRoot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
