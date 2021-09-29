// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_49_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_49_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_49_0
    OVRP_1_49_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static field const value: static public System.Int32 OVRP_ANCHOR_NAME_SIZE
    static constexpr const int OVRP_ANCHOR_NAME_SIZE = 32;
    // Get static field: static public System.Int32 OVRP_ANCHOR_NAME_SIZE
    static int _get_OVRP_ANCHOR_NAME_SIZE();
    // Set static field: static public System.Int32 OVRP_ANCHOR_NAME_SIZE
    static void _set_OVRP_ANCHOR_NAME_SIZE(int value);
    // static private System.Void .cctor()
    // Offset: 0x1804D24
    static void _cctor();
    // static public OVRPlugin/Result ovrp_SetClientColorDesc(OVRPlugin/ColorSpace colorSpace)
    // Offset: 0x180456C
    static GlobalNamespace::OVRPlugin::Result ovrp_SetClientColorDesc(GlobalNamespace::OVRPlugin::ColorSpace colorSpace);
    // static public OVRPlugin/Result ovrp_GetHmdColorDesc(ref OVRPlugin/ColorSpace colorSpace)
    // Offset: 0x18045EC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHmdColorDesc(ByRef<GlobalNamespace::OVRPlugin::ColorSpace> colorSpace);
    // static public OVRPlugin/Result ovrp_Media_EncodeMrcFrameWithPoseTime(System.IntPtr rawBuffer, System.IntPtr audioDataPtr, System.Int32 audioDataLen, System.Int32 audioChannels, System.Double timestamp, System.Double poseTime, ref System.Int32 outSyncId)
    // Offset: 0x17FD79C
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_EncodeMrcFrameWithPoseTime(System::IntPtr rawBuffer, System::IntPtr audioDataPtr, int audioDataLen, int audioChannels, double timestamp, double poseTime, ByRef<int> outSyncId);
    // static public OVRPlugin/Result ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(System.IntPtr backgroundTextureHandle, System.IntPtr foregroundTextureHandle, System.IntPtr audioData, System.Int32 audioDataLen, System.Int32 audioChannels, System.Double timestamp, System.Double poseTime, ref System.Int32 outSyncId)
    // Offset: 0x17FD924
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(System::IntPtr backgroundTextureHandle, System::IntPtr foregroundTextureHandle, System::IntPtr audioData, int audioDataLen, int audioChannels, double timestamp, double poseTime, ByRef<int> outSyncId);
    // static public OVRPlugin/Result ovrp_Media_SetHeadsetControllerPose(OVRPlugin/Posef headsetPose, OVRPlugin/Posef leftControllerPose, OVRPlugin/Posef rightControllerPose)
    // Offset: 0x17FE54C
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetHeadsetControllerPose(GlobalNamespace::OVRPlugin::Posef headsetPose, GlobalNamespace::OVRPlugin::Posef leftControllerPose, GlobalNamespace::OVRPlugin::Posef rightControllerPose);
    // static public OVRPlugin/Result ovrp_Media_EnumerateCameraAnchorHandles(ref System.Int32 anchorCount, ref System.IntPtr CameraAnchorHandle)
    // Offset: 0x180466C
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_EnumerateCameraAnchorHandles(ByRef<int> anchorCount, ByRef<System::IntPtr> CameraAnchorHandle);
    // static public OVRPlugin/Result ovrp_Media_GetCurrentCameraAnchorHandle(ref System.IntPtr anchorHandle)
    // Offset: 0x18046FC
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetCurrentCameraAnchorHandle(ByRef<System::IntPtr> anchorHandle);
    // static public OVRPlugin/Result ovrp_Media_GetCameraAnchorName(System.IntPtr anchorHandle, System.Char[] cameraName)
    // Offset: 0x180477C
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetCameraAnchorName(System::IntPtr anchorHandle, ::ArrayWrapper<::Il2CppChar> cameraName);
    // static public OVRPlugin/Result ovrp_Media_GetCameraAnchorHandle(System.IntPtr anchorName, ref System.IntPtr anchorHandle)
    // Offset: 0x1804898
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetCameraAnchorHandle(System::IntPtr anchorName, ByRef<System::IntPtr> anchorHandle);
    // static public OVRPlugin/Result ovrp_Media_GetCameraAnchorType(System.IntPtr anchorHandle, ref OVRPlugin/CameraAnchorType anchorType)
    // Offset: 0x1804928
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetCameraAnchorType(System::IntPtr anchorHandle, ByRef<GlobalNamespace::OVRPlugin::CameraAnchorType> anchorType);
    // static public OVRPlugin/Result ovrp_Media_CreateCustomCameraAnchor(System.IntPtr anchorName, ref System.IntPtr anchorHandle)
    // Offset: 0x18049B8
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_CreateCustomCameraAnchor(System::IntPtr anchorName, ByRef<System::IntPtr> anchorHandle);
    // static public OVRPlugin/Result ovrp_Media_DestroyCustomCameraAnchor(System.IntPtr anchorHandle)
    // Offset: 0x1804A48
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_DestroyCustomCameraAnchor(System::IntPtr anchorHandle);
    // static public OVRPlugin/Result ovrp_Media_GetCustomCameraAnchorPose(System.IntPtr anchorHandle, ref OVRPlugin/Posef pose)
    // Offset: 0x1804AC8
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetCustomCameraAnchorPose(System::IntPtr anchorHandle, ByRef<GlobalNamespace::OVRPlugin::Posef> pose);
    // static public OVRPlugin/Result ovrp_Media_SetCustomCameraAnchorPose(System.IntPtr anchorHandle, OVRPlugin/Posef pose)
    // Offset: 0x1804B58
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetCustomCameraAnchorPose(System::IntPtr anchorHandle, GlobalNamespace::OVRPlugin::Posef pose);
    // static public OVRPlugin/Result ovrp_Media_GetCameraMinMaxDistance(System.IntPtr anchorHandle, ref System.Double minDistance, ref System.Double maxDistance)
    // Offset: 0x1804BF4
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_GetCameraMinMaxDistance(System::IntPtr anchorHandle, ByRef<double> minDistance, ByRef<double> maxDistance);
    // static public OVRPlugin/Result ovrp_Media_SetCameraMinMaxDistance(System.IntPtr anchorHandle, System.Double minDistance, System.Double maxDistance)
    // Offset: 0x1804C8C
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetCameraMinMaxDistance(System::IntPtr anchorHandle, double minDistance, double maxDistance);
  }; // OVRPlugin/OVRP_1_49_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_49_0*, "", "OVRPlugin/OVRP_1_49_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_SetClientColorDesc
