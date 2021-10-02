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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.LightProbeUsage
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightProbeUsage/*, public System::Enum*/ {
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
    // Creating value type constructor for type: LightProbeUsage
    constexpr LightProbeUsage(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.LightProbeUsage Off
    static constexpr const int Off = 0;
    // Get static field: static public UnityEngine.Rendering.LightProbeUsage Off
    static UnityEngine::Rendering::LightProbeUsage _get_Off();
    // Set static field: static public UnityEngine.Rendering.LightProbeUsage Off
    static void _set_Off(UnityEngine::Rendering::LightProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.LightProbeUsage BlendProbes
    static constexpr const int BlendProbes = 1;
    // Get static field: static public UnityEngine.Rendering.LightProbeUsage BlendProbes
    static UnityEngine::Rendering::LightProbeUsage _get_BlendProbes();
    // Set static field: static public UnityEngine.Rendering.LightProbeUsage BlendProbes
    static void _set_BlendProbes(UnityEngine::Rendering::LightProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.LightProbeUsage UseProxyVolume
    static constexpr const int UseProxyVolume = 2;
    // Get static field: static public UnityEngine.Rendering.LightProbeUsage UseProxyVolume
    static UnityEngine::Rendering::LightProbeUsage _get_UseProxyVolume();
    // Set static field: static public UnityEngine.Rendering.LightProbeUsage UseProxyVolume
    static void _set_UseProxyVolume(UnityEngine::Rendering::LightProbeUsage value);
    // static field const value: static public UnityEngine.Rendering.LightProbeUsage CustomProvided
    static constexpr const int CustomProvided = 4;
    // Get static field: static public UnityEngine.Rendering.LightProbeUsage CustomProvided
    static UnityEngine::Rendering::LightProbeUsage _get_CustomProvided();
    // Set static field: static public UnityEngine.Rendering.LightProbeUsage CustomProvided
    static void _set_CustomProvided(UnityEngine::Rendering::LightProbeUsage value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.LightProbeUsage
  #pragma pack(pop)
  static check_size<sizeof(LightProbeUsage), 0 + sizeof(int)> __UnityEngine_Rendering_LightProbeUsageSizeCheck;
  static_assert(sizeof(LightProbeUsage) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::LightProbeUsage, "UnityEngine.Rendering", "LightProbeUsage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
