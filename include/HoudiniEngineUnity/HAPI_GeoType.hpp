// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_GeoType
  struct HAPI_GeoType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_GeoType, "HoudiniEngineUnity", "HAPI_GeoType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_GeoType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_GeoType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_GeoType
    constexpr HAPI_GeoType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INVALID
    static constexpr const int HAPI_GEOTYPE_INVALID = -1;
    // Get static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INVALID
    static ::HoudiniEngineUnity::HAPI_GeoType _get_HAPI_GEOTYPE_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INVALID
    static void _set_HAPI_GEOTYPE_INVALID(::HoudiniEngineUnity::HAPI_GeoType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_DEFAULT
    static constexpr const int HAPI_GEOTYPE_DEFAULT = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_DEFAULT
    static ::HoudiniEngineUnity::HAPI_GeoType _get_HAPI_GEOTYPE_DEFAULT();
    // Set static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_DEFAULT
    static void _set_HAPI_GEOTYPE_DEFAULT(::HoudiniEngineUnity::HAPI_GeoType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INTERMEDIATE
    static constexpr const int HAPI_GEOTYPE_INTERMEDIATE = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INTERMEDIATE
    static ::HoudiniEngineUnity::HAPI_GeoType _get_HAPI_GEOTYPE_INTERMEDIATE();
    // Set static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INTERMEDIATE
    static void _set_HAPI_GEOTYPE_INTERMEDIATE(::HoudiniEngineUnity::HAPI_GeoType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INPUT
    static constexpr const int HAPI_GEOTYPE_INPUT = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INPUT
    static ::HoudiniEngineUnity::HAPI_GeoType _get_HAPI_GEOTYPE_INPUT();
    // Set static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_INPUT
    static void _set_HAPI_GEOTYPE_INPUT(::HoudiniEngineUnity::HAPI_GeoType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_CURVE
    static constexpr const int HAPI_GEOTYPE_CURVE = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_CURVE
    static ::HoudiniEngineUnity::HAPI_GeoType _get_HAPI_GEOTYPE_CURVE();
    // Set static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_CURVE
    static void _set_HAPI_GEOTYPE_CURVE(::HoudiniEngineUnity::HAPI_GeoType value);
    // static field const value: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_MAX
    static constexpr const int HAPI_GEOTYPE_MAX = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_MAX
    static ::HoudiniEngineUnity::HAPI_GeoType _get_HAPI_GEOTYPE_MAX();
    // Set static field: static public HoudiniEngineUnity.HAPI_GeoType HAPI_GEOTYPE_MAX
    static void _set_HAPI_GEOTYPE_MAX(::HoudiniEngineUnity::HAPI_GeoType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_GeoType
  #pragma pack(pop)
  static check_size<sizeof(HAPI_GeoType), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_GeoTypeSizeCheck;
  static_assert(sizeof(HAPI_GeoType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
