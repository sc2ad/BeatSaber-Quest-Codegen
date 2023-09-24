#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ColorGradientMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::Text::TextColorGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextColorGradient::*)()>(&UnityEngine::TextCore::Text::TextColorGradient::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2bd2370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextColorGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextColorGradient::*)(UnityEngine::Color)>(&UnityEngine::TextCore::Text::TextColorGradient::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bd240c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextColorGradient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextColorGradient::*)(UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color)>(&UnityEngine::TextCore::Text::TextColorGradient::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2bd2478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__set_colorMode(UnityEngine::TextCore::Text::ColorGradientMode value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::ColorGradientMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextCore::Text::ColorGradientMode>(value));
}
constexpr UnityEngine::TextCore::Text::ColorGradientMode UnityEngine::TextCore::Text::TextColorGradient::__get_colorMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::ColorGradientMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__set_topLeft(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::TextCore::Text::TextColorGradient::__get_topLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__set_topRight(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::TextCore::Text::TextColorGradient::__get_topRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__set_bottomLeft(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::TextCore::Text::TextColorGradient::__get_bottomLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__set_bottomRight(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::TextCore::Text::TextColorGradient::__get_bottomRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr UnityEngine::TextCore::Text::ColorGradientMode  UnityEngine::TextCore::Text::TextColorGradient::k_DefaultColorMode{3};
 void UnityEngine::TextCore::Text::TextColorGradient::__set_k_DefaultColor(UnityEngine::Color value)  {
::cordl_internals::setStaticField<UnityEngine::Color, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get>(std::forward<UnityEngine::Color>(value));
}
 UnityEngine::Color UnityEngine::TextCore::Text::TextColorGradient::__get_k_DefaultColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get>();
}
 UnityEngine::TextCore::Text::TextColorGradient UnityEngine::TextCore::Text::TextColorGradient::New_ctor()  {
UnityEngine::TextCore::Text::TextColorGradient o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::TextCore::Text::TextColorGradient>())};
return o;
}
 void UnityEngine::TextCore::Text::TextColorGradient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::TextCore::Text::TextColorGradient UnityEngine::TextCore::Text::TextColorGradient::New_ctor(UnityEngine::Color color)  {
UnityEngine::TextCore::Text::TextColorGradient o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::TextCore::Text::TextColorGradient>(color))};
return o;
}
 void UnityEngine::TextCore::Text::TextColorGradient::_ctor(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 UnityEngine::TextCore::Text::TextColorGradient UnityEngine::TextCore::Text::TextColorGradient::New_ctor(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3)  {
UnityEngine::TextCore::Text::TextColorGradient o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::TextCore::Text::TextColorGradient>(color0, color1, color2, color3))};
return o;
}
 void UnityEngine::TextCore::Text::TextColorGradient::_ctor(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextColorGradient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color0, color1, color2, color3);
}
