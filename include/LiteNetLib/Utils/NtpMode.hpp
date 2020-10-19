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
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NtpMode
  struct NtpMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NtpMode
    constexpr NtpMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.Utils.NtpMode Client
    static constexpr const int Client = 3;
    // Get static field: static public LiteNetLib.Utils.NtpMode Client
    static LiteNetLib::Utils::NtpMode _get_Client();
    // Set static field: static public LiteNetLib.Utils.NtpMode Client
    static void _set_Client(LiteNetLib::Utils::NtpMode value);
    // static field const value: static public LiteNetLib.Utils.NtpMode Server
    static constexpr const int Server = 4;
    // Get static field: static public LiteNetLib.Utils.NtpMode Server
    static LiteNetLib::Utils::NtpMode _get_Server();
    // Set static field: static public LiteNetLib.Utils.NtpMode Server
    static void _set_Server(LiteNetLib::Utils::NtpMode value);
  }; // LiteNetLib.Utils.NtpMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpMode, "LiteNetLib.Utils", "NtpMode");
#pragma pack(pop)