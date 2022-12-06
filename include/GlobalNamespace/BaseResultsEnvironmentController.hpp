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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BaseResultsEnvironmentController
  class BaseResultsEnvironmentController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BaseResultsEnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseResultsEnvironmentController*, "", "BaseResultsEnvironmentController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BaseResultsEnvironmentController
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseResultsEnvironmentController : public ::UnityEngine::MonoBehaviour {
    public:
    // protected System.Void .ctor()
    // Offset: 0x13A06B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseResultsEnvironmentController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BaseResultsEnvironmentController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseResultsEnvironmentController*, creationType>()));
    }
    // public System.Void Activate(System.Boolean immediately)
    // Offset: 0x13A0664
    void Activate(bool immediately);
    // public System.Void Deactivate(System.Boolean immediately)
    // Offset: 0x13A068C
    void Deactivate(bool immediately);
    // public System.Void Setup(IReadonlyBeatmapData beatmapData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Setup(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);
  }; // BaseResultsEnvironmentController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BaseResultsEnvironmentController::Activate)> {
  static const MethodInfo* get() {
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseResultsEnvironmentController*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{immediately});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BaseResultsEnvironmentController::Deactivate)> {
  static const MethodInfo* get() {
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseResultsEnvironmentController*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{immediately});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(::GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::BaseResultsEnvironmentController::Setup)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseResultsEnvironmentController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
