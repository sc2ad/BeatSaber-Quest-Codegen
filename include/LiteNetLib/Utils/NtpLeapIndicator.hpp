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
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NtpLeapIndicator
  struct NtpLeapIndicator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpLeapIndicator, "LiteNetLib.Utils", "NtpLeapIndicator");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NtpLeapIndicator
  // [TokenAttribute] Offset: FFFFFFFF
  struct NtpLeapIndicator/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NtpLeapIndicator
    constexpr NtpLeapIndicator(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator NoWarning
    static constexpr const int NoWarning = 0;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator NoWarning
    static ::LiteNetLib::Utils::NtpLeapIndicator _get_NoWarning();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator NoWarning
    static void _set_NoWarning(::LiteNetLib::Utils::NtpLeapIndicator value);
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas61Seconds
    static constexpr const int LastMinuteHas61Seconds = 1;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas61Seconds
    static ::LiteNetLib::Utils::NtpLeapIndicator _get_LastMinuteHas61Seconds();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas61Seconds
    static void _set_LastMinuteHas61Seconds(::LiteNetLib::Utils::NtpLeapIndicator value);
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas59Seconds
    static constexpr const int LastMinuteHas59Seconds = 2;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas59Seconds
    static ::LiteNetLib::Utils::NtpLeapIndicator _get_LastMinuteHas59Seconds();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas59Seconds
    static void _set_LastMinuteHas59Seconds(::LiteNetLib::Utils::NtpLeapIndicator value);
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator AlarmCondition
    static constexpr const int AlarmCondition = 3;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator AlarmCondition
    static ::LiteNetLib::Utils::NtpLeapIndicator _get_AlarmCondition();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator AlarmCondition
    static void _set_AlarmCondition(::LiteNetLib::Utils::NtpLeapIndicator value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.Utils.NtpLeapIndicator
  #pragma pack(pop)
  static check_size<sizeof(NtpLeapIndicator), 0 + sizeof(int)> __LiteNetLib_Utils_NtpLeapIndicatorSizeCheck;
  static_assert(sizeof(NtpLeapIndicator) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
