// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRHaptics
  class OVRHaptics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHaptics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics*, "", "OVRHaptics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRHaptics
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRHaptics : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRHaptics::Config
    class Config;
    // Nested type: ::GlobalNamespace::OVRHaptics::OVRHapticsChannel
    class OVRHapticsChannel;
    // Nested type: ::GlobalNamespace::OVRHaptics::OVRHapticsOutput
    class OVRHapticsOutput;
    // Get static field: static public readonly OVRHaptics/OVRHapticsChannel[] Channels
    static ::ArrayW<::GlobalNamespace::OVRHaptics::OVRHapticsChannel*> _get_Channels();
    // Set static field: static public readonly OVRHaptics/OVRHapticsChannel[] Channels
    static void _set_Channels(::ArrayW<::GlobalNamespace::OVRHaptics::OVRHapticsChannel*> value);
    // Get static field: static public readonly OVRHaptics/OVRHapticsChannel LeftChannel
    static ::GlobalNamespace::OVRHaptics::OVRHapticsChannel* _get_LeftChannel();
    // Set static field: static public readonly OVRHaptics/OVRHapticsChannel LeftChannel
    static void _set_LeftChannel(::GlobalNamespace::OVRHaptics::OVRHapticsChannel* value);
    // Get static field: static public readonly OVRHaptics/OVRHapticsChannel RightChannel
    static ::GlobalNamespace::OVRHaptics::OVRHapticsChannel* _get_RightChannel();
    // Set static field: static public readonly OVRHaptics/OVRHapticsChannel RightChannel
    static void _set_RightChannel(::GlobalNamespace::OVRHaptics::OVRHapticsChannel* value);
    // Get static field: static private readonly OVRHaptics/OVRHapticsOutput[] m_outputs
    static ::ArrayW<::GlobalNamespace::OVRHaptics::OVRHapticsOutput*> _get_m_outputs();
    // Set static field: static private readonly OVRHaptics/OVRHapticsOutput[] m_outputs
    static void _set_m_outputs(::ArrayW<::GlobalNamespace::OVRHaptics::OVRHapticsOutput*> value);
    // static private System.Void .cctor()
    // Offset: 0x1A1C064
    static void _cctor();
    // static public System.Void Process()
    // Offset: 0x1A1C6F8
    static void Process();
  }; // OVRHaptics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRHaptics::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHaptics::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRHaptics::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHaptics*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
