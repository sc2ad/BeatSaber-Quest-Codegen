#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__MouseCaptureController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.HasMouseCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::IEventHandler)>(&::UnityEngine::UIElements::MouseCaptureController::HasMouseCapture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c88f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController>::get(),
                            "HasMouseCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.CaptureMouse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler)>(&::UnityEngine::UIElements::MouseCaptureController::CaptureMouse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c846a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController>::get(),
                            "CaptureMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.ReleaseMouse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler)>(&::UnityEngine::UIElements::MouseCaptureController::ReleaseMouse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c89acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController>::get(),
                            "ReleaseMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::UnityEngine::UIElements::MouseCaptureController::HasMouseCapture(::UnityEngine::UIElements::IEventHandler handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController>::get(),
                            "HasMouseCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handler);
}
 void ::UnityEngine::UIElements::MouseCaptureController::CaptureMouse(::UnityEngine::UIElements::IEventHandler handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController>::get(),
                            "CaptureMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler);
}
 void ::UnityEngine::UIElements::MouseCaptureController::ReleaseMouse(::UnityEngine::UIElements::IEventHandler handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController>::get(),
                            "ReleaseMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler);
}
} // end anonymous namespace
