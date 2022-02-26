// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Posef
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::PoseStatef, "", "OVRPlugin/PoseStatef");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/PoseStatef
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::PoseStatef/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/Posef Pose
    // Size: 0x1C
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::Posef Pose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // public OVRPlugin/Vector3f Velocity
    // Size: 0xC
    // Offset: 0x1C
    ::GlobalNamespace::OVRPlugin::Vector3f Velocity;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector3f) == 0xC);
    // public OVRPlugin/Vector3f Acceleration
    // Size: 0xC
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::Vector3f Acceleration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector3f) == 0xC);
    // public OVRPlugin/Vector3f AngularVelocity
    // Size: 0xC
    // Offset: 0x34
    ::GlobalNamespace::OVRPlugin::Vector3f AngularVelocity;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector3f) == 0xC);
    // public OVRPlugin/Vector3f AngularAcceleration
    // Size: 0xC
    // Offset: 0x40
    ::GlobalNamespace::OVRPlugin::Vector3f AngularAcceleration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector3f) == 0xC);
    // Padding between fields: AngularAcceleration and: Time
    char __padding4[0x4] = {};
    // public System.Double Time
    // Size: 0x8
    // Offset: 0x50
    double Time;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: PoseStatef
    constexpr PoseStatef(::GlobalNamespace::OVRPlugin::Posef Pose_ = {}, ::GlobalNamespace::OVRPlugin::Vector3f Velocity_ = {}, ::GlobalNamespace::OVRPlugin::Vector3f Acceleration_ = {}, ::GlobalNamespace::OVRPlugin::Vector3f AngularVelocity_ = {}, ::GlobalNamespace::OVRPlugin::Vector3f AngularAcceleration_ = {}, double Time_ = {}) noexcept : Pose{Pose_}, Velocity{Velocity_}, Acceleration{Acceleration_}, AngularVelocity{AngularVelocity_}, AngularAcceleration{AngularAcceleration_}, Time{Time_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/PoseStatef identity
    static ::GlobalNamespace::OVRPlugin::PoseStatef _get_identity();
    // Set static field: static public readonly OVRPlugin/PoseStatef identity
    static void _set_identity(::GlobalNamespace::OVRPlugin::PoseStatef value);
    // Get instance field reference: public OVRPlugin/Posef Pose
    ::GlobalNamespace::OVRPlugin::Posef& dyn_Pose();
    // Get instance field reference: public OVRPlugin/Vector3f Velocity
    ::GlobalNamespace::OVRPlugin::Vector3f& dyn_Velocity();
    // Get instance field reference: public OVRPlugin/Vector3f Acceleration
    ::GlobalNamespace::OVRPlugin::Vector3f& dyn_Acceleration();
    // Get instance field reference: public OVRPlugin/Vector3f AngularVelocity
    ::GlobalNamespace::OVRPlugin::Vector3f& dyn_AngularVelocity();
    // Get instance field reference: public OVRPlugin/Vector3f AngularAcceleration
    ::GlobalNamespace::OVRPlugin::Vector3f& dyn_AngularAcceleration();
    // Get instance field reference: public System.Double Time
    double& dyn_Time();
    // static private System.Void .cctor()
    // Offset: 0x1A774A4
    static void _cctor();
  }; // OVRPlugin/PoseStatef
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::PoseStatef), 80 + sizeof(double)> __GlobalNamespace_OVRPlugin_PoseStatefSizeCheck;
  static_assert(sizeof(OVRPlugin::PoseStatef) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::PoseStatef::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::PoseStatef::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::PoseStatef), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
