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
  // Forward declaring type: NumChannels
  struct NumChannels;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::NumChannels, "UnityOpus", "NumChannels");
// Type namespace: UnityOpus
namespace UnityOpus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityOpus.NumChannels
  // [TokenAttribute] Offset: FFFFFFFF
  struct NumChannels/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NumChannels
    constexpr NumChannels(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public UnityOpus.NumChannels Mono
    static constexpr const int Mono = 1;
    // Get static field: static public UnityOpus.NumChannels Mono
    static ::UnityOpus::NumChannels _get_Mono();
    // Set static field: static public UnityOpus.NumChannels Mono
    static void _set_Mono(::UnityOpus::NumChannels value);
    // static field const value: static public UnityOpus.NumChannels Stereo
    static constexpr const int Stereo = 2;
    // Get static field: static public UnityOpus.NumChannels Stereo
    static ::UnityOpus::NumChannels _get_Stereo();
    // Set static field: static public UnityOpus.NumChannels Stereo
    static void _set_Stereo(::UnityOpus::NumChannels value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityOpus.NumChannels
  #pragma pack(pop)
  static check_size<sizeof(NumChannels), 0 + sizeof(int)> __UnityOpus_NumChannelsSizeCheck;
  static_assert(sizeof(NumChannels) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
