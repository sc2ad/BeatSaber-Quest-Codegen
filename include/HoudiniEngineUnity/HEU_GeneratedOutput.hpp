// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_GeneratedOutputData
  class HEU_GeneratedOutputData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_GeneratedOutput
  class HEU_GeneratedOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneratedOutput);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneratedOutput*, "HoudiniEngineUnity", "HEU_GeneratedOutput");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_GeneratedOutput
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_GeneratedOutput : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*/ {
    public:
    public:
    // public HoudiniEngineUnity.HEU_GeneratedOutputData _outputData
    // Size: 0x8
    // Offset: 0x10
    ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_GeneratedOutputData*) == 0x8);
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_GeneratedOutputData> _childOutputs
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>* childOutputs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*) == 0x8);
    // private System.Boolean isInstancer
    // Size: 0x1
    // Offset: 0x20
    bool isInstancer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_GeneratedOutput
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* i_HEU_GeneratedOutput() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>(this);
    }
    // Get instance field reference: public HoudiniEngineUnity.HEU_GeneratedOutputData _outputData
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_GeneratedOutputData*& dyn__outputData();
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_GeneratedOutputData> _childOutputs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*& dyn__childOutputs();
    // Get instance field reference: private System.Boolean isInstancer
    [[deprecated("Use field access instead!")]] bool& dyn_isInstancer();
    // public System.Boolean get_IsInstancer()
    // Offset: 0x17DB548
    bool get_IsInstancer();
    // public System.Void set_IsInstancer(System.Boolean value)
    // Offset: 0x17DB550
    void set_IsInstancer(bool value);
    // public System.Void .ctor()
    // Offset: 0x17DC318
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_GeneratedOutput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_GeneratedOutput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_GeneratedOutput*, creationType>()));
    }
    // static public System.Void ResetMaterialOverrides(HoudiniEngineUnity.HEU_GeneratedOutput output)
    // Offset: 0x17DB55C
    static void ResetMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutput* output);
    // static public System.Void ResetMaterialOverrides(HoudiniEngineUnity.HEU_GeneratedOutputData outputData)
    // Offset: 0x17DB6C0
    static void ResetMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData);
    // static public UnityEngine.Material[] GetGeneratedMaterialsForGameObject(HoudiniEngineUnity.HEU_GeneratedOutput output, UnityEngine.GameObject inGameObject)
    // Offset: 0x17DB770
    static ::ArrayW<::UnityEngine::Material*> GetGeneratedMaterialsForGameObject(::HoudiniEngineUnity::HEU_GeneratedOutput* output, ::UnityEngine::GameObject* inGameObject);
    // static public System.Boolean HasLODGroup(HoudiniEngineUnity.HEU_GeneratedOutput output)
    // Offset: 0x17DB664
    static bool HasLODGroup(::HoudiniEngineUnity::HEU_GeneratedOutput* output);
    // static public System.Boolean IsOutputUsingMaterial(UnityEngine.Material checkMaterial, HoudiniEngineUnity.HEU_GeneratedOutput output)
    // Offset: 0x17DB908
    static bool IsOutputUsingMaterial(::UnityEngine::Material* checkMaterial, ::HoudiniEngineUnity::HEU_GeneratedOutput* output);
    // static public System.Boolean IsOutputDataUsingMaterial(UnityEngine.Material checkMaterial, HoudiniEngineUnity.HEU_GeneratedOutputData outputData)
    // Offset: 0x17DBA2C
    static bool IsOutputDataUsingMaterial(::UnityEngine::Material* checkMaterial, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData);
    // static public System.Void ClearGeneratedMaterialReferences(HoudiniEngineUnity.HEU_GeneratedOutputData generatedOutputData)
    // Offset: 0x17D5DA4
    static void ClearGeneratedMaterialReferences(::HoudiniEngineUnity::HEU_GeneratedOutputData* generatedOutputData);
    // static public System.Void DestroyAllGeneratedColliders(HoudiniEngineUnity.HEU_GeneratedOutputData outputData)
    // Offset: 0x17D3AFC
    static void DestroyAllGeneratedColliders(::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData);
    // static public System.Void DestroyGeneratedOutput(HoudiniEngineUnity.HEU_GeneratedOutput generatedOutput)
    // Offset: 0x17DBC14
    static void DestroyGeneratedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput);
    // static public System.Void DestroyGeneratedOutputChildren(HoudiniEngineUnity.HEU_GeneratedOutput generatedOutput)
    // Offset: 0x17D5270
    static void DestroyGeneratedOutputChildren(::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput);
    // static public System.Void DestroyGeneratedOutputData(HoudiniEngineUnity.HEU_GeneratedOutputData generatedOutputData, System.Boolean bDontDeletePersistantResources)
    // Offset: 0x17D5D60
    static void DestroyGeneratedOutputData(::HoudiniEngineUnity::HEU_GeneratedOutputData* generatedOutputData, bool bDontDeletePersistantResources);
    // static public System.Void ClearMaterialsNoLongerUsed(UnityEngine.Material[] materialsToCheck, UnityEngine.Material[] materialsInUse)
    // Offset: 0x17D5144
    static void ClearMaterialsNoLongerUsed(::ArrayW<::UnityEngine::Material*> materialsToCheck, ::ArrayW<::UnityEngine::Material*> materialsInUse);
    // static public System.Void CopyMaterialOverrides(HoudiniEngineUnity.HEU_GeneratedOutputData sourceOutputData, HoudiniEngineUnity.HEU_GeneratedOutputData destOutputData)
    // Offset: 0x17DBD94
    static void CopyMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData* sourceOutputData, ::HoudiniEngineUnity::HEU_GeneratedOutputData* destOutputData);
    // public System.Void WriteOutputToAssetCache(UnityEngine.GameObject parentObject, System.String outputPath, System.Boolean bIsInstancer)
    // Offset: 0x17DC058
    void WriteOutputToAssetCache(::UnityEngine::GameObject* parentObject, ::StringW outputPath, bool bIsInstancer);
    // static public System.Void BakeGameObjectComponents(UnityEngine.GameObject sourceGO, UnityEngine.GameObject targetGO, System.String assetName, System.String outputPath, System.Boolean bIsInstancer)
    // Offset: 0x17DC0B8
    static void BakeGameObjectComponents(::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::StringW assetName, ::StringW outputPath, bool bIsInstancer);
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_GeneratedOutput other)
    // Offset: 0x17DC1BC
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutput* other);
  }; // HoudiniEngineUnity.HEU_GeneratedOutput
  #pragma pack(pop)
  static check_size<sizeof(HEU_GeneratedOutput), 32 + sizeof(bool)> __HoudiniEngineUnity_HEU_GeneratedOutputSizeCheck;
  static_assert(sizeof(HEU_GeneratedOutput) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::get_IsInstancer
// Il2CppName: get_IsInstancer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_GeneratedOutput::*)()>(&HoudiniEngineUnity::HEU_GeneratedOutput::get_IsInstancer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "get_IsInstancer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::set_IsInstancer
// Il2CppName: set_IsInstancer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GeneratedOutput::*)(bool)>(&HoudiniEngineUnity::HEU_GeneratedOutput::set_IsInstancer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "set_IsInstancer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::ResetMaterialOverrides
// Il2CppName: ResetMaterialOverrides
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutput*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::ResetMaterialOverrides)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "ResetMaterialOverrides", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::ResetMaterialOverrides
// Il2CppName: ResetMaterialOverrides
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::ResetMaterialOverrides)> {
  static const MethodInfo* get() {
    static auto* outputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutputData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "ResetMaterialOverrides", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::GetGeneratedMaterialsForGameObject
// Il2CppName: GetGeneratedMaterialsForGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (*)(::HoudiniEngineUnity::HEU_GeneratedOutput*, ::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::GetGeneratedMaterialsForGameObject)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")->byval_arg;
    static auto* inGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "GetGeneratedMaterialsForGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, inGameObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::HasLODGroup
// Il2CppName: HasLODGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_GeneratedOutput*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::HasLODGroup)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "HasLODGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::IsOutputUsingMaterial
// Il2CppName: IsOutputUsingMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutput*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::IsOutputUsingMaterial)> {
  static const MethodInfo* get() {
    static auto* checkMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "IsOutputUsingMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checkMaterial, output});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::IsOutputDataUsingMaterial
// Il2CppName: IsOutputDataUsingMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Material*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::IsOutputDataUsingMaterial)> {
  static const MethodInfo* get() {
    static auto* checkMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* outputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutputData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "IsOutputDataUsingMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checkMaterial, outputData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::ClearGeneratedMaterialReferences
// Il2CppName: ClearGeneratedMaterialReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::ClearGeneratedMaterialReferences)> {
  static const MethodInfo* get() {
    static auto* generatedOutputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutputData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "ClearGeneratedMaterialReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{generatedOutputData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::DestroyAllGeneratedColliders
// Il2CppName: DestroyAllGeneratedColliders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::DestroyAllGeneratedColliders)> {
  static const MethodInfo* get() {
    static auto* outputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutputData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "DestroyAllGeneratedColliders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::DestroyGeneratedOutput
// Il2CppName: DestroyGeneratedOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutput*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::DestroyGeneratedOutput)> {
  static const MethodInfo* get() {
    static auto* generatedOutput = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "DestroyGeneratedOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{generatedOutput});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::DestroyGeneratedOutputChildren
// Il2CppName: DestroyGeneratedOutputChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutput*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::DestroyGeneratedOutputChildren)> {
  static const MethodInfo* get() {
    static auto* generatedOutput = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "DestroyGeneratedOutputChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{generatedOutput});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::DestroyGeneratedOutputData
// Il2CppName: DestroyGeneratedOutputData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, bool)>(&HoudiniEngineUnity::HEU_GeneratedOutput::DestroyGeneratedOutputData)> {
  static const MethodInfo* get() {
    static auto* generatedOutputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutputData")->byval_arg;
    static auto* bDontDeletePersistantResources = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "DestroyGeneratedOutputData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{generatedOutputData, bDontDeletePersistantResources});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::ClearMaterialsNoLongerUsed
// Il2CppName: ClearMaterialsNoLongerUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Material*>, ::ArrayW<::UnityEngine::Material*>)>(&HoudiniEngineUnity::HEU_GeneratedOutput::ClearMaterialsNoLongerUsed)> {
  static const MethodInfo* get() {
    static auto* materialsToCheck = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    static auto* materialsInUse = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "ClearMaterialsNoLongerUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialsToCheck, materialsInUse});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::CopyMaterialOverrides
// Il2CppName: CopyMaterialOverrides
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::CopyMaterialOverrides)> {
  static const MethodInfo* get() {
    static auto* sourceOutputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutputData")->byval_arg;
    static auto* destOutputData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutputData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "CopyMaterialOverrides", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceOutputData, destOutputData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::WriteOutputToAssetCache
// Il2CppName: WriteOutputToAssetCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_GeneratedOutput::*)(::UnityEngine::GameObject*, ::StringW, bool)>(&HoudiniEngineUnity::HEU_GeneratedOutput::WriteOutputToAssetCache)> {
  static const MethodInfo* get() {
    static auto* parentObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* outputPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bIsInstancer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "WriteOutputToAssetCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentObject, outputPath, bIsInstancer});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::BakeGameObjectComponents
// Il2CppName: BakeGameObjectComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::StringW, ::StringW, bool)>(&HoudiniEngineUnity::HEU_GeneratedOutput::BakeGameObjectComponents)> {
  static const MethodInfo* get() {
    static auto* sourceGO = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* targetGO = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* assetName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* outputPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bIsInstancer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "BakeGameObjectComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceGO, targetGO, assetName, outputPath, bIsInstancer});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeneratedOutput::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_GeneratedOutput::*)(::HoudiniEngineUnity::HEU_GeneratedOutput*)>(&HoudiniEngineUnity::HEU_GeneratedOutput::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_GeneratedOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeneratedOutput*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
