// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_AssetEventType
#include "HoudiniEngineUnity/HEU_AssetEventType.hpp"
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
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetEventData : public ::Il2CppObject {
    public:
    // public HoudiniEngineUnity.HEU_HoudiniAsset Asset
    // Size: 0x8
    // Offset: 0x10
    HoudiniEngineUnity::HEU_HoudiniAsset* Asset;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_HoudiniAsset*) == 0x8);
    // public System.Boolean CookSuccess
    // Size: 0x1
    // Offset: 0x18
    bool CookSuccess;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CookSuccess and: OutputObjects
    char __padding1[0x7] = {};
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> OutputObjects
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::GameObject*>* OutputObjects;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::GameObject*>*) == 0x8);
    // public HoudiniEngineUnity.HEU_AssetEventType EventType
    // Size: 0x4
    // Offset: 0x28
    HoudiniEngineUnity::HEU_AssetEventType EventType;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HEU_AssetEventType) == 0x4);
    // Creating value type constructor for type: HEU_AssetEventData
    HEU_AssetEventData(HoudiniEngineUnity::HEU_HoudiniAsset* Asset_ = {}, bool CookSuccess_ = {}, System::Collections::Generic::List_1<UnityEngine::GameObject*>* OutputObjects_ = {}, HoudiniEngineUnity::HEU_AssetEventType EventType_ = {}) noexcept : Asset{Asset_}, CookSuccess{CookSuccess_}, OutputObjects{OutputObjects_}, EventType{EventType_} {}
    // Get instance field reference: public HoudiniEngineUnity.HEU_HoudiniAsset Asset
    HoudiniEngineUnity::HEU_HoudiniAsset*& dyn_Asset();
    // Get instance field reference: public System.Boolean CookSuccess
    bool& dyn_CookSuccess();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> OutputObjects
    System::Collections::Generic::List_1<UnityEngine::GameObject*>*& dyn_OutputObjects();
    // Get instance field reference: public HoudiniEngineUnity.HEU_AssetEventType EventType
    HoudiniEngineUnity::HEU_AssetEventType& dyn_EventType();
    // public System.Void .ctor(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.Boolean successful, System.Collections.Generic.List`1<UnityEngine.GameObject> outputObjects)
    // Offset: 0x143BA28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetEventData* New_ctor(HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject*>* outputObjects) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_AssetEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetEventData*, creationType>(asset, successful, outputObjects)));
    }
  }; // HoudiniEngineUnity.HEU_AssetEventData
  #pragma pack(pop)
  static check_size<sizeof(HEU_AssetEventData), 40 + sizeof(HoudiniEngineUnity::HEU_AssetEventType)> __HoudiniEngineUnity_HEU_AssetEventDataSizeCheck;
  static_assert(sizeof(HEU_AssetEventData) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetEventData*, "HoudiniEngineUnity", "HEU_AssetEventData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!