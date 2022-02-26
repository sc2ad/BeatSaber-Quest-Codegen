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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputFilterCancelType
  struct EVRInputFilterCancelType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRInputFilterCancelType, "OVR.OpenVR", "EVRInputFilterCancelType");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRInputFilterCancelType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRInputFilterCancelType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRInputFilterCancelType
    constexpr EVRInputFilterCancelType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRInputFilterCancelType VRInputFilterCancel_Timers
    static constexpr const int VRInputFilterCancel_Timers = 0;
    // Get static field: static public OVR.OpenVR.EVRInputFilterCancelType VRInputFilterCancel_Timers
    static ::OVR::OpenVR::EVRInputFilterCancelType _get_VRInputFilterCancel_Timers();
    // Set static field: static public OVR.OpenVR.EVRInputFilterCancelType VRInputFilterCancel_Timers
    static void _set_VRInputFilterCancel_Timers(::OVR::OpenVR::EVRInputFilterCancelType value);
    // static field const value: static public OVR.OpenVR.EVRInputFilterCancelType VRInputFilterCancel_Momentum
    static constexpr const int VRInputFilterCancel_Momentum = 1;
    // Get static field: static public OVR.OpenVR.EVRInputFilterCancelType VRInputFilterCancel_Momentum
    static ::OVR::OpenVR::EVRInputFilterCancelType _get_VRInputFilterCancel_Momentum();
    // Set static field: static public OVR.OpenVR.EVRInputFilterCancelType VRInputFilterCancel_Momentum
    static void _set_VRInputFilterCancel_Momentum(::OVR::OpenVR::EVRInputFilterCancelType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRInputFilterCancelType
  #pragma pack(pop)
  static check_size<sizeof(EVRInputFilterCancelType), 0 + sizeof(int)> __OVR_OpenVR_EVRInputFilterCancelTypeSizeCheck;
  static_assert(sizeof(EVRInputFilterCancelType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
