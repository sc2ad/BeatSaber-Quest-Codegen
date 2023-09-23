#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScreenModeController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_def.hpp"
//  Writing Method size for method: HMUI::ScreenModeController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeController::*)()>(&HMUI::ScreenModeController::Awake)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1fb895c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ScreenModeController.SetMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeController::*)(HMUI::ScreenModeData)>(&HMUI::ScreenModeController::SetMode)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x1fb8b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            "SetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ScreenModeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ScreenModeController.SetDefaultMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeController::*)()>(&HMUI::ScreenModeController::SetDefaultMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb8d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            "SetDefaultMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ScreenModeController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenModeController::*)()>(&HMUI::ScreenModeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb8d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ScreenModeController::__set__curvedCanvases(::ArrayW<HMUI::CurvedCanvasSettings> value)  {
::cordl_internals::setInstanceField<::ArrayW<HMUI::CurvedCanvasSettings>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<HMUI::CurvedCanvasSettings>>(value));
}
constexpr ::ArrayW<HMUI::CurvedCanvasSettings> HMUI::ScreenModeController::__get__curvedCanvases() const {
return ::cordl_internals::getInstanceField<::ArrayW<HMUI::CurvedCanvasSettings>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ScreenModeController::__set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr GlobalNamespace::IVRPlatformHelper HMUI::ScreenModeController::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ScreenModeController::__set__defaultModeData(HMUI::ScreenModeData value)  {
::cordl_internals::setInstanceField<HMUI::ScreenModeData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ScreenModeData>(value));
}
constexpr HMUI::ScreenModeData HMUI::ScreenModeController::__get__defaultModeData() const {
return ::cordl_internals::getInstanceField<HMUI::ScreenModeData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ScreenModeController::__set__transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform HMUI::ScreenModeController::__get__transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::ScreenModeController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ScreenModeController::SetMode(HMUI::ScreenModeData screenModeData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            "SetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ScreenModeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, screenModeData);
}
 void HMUI::ScreenModeController::SetDefaultMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            "SetDefaultMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 HMUI::ScreenModeController::ScreenModeController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ScreenModeController>())) {}
 void HMUI::ScreenModeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScreenModeController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
