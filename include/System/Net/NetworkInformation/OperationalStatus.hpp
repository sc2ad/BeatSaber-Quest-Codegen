// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.OperationalStatus
  struct OperationalStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: OperationalStatus
    constexpr OperationalStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.OperationalStatus Up
    static constexpr const int Up = 1;
    // Get static field: static public System.Net.NetworkInformation.OperationalStatus Up
    static System::Net::NetworkInformation::OperationalStatus _get_Up();
    // Set static field: static public System.Net.NetworkInformation.OperationalStatus Up
    static void _set_Up(System::Net::NetworkInformation::OperationalStatus value);
    // static field const value: static public System.Net.NetworkInformation.OperationalStatus Down
    static constexpr const int Down = 2;
    // Get static field: static public System.Net.NetworkInformation.OperationalStatus Down
    static System::Net::NetworkInformation::OperationalStatus _get_Down();
    // Set static field: static public System.Net.NetworkInformation.OperationalStatus Down
    static void _set_Down(System::Net::NetworkInformation::OperationalStatus value);
    // static field const value: static public System.Net.NetworkInformation.OperationalStatus Testing
    static constexpr const int Testing = 3;
    // Get static field: static public System.Net.NetworkInformation.OperationalStatus Testing
    static System::Net::NetworkInformation::OperationalStatus _get_Testing();
    // Set static field: static public System.Net.NetworkInformation.OperationalStatus Testing
    static void _set_Testing(System::Net::NetworkInformation::OperationalStatus value);
    // static field const value: static public System.Net.NetworkInformation.OperationalStatus Unknown
    static constexpr const int Unknown = 4;
    // Get static field: static public System.Net.NetworkInformation.OperationalStatus Unknown
    static System::Net::NetworkInformation::OperationalStatus _get_Unknown();
    // Set static field: static public System.Net.NetworkInformation.OperationalStatus Unknown
    static void _set_Unknown(System::Net::NetworkInformation::OperationalStatus value);
    // static field const value: static public System.Net.NetworkInformation.OperationalStatus Dormant
    static constexpr const int Dormant = 5;
    // Get static field: static public System.Net.NetworkInformation.OperationalStatus Dormant
    static System::Net::NetworkInformation::OperationalStatus _get_Dormant();
    // Set static field: static public System.Net.NetworkInformation.OperationalStatus Dormant
    static void _set_Dormant(System::Net::NetworkInformation::OperationalStatus value);
    // static field const value: static public System.Net.NetworkInformation.OperationalStatus NotPresent
    static constexpr const int NotPresent = 6;
    // Get static field: static public System.Net.NetworkInformation.OperationalStatus NotPresent
    static System::Net::NetworkInformation::OperationalStatus _get_NotPresent();
    // Set static field: static public System.Net.NetworkInformation.OperationalStatus NotPresent
    static void _set_NotPresent(System::Net::NetworkInformation::OperationalStatus value);
    // static field const value: static public System.Net.NetworkInformation.OperationalStatus LowerLayerDown
    static constexpr const int LowerLayerDown = 7;
    // Get static field: static public System.Net.NetworkInformation.OperationalStatus LowerLayerDown
    static System::Net::NetworkInformation::OperationalStatus _get_LowerLayerDown();
    // Set static field: static public System.Net.NetworkInformation.OperationalStatus LowerLayerDown
    static void _set_LowerLayerDown(System::Net::NetworkInformation::OperationalStatus value);
  }; // System.Net.NetworkInformation.OperationalStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::OperationalStatus, "System.Net.NetworkInformation", "OperationalStatus");
#pragma pack(pop)