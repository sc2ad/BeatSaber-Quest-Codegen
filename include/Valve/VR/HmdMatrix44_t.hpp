// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::HmdMatrix44_t, "Valve.VR", "HmdMatrix44_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.HmdMatrix44_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdMatrix44_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single m0
    // Size: 0x4
    // Offset: 0x0
    float m0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m1
    // Size: 0x4
    // Offset: 0x4
    float m1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m2
    // Size: 0x4
    // Offset: 0x8
    float m2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m3
    // Size: 0x4
    // Offset: 0xC
    float m3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m4
    // Size: 0x4
    // Offset: 0x10
    float m4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m5
    // Size: 0x4
    // Offset: 0x14
    float m5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m6
    // Size: 0x4
    // Offset: 0x18
    float m6;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m7
    // Size: 0x4
    // Offset: 0x1C
    float m7;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m8
    // Size: 0x4
    // Offset: 0x20
    float m8;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m9
    // Size: 0x4
    // Offset: 0x24
    float m9;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m10
    // Size: 0x4
    // Offset: 0x28
    float m10;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m11
    // Size: 0x4
    // Offset: 0x2C
    float m11;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m12
    // Size: 0x4
    // Offset: 0x30
    float m12;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m13
    // Size: 0x4
    // Offset: 0x34
    float m13;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m14
    // Size: 0x4
    // Offset: 0x38
    float m14;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m15
    // Size: 0x4
    // Offset: 0x3C
    float m15;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HmdMatrix44_t
    constexpr HmdMatrix44_t(float m0_ = {}, float m1_ = {}, float m2_ = {}, float m3_ = {}, float m4_ = {}, float m5_ = {}, float m6_ = {}, float m7_ = {}, float m8_ = {}, float m9_ = {}, float m10_ = {}, float m11_ = {}, float m12_ = {}, float m13_ = {}, float m14_ = {}, float m15_ = {}) noexcept : m0{m0_}, m1{m1_}, m2{m2_}, m3{m3_}, m4{m4_}, m5{m5_}, m6{m6_}, m7{m7_}, m8{m8_}, m9{m9_}, m10{m10_}, m11{m11_}, m12{m12_}, m13{m13_}, m14{m14_}, m15{m15_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single m0
    float& dyn_m0();
    // Get instance field reference: public System.Single m1
    float& dyn_m1();
    // Get instance field reference: public System.Single m2
    float& dyn_m2();
    // Get instance field reference: public System.Single m3
    float& dyn_m3();
    // Get instance field reference: public System.Single m4
    float& dyn_m4();
    // Get instance field reference: public System.Single m5
    float& dyn_m5();
    // Get instance field reference: public System.Single m6
    float& dyn_m6();
    // Get instance field reference: public System.Single m7
    float& dyn_m7();
    // Get instance field reference: public System.Single m8
    float& dyn_m8();
    // Get instance field reference: public System.Single m9
    float& dyn_m9();
    // Get instance field reference: public System.Single m10
    float& dyn_m10();
    // Get instance field reference: public System.Single m11
    float& dyn_m11();
    // Get instance field reference: public System.Single m12
    float& dyn_m12();
    // Get instance field reference: public System.Single m13
    float& dyn_m13();
    // Get instance field reference: public System.Single m14
    float& dyn_m14();
    // Get instance field reference: public System.Single m15
    float& dyn_m15();
  }; // Valve.VR.HmdMatrix44_t
  #pragma pack(pop)
  static check_size<sizeof(HmdMatrix44_t), 60 + sizeof(float)> __Valve_VR_HmdMatrix44_tSizeCheck;
  static_assert(sizeof(HmdMatrix44_t) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
