// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HEU_AssetEventReceiverTest
  class HEU_AssetEventReceiverTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HEU_AssetEventReceiverTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_AssetEventReceiverTest*, "", "HEU_AssetEventReceiverTest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HEU_AssetEventReceiverTest
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetEventReceiverTest : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x16EDCCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetEventReceiverTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HEU_AssetEventReceiverTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetEventReceiverTest*, creationType>()));
    }
    // public System.Void ReloadCallback(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean success, System.Collections.Generic.List`1<UnityEngine.GameObject> outputList)
    // Offset: 0x16ED834
    void ReloadCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList);
    // public System.Void CookedCallback(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean success, System.Collections.Generic.List`1<UnityEngine.GameObject> outputList)
    // Offset: 0x16ED9BC
    void CookedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList);
    // public System.Void BakedCallback(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean success, System.Collections.Generic.List`1<UnityEngine.GameObject> outputList)
    // Offset: 0x16EDB44
    void BakedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool success, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputList);
  }; // HEU_AssetEventReceiverTest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HEU_AssetEventReceiverTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HEU_AssetEventReceiverTest::ReloadCallback
// Il2CppName: ReloadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_AssetEventReceiverTest::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::HEU_AssetEventReceiverTest::ReloadCallback)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* outputList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_AssetEventReceiverTest*), "ReloadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, success, outputList});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_AssetEventReceiverTest::CookedCallback
// Il2CppName: CookedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_AssetEventReceiverTest::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::HEU_AssetEventReceiverTest::CookedCallback)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* outputList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_AssetEventReceiverTest*), "CookedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, success, outputList});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_AssetEventReceiverTest::BakedCallback
// Il2CppName: BakedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_AssetEventReceiverTest::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::HEU_AssetEventReceiverTest::BakedCallback)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* outputList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_AssetEventReceiverTest*), "BakedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, success, outputList});
  }
};
