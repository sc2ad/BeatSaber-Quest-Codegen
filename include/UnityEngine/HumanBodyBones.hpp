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
  // Forward declaring type: HumanBodyBones
  struct HumanBodyBones;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanBodyBones, "UnityEngine", "HumanBodyBones");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HumanBodyBones
  // [TokenAttribute] Offset: FFFFFFFF
  struct HumanBodyBones/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HumanBodyBones
    constexpr HumanBodyBones(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.HumanBodyBones Hips
    static constexpr const int Hips = 0;
    // Get static field: static public UnityEngine.HumanBodyBones Hips
    static ::UnityEngine::HumanBodyBones _get_Hips();
    // Set static field: static public UnityEngine.HumanBodyBones Hips
    static void _set_Hips(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftUpperLeg
    static constexpr const int LeftUpperLeg = 1;
    // Get static field: static public UnityEngine.HumanBodyBones LeftUpperLeg
    static ::UnityEngine::HumanBodyBones _get_LeftUpperLeg();
    // Set static field: static public UnityEngine.HumanBodyBones LeftUpperLeg
    static void _set_LeftUpperLeg(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightUpperLeg
    static constexpr const int RightUpperLeg = 2;
    // Get static field: static public UnityEngine.HumanBodyBones RightUpperLeg
    static ::UnityEngine::HumanBodyBones _get_RightUpperLeg();
    // Set static field: static public UnityEngine.HumanBodyBones RightUpperLeg
    static void _set_RightUpperLeg(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftLowerLeg
    static constexpr const int LeftLowerLeg = 3;
    // Get static field: static public UnityEngine.HumanBodyBones LeftLowerLeg
    static ::UnityEngine::HumanBodyBones _get_LeftLowerLeg();
    // Set static field: static public UnityEngine.HumanBodyBones LeftLowerLeg
    static void _set_LeftLowerLeg(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightLowerLeg
    static constexpr const int RightLowerLeg = 4;
    // Get static field: static public UnityEngine.HumanBodyBones RightLowerLeg
    static ::UnityEngine::HumanBodyBones _get_RightLowerLeg();
    // Set static field: static public UnityEngine.HumanBodyBones RightLowerLeg
    static void _set_RightLowerLeg(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftFoot
    static constexpr const int LeftFoot = 5;
    // Get static field: static public UnityEngine.HumanBodyBones LeftFoot
    static ::UnityEngine::HumanBodyBones _get_LeftFoot();
    // Set static field: static public UnityEngine.HumanBodyBones LeftFoot
    static void _set_LeftFoot(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightFoot
    static constexpr const int RightFoot = 6;
    // Get static field: static public UnityEngine.HumanBodyBones RightFoot
    static ::UnityEngine::HumanBodyBones _get_RightFoot();
    // Set static field: static public UnityEngine.HumanBodyBones RightFoot
    static void _set_RightFoot(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones Spine
    static constexpr const int Spine = 7;
    // Get static field: static public UnityEngine.HumanBodyBones Spine
    static ::UnityEngine::HumanBodyBones _get_Spine();
    // Set static field: static public UnityEngine.HumanBodyBones Spine
    static void _set_Spine(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones Chest
    static constexpr const int Chest = 8;
    // Get static field: static public UnityEngine.HumanBodyBones Chest
    static ::UnityEngine::HumanBodyBones _get_Chest();
    // Set static field: static public UnityEngine.HumanBodyBones Chest
    static void _set_Chest(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones UpperChest
    static constexpr const int UpperChest = 54;
    // Get static field: static public UnityEngine.HumanBodyBones UpperChest
    static ::UnityEngine::HumanBodyBones _get_UpperChest();
    // Set static field: static public UnityEngine.HumanBodyBones UpperChest
    static void _set_UpperChest(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones Neck
    static constexpr const int Neck = 9;
    // Get static field: static public UnityEngine.HumanBodyBones Neck
    static ::UnityEngine::HumanBodyBones _get_Neck();
    // Set static field: static public UnityEngine.HumanBodyBones Neck
    static void _set_Neck(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones Head
    static constexpr const int Head = 10;
    // Get static field: static public UnityEngine.HumanBodyBones Head
    static ::UnityEngine::HumanBodyBones _get_Head();
    // Set static field: static public UnityEngine.HumanBodyBones Head
    static void _set_Head(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftShoulder
    static constexpr const int LeftShoulder = 11;
    // Get static field: static public UnityEngine.HumanBodyBones LeftShoulder
    static ::UnityEngine::HumanBodyBones _get_LeftShoulder();
    // Set static field: static public UnityEngine.HumanBodyBones LeftShoulder
    static void _set_LeftShoulder(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightShoulder
    static constexpr const int RightShoulder = 12;
    // Get static field: static public UnityEngine.HumanBodyBones RightShoulder
    static ::UnityEngine::HumanBodyBones _get_RightShoulder();
    // Set static field: static public UnityEngine.HumanBodyBones RightShoulder
    static void _set_RightShoulder(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftUpperArm
    static constexpr const int LeftUpperArm = 13;
    // Get static field: static public UnityEngine.HumanBodyBones LeftUpperArm
    static ::UnityEngine::HumanBodyBones _get_LeftUpperArm();
    // Set static field: static public UnityEngine.HumanBodyBones LeftUpperArm
    static void _set_LeftUpperArm(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightUpperArm
    static constexpr const int RightUpperArm = 14;
    // Get static field: static public UnityEngine.HumanBodyBones RightUpperArm
    static ::UnityEngine::HumanBodyBones _get_RightUpperArm();
    // Set static field: static public UnityEngine.HumanBodyBones RightUpperArm
    static void _set_RightUpperArm(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftLowerArm
    static constexpr const int LeftLowerArm = 15;
    // Get static field: static public UnityEngine.HumanBodyBones LeftLowerArm
    static ::UnityEngine::HumanBodyBones _get_LeftLowerArm();
    // Set static field: static public UnityEngine.HumanBodyBones LeftLowerArm
    static void _set_LeftLowerArm(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightLowerArm
    static constexpr const int RightLowerArm = 16;
    // Get static field: static public UnityEngine.HumanBodyBones RightLowerArm
    static ::UnityEngine::HumanBodyBones _get_RightLowerArm();
    // Set static field: static public UnityEngine.HumanBodyBones RightLowerArm
    static void _set_RightLowerArm(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftHand
    static constexpr const int LeftHand = 17;
    // Get static field: static public UnityEngine.HumanBodyBones LeftHand
    static ::UnityEngine::HumanBodyBones _get_LeftHand();
    // Set static field: static public UnityEngine.HumanBodyBones LeftHand
    static void _set_LeftHand(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightHand
    static constexpr const int RightHand = 18;
    // Get static field: static public UnityEngine.HumanBodyBones RightHand
    static ::UnityEngine::HumanBodyBones _get_RightHand();
    // Set static field: static public UnityEngine.HumanBodyBones RightHand
    static void _set_RightHand(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftToes
    static constexpr const int LeftToes = 19;
    // Get static field: static public UnityEngine.HumanBodyBones LeftToes
    static ::UnityEngine::HumanBodyBones _get_LeftToes();
    // Set static field: static public UnityEngine.HumanBodyBones LeftToes
    static void _set_LeftToes(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightToes
    static constexpr const int RightToes = 20;
    // Get static field: static public UnityEngine.HumanBodyBones RightToes
    static ::UnityEngine::HumanBodyBones _get_RightToes();
    // Set static field: static public UnityEngine.HumanBodyBones RightToes
    static void _set_RightToes(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftEye
    static constexpr const int LeftEye = 21;
    // Get static field: static public UnityEngine.HumanBodyBones LeftEye
    static ::UnityEngine::HumanBodyBones _get_LeftEye();
    // Set static field: static public UnityEngine.HumanBodyBones LeftEye
    static void _set_LeftEye(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightEye
    static constexpr const int RightEye = 22;
    // Get static field: static public UnityEngine.HumanBodyBones RightEye
    static ::UnityEngine::HumanBodyBones _get_RightEye();
    // Set static field: static public UnityEngine.HumanBodyBones RightEye
    static void _set_RightEye(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones Jaw
    static constexpr const int Jaw = 23;
    // Get static field: static public UnityEngine.HumanBodyBones Jaw
    static ::UnityEngine::HumanBodyBones _get_Jaw();
    // Set static field: static public UnityEngine.HumanBodyBones Jaw
    static void _set_Jaw(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftThumbProximal
    static constexpr const int LeftThumbProximal = 24;
    // Get static field: static public UnityEngine.HumanBodyBones LeftThumbProximal
    static ::UnityEngine::HumanBodyBones _get_LeftThumbProximal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftThumbProximal
    static void _set_LeftThumbProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftThumbIntermediate
    static constexpr const int LeftThumbIntermediate = 25;
    // Get static field: static public UnityEngine.HumanBodyBones LeftThumbIntermediate
    static ::UnityEngine::HumanBodyBones _get_LeftThumbIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones LeftThumbIntermediate
    static void _set_LeftThumbIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftThumbDistal
    static constexpr const int LeftThumbDistal = 26;
    // Get static field: static public UnityEngine.HumanBodyBones LeftThumbDistal
    static ::UnityEngine::HumanBodyBones _get_LeftThumbDistal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftThumbDistal
    static void _set_LeftThumbDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftIndexProximal
    static constexpr const int LeftIndexProximal = 27;
    // Get static field: static public UnityEngine.HumanBodyBones LeftIndexProximal
    static ::UnityEngine::HumanBodyBones _get_LeftIndexProximal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftIndexProximal
    static void _set_LeftIndexProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftIndexIntermediate
    static constexpr const int LeftIndexIntermediate = 28;
    // Get static field: static public UnityEngine.HumanBodyBones LeftIndexIntermediate
    static ::UnityEngine::HumanBodyBones _get_LeftIndexIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones LeftIndexIntermediate
    static void _set_LeftIndexIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftIndexDistal
    static constexpr const int LeftIndexDistal = 29;
    // Get static field: static public UnityEngine.HumanBodyBones LeftIndexDistal
    static ::UnityEngine::HumanBodyBones _get_LeftIndexDistal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftIndexDistal
    static void _set_LeftIndexDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftMiddleProximal
    static constexpr const int LeftMiddleProximal = 30;
    // Get static field: static public UnityEngine.HumanBodyBones LeftMiddleProximal
    static ::UnityEngine::HumanBodyBones _get_LeftMiddleProximal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftMiddleProximal
    static void _set_LeftMiddleProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftMiddleIntermediate
    static constexpr const int LeftMiddleIntermediate = 31;
    // Get static field: static public UnityEngine.HumanBodyBones LeftMiddleIntermediate
    static ::UnityEngine::HumanBodyBones _get_LeftMiddleIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones LeftMiddleIntermediate
    static void _set_LeftMiddleIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftMiddleDistal
    static constexpr const int LeftMiddleDistal = 32;
    // Get static field: static public UnityEngine.HumanBodyBones LeftMiddleDistal
    static ::UnityEngine::HumanBodyBones _get_LeftMiddleDistal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftMiddleDistal
    static void _set_LeftMiddleDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftRingProximal
    static constexpr const int LeftRingProximal = 33;
    // Get static field: static public UnityEngine.HumanBodyBones LeftRingProximal
    static ::UnityEngine::HumanBodyBones _get_LeftRingProximal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftRingProximal
    static void _set_LeftRingProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftRingIntermediate
    static constexpr const int LeftRingIntermediate = 34;
    // Get static field: static public UnityEngine.HumanBodyBones LeftRingIntermediate
    static ::UnityEngine::HumanBodyBones _get_LeftRingIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones LeftRingIntermediate
    static void _set_LeftRingIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftRingDistal
    static constexpr const int LeftRingDistal = 35;
    // Get static field: static public UnityEngine.HumanBodyBones LeftRingDistal
    static ::UnityEngine::HumanBodyBones _get_LeftRingDistal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftRingDistal
    static void _set_LeftRingDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftLittleProximal
    static constexpr const int LeftLittleProximal = 36;
    // Get static field: static public UnityEngine.HumanBodyBones LeftLittleProximal
    static ::UnityEngine::HumanBodyBones _get_LeftLittleProximal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftLittleProximal
    static void _set_LeftLittleProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftLittleIntermediate
    static constexpr const int LeftLittleIntermediate = 37;
    // Get static field: static public UnityEngine.HumanBodyBones LeftLittleIntermediate
    static ::UnityEngine::HumanBodyBones _get_LeftLittleIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones LeftLittleIntermediate
    static void _set_LeftLittleIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LeftLittleDistal
    static constexpr const int LeftLittleDistal = 38;
    // Get static field: static public UnityEngine.HumanBodyBones LeftLittleDistal
    static ::UnityEngine::HumanBodyBones _get_LeftLittleDistal();
    // Set static field: static public UnityEngine.HumanBodyBones LeftLittleDistal
    static void _set_LeftLittleDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightThumbProximal
    static constexpr const int RightThumbProximal = 39;
    // Get static field: static public UnityEngine.HumanBodyBones RightThumbProximal
    static ::UnityEngine::HumanBodyBones _get_RightThumbProximal();
    // Set static field: static public UnityEngine.HumanBodyBones RightThumbProximal
    static void _set_RightThumbProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightThumbIntermediate
    static constexpr const int RightThumbIntermediate = 40;
    // Get static field: static public UnityEngine.HumanBodyBones RightThumbIntermediate
    static ::UnityEngine::HumanBodyBones _get_RightThumbIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones RightThumbIntermediate
    static void _set_RightThumbIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightThumbDistal
    static constexpr const int RightThumbDistal = 41;
    // Get static field: static public UnityEngine.HumanBodyBones RightThumbDistal
    static ::UnityEngine::HumanBodyBones _get_RightThumbDistal();
    // Set static field: static public UnityEngine.HumanBodyBones RightThumbDistal
    static void _set_RightThumbDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightIndexProximal
    static constexpr const int RightIndexProximal = 42;
    // Get static field: static public UnityEngine.HumanBodyBones RightIndexProximal
    static ::UnityEngine::HumanBodyBones _get_RightIndexProximal();
    // Set static field: static public UnityEngine.HumanBodyBones RightIndexProximal
    static void _set_RightIndexProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightIndexIntermediate
    static constexpr const int RightIndexIntermediate = 43;
    // Get static field: static public UnityEngine.HumanBodyBones RightIndexIntermediate
    static ::UnityEngine::HumanBodyBones _get_RightIndexIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones RightIndexIntermediate
    static void _set_RightIndexIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightIndexDistal
    static constexpr const int RightIndexDistal = 44;
    // Get static field: static public UnityEngine.HumanBodyBones RightIndexDistal
    static ::UnityEngine::HumanBodyBones _get_RightIndexDistal();
    // Set static field: static public UnityEngine.HumanBodyBones RightIndexDistal
    static void _set_RightIndexDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightMiddleProximal
    static constexpr const int RightMiddleProximal = 45;
    // Get static field: static public UnityEngine.HumanBodyBones RightMiddleProximal
    static ::UnityEngine::HumanBodyBones _get_RightMiddleProximal();
    // Set static field: static public UnityEngine.HumanBodyBones RightMiddleProximal
    static void _set_RightMiddleProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightMiddleIntermediate
    static constexpr const int RightMiddleIntermediate = 46;
    // Get static field: static public UnityEngine.HumanBodyBones RightMiddleIntermediate
    static ::UnityEngine::HumanBodyBones _get_RightMiddleIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones RightMiddleIntermediate
    static void _set_RightMiddleIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightMiddleDistal
    static constexpr const int RightMiddleDistal = 47;
    // Get static field: static public UnityEngine.HumanBodyBones RightMiddleDistal
    static ::UnityEngine::HumanBodyBones _get_RightMiddleDistal();
    // Set static field: static public UnityEngine.HumanBodyBones RightMiddleDistal
    static void _set_RightMiddleDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightRingProximal
    static constexpr const int RightRingProximal = 48;
    // Get static field: static public UnityEngine.HumanBodyBones RightRingProximal
    static ::UnityEngine::HumanBodyBones _get_RightRingProximal();
    // Set static field: static public UnityEngine.HumanBodyBones RightRingProximal
    static void _set_RightRingProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightRingIntermediate
    static constexpr const int RightRingIntermediate = 49;
    // Get static field: static public UnityEngine.HumanBodyBones RightRingIntermediate
    static ::UnityEngine::HumanBodyBones _get_RightRingIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones RightRingIntermediate
    static void _set_RightRingIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightRingDistal
    static constexpr const int RightRingDistal = 50;
    // Get static field: static public UnityEngine.HumanBodyBones RightRingDistal
    static ::UnityEngine::HumanBodyBones _get_RightRingDistal();
    // Set static field: static public UnityEngine.HumanBodyBones RightRingDistal
    static void _set_RightRingDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightLittleProximal
    static constexpr const int RightLittleProximal = 51;
    // Get static field: static public UnityEngine.HumanBodyBones RightLittleProximal
    static ::UnityEngine::HumanBodyBones _get_RightLittleProximal();
    // Set static field: static public UnityEngine.HumanBodyBones RightLittleProximal
    static void _set_RightLittleProximal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightLittleIntermediate
    static constexpr const int RightLittleIntermediate = 52;
    // Get static field: static public UnityEngine.HumanBodyBones RightLittleIntermediate
    static ::UnityEngine::HumanBodyBones _get_RightLittleIntermediate();
    // Set static field: static public UnityEngine.HumanBodyBones RightLittleIntermediate
    static void _set_RightLittleIntermediate(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones RightLittleDistal
    static constexpr const int RightLittleDistal = 53;
    // Get static field: static public UnityEngine.HumanBodyBones RightLittleDistal
    static ::UnityEngine::HumanBodyBones _get_RightLittleDistal();
    // Set static field: static public UnityEngine.HumanBodyBones RightLittleDistal
    static void _set_RightLittleDistal(::UnityEngine::HumanBodyBones value);
    // static field const value: static public UnityEngine.HumanBodyBones LastBone
    static constexpr const int LastBone = 55;
    // Get static field: static public UnityEngine.HumanBodyBones LastBone
    static ::UnityEngine::HumanBodyBones _get_LastBone();
    // Set static field: static public UnityEngine.HumanBodyBones LastBone
    static void _set_LastBone(::UnityEngine::HumanBodyBones value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.HumanBodyBones
  #pragma pack(pop)
  static check_size<sizeof(HumanBodyBones), 0 + sizeof(int)> __UnityEngine_HumanBodyBonesSizeCheck;
  static_assert(sizeof(HumanBodyBones) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
