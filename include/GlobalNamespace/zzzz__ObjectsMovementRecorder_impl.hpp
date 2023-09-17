#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecorder_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__PosesPlayback_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackScreenshotRecorder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode::____GlobalNamespace__ObjectsMovementRecorder__Mode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode  ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode::Record{0};
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode  ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode::Playback{1};
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode  ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode::Off{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView::____GlobalNamespace__ObjectsMovementRecorder__CameraView(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView  ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView::FirstPerson{0};
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView  ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView::ThirdPerson{1};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::*)(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, ::StringW, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, bool, bool, int32_t, int32_t, int32_t, ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, bool, ::GlobalNamespace::IBeatSaberLogger, ::GlobalNamespace::IPosesSerializer)>(&::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21a4e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPosesSerializer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_mode(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_mode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_recordingPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_recordingPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_cameraView(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_cameraView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_addDateTimeSuffixToRecordingName(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_addDateTimeSuffixToRecordingName() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_screenshotRecording(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_screenshotRecording() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_screenshotWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_screenshotWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_screenshotHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_screenshotHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_framerate(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_framerate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_playbackScreenshots(::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_playbackScreenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_saveToOldFormat(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_saveToOldFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_posesSerializer(::GlobalNamespace::IPosesSerializer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPosesSerializer, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPosesSerializer>(value));
}
constexpr ::GlobalNamespace::IPosesSerializer ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_posesSerializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__set_logger(::GlobalNamespace::IBeatSaberLogger value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatSaberLogger, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatSaberLogger>(value));
}
constexpr ::GlobalNamespace::IBeatSaberLogger ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::__get_logger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mode", ty: "::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode", modifiers: "", def_value: None }, CppParam { name: "recordingPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cameraView", ty: "::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView", modifiers: "", def_value: None }, CppParam { name: "addDateTimeSuffixToRecordingName", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "screenshotRecording", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "screenshotWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenshotHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "framerate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "playbackScreenshots", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>", modifiers: "", def_value: None }, CppParam { name: "saveToOldFormat", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "logger", ty: "::GlobalNamespace::IBeatSaberLogger", modifiers: "", def_value: None }, CppParam { name: "posesSerializer", ty: "::GlobalNamespace::IPosesSerializer", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::____GlobalNamespace__ObjectsMovementRecorder__InitData(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool saveToOldFormat, ::GlobalNamespace::IBeatSaberLogger logger, ::GlobalNamespace::IPosesSerializer posesSerializer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__ObjectsMovementRecorder__InitData>(mode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, saveToOldFormat, logger, posesSerializer))) {}
 void ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData::_ctor(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate, ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> playbackScreenshots, bool saveToOldFormat, ::GlobalNamespace::IBeatSaberLogger logger, ::GlobalNamespace::IPosesSerializer posesSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPosesSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, saveToOldFormat, logger, posesSerializer);
}
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::Init)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x21a3ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x21a4aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.HandleGameStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::HandleGameStateChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21a4cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            "HandleGameStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21a4e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__poseObjects(::ArrayW<::GlobalNamespace::PoseObject> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::PoseObject>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::PoseObject>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::PoseObject> ::GlobalNamespace::ObjectsMovementRecorder::__get__poseObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PoseObject>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__livPoseObjectId(::GlobalNamespace::PoseObjectIdSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PoseObjectIdSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PoseObjectIdSO>(value));
}
constexpr ::GlobalNamespace::PoseObjectIdSO ::GlobalNamespace::ObjectsMovementRecorder::__get__livPoseObjectId() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PoseObjectIdSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__recorder(::GlobalNamespace::PosesRecorder value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PosesRecorder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PosesRecorder>(value));
}
constexpr ::GlobalNamespace::PosesRecorder ::GlobalNamespace::ObjectsMovementRecorder::__get__recorder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PosesRecorder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__playback(::GlobalNamespace::PosesPlayback value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PosesPlayback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PosesPlayback>(value));
}
constexpr ::GlobalNamespace::PosesPlayback ::GlobalNamespace::ObjectsMovementRecorder::__get__playback() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PosesPlayback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__playbackScreenshotRecorder(::GlobalNamespace::PlaybackScreenshotRecorder value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlaybackScreenshotRecorder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlaybackScreenshotRecorder>(value));
}
constexpr ::GlobalNamespace::PlaybackScreenshotRecorder ::GlobalNamespace::ObjectsMovementRecorder::__get__playbackScreenshotRecorder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlaybackScreenshotRecorder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__playbackRender(::GlobalNamespace::PlaybackRenderer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlaybackRenderer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlaybackRenderer>(value));
}
constexpr ::GlobalNamespace::PlaybackRenderer ::GlobalNamespace::ObjectsMovementRecorder::__get__playbackRender() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlaybackRenderer, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__externalCameraPrefab(::UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Camera>(value));
}
constexpr ::UnityEngine::Camera ::GlobalNamespace::ObjectsMovementRecorder::__get__externalCameraPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController ::GlobalNamespace::ObjectsMovementRecorder::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__hmdCamera(::UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Camera>(value));
}
constexpr ::UnityEngine::Camera ::GlobalNamespace::ObjectsMovementRecorder::__get__hmdCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__initData(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData ::GlobalNamespace::ObjectsMovementRecorder::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__InitData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__mode(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode ::GlobalNamespace::ObjectsMovementRecorder::__get__mode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__Mode, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__recordingPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::ObjectsMovementRecorder::__get__recordingPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__cameraView(::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView ::GlobalNamespace::ObjectsMovementRecorder::__get__cameraView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ObjectsMovementRecorder__CameraView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__externalCamera(::UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Camera>(value));
}
constexpr ::UnityEngine::Camera ::GlobalNamespace::ObjectsMovementRecorder::__get__externalCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__playbackScreenshots(::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> ::GlobalNamespace::ObjectsMovementRecorder::__get__playbackScreenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__PlaybackRenderer__PlaybackScreenshot>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__logger(::GlobalNamespace::IBeatSaberLogger value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatSaberLogger, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatSaberLogger>(value));
}
constexpr ::GlobalNamespace::IBeatSaberLogger ::GlobalNamespace::ObjectsMovementRecorder::__get__logger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ObjectsMovementRecorder::__set__posesSerializer(::GlobalNamespace::IPosesSerializer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPosesSerializer, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IPosesSerializer>(value));
}
constexpr ::GlobalNamespace::IPosesSerializer ::GlobalNamespace::ObjectsMovementRecorder::__get__posesSerializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ObjectsMovementRecorder::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ObjectsMovementRecorder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ObjectsMovementRecorder::HandleGameStateChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            "HandleGameStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::ObjectsMovementRecorder::ObjectsMovementRecorder()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ObjectsMovementRecorder>())) {}
 void ::GlobalNamespace::ObjectsMovementRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
