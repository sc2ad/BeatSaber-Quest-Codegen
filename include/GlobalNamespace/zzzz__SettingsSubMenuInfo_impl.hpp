#pragma once
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: GlobalNamespace::SettingsSubMenuInfo.get_viewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController (GlobalNamespace::SettingsSubMenuInfo::*)()>(&GlobalNamespace::SettingsSubMenuInfo::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsSubMenuInfo>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsSubMenuInfo.get_localizedMenuName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SettingsSubMenuInfo::*)()>(&GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21727e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsSubMenuInfo>::get(),
                            "get_localizedMenuName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SettingsSubMenuInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsSubMenuInfo::*)()>(&GlobalNamespace::SettingsSubMenuInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21727f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsSubMenuInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SettingsSubMenuInfo::__set__viewController(HMUI::ViewController value)  {
::cordl_internals::setInstanceField<HMUI::ViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ViewController>(value));
}
constexpr HMUI::ViewController GlobalNamespace::SettingsSubMenuInfo::__get__viewController() const {
return ::cordl_internals::getInstanceField<HMUI::ViewController, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SettingsSubMenuInfo::__set__menuName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::SettingsSubMenuInfo::__get__menuName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::ViewController GlobalNamespace::SettingsSubMenuInfo::get_viewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsSubMenuInfo>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::ViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsSubMenuInfo>::get(),
                            "get_localizedMenuName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SettingsSubMenuInfo GlobalNamespace::SettingsSubMenuInfo::New_ctor()  {
GlobalNamespace::SettingsSubMenuInfo o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SettingsSubMenuInfo>())};
return o;
}
 void GlobalNamespace::SettingsSubMenuInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SettingsSubMenuInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
