#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ColorPickerButtonController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController.get_button
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button (::GlobalNamespace::ColorPickerButtonController::*)()>(&::GlobalNamespace::ColorPickerButtonController::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2122808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController>::get(),
                            "get_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController.SetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorPickerButtonController::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorPickerButtonController::SetColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2122810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorPickerButtonController::*)()>(&::GlobalNamespace::ColorPickerButtonController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2122838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ColorPickerButtonController::__set__button(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::ColorPickerButtonController::__get__button() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ColorPickerButtonController::__set__colorImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::ColorPickerButtonController::__get__colorImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UI::Button ::GlobalNamespace::ColorPickerButtonController::get_button()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController>::get(),
                            "get_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ColorPickerButtonController::SetColor(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 ::GlobalNamespace::ColorPickerButtonController::ColorPickerButtonController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ColorPickerButtonController>())) {}
 void ::GlobalNamespace::ColorPickerButtonController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorPickerButtonController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
