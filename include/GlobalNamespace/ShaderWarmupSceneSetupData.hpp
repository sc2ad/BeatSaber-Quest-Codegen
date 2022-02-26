// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneSetupData*, "", "ShaderWarmupSceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ShaderWarmupSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderWarmupSceneSetupData : public ::GlobalNamespace::SceneSetupData {
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
    // private ScenesTransitionSetupDataSO <nextScenesTransitionSetupData>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator ::GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return nextScenesTransitionSetupData;
    }
    // Get instance field reference: private ScenesTransitionSetupDataSO <nextScenesTransitionSetupData>k__BackingField
    ::GlobalNamespace::ScenesTransitionSetupDataSO*& dyn_$nextScenesTransitionSetupData$k__BackingField();
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0x13C9FEC
    ::GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // private System.Void set_nextScenesTransitionSetupData(ScenesTransitionSetupDataSO value)
    // Offset: 0x13C9FF4
    void set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0x13C9FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderWarmupSceneSetupData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShaderWarmupSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderWarmupSceneSetupData*, creationType>(nextScenesTransitionSetupData)));
    }
  }; // ShaderWarmupSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(ShaderWarmupSceneSetupData), 16 + sizeof(::GlobalNamespace::ScenesTransitionSetupDataSO*)> __GlobalNamespace_ShaderWarmupSceneSetupDataSizeCheck;
  static_assert(sizeof(ShaderWarmupSceneSetupData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupSceneSetupData::get_nextScenesTransitionSetupData
// Il2CppName: get_nextScenesTransitionSetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScenesTransitionSetupDataSO* (GlobalNamespace::ShaderWarmupSceneSetupData::*)()>(&GlobalNamespace::ShaderWarmupSceneSetupData::get_nextScenesTransitionSetupData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderWarmupSceneSetupData*), "get_nextScenesTransitionSetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupSceneSetupData::set_nextScenesTransitionSetupData
// Il2CppName: set_nextScenesTransitionSetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShaderWarmupSceneSetupData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*)>(&GlobalNamespace::ShaderWarmupSceneSetupData::set_nextScenesTransitionSetupData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderWarmupSceneSetupData*), "set_nextScenesTransitionSetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
