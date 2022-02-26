// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_28_0*, "", "OVRPlugin/OVRP_1_28_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_28_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_28_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x1A72F74
    static void _cctor();
    // static public OVRPlugin/Result ovrp_GetDominantHand(out OVRPlugin/Handedness dominantHand)
    // Offset: 0x1A72D44
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetDominantHand(ByRef<::GlobalNamespace::OVRPlugin::Handedness> dominantHand);
    // static public OVRPlugin/Result ovrp_SendEvent(System.String name, System.String param)
    // Offset: 0x1A72DC4
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SendEvent(::StringW name, ::StringW param);
    // static public OVRPlugin/Result ovrp_EnqueueSetupLayer2(ref OVRPlugin/LayerDesc desc, System.Int32 compositionDepth, System.IntPtr layerId)
    // Offset: 0x1A72E84
    static ::GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSetupLayer2(ByRef<::GlobalNamespace::OVRPlugin::LayerDesc> desc, int compositionDepth, ::System::IntPtr layerId);
  }; // OVRPlugin/OVRP_1_28_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_GetDominantHand
// Il2CppName: ovrp_GetDominantHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Handedness>)>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_GetDominantHand)> {
  static const MethodInfo* get() {
    static auto* dominantHand = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Handedness")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), "ovrp_GetDominantHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dominantHand});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_SendEvent
// Il2CppName: ovrp_SendEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::StringW, ::StringW)>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_SendEvent)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* param = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), "ovrp_SendEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, param});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_EnqueueSetupLayer2
// Il2CppName: ovrp_EnqueueSetupLayer2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::LayerDesc>, int, ::System::IntPtr)>(&GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_EnqueueSetupLayer2)> {
  static const MethodInfo* get() {
    static auto* desc = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/LayerDesc")->this_arg;
    static auto* compositionDepth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* layerId = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_28_0*), "ovrp_EnqueueSetupLayer2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{desc, compositionDepth, layerId});
  }
};
