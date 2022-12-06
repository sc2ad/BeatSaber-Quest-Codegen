// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShaderWarmupScenesTransitionSetupDataSO
  class ShaderWarmupScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*, "", "ShaderWarmupScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ShaderWarmupScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderWarmupScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // public System.Void .ctor()
    // Offset: 0x1411AB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderWarmupScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderWarmupScenesTransitionSetupDataSO*, creationType>()));
    }
    // public System.Void Init(ShaderWarmupSceneSetupData shaderWarmupSceneSetupData)
    // Offset: 0x1411AA8
    void Init(::GlobalNamespace::ShaderWarmupSceneSetupData* shaderWarmupSceneSetupData);
  }; // ShaderWarmupScenesTransitionSetupDataSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::*)(::GlobalNamespace::ShaderWarmupSceneSetupData*)>(&GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* shaderWarmupSceneSetupData = &::il2cpp_utils::GetClassFromName("", "ShaderWarmupSceneSetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderWarmupSceneSetupData});
  }
};
