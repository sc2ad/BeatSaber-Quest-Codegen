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
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_AssetEventType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HEU_AssetEventType
    constexpr HEU_AssetEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HEU_AssetEventType UNKNOWN
    static constexpr const int UNKNOWN = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetEventType UNKNOWN
    static HoudiniEngineUnity::HEU_AssetEventType _get_UNKNOWN();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetEventType UNKNOWN
    static void _set_UNKNOWN(HoudiniEngineUnity::HEU_AssetEventType value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetEventType RELOAD
    static constexpr const int RELOAD = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetEventType RELOAD
    static HoudiniEngineUnity::HEU_AssetEventType _get_RELOAD();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetEventType RELOAD
    static void _set_RELOAD(HoudiniEngineUnity::HEU_AssetEventType value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetEventType COOK
    static constexpr const int COOK = 2;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetEventType COOK
    static HoudiniEngineUnity::HEU_AssetEventType _get_COOK();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetEventType COOK
    static void _set_COOK(HoudiniEngineUnity::HEU_AssetEventType value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetEventType BAKE_NEW
    static constexpr const int BAKE_NEW = 3;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetEventType BAKE_NEW
    static HoudiniEngineUnity::HEU_AssetEventType _get_BAKE_NEW();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetEventType BAKE_NEW
    static void _set_BAKE_NEW(HoudiniEngineUnity::HEU_AssetEventType value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetEventType BAKE_UPDATE
    static constexpr const int BAKE_UPDATE = 4;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetEventType BAKE_UPDATE
    static HoudiniEngineUnity::HEU_AssetEventType _get_BAKE_UPDATE();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetEventType BAKE_UPDATE
    static void _set_BAKE_UPDATE(HoudiniEngineUnity::HEU_AssetEventType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_AssetEventType
  #pragma pack(pop)
  static check_size<sizeof(HEU_AssetEventType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_AssetEventTypeSizeCheck;
  static_assert(sizeof(HEU_AssetEventType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetEventType, "HoudiniEngineUnity", "HEU_AssetEventType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
