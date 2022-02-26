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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EVRControllerEventOutputType
  struct EVRControllerEventOutputType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVRControllerEventOutputType, "Valve.VR", "EVRControllerEventOutputType");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRControllerEventOutputType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRControllerEventOutputType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRControllerEventOutputType
    constexpr EVRControllerEventOutputType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static constexpr const int ControllerEventOutput_OSEvents = 0;
    // Get static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static ::Valve::VR::EVRControllerEventOutputType _get_ControllerEventOutput_OSEvents();
    // Set static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static void _set_ControllerEventOutput_OSEvents(::Valve::VR::EVRControllerEventOutputType value);
    // static field const value: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static constexpr const int ControllerEventOutput_VREvents = 1;
    // Get static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static ::Valve::VR::EVRControllerEventOutputType _get_ControllerEventOutput_VREvents();
    // Set static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static void _set_ControllerEventOutput_VREvents(::Valve::VR::EVRControllerEventOutputType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRControllerEventOutputType
  #pragma pack(pop)
  static check_size<sizeof(EVRControllerEventOutputType), 0 + sizeof(int)> __Valve_VR_EVRControllerEventOutputTypeSizeCheck;
  static_assert(sizeof(EVRControllerEventOutputType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
