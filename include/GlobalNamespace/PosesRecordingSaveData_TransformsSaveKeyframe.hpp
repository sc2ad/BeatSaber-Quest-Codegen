// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PosesRecordingSaveData
#include "GlobalNamespace/PosesRecordingSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PosesRecordingSaveData::TransformsSaveKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingSaveData::TransformsSaveKeyframe*, "", "PosesRecordingSaveData/TransformsSaveKeyframe");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecordingSaveData/TransformsSaveKeyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesRecordingSaveData::TransformsSaveKeyframe : public ::Il2CppObject {
    public:
    public:
    // public readonly PosesRecordingSaveData/PoseSaveData[] poses
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::PosesRecordingSaveData::PoseSaveData*> poses;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PosesRecordingSaveData::PoseSaveData*>) == 0x8);
    // public readonly System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly PosesRecordingSaveData/PoseSaveData[] poses
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PosesRecordingSaveData::PoseSaveData*>& dyn_poses();
    // Get instance field reference: public readonly System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // public System.Void .ctor(PosesRecordingSaveData/PoseSaveData[] poses, System.Single time)
    // Offset: 0x14188DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingSaveData::TransformsSaveKeyframe* New_ctor(::ArrayW<::GlobalNamespace::PosesRecordingSaveData::PoseSaveData*> poses, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecordingSaveData::TransformsSaveKeyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingSaveData::TransformsSaveKeyframe*, creationType>(poses, time)));
    }
  }; // PosesRecordingSaveData/TransformsSaveKeyframe
  #pragma pack(pop)
  static check_size<sizeof(PosesRecordingSaveData::TransformsSaveKeyframe), 24 + sizeof(float)> __GlobalNamespace_PosesRecordingSaveData_TransformsSaveKeyframeSizeCheck;
  static_assert(sizeof(PosesRecordingSaveData::TransformsSaveKeyframe) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingSaveData::TransformsSaveKeyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
