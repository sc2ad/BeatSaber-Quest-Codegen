// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_UnityMaterialInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_UnityMaterialInfo : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.String _unityMaterialPath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* unityMaterialPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String _substancePath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* substancePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 _substanceIndex
    // Size: 0x4
    // Offset: 0x20
    int substanceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String _unityMaterialPath
    ::Il2CppString*& dyn__unityMaterialPath();
    // Get instance field reference: public System.String _substancePath
    ::Il2CppString*& dyn__substancePath();
    // Get instance field reference: public System.Int32 _substanceIndex
    int& dyn__substanceIndex();
    // public System.Void .ctor(System.String unityMaterialPath, System.String substancePath, System.Int32 substanceIndex)
    // Offset: 0x16FB67C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_UnityMaterialInfo* New_ctor(::Il2CppString* unityMaterialPath, ::Il2CppString* substancePath, int substanceIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_UnityMaterialInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_UnityMaterialInfo*, creationType>(unityMaterialPath, substancePath, substanceIndex)));
    }
  }; // HoudiniEngineUnity.HEU_UnityMaterialInfo
  #pragma pack(pop)
  static check_size<sizeof(HEU_UnityMaterialInfo), 32 + sizeof(int)> __HoudiniEngineUnity_HEU_UnityMaterialInfoSizeCheck;
  static_assert(sizeof(HEU_UnityMaterialInfo) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_UnityMaterialInfo*, "HoudiniEngineUnity", "HEU_UnityMaterialInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_UnityMaterialInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
