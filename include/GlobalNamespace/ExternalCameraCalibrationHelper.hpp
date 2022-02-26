// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PosesRecordingData
#include "GlobalNamespace/PosesRecordingData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ExternalCameraCalibrationHelper
  class ExternalCameraCalibrationHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ExternalCameraCalibrationHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExternalCameraCalibrationHelper*, "", "ExternalCameraCalibrationHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExternalCameraCalibrationHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ExternalCameraCalibrationHelper : public ::Il2CppObject {
    public:
    // static public PosesRecordingData/ExternalCameraCalibration GetCameraCalibration(UnityEngine.Camera camera)
    // Offset: 0x13FDA74
    static ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration* GetCameraCalibration(::UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x13FDB30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalCameraCalibrationHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ExternalCameraCalibrationHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalCameraCalibrationHelper*, creationType>()));
    }
  }; // ExternalCameraCalibrationHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ExternalCameraCalibrationHelper::GetCameraCalibration
// Il2CppName: GetCameraCalibration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration* (*)(::UnityEngine::Camera*)>(&GlobalNamespace::ExternalCameraCalibrationHelper::GetCameraCalibration)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExternalCameraCalibrationHelper*), "GetCameraCalibration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExternalCameraCalibrationHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
