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
  // Forward declaring type: EVRState
  struct EVRState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVRState, "Valve.VR", "EVRState");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRState
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRState
    constexpr EVRState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRState Undefined
    static constexpr const int Undefined = -1;
    // Get static field: static public Valve.VR.EVRState Undefined
    static ::Valve::VR::EVRState _get_Undefined();
    // Set static field: static public Valve.VR.EVRState Undefined
    static void _set_Undefined(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Off
    static constexpr const int Off = 0;
    // Get static field: static public Valve.VR.EVRState Off
    static ::Valve::VR::EVRState _get_Off();
    // Set static field: static public Valve.VR.EVRState Off
    static void _set_Off(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Searching
    static constexpr const int Searching = 1;
    // Get static field: static public Valve.VR.EVRState Searching
    static ::Valve::VR::EVRState _get_Searching();
    // Set static field: static public Valve.VR.EVRState Searching
    static void _set_Searching(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Searching_Alert
    static constexpr const int Searching_Alert = 2;
    // Get static field: static public Valve.VR.EVRState Searching_Alert
    static ::Valve::VR::EVRState _get_Searching_Alert();
    // Set static field: static public Valve.VR.EVRState Searching_Alert
    static void _set_Searching_Alert(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Ready
    static constexpr const int Ready = 3;
    // Get static field: static public Valve.VR.EVRState Ready
    static ::Valve::VR::EVRState _get_Ready();
    // Set static field: static public Valve.VR.EVRState Ready
    static void _set_Ready(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Ready_Alert
    static constexpr const int Ready_Alert = 4;
    // Get static field: static public Valve.VR.EVRState Ready_Alert
    static ::Valve::VR::EVRState _get_Ready_Alert();
    // Set static field: static public Valve.VR.EVRState Ready_Alert
    static void _set_Ready_Alert(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState NotReady
    static constexpr const int NotReady = 5;
    // Get static field: static public Valve.VR.EVRState NotReady
    static ::Valve::VR::EVRState _get_NotReady();
    // Set static field: static public Valve.VR.EVRState NotReady
    static void _set_NotReady(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Standby
    static constexpr const int Standby = 6;
    // Get static field: static public Valve.VR.EVRState Standby
    static ::Valve::VR::EVRState _get_Standby();
    // Set static field: static public Valve.VR.EVRState Standby
    static void _set_Standby(::Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Ready_Alert_Low
    static constexpr const int Ready_Alert_Low = 7;
    // Get static field: static public Valve.VR.EVRState Ready_Alert_Low
    static ::Valve::VR::EVRState _get_Ready_Alert_Low();
    // Set static field: static public Valve.VR.EVRState Ready_Alert_Low
    static void _set_Ready_Alert_Low(::Valve::VR::EVRState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRState
  #pragma pack(pop)
  static check_size<sizeof(EVRState), 0 + sizeof(int)> __Valve_VR_EVRStateSizeCheck;
  static_assert(sizeof(EVRState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
