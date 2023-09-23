#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "TMPro/zzzz__TMP_ColorGradient_def.hpp"
#include "TMPro/zzzz__ColorMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: TMPro::TMP_ColorGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ColorGradient::*)()>(&TMPro::TMP_ColorGradient::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a6a53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_ColorGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ColorGradient::*)(UnityEngine::Color)>(&TMPro::TMP_ColorGradient::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a6a5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_ColorGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ColorGradient::*)(UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color)>(&TMPro::TMP_ColorGradient::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a6a644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::TMP_ColorGradient::__set_colorMode(TMPro::ColorMode value)  {
::cordl_internals::setInstanceField<TMPro::ColorMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::ColorMode>(value));
}
constexpr TMPro::ColorMode TMPro::TMP_ColorGradient::__get_colorMode() const {
return ::cordl_internals::getInstanceField<TMPro::ColorMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_ColorGradient::__set_topLeft(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color TMPro::TMP_ColorGradient::__get_topLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_ColorGradient::__set_topRight(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color TMPro::TMP_ColorGradient::__get_topRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_ColorGradient::__set_bottomLeft(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color TMPro::TMP_ColorGradient::__get_bottomLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void TMPro::TMP_ColorGradient::__set_bottomRight(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color TMPro::TMP_ColorGradient::__get_bottomRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr TMPro::ColorMode  TMPro::TMP_ColorGradient::k_DefaultColorMode{3};
 void TMPro::TMP_ColorGradient::__set_k_DefaultColor(UnityEngine::Color value)  {
::cordl_internals::setStaticField<UnityEngine::Color, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get>(std::forward<UnityEngine::Color>(value));
}
 UnityEngine::Color TMPro::TMP_ColorGradient::__get_k_DefaultColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get>();
}
// Ctor Parameters []
 TMPro::TMP_ColorGradient::TMP_ColorGradient()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<TMP_ColorGradient>())) {}
 void TMPro::TMP_ColorGradient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
 TMPro::TMP_ColorGradient::TMP_ColorGradient(UnityEngine::Color color)  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<TMP_ColorGradient>(color))) {}
 void TMPro::TMP_ColorGradient::_ctor(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters [CppParam { name: "color0", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "color1", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "color2", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "color3", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
 TMPro::TMP_ColorGradient::TMP_ColorGradient(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3)  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<TMP_ColorGradient>(color0, color1, color2, color3))) {}
 void TMPro::TMP_ColorGradient::_ctor(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_ColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color0, color1, color2, color3);
}
