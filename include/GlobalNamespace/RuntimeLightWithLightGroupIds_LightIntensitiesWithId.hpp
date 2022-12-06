// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithLightGroupIds
#include "GlobalNamespace/RuntimeLightWithLightGroupIds.hpp"
// Including type: LightWithIds/LightWithId
#include "GlobalNamespace/LightWithIds_LightWithId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*, "", "RuntimeLightWithLightGroupIds/LightIntensitiesWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RuntimeLightWithLightGroupIds/LightIntensitiesWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeLightWithLightGroupIds::LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds::LightWithId {
    public:
    public:
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x30
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return intensity;
    }
    // Get instance field reference: private System.Single _intensity
    [[deprecated("Use field access instead!")]] float& dyn__intensity();
    // public System.Single get_intensity()
    // Offset: 0x1CD4CAC
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x1CD4CB4
    void set_intensity(float value);
    // public System.Void .ctor(System.Int32 lightId, System.Single intensity)
    // Offset: 0x1CD49B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeLightWithLightGroupIds::LightIntensitiesWithId* New_ctor(int lightId, float intensity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeLightWithLightGroupIds::LightIntensitiesWithId*, creationType>(lightId, intensity)));
    }
  }; // RuntimeLightWithLightGroupIds/LightIntensitiesWithId
  #pragma pack(pop)
  static check_size<sizeof(RuntimeLightWithLightGroupIds::LightIntensitiesWithId), 48 + sizeof(float)> __GlobalNamespace_RuntimeLightWithLightGroupIds_LightIntensitiesWithIdSizeCheck;
  static_assert(sizeof(RuntimeLightWithLightGroupIds::LightIntensitiesWithId) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::*)()>(&GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::set_intensity
// Il2CppName: set_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::*)(float)>(&GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::set_intensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*), "set_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithLightGroupIds::LightIntensitiesWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
