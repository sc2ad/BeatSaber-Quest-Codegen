// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorderSaveData::Keyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorderSaveData::Keyframe*, "", "VRControllersRecorderSaveData/Keyframe");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/Keyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveData::Keyframe : public ::Il2CppObject {
    public:
    public:
    // public VRControllersRecorderSaveData/PositionAndRotation[] positionsAndRotations
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*> positionsAndRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*>) == 0x8);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public VRControllersRecorderSaveData/PositionAndRotation[] positionsAndRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*>& dyn_positionsAndRotations();
    // Get instance field reference: public System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // public System.Void .ctor()
    // Offset: 0x2188744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::Keyframe* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersRecorderSaveData::Keyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::Keyframe*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/Keyframe
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData::Keyframe), 24 + sizeof(float)> __GlobalNamespace_VRControllersRecorderSaveData_KeyframeSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::Keyframe) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveData::Keyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