// Il2CppName: ovrp_SetClientColorDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::ColorSpace)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_SetClientColorDesc)> {
  static const MethodInfo* get() {
    static auto* colorSpace = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/ColorSpace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_SetClientColorDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorSpace});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_GetHmdColorDesc
// Il2CppName: ovrp_GetHmdColorDesc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<GlobalNamespace::OVRPlugin::ColorSpace>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_GetHmdColorDesc)> {
  static const MethodInfo* get() {
    static auto* colorSpace = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/ColorSpace")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_GetHmdColorDesc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorSpace});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_EncodeMrcFrameWithPoseTime
// Il2CppName: ovrp_Media_EncodeMrcFrameWithPoseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, System::IntPtr, int, int, double, double, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_EncodeMrcFrameWithPoseTime)> {
  static const MethodInfo* get() {
    static auto* rawBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioDataPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioDataLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* audioChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* poseTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* outSyncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_EncodeMrcFrameWithPoseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawBuffer, audioDataPtr, audioDataLen, audioChannels, timestamp, poseTime, outSyncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
// Il2CppName: ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, System::IntPtr, System::IntPtr, int, int, double, double, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime)> {
  static const MethodInfo* get() {
    static auto* backgroundTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* foregroundTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioDataLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* audioChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* poseTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* outSyncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backgroundTextureHandle, foregroundTextureHandle, audioData, audioDataLen, audioChannels, timestamp, poseTime, outSyncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_SetHeadsetControllerPose
// Il2CppName: ovrp_Media_SetHeadsetControllerPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(GlobalNamespace::OVRPlugin::Posef, GlobalNamespace::OVRPlugin::Posef, GlobalNamespace::OVRPlugin::Posef)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_SetHeadsetControllerPose)> {
  static const MethodInfo* get() {
    static auto* headsetPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    static auto* leftControllerPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    static auto* rightControllerPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_SetHeadsetControllerPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headsetPose, leftControllerPose, rightControllerPose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_EnumerateCameraAnchorHandles
// Il2CppName: ovrp_Media_EnumerateCameraAnchorHandles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<int>, ByRef<System::IntPtr>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_EnumerateCameraAnchorHandles)> {
  static const MethodInfo* get() {
    static auto* anchorCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* CameraAnchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_EnumerateCameraAnchorHandles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorCount, CameraAnchorHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCurrentCameraAnchorHandle
// Il2CppName: ovrp_Media_GetCurrentCameraAnchorHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(ByRef<System::IntPtr>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCurrentCameraAnchorHandle)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_GetCurrentCameraAnchorHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraAnchorName
// Il2CppName: ovrp_Media_GetCameraAnchorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, ::ArrayWrapper<::Il2CppChar>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraAnchorName)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* cameraName = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_GetCameraAnchorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle, cameraName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraAnchorHandle
// Il2CppName: ovrp_Media_GetCameraAnchorHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, ByRef<System::IntPtr>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraAnchorHandle)> {
  static const MethodInfo* get() {
    static auto* anchorName = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_GetCameraAnchorHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorName, anchorHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraAnchorType
// Il2CppName: ovrp_Media_GetCameraAnchorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, ByRef<GlobalNamespace::OVRPlugin::CameraAnchorType>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraAnchorType)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* anchorType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraAnchorType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_GetCameraAnchorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle, anchorType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_CreateCustomCameraAnchor
// Il2CppName: ovrp_Media_CreateCustomCameraAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, ByRef<System::IntPtr>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_CreateCustomCameraAnchor)> {
  static const MethodInfo* get() {
    static auto* anchorName = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_CreateCustomCameraAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorName, anchorHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_DestroyCustomCameraAnchor
// Il2CppName: ovrp_Media_DestroyCustomCameraAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_DestroyCustomCameraAnchor)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_DestroyCustomCameraAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCustomCameraAnchorPose
// Il2CppName: ovrp_Media_GetCustomCameraAnchorPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, ByRef<GlobalNamespace::OVRPlugin::Posef>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCustomCameraAnchorPose)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_GetCustomCameraAnchorPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle, pose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_SetCustomCameraAnchorPose
// Il2CppName: ovrp_Media_SetCustomCameraAnchorPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, GlobalNamespace::OVRPlugin::Posef)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_SetCustomCameraAnchorPose)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_SetCustomCameraAnchorPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle, pose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraMinMaxDistance
// Il2CppName: ovrp_Media_GetCameraMinMaxDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, ByRef<double>, ByRef<double>)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_GetCameraMinMaxDistance)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* minDistance = &::il2cpp_utils::GetClassFromName("System", "Double")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Double")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_GetCameraMinMaxDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle, minDistance, maxDistance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_SetCameraMinMaxDistance
// Il2CppName: ovrp_Media_SetCameraMinMaxDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Result (*)(System::IntPtr, double, double)>(&GlobalNamespace::OVRPlugin::OVRP_1_49_0::ovrp_Media_SetCameraMinMaxDistance)> {
  static const MethodInfo* get() {
    static auto* anchorHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* minDistance = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_49_0*), "ovrp_Media_SetCameraMinMaxDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchorHandle, minDistance, maxDistance});
  }
};
