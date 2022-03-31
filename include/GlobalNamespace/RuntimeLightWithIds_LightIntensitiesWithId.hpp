// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
// Including type: LightWithIds/LightWithId
#include "GlobalNamespace/LightWithIds_LightWithId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId*, "", "RuntimeLightWithIds/LightIntensitiesWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RuntimeLightWithIds/LightIntensitiesWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeLightWithIds::LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds::LightWithId {
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
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return intensity;
    }
    // Get instance field reference: private System.Single _intensity
    float& dyn__intensity();
    // public System.Single get_intensity()
    // Offset: 0x2AD9760
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x2AD9768
    void set_intensity(float value);
    // public System.Void .ctor(System.Int32 lightId, System.Single lightIntensity)
    // Offset: 0x2AD9770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeLightWithIds::LightIntensitiesWithId* New_ctor(int lightId, float lightIntensity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeLightWithIds::LightIntensitiesWithId*, creationType>(lightId, lightIntensity)));
    }
  }; // RuntimeLightWithIds/LightIntensitiesWithId
  #pragma pack(pop)
  static check_size<sizeof(RuntimeLightWithIds::LightIntensitiesWithId), 48 + sizeof(float)> __GlobalNamespace_RuntimeLightWithIds_LightIntensitiesWithIdSizeCheck;
  static_assert(sizeof(RuntimeLightWithIds::LightIntensitiesWithId) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::*)()>(&GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::set_intensity
// Il2CppName: set_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::*)(float)>(&GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::set_intensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId*), "set_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RuntimeLightWithIds::LightIntensitiesWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
