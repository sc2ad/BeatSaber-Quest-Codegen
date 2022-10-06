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
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PosesRecordingSaveData::PoseSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingSaveData::PoseSaveData*, "", "PosesRecordingSaveData/PoseSaveData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecordingSaveData/PoseSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesRecordingSaveData::PoseSaveData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single posX
    // Size: 0x4
    // Offset: 0x10
    float posX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single posY
    // Size: 0x4
    // Offset: 0x14
    float posY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single posZ
    // Size: 0x4
    // Offset: 0x18
    float posZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rotX
    // Size: 0x4
    // Offset: 0x1C
    float rotX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rotY
    // Size: 0x4
    // Offset: 0x20
    float rotY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rotZ
    // Size: 0x4
    // Offset: 0x24
    float rotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rotW
    // Size: 0x4
    // Offset: 0x28
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Single posX
    [[deprecated("Use field access instead!")]] float& dyn_posX();
    // Get instance field reference: public readonly System.Single posY
    [[deprecated("Use field access instead!")]] float& dyn_posY();
    // Get instance field reference: public readonly System.Single posZ
    [[deprecated("Use field access instead!")]] float& dyn_posZ();
    // Get instance field reference: public readonly System.Single rotX
    [[deprecated("Use field access instead!")]] float& dyn_rotX();
    // Get instance field reference: public readonly System.Single rotY
    [[deprecated("Use field access instead!")]] float& dyn_rotY();
    // Get instance field reference: public readonly System.Single rotZ
    [[deprecated("Use field access instead!")]] float& dyn_rotZ();
    // Get instance field reference: public readonly System.Single rotW
    [[deprecated("Use field access instead!")]] float& dyn_rotW();
    // public System.Void .ctor(System.Single posX, System.Single posY, System.Single posZ, System.Single rotX, System.Single rotY, System.Single rotZ, System.Single rotW)
    // Offset: 0x14DD9F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingSaveData::PoseSaveData* New_ctor(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float rotW) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecordingSaveData::PoseSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingSaveData::PoseSaveData*, creationType>(posX, posY, posZ, rotX, rotY, rotZ, rotW)));
    }
  }; // PosesRecordingSaveData/PoseSaveData
  #pragma pack(pop)
  static check_size<sizeof(PosesRecordingSaveData::PoseSaveData), 40 + sizeof(float)> __GlobalNamespace_PosesRecordingSaveData_PoseSaveDataSizeCheck;
  static_assert(sizeof(PosesRecordingSaveData::PoseSaveData) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingSaveData::PoseSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
