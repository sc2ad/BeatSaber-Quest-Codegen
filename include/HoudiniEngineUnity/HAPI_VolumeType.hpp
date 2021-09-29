// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_VolumeType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_VolumeType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HAPI_VolumeType
    constexpr HAPI_VolumeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_INVALID
    static constexpr const int HAPI_VOLUMETYPE_INVALID = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_INVALID
    static HoudiniEngineUnity::HAPI_VolumeType _get_HAPI_VOLUMETYPE_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_INVALID
    static void _set_HAPI_VOLUMETYPE_INVALID(HoudiniEngineUnity::HAPI_VolumeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_HOUDINI
    static constexpr const int HAPI_VOLUMETYPE_HOUDINI = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_HOUDINI
    static HoudiniEngineUnity::HAPI_VolumeType _get_HAPI_VOLUMETYPE_HOUDINI();
    // Set static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_HOUDINI
    static void _set_HAPI_VOLUMETYPE_HOUDINI(HoudiniEngineUnity::HAPI_VolumeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_VDB
    static constexpr const int HAPI_VOLUMETYPE_VDB = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_VDB
    static HoudiniEngineUnity::HAPI_VolumeType _get_HAPI_VOLUMETYPE_VDB();
    // Set static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_VDB
    static void _set_HAPI_VOLUMETYPE_VDB(HoudiniEngineUnity::HAPI_VolumeType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_MAX
    static constexpr const int HAPI_VOLUMETYPE_MAX = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_MAX
    static HoudiniEngineUnity::HAPI_VolumeType _get_HAPI_VOLUMETYPE_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_VolumeType HAPI_VOLUMETYPE_MAX
    static void _set_HAPI_VOLUMETYPE_MAX(HoudiniEngineUnity::HAPI_VolumeType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_VolumeType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_VolumeType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_VolumeTypeSizeCheck;
  static_assert(sizeof(HAPI_VolumeType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_VolumeType, "HoudiniEngineUnity", "HAPI_VolumeType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"