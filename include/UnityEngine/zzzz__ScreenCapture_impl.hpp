#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ScreenCapture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode::____UnityEngine__ScreenCapture__StereoScreenCaptureMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode  ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode::LeftEye{1};
constexpr ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode  ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode::RightEye{2};
constexpr ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode  ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode::BothEyes{3};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba0dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ScreenCapture.CaptureScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int32_t, ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode)>(&::UnityEngine::ScreenCapture::CaptureScreenshot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ba0e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ScreenCapture::CaptureScreenshot(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename);
}
 void ::UnityEngine::ScreenCapture::CaptureScreenshot(::StringW filename, int32_t superSize, ::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode CaptureMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScreenCapture>::get(),
                            "CaptureScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__ScreenCapture__StereoScreenCaptureMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename, superSize, CaptureMode);
}
} // end anonymous namespace
