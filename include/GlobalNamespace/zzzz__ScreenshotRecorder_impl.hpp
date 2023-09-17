#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ScreenshotRecorder_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::____GlobalNamespace__ScreenshotRecorder__RecordingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType  ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::Sequence{0};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType  ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::Stereo360Sequence{1};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType  ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::Mono360Sequence{2};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType  ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::F10ForScreenshot{3};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType  ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::Interval{4};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType  ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType::ScreenshotOnPause{5};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.get_directory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::get_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7a5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "get_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.set_directory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(::StringW)>(&::GlobalNamespace::ScreenshotRecorder::set_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7a5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "set_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::OnEnable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1f7a5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1f7a76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::LateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1f7a830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(bool)>(&::GlobalNamespace::ScreenshotRecorder::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f7a974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.SaveCameraScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1f7a8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "SaveCameraScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.SaveTextureScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)(::UnityEngine::Texture2D)>(&::GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1f7aaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "SaveTextureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder.ConvertRenderTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D (::GlobalNamespace::ScreenshotRecorder::*)(::UnityEngine::RenderTexture)>(&::GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1f7a98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "ConvertRenderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenshotRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenshotRecorder::*)()>(&::GlobalNamespace::ScreenshotRecorder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1f7abe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__directory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::ScreenshotRecorder::__get__directory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__camera(::UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Camera>(value));
}
constexpr ::UnityEngine::Camera ::GlobalNamespace::ScreenshotRecorder::__get__camera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__frameRate(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ScreenshotRecorder::__get__frameRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__forceFixedFramerate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::ScreenshotRecorder::__get__forceFixedFramerate() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__interval(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ScreenshotRecorder::__get__interval() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__recordingType(::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType ::GlobalNamespace::ScreenshotRecorder::__get__recordingType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__ScreenshotRecorder__RecordingType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__pauseWithPButton(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::ScreenshotRecorder::__get__pauseWithPButton() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__antiAlias(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ScreenshotRecorder::__get__antiAlias() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__screenshotWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ScreenshotRecorder::__get__screenshotWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__screenshotHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ScreenshotRecorder::__get__screenshotHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__counter(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ScreenshotRecorder::__get__counter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__originalTimeScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::ScreenshotRecorder::__get__originalTimeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__paused(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::ScreenshotRecorder::__get__paused() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__frameNum(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ScreenshotRecorder::__get__frameNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__cubemapLeftEye(::UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RenderTexture>(value));
}
constexpr ::UnityEngine::RenderTexture ::GlobalNamespace::ScreenshotRecorder::__get__cubemapLeftEye() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__cubemapRighEye(::UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RenderTexture>(value));
}
constexpr ::UnityEngine::RenderTexture ::GlobalNamespace::ScreenshotRecorder::__get__cubemapRighEye() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__equirectTexture(::UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RenderTexture>(value));
}
constexpr ::UnityEngine::RenderTexture ::GlobalNamespace::ScreenshotRecorder::__get__equirectTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenshotRecorder::__set__cameraRenderTexture(::UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RenderTexture>(value));
}
constexpr ::UnityEngine::RenderTexture ::GlobalNamespace::ScreenshotRecorder::__get__cameraRenderTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::ScreenshotRecorder::get_directory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "get_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ScreenshotRecorder::set_directory(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "set_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::ScreenshotRecorder::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ScreenshotRecorder::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ScreenshotRecorder::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ScreenshotRecorder::OnApplicationFocus(bool hasFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hasFocus);
}
 void ::GlobalNamespace::ScreenshotRecorder::SaveCameraScreenshot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "SaveCameraScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ScreenshotRecorder::SaveTextureScreenshot(::UnityEngine::Texture2D tex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "SaveTextureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tex);
}
 ::UnityEngine::Texture2D ::GlobalNamespace::ScreenshotRecorder::ConvertRenderTexture(::UnityEngine::RenderTexture renderTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            "ConvertRenderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D, false>(const_cast<void*>(instance), ___internal_method, renderTexture);
}
// Ctor Parameters []
 ::GlobalNamespace::ScreenshotRecorder::ScreenshotRecorder()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ScreenshotRecorder>())) {}
 void ::GlobalNamespace::ScreenshotRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenshotRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
