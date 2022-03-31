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
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Sizef, "", "OVRPlugin/Sizef");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Sizef
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Sizef/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single w
    // Size: 0x4
    // Offset: 0x0
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single h
    // Size: 0x4
    // Offset: 0x4
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Sizef
    constexpr Sizef(float w_ = {}, float h_ = {}) noexcept : w{w_}, h{h_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/Sizef zero
    static ::GlobalNamespace::OVRPlugin::Sizef _get_zero();
    // Set static field: static public readonly OVRPlugin/Sizef zero
    static void _set_zero(::GlobalNamespace::OVRPlugin::Sizef value);
    // Get instance field reference: public System.Single w
    float& dyn_w();
    // Get instance field reference: public System.Single h
    float& dyn_h();
    // static private System.Void .cctor()
    // Offset: 0x1AE37C0
    static void _cctor();
  }; // OVRPlugin/Sizef
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Sizef), 4 + sizeof(float)> __GlobalNamespace_OVRPlugin_SizefSizeCheck;
  static_assert(sizeof(OVRPlugin::Sizef) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::Sizef::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::Sizef::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::Sizef), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
