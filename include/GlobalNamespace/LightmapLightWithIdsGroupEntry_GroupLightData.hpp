// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightmapLightWithIdsGroupEntry
#include "GlobalNamespace/LightmapLightWithIdsGroupEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroupSO
  class LightGroupSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData*, "", "LightmapLightWithIdsGroupEntry/GroupLightData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LightmapLightWithIdsGroupEntry/GroupLightData
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapLightWithIdsGroupEntry::GroupLightData : public ::Il2CppObject {
    public:
    public:
    // private LightGroupSO _lightGroup
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::LightGroupSO* lightGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightGroupSO*) == 0x8);
    // private System.Single _groupIntensity
    // Size: 0x4
    // Offset: 0x18
    float groupIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _groupProbeHighlightsIntensityMultiplier
    // Size: 0x4
    // Offset: 0x1C
    float groupProbeHighlightsIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private LightGroupSO _lightGroup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightGroupSO*& dyn__lightGroup();
    // Get instance field reference: private System.Single _groupIntensity
    [[deprecated("Use field access instead!")]] float& dyn__groupIntensity();
    // Get instance field reference: private System.Single _groupProbeHighlightsIntensityMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__groupProbeHighlightsIntensityMultiplier();
    // public LightGroupSO get_lightGroup()
    // Offset: 0x1D03904
    ::GlobalNamespace::LightGroupSO* get_lightGroup();
    // public System.Single get_groupIntensity()
    // Offset: 0x1D0390C
    float get_groupIntensity();
    // public System.Single get_groupProbeHighlightsIntensityMultiplier()
    // Offset: 0x1D03914
    float get_groupProbeHighlightsIntensityMultiplier();
    // public System.Void .ctor()
    // Offset: 0x1D0391C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapLightWithIdsGroupEntry::GroupLightData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapLightWithIdsGroupEntry::GroupLightData*, creationType>()));
    }
  }; // LightmapLightWithIdsGroupEntry/GroupLightData
  #pragma pack(pop)
  static check_size<sizeof(LightmapLightWithIdsGroupEntry::GroupLightData), 28 + sizeof(float)> __GlobalNamespace_LightmapLightWithIdsGroupEntry_GroupLightDataSizeCheck;
  static_assert(sizeof(LightmapLightWithIdsGroupEntry::GroupLightData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::get_lightGroup
// Il2CppName: get_lightGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::get_lightGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData*), "get_lightGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::get_groupIntensity
// Il2CppName: get_groupIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::get_groupIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData*), "get_groupIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::get_groupProbeHighlightsIntensityMultiplier
// Il2CppName: get_groupProbeHighlightsIntensityMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::get_groupProbeHighlightsIntensityMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData*), "get_groupProbeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::GroupLightData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
