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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WrapMode
  struct WrapMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WrapMode, "UnityEngine", "WrapMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WrapMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct WrapMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WrapMode
    constexpr WrapMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.WrapMode Once
    static constexpr const int Once = 1;
    // Get static field: static public UnityEngine.WrapMode Once
    static ::UnityEngine::WrapMode _get_Once();
    // Set static field: static public UnityEngine.WrapMode Once
    static void _set_Once(::UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode Loop
    static constexpr const int Loop = 2;
    // Get static field: static public UnityEngine.WrapMode Loop
    static ::UnityEngine::WrapMode _get_Loop();
    // Set static field: static public UnityEngine.WrapMode Loop
    static void _set_Loop(::UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode PingPong
    static constexpr const int PingPong = 4;
    // Get static field: static public UnityEngine.WrapMode PingPong
    static ::UnityEngine::WrapMode _get_PingPong();
    // Set static field: static public UnityEngine.WrapMode PingPong
    static void _set_PingPong(::UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.WrapMode Default
    static ::UnityEngine::WrapMode _get_Default();
    // Set static field: static public UnityEngine.WrapMode Default
    static void _set_Default(::UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode ClampForever
    static constexpr const int ClampForever = 8;
    // Get static field: static public UnityEngine.WrapMode ClampForever
    static ::UnityEngine::WrapMode _get_ClampForever();
    // Set static field: static public UnityEngine.WrapMode ClampForever
    static void _set_ClampForever(::UnityEngine::WrapMode value);
    // static field const value: static public UnityEngine.WrapMode Clamp
    static constexpr const int Clamp = 1;
    // Get static field: static public UnityEngine.WrapMode Clamp
    static ::UnityEngine::WrapMode _get_Clamp();
    // Set static field: static public UnityEngine.WrapMode Clamp
    static void _set_Clamp(::UnityEngine::WrapMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.WrapMode
  #pragma pack(pop)
  static check_size<sizeof(WrapMode), 0 + sizeof(int)> __UnityEngine_WrapModeSizeCheck;
  static_assert(sizeof(WrapMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
