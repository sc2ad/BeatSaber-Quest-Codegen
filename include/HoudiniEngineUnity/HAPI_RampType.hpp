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
  // Autogenerated type: HoudiniEngineUnity.HAPI_RampType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_RampType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_RampType
    constexpr HAPI_RampType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_INVALID
    static constexpr const int HAPI_RAMPTYPE_INVALID = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_INVALID
    static HoudiniEngineUnity::HAPI_RampType _get_HAPI_RAMPTYPE_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_INVALID
    static void _set_HAPI_RAMPTYPE_INVALID(HoudiniEngineUnity::HAPI_RampType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_FLOAT
    static constexpr const int HAPI_RAMPTYPE_FLOAT = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_FLOAT
    static HoudiniEngineUnity::HAPI_RampType _get_HAPI_RAMPTYPE_FLOAT();
    // Set static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_FLOAT
    static void _set_HAPI_RAMPTYPE_FLOAT(HoudiniEngineUnity::HAPI_RampType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_COLOR
    static constexpr const int HAPI_RAMPTYPE_COLOR = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_COLOR
    static HoudiniEngineUnity::HAPI_RampType _get_HAPI_RAMPTYPE_COLOR();
    // Set static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_COLOR
    static void _set_HAPI_RAMPTYPE_COLOR(HoudiniEngineUnity::HAPI_RampType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_MAX
    static constexpr const int HAPI_RAMPTYPE_MAX = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_MAX
    static HoudiniEngineUnity::HAPI_RampType _get_HAPI_RAMPTYPE_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_RampType HAPI_RAMPTYPE_MAX
    static void _set_HAPI_RAMPTYPE_MAX(HoudiniEngineUnity::HAPI_RampType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_RampType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_RampType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_RampTypeSizeCheck;
  static_assert(sizeof(HAPI_RampType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_RampType, "HoudiniEngineUnity", "HAPI_RampType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
