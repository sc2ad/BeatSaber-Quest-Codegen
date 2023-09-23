#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlaybackScreenshotRecorder_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder.get_directory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::get_directory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a6080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "get_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::OnEnable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21a6088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21a6110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)(::StringW, int32_t, GlobalNamespace::PlaybackRenderer)>(&GlobalNamespace::PlaybackScreenshotRecorder::Init)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x21a49b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlaybackRenderer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder.HandleTexturesReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::HandleTexturesReady)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21a6198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "HandleTexturesReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder.SaveScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)(UnityEngine::RenderTexture, ::StringW)>(&GlobalNamespace::PlaybackScreenshotRecorder::SaveScreenshot)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21a6214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "SaveScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder.ConvertRenderTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D (*)(UnityEngine::RenderTexture)>(&GlobalNamespace::PlaybackScreenshotRecorder::ConvertRenderTexture)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x21a6348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "ConvertRenderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlaybackScreenshotRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlaybackScreenshotRecorder::*)()>(&GlobalNamespace::PlaybackScreenshotRecorder::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21a6464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlaybackScreenshotRecorder::__set__directory(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::PlaybackScreenshotRecorder::__get__directory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackScreenshotRecorder::__set__playbackRenderer(GlobalNamespace::PlaybackRenderer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlaybackRenderer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlaybackRenderer>(value));
}
constexpr GlobalNamespace::PlaybackRenderer GlobalNamespace::PlaybackScreenshotRecorder::__get__playbackRenderer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlaybackRenderer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlaybackScreenshotRecorder::__set__frameNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::PlaybackScreenshotRecorder::__get__frameNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::PlaybackScreenshotRecorder::get_directory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "get_directory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackScreenshotRecorder::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackScreenshotRecorder::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackScreenshotRecorder::Init(::StringW directory, int32_t framerate, GlobalNamespace::PlaybackRenderer playbackRenderer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlaybackRenderer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, directory, framerate, playbackRenderer);
}
 void GlobalNamespace::PlaybackScreenshotRecorder::HandleTexturesReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "HandleTexturesReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlaybackScreenshotRecorder::SaveScreenshot(UnityEngine::RenderTexture renderTexture, ::StringW directory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "SaveScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, renderTexture, directory);
}
 UnityEngine::Texture2D GlobalNamespace::PlaybackScreenshotRecorder::ConvertRenderTexture(UnityEngine::RenderTexture renderTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            "ConvertRenderTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture2D, false>(nullptr, ___internal_method, renderTexture);
}
// Ctor Parameters []
 GlobalNamespace::PlaybackScreenshotRecorder::PlaybackScreenshotRecorder()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PlaybackScreenshotRecorder>())) {}
 void GlobalNamespace::PlaybackScreenshotRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlaybackScreenshotRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
