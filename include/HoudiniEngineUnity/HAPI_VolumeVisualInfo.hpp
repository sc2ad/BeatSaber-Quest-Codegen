// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_VolumeVisualType
#include "HoudiniEngineUnity/HAPI_VolumeVisualType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_VolumeVisualInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_VolumeVisualInfo/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public HoudiniEngineUnity.HAPI_VolumeVisualType type
    // Size: 0x4
    // Offset: 0x0
    HoudiniEngineUnity::HAPI_VolumeVisualType type;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_VolumeVisualType) == 0x4);
    // public System.Single iso
    // Size: 0x4
    // Offset: 0x4
    float iso;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single density
    // Size: 0x4
    // Offset: 0x8
    float density;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_VolumeVisualInfo
    constexpr HAPI_VolumeVisualInfo(HoudiniEngineUnity::HAPI_VolumeVisualType type_ = {}, float iso_ = {}, float density_ = {}) noexcept : type{type_}, iso{iso_}, density{density_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_VolumeVisualType type
    HoudiniEngineUnity::HAPI_VolumeVisualType& dyn_type();
    // Get instance field reference: public System.Single iso
    float& dyn_iso();
    // Get instance field reference: public System.Single density
    float& dyn_density();
  }; // HoudiniEngineUnity.HAPI_VolumeVisualInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_VolumeVisualInfo), 8 + sizeof(float)> __HoudiniEngineUnity_HAPI_VolumeVisualInfoSizeCheck;
  static_assert(sizeof(HAPI_VolumeVisualInfo) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_VolumeVisualInfo, "HoudiniEngineUnity", "HAPI_VolumeVisualInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
