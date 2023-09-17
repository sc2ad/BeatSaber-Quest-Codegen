#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ColorSchemeTableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)(::StringW)>(&::GlobalNamespace::ColorSchemeTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x211e324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ColorSchemeTableCell::*)()>(&::GlobalNamespace::ColorSchemeTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x211e7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.set_showEditIcon
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)(bool)>(&::GlobalNamespace::ColorSchemeTableCell::set_showEditIcon)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x211e304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "set_showEditIcon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::GlobalNamespace::ColorSchemeTableCell::SetColors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x211e348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeTableCell::*)()>(&::GlobalNamespace::ColorSchemeTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211e7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ColorSchemeTableCell::__set__text(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::ColorSchemeTableCell::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ColorSchemeTableCell::__set__colorSchemeView(::GlobalNamespace::ColorSchemeView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSchemeView, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorSchemeView>(value));
}
constexpr ::GlobalNamespace::ColorSchemeView ::GlobalNamespace::ColorSchemeTableCell::__get__colorSchemeView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSchemeView, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ColorSchemeTableCell::__set__editIcon(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::ColorSchemeTableCell::__get__editIcon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ColorSchemeTableCell::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::GlobalNamespace::ColorSchemeTableCell::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ColorSchemeTableCell::set_showEditIcon(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "set_showEditIcon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::ColorSchemeTableCell::SetColors(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environment0Color, ::UnityEngine::Color environment1Color, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstacleColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberAColor, saberBColor, environment0Color, environment1Color, environmentColor0Boost, environmentColor1Boost, obstacleColor);
}
// Ctor Parameters []
 ::GlobalNamespace::ColorSchemeTableCell::ColorSchemeTableCell()  : ::HMUI::TableCell(THROW_UNLESS(::il2cpp_utils::New<ColorSchemeTableCell>())) {}
 void ::GlobalNamespace::ColorSchemeTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
