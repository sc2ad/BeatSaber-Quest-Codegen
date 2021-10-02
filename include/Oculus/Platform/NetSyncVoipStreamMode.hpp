// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.NetSyncVoipStreamMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetSyncVoipStreamMode/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetSyncVoipStreamMode
    constexpr NetSyncVoipStreamMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xEE95FC
    // static field const value: static public Oculus.Platform.NetSyncVoipStreamMode Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncVoipStreamMode Unknown
    static Oculus::Platform::NetSyncVoipStreamMode _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncVoipStreamMode Unknown
    static void _set_Unknown(Oculus::Platform::NetSyncVoipStreamMode value);
    // [DescriptionAttribute] Offset: 0xEE9634
    // static field const value: static public Oculus.Platform.NetSyncVoipStreamMode Ambisonic
    static constexpr const int Ambisonic = 1;
    // Get static field: static public Oculus.Platform.NetSyncVoipStreamMode Ambisonic
    static Oculus::Platform::NetSyncVoipStreamMode _get_Ambisonic();
    // Set static field: static public Oculus.Platform.NetSyncVoipStreamMode Ambisonic
    static void _set_Ambisonic(Oculus::Platform::NetSyncVoipStreamMode value);
    // [DescriptionAttribute] Offset: 0xEE966C
    // static field const value: static public Oculus.Platform.NetSyncVoipStreamMode Mono
    static constexpr const int Mono = 2;
    // Get static field: static public Oculus.Platform.NetSyncVoipStreamMode Mono
    static Oculus::Platform::NetSyncVoipStreamMode _get_Mono();
    // Set static field: static public Oculus.Platform.NetSyncVoipStreamMode Mono
    static void _set_Mono(Oculus::Platform::NetSyncVoipStreamMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.NetSyncVoipStreamMode
  #pragma pack(pop)
  static check_size<sizeof(NetSyncVoipStreamMode), 0 + sizeof(int)> __Oculus_Platform_NetSyncVoipStreamModeSizeCheck;
  static_assert(sizeof(NetSyncVoipStreamMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncVoipStreamMode, "Oculus.Platform", "NetSyncVoipStreamMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
