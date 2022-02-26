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
// Type namespace: UnityOpus
namespace UnityOpus {
  // Forward declaring type: SamplingFrequency
  struct SamplingFrequency;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::SamplingFrequency, "UnityOpus", "SamplingFrequency");
// Type namespace: UnityOpus
namespace UnityOpus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityOpus.SamplingFrequency
  // [TokenAttribute] Offset: FFFFFFFF
  struct SamplingFrequency/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SamplingFrequency
    constexpr SamplingFrequency(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityOpus.SamplingFrequency Frequency_8000
    static constexpr const int Frequency_8000 = 8000;
    // Get static field: static public UnityOpus.SamplingFrequency Frequency_8000
    static ::UnityOpus::SamplingFrequency _get_Frequency_8000();
    // Set static field: static public UnityOpus.SamplingFrequency Frequency_8000
    static void _set_Frequency_8000(::UnityOpus::SamplingFrequency value);
    // static field const value: static public UnityOpus.SamplingFrequency Frequency_12000
    static constexpr const int Frequency_12000 = 12000;
    // Get static field: static public UnityOpus.SamplingFrequency Frequency_12000
    static ::UnityOpus::SamplingFrequency _get_Frequency_12000();
    // Set static field: static public UnityOpus.SamplingFrequency Frequency_12000
    static void _set_Frequency_12000(::UnityOpus::SamplingFrequency value);
    // static field const value: static public UnityOpus.SamplingFrequency Frequency_16000
    static constexpr const int Frequency_16000 = 16000;
    // Get static field: static public UnityOpus.SamplingFrequency Frequency_16000
    static ::UnityOpus::SamplingFrequency _get_Frequency_16000();
    // Set static field: static public UnityOpus.SamplingFrequency Frequency_16000
    static void _set_Frequency_16000(::UnityOpus::SamplingFrequency value);
    // static field const value: static public UnityOpus.SamplingFrequency Frequency_24000
    static constexpr const int Frequency_24000 = 24000;
    // Get static field: static public UnityOpus.SamplingFrequency Frequency_24000
    static ::UnityOpus::SamplingFrequency _get_Frequency_24000();
    // Set static field: static public UnityOpus.SamplingFrequency Frequency_24000
    static void _set_Frequency_24000(::UnityOpus::SamplingFrequency value);
    // static field const value: static public UnityOpus.SamplingFrequency Frequency_48000
    static constexpr const int Frequency_48000 = 48000;
    // Get static field: static public UnityOpus.SamplingFrequency Frequency_48000
    static ::UnityOpus::SamplingFrequency _get_Frequency_48000();
    // Set static field: static public UnityOpus.SamplingFrequency Frequency_48000
    static void _set_Frequency_48000(::UnityOpus::SamplingFrequency value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityOpus.SamplingFrequency
  #pragma pack(pop)
  static check_size<sizeof(SamplingFrequency), 0 + sizeof(int)> __UnityOpus_SamplingFrequencySizeCheck;
  static_assert(sizeof(SamplingFrequency) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
