// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObjectsMovementRecorder
#include "GlobalNamespace/ObjectsMovementRecorder.hpp"
// Including type: PlaybackRenderer/PlaybackScreenshot
#include "GlobalNamespace/PlaybackRenderer_PlaybackScreenshot.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObjectsMovementRecorderSerializedMethods
  class ObjectsMovementRecorderSerializedMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*, "", "ObjectsMovementRecorderSerializedMethods");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ObjectsMovementRecorderSerializedMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ObjectsMovementRecorderSerializedMethods : public ::Il2CppObject {
    public:
    // static field const value: static private System.String kRecordRecordingMode
    static constexpr const char* kRecordRecordingMode = "Record";
    // Get static field: static private System.String kRecordRecordingMode
    static ::StringW _get_kRecordRecordingMode();
    // Set static field: static private System.String kRecordRecordingMode
    static void _set_kRecordRecordingMode(::StringW value);
    // static field const value: static private System.String kPlaybackRecordingMode
    static constexpr const char* kPlaybackRecordingMode = "Playback";
    // Get static field: static private System.String kPlaybackRecordingMode
    static ::StringW _get_kPlaybackRecordingMode();
    // Set static field: static private System.String kPlaybackRecordingMode
    static void _set_kPlaybackRecordingMode(::StringW value);
    // static field const value: static private System.String kOffRecordingMode
    static constexpr const char* kOffRecordingMode = "Off";
    // Get static field: static private System.String kOffRecordingMode
    static ::StringW _get_kOffRecordingMode();
    // Set static field: static private System.String kOffRecordingMode
    static void _set_kOffRecordingMode(::StringW value);
    // static field const value: static private System.String kFirstPersonCameraView
    static constexpr const char* kFirstPersonCameraView = "FirstPerson";
    // Get static field: static private System.String kFirstPersonCameraView
    static ::StringW _get_kFirstPersonCameraView();
    // Set static field: static private System.String kFirstPersonCameraView
    static void _set_kFirstPersonCameraView(::StringW value);
    // static field const value: static private System.String kThirdPersonCameraView
    static constexpr const char* kThirdPersonCameraView = "ThirdPerson";
    // Get static field: static private System.String kThirdPersonCameraView
    static ::StringW _get_kThirdPersonCameraView();
    // Set static field: static private System.String kThirdPersonCameraView
    static void _set_kThirdPersonCameraView(::StringW value);
    // static field const value: static private System.String kBackgroundPlaybackScreenshotType
    static constexpr const char* kBackgroundPlaybackScreenshotType = "Background";
    // Get static field: static private System.String kBackgroundPlaybackScreenshotType
    static ::StringW _get_kBackgroundPlaybackScreenshotType();
    // Set static field: static private System.String kBackgroundPlaybackScreenshotType
    static void _set_kBackgroundPlaybackScreenshotType(::StringW value);
    // static field const value: static private System.String kForegroundPlaybackScreenshotType
    static constexpr const char* kForegroundPlaybackScreenshotType = "Foreground";
    // Get static field: static private System.String kForegroundPlaybackScreenshotType
    static ::StringW _get_kForegroundPlaybackScreenshotType();
    // Set static field: static private System.String kForegroundPlaybackScreenshotType
    static void _set_kForegroundPlaybackScreenshotType(::StringW value);
    // static public System.String SerializedName(ObjectsMovementRecorder/Mode mode)
    // Offset: 0x15477B0
    static ::StringW SerializedName(::GlobalNamespace::ObjectsMovementRecorder::Mode mode);
    // static public System.Boolean ModeFromSerializedName(System.String name, out ObjectsMovementRecorder/Mode mode)
    // Offset: 0x1547814
    static bool ModeFromSerializedName(::StringW name, ByRef<::GlobalNamespace::ObjectsMovementRecorder::Mode> mode);
    // static public System.String SerializedName(ObjectsMovementRecorder/CameraView cameraView)
    // Offset: 0x15478D0
    static ::StringW SerializedName(::GlobalNamespace::ObjectsMovementRecorder::CameraView cameraView);
    // static public System.Boolean CameraViewFromSerializedName(System.String name, out ObjectsMovementRecorder/CameraView cameraView)
    // Offset: 0x1547934
    static bool CameraViewFromSerializedName(::StringW name, ByRef<::GlobalNamespace::ObjectsMovementRecorder::CameraView> cameraView);
    // static public System.String SerializedName(PlaybackRenderer/PlaybackScreenshot/Type type)
    // Offset: 0x15479CC
    static ::StringW SerializedName(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type type);
    // static public System.Boolean PlaybackScreenshotTypeFromSerializedName(System.String name, out PlaybackRenderer/PlaybackScreenshot/Type type)
    // Offset: 0x1547A28
    static bool PlaybackScreenshotTypeFromSerializedName(::StringW name, ByRef<::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type> type);
  }; // ObjectsMovementRecorderSerializedMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName
// Il2CppName: SerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::ObjectsMovementRecorder::Mode)>(&GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("", "ObjectsMovementRecorder/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectsMovementRecorderSerializedMethods*), "SerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectsMovementRecorderSerializedMethods::ModeFromSerializedName
// Il2CppName: ModeFromSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::ObjectsMovementRecorder::Mode>)>(&GlobalNamespace::ObjectsMovementRecorderSerializedMethods::ModeFromSerializedName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("", "ObjectsMovementRecorder/Mode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectsMovementRecorderSerializedMethods*), "ModeFromSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, mode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName
// Il2CppName: SerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::ObjectsMovementRecorder::CameraView)>(&GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName)> {
  static const MethodInfo* get() {
    static auto* cameraView = &::il2cpp_utils::GetClassFromName("", "ObjectsMovementRecorder/CameraView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectsMovementRecorderSerializedMethods*), "SerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraView});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectsMovementRecorderSerializedMethods::CameraViewFromSerializedName
// Il2CppName: CameraViewFromSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::ObjectsMovementRecorder::CameraView>)>(&GlobalNamespace::ObjectsMovementRecorderSerializedMethods::CameraViewFromSerializedName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cameraView = &::il2cpp_utils::GetClassFromName("", "ObjectsMovementRecorder/CameraView")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectsMovementRecorderSerializedMethods*), "CameraViewFromSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, cameraView});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName
// Il2CppName: SerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type)>(&GlobalNamespace::ObjectsMovementRecorderSerializedMethods::SerializedName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "PlaybackRenderer/PlaybackScreenshot/Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectsMovementRecorderSerializedMethods*), "SerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObjectsMovementRecorderSerializedMethods::PlaybackScreenshotTypeFromSerializedName
// Il2CppName: PlaybackScreenshotTypeFromSerializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::PlaybackRenderer::PlaybackScreenshot::Type>)>(&GlobalNamespace::ObjectsMovementRecorderSerializedMethods::PlaybackScreenshotTypeFromSerializedName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("", "PlaybackRenderer/PlaybackScreenshot/Type")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObjectsMovementRecorderSerializedMethods*), "PlaybackScreenshotTypeFromSerializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, type});
  }
};
