#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__PanelTextSettings_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.get_defaultPanelTextSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PanelTextSettings (*)()>(&::UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2cd0084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            "get_defaultPanelTextSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.UpdateLocalizationFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UIElements::PanelTextSettings::UpdateLocalizationFontAsset)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x2cd056c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            "UpdateLocalizationFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.GetCachedFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::FontAsset (::UnityEngine::UIElements::PanelTextSettings::*)(::UnityEngine::Font)>(&::UnityEngine::UIElements::PanelTextSettings::GetCachedFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ccfb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            "GetCachedFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelTextSettings::*)()>(&::UnityEngine::UIElements::PanelTextSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd0a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::PanelTextSettings::__set_s_DefaultPanelTextSettings(::UnityEngine::UIElements::PanelTextSettings value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::PanelTextSettings, "s_DefaultPanelTextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>(std::forward<::UnityEngine::UIElements::PanelTextSettings>(value));
}
 ::UnityEngine::UIElements::PanelTextSettings ::UnityEngine::UIElements::PanelTextSettings::__get_s_DefaultPanelTextSettings()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PanelTextSettings, "s_DefaultPanelTextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>();
}
 void ::UnityEngine::UIElements::PanelTextSettings::__set_EditorGUIUtilityLoad(::System::Func_2<::StringW,::UnityEngine::Object> value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,::UnityEngine::Object>, "EditorGUIUtilityLoad", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>(std::forward<::System::Func_2<::StringW,::UnityEngine::Object>>(value));
}
 ::System::Func_2<::StringW,::UnityEngine::Object> ::UnityEngine::UIElements::PanelTextSettings::__get_EditorGUIUtilityLoad()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,::UnityEngine::Object>, "EditorGUIUtilityLoad", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>();
}
 void ::UnityEngine::UIElements::PanelTextSettings::__set_GetCurrentLanguage(::System::Func_1<::UnityEngine::SystemLanguage> value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::SystemLanguage>, "GetCurrentLanguage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>(std::forward<::System::Func_1<::UnityEngine::SystemLanguage>>(value));
}
 ::System::Func_1<::UnityEngine::SystemLanguage> ::UnityEngine::UIElements::PanelTextSettings::__get_GetCurrentLanguage()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::SystemLanguage>, "GetCurrentLanguage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>();
}
 void ::UnityEngine::UIElements::PanelTextSettings::__set_s_DefaultEditorPanelTextSettingPath(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_DefaultEditorPanelTextSettingPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::PanelTextSettings::__get_s_DefaultEditorPanelTextSettingPath()  {
return ::cordl_internals::getStaticField<::StringW, "s_DefaultEditorPanelTextSettingPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get>();
}
 ::UnityEngine::UIElements::PanelTextSettings ::UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            "get_defaultPanelTextSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelTextSettings, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::UIElements::PanelTextSettings::UpdateLocalizationFontAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            "UpdateLocalizationFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 ::UnityEngine::TextCore::Text::FontAsset ::UnityEngine::UIElements::PanelTextSettings::GetCachedFontAsset(::UnityEngine::Font font)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            "GetCachedFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::FontAsset, false>(const_cast<void*>(instance), ___internal_method, font);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::PanelTextSettings::PanelTextSettings()  : ::UnityEngine::TextCore::Text::TextSettings(THROW_UNLESS(::il2cpp_utils::New<PanelTextSettings>())) {}
 void ::UnityEngine::UIElements::PanelTextSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelTextSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
