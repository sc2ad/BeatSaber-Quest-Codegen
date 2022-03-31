// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DirectionalLightWithIdsGroupEntry
#include "GlobalNamespace/DirectionalLightWithIdsGroupEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId*, "", "DirectionalLightWithIdsGroupEntry/LightIntensitiesWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalLightWithIdsGroupEntry/LightIntensitiesWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId : public ::Il2CppObject {
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
    // private System.Int32 _lightId
    // Size: 0x4
    // Offset: 0x10
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x14
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Int32 _lightId
    int& dyn__lightId();
    // Get instance field reference: private System.Single _intensity
    float& dyn__intensity();
    // public System.Int32 get_lightId()
    // Offset: 0x2ACF7E4
    int get_lightId();
    // public System.Single get_intensity()
    // Offset: 0x2ACF7EC
    float get_intensity();
    // public System.Void .ctor(System.Int32 lightId, System.Single lightIntensity)
    // Offset: 0x2ACF7F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId* New_ctor(int lightId, float lightIntensity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId*, creationType>(lightId, lightIntensity)));
    }
  }; // DirectionalLightWithIdsGroupEntry/LightIntensitiesWithId
  #pragma pack(pop)
  static check_size<sizeof(DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId), 20 + sizeof(float)> __GlobalNamespace_DirectionalLightWithIdsGroupEntry_LightIntensitiesWithIdSizeCheck;
  static_assert(sizeof(DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::get_lightId
// Il2CppName: get_lightId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::*)()>(&GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::get_lightId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId*), "get_lightId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::*)()>(&GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
