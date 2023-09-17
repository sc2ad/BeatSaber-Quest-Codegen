#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ColorSchemeColorToggleController_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.get_toggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Toggle (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(&::GlobalNamespace::ColorSchemeColorToggleController::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211dbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            "get_toggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(&::GlobalNamespace::ColorSchemeColorToggleController::get_color)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x211d460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeColorToggleController::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorSchemeColorToggleController::set_color)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x211d4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(&::GlobalNamespace::ColorSchemeColorToggleController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211dbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ColorSchemeColorToggleController::__set__colorGraphics(::ArrayW<::UnityEngine::UI::Graphic> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UI::Graphic>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::UI::Graphic>>(value));
}
constexpr ::ArrayW<::UnityEngine::UI::Graphic> ::GlobalNamespace::ColorSchemeColorToggleController::__get__colorGraphics() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UI::Graphic>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ColorSchemeColorToggleController::__set__toggle(::UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Toggle>(value));
}
constexpr ::UnityEngine::UI::Toggle ::GlobalNamespace::ColorSchemeColorToggleController::__get__toggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UI::Toggle ::GlobalNamespace::ColorSchemeColorToggleController::get_toggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            "get_toggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Toggle, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Color ::GlobalNamespace::ColorSchemeColorToggleController::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ColorSchemeColorToggleController::set_color(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::GlobalNamespace::ColorSchemeColorToggleController::ColorSchemeColorToggleController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ColorSchemeColorToggleController>())) {}
 void ::GlobalNamespace::ColorSchemeColorToggleController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeColorToggleController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
