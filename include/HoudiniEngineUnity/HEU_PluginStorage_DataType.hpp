// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_PluginStorage
#include "HoudiniEngineUnity/HEU_PluginStorage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginStorage::DataType, "HoudiniEngineUnity", "HEU_PluginStorage/DataType");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_PluginStorage::DataType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DataType
    constexpr DataType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType BOOL
    static constexpr const int BOOL = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType BOOL
    static ::HoudiniEngineUnity::HEU_PluginStorage::DataType _get_BOOL();
    // Set static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType BOOL
    static void _set_BOOL(::HoudiniEngineUnity::HEU_PluginStorage::DataType value);
    // static field const value: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType INT
    static constexpr const int INT = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType INT
    static ::HoudiniEngineUnity::HEU_PluginStorage::DataType _get_INT();
    // Set static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType INT
    static void _set_INT(::HoudiniEngineUnity::HEU_PluginStorage::DataType value);
    // static field const value: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType LONG
    static constexpr const int LONG = 2;
    // Get static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType LONG
    static ::HoudiniEngineUnity::HEU_PluginStorage::DataType _get_LONG();
    // Set static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType LONG
    static void _set_LONG(::HoudiniEngineUnity::HEU_PluginStorage::DataType value);
    // static field const value: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType FLOAT
    static constexpr const int FLOAT = 3;
    // Get static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType FLOAT
    static ::HoudiniEngineUnity::HEU_PluginStorage::DataType _get_FLOAT();
    // Set static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType FLOAT
    static void _set_FLOAT(::HoudiniEngineUnity::HEU_PluginStorage::DataType value);
    // static field const value: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType STRING
    static constexpr const int STRING = 4;
    // Get static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType STRING
    static ::HoudiniEngineUnity::HEU_PluginStorage::DataType _get_STRING();
    // Set static field: static public HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType STRING
    static void _set_STRING(::HoudiniEngineUnity::HEU_PluginStorage::DataType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_PluginStorage/HoudiniEngineUnity.DataType
  #pragma pack(pop)
  static check_size<sizeof(HEU_PluginStorage::DataType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_PluginStorage_DataTypeSizeCheck;
  static_assert(sizeof(HEU_PluginStorage::DataType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
