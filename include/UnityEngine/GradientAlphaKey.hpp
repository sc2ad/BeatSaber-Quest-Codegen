// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GradientAlphaKey
  struct GradientAlphaKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientAlphaKey, "UnityEngine", "GradientAlphaKey");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GradientAlphaKey
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 11BFA3C
  struct GradientAlphaKey/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single alpha
    // Size: 0x4
    // Offset: 0x0
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x4
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GradientAlphaKey
    constexpr GradientAlphaKey(float alpha_ = {}, float time_ = {}) noexcept : alpha{alpha_}, time{time_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single alpha
    float& dyn_alpha();
    // Get instance field reference: public System.Single time
    float& dyn_time();
  }; // UnityEngine.GradientAlphaKey
  #pragma pack(pop)
  static check_size<sizeof(GradientAlphaKey), 4 + sizeof(float)> __UnityEngine_GradientAlphaKeySizeCheck;
  static_assert(sizeof(GradientAlphaKey) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
