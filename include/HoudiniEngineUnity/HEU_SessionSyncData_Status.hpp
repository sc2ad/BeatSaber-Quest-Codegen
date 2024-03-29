// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_SessionSyncData
#include "HoudiniEngineUnity/HEU_SessionSyncData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionSyncData::Status, "HoudiniEngineUnity", "HEU_SessionSyncData/Status");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_SessionSyncData::Status/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Status
    constexpr Status(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Stopped
    static constexpr const int Stopped = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Stopped
    static ::HoudiniEngineUnity::HEU_SessionSyncData::Status _get_Stopped();
    // Set static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Stopped
    static void _set_Stopped(::HoudiniEngineUnity::HEU_SessionSyncData::Status value);
    // static field const value: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Started
    static constexpr const int Started = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Started
    static ::HoudiniEngineUnity::HEU_SessionSyncData::Status _get_Started();
    // Set static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Started
    static void _set_Started(::HoudiniEngineUnity::HEU_SessionSyncData::Status value);
    // static field const value: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Connecting
    static constexpr const int Connecting = 2;
    // Get static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Connecting
    static ::HoudiniEngineUnity::HEU_SessionSyncData::Status _get_Connecting();
    // Set static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Connecting
    static void _set_Connecting(::HoudiniEngineUnity::HEU_SessionSyncData::Status value);
    // static field const value: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Initializing
    static constexpr const int Initializing = 3;
    // Get static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Initializing
    static ::HoudiniEngineUnity::HEU_SessionSyncData::Status _get_Initializing();
    // Set static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Initializing
    static void _set_Initializing(::HoudiniEngineUnity::HEU_SessionSyncData::Status value);
    // static field const value: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Connected
    static constexpr const int Connected = 4;
    // Get static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Connected
    static ::HoudiniEngineUnity::HEU_SessionSyncData::Status _get_Connected();
    // Set static field: static public HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status Connected
    static void _set_Connected(::HoudiniEngineUnity::HEU_SessionSyncData::Status value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_SessionSyncData/HoudiniEngineUnity.Status
  #pragma pack(pop)
  static check_size<sizeof(HEU_SessionSyncData::Status), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_SessionSyncData_StatusSizeCheck;
  static_assert(sizeof(HEU_SessionSyncData::Status) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
