// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightmapLightsWithIds
#include "GlobalNamespace/LightmapLightsWithIds.hpp"
// Including type: LightWithIds/LightWithId
#include "GlobalNamespace/LightWithIds_LightWithId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*, "", "LightmapLightsWithIds/LightIntensitiesWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: LightmapLightsWithIds/LightIntensitiesWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapLightsWithIds::LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds::LightWithId {
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
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x30
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _weight
    // Size: 0x4
    // Offset: 0x34
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lightmapLightIdColorPropertyId
    // Size: 0x4
    // Offset: 0x38
    int lightmapLightIdColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _lightProbeLightIdColorPropertyId
    // Size: 0x4
    // Offset: 0x3C
    int lightProbeLightIdColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _initializedPropertyIds
    // Size: 0x1
    // Offset: 0x40
    bool initializedPropertyIds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Single _intensity
    float& dyn__intensity();
    // Get instance field reference: private System.Single _weight
    float& dyn__weight();
    // Get instance field reference: private System.Int32 _lightmapLightIdColorPropertyId
    int& dyn__lightmapLightIdColorPropertyId();
    // Get instance field reference: private System.Int32 _lightProbeLightIdColorPropertyId
    int& dyn__lightProbeLightIdColorPropertyId();
    // Get instance field reference: private System.Boolean _initializedPropertyIds
    bool& dyn__initializedPropertyIds();
    // public System.Single get_intensity()
    // Offset: 0x2AD4608
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x2AD4610
    void set_intensity(float value);
    // public System.Single get_weight()
    // Offset: 0x2AD4618
    float get_weight();
    // public System.Void set_weight(System.Single value)
    // Offset: 0x2AD4620
    void set_weight(float value);
    // public System.Void SetDataToShaders(UnityEngine.Color lightmapColor, UnityEngine.Color probeColor)
    // Offset: 0x2AD4494
    void SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor);
    // public System.Void .ctor()
    // Offset: 0x2AD4628
    // Implemented from: LightWithIds/LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapLightsWithIds::LightIntensitiesWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapLightsWithIds::LightIntensitiesWithId*, creationType>()));
    }
  }; // LightmapLightsWithIds/LightIntensitiesWithId
  #pragma pack(pop)
  static check_size<sizeof(LightmapLightsWithIds::LightIntensitiesWithId), 64 + sizeof(bool)> __GlobalNamespace_LightmapLightsWithIds_LightIntensitiesWithIdSizeCheck;
  static_assert(sizeof(LightmapLightsWithIds::LightIntensitiesWithId) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::*)()>(&GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::set_intensity
// Il2CppName: set_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::*)(float)>(&GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::set_intensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*), "set_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::get_weight
// Il2CppName: get_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::*)()>(&GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::get_weight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*), "get_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::set_weight
// Il2CppName: set_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::*)(float)>(&GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::set_weight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*), "set_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::SetDataToShaders
// Il2CppName: SetDataToShaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::SetDataToShaders)> {
  static const MethodInfo* get() {
    static auto* lightmapColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* probeColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId*), "SetDataToShaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightmapColor, probeColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightsWithIds::LightIntensitiesWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!