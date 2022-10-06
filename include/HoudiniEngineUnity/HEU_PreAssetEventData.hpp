// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_AssetEventType
#include "HoudiniEngineUnity/HEU_AssetEventType.hpp"
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
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_PreAssetEventData
  class HEU_PreAssetEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PreAssetEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PreAssetEventData*, "HoudiniEngineUnity", "HEU_PreAssetEventData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PreAssetEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_PreAssetEventData : public ::Il2CppObject {
    public:
    public:
    // public HoudiniEngineUnity.HEU_HoudiniAsset Asset
    // Size: 0x8
    // Offset: 0x10
    ::HoudiniEngineUnity::HEU_HoudiniAsset* Asset;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_HoudiniAsset*) == 0x8);
    // public HoudiniEngineUnity.HEU_AssetEventType AssetType
    // Size: 0x4
    // Offset: 0x18
    ::HoudiniEngineUnity::HEU_AssetEventType AssetType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_AssetEventType) == 0x4);
    public:
    // Get instance field reference: public HoudiniEngineUnity.HEU_HoudiniAsset Asset
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_HoudiniAsset*& dyn_Asset();
    // Get instance field reference: public HoudiniEngineUnity.HEU_AssetEventType AssetType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_AssetEventType& dyn_AssetType();
    // public System.Void .ctor(HoudiniEngineUnity.HEU_HoudiniAsset asset, HoudiniEngineUnity.HEU_AssetEventType assetType)
    // Offset: 0x1AFD254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_PreAssetEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::HoudiniEngineUnity::HEU_AssetEventType assetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_PreAssetEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_PreAssetEventData*, creationType>(asset, assetType)));
    }
  }; // HoudiniEngineUnity.HEU_PreAssetEventData
  #pragma pack(pop)
  static check_size<sizeof(HEU_PreAssetEventData), 24 + sizeof(::HoudiniEngineUnity::HEU_AssetEventType)> __HoudiniEngineUnity_HEU_PreAssetEventDataSizeCheck;
  static_assert(sizeof(HEU_PreAssetEventData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PreAssetEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
