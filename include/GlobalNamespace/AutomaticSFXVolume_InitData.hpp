// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AutomaticSFXVolume
#include "GlobalNamespace/AutomaticSFXVolume.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: AutomaticSFXVolume/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class AutomaticSFXVolume::InitData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly System.Single volumeOffset
    // Size: 0x4
    // Offset: 0x10
    float volumeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single maxVolume
    // Size: 0x4
    // Offset: 0x14
    float maxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Boolean adaptiveSfx
    // Size: 0x1
    // Offset: 0x18
    bool adaptiveSfx;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Single volumeOffset
    float& dyn_volumeOffset();
    // Get instance field reference: public readonly System.Single maxVolume
    float& dyn_maxVolume();
    // Get instance field reference: public readonly System.Boolean adaptiveSfx
    bool& dyn_adaptiveSfx();
    // public System.Void .ctor(System.Single volumeOffset, System.Boolean adaptiveSfx, System.Single maxVolume)
    // Offset: 0x1249798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutomaticSFXVolume::InitData* New_ctor(float volumeOffset, bool adaptiveSfx, float maxVolume) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AutomaticSFXVolume::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutomaticSFXVolume::InitData*, creationType>(volumeOffset, adaptiveSfx, maxVolume)));
    }
  }; // AutomaticSFXVolume/InitData
  #pragma pack(pop)
  static check_size<sizeof(AutomaticSFXVolume::InitData), 24 + sizeof(bool)> __GlobalNamespace_AutomaticSFXVolume_InitDataSizeCheck;
  static_assert(sizeof(AutomaticSFXVolume::InitData) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolume::InitData*, "", "AutomaticSFXVolume/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
