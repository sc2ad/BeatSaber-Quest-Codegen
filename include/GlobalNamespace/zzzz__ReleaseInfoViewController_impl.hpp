#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__ReleaseInfoViewController_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::ReleaseInfoViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReleaseInfoViewController::*)(bool, bool, bool)>(&GlobalNamespace::ReleaseInfoViewController::DidActivate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x217f154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ReleaseInfoViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReleaseInfoViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ReleaseInfoViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReleaseInfoViewController::*)()>(&GlobalNamespace::ReleaseInfoViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217f1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReleaseInfoViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ReleaseInfoViewController::__set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsModelSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr GlobalNamespace::MainSettingsModelSO GlobalNamespace::ReleaseInfoViewController::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsModelSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReleaseInfoViewController::__set__textPageScrollView(HMUI::TextPageScrollView value)  {
::cordl_internals::setInstanceField<HMUI::TextPageScrollView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::TextPageScrollView>(value));
}
constexpr HMUI::TextPageScrollView GlobalNamespace::ReleaseInfoViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<HMUI::TextPageScrollView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReleaseInfoViewController::__set__releaseNotesTextAsset(UnityEngine::TextAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextAsset, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextAsset>(value));
}
constexpr UnityEngine::TextAsset GlobalNamespace::ReleaseInfoViewController::__get__releaseNotesTextAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextAsset, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReleaseInfoViewController::__set__firstTextAsset(UnityEngine::TextAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextAsset, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextAsset>(value));
}
constexpr UnityEngine::TextAsset GlobalNamespace::ReleaseInfoViewController::__get__firstTextAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextAsset, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ReleaseInfoViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReleaseInfoViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 GlobalNamespace::ReleaseInfoViewController GlobalNamespace::ReleaseInfoViewController::New_ctor()  {
GlobalNamespace::ReleaseInfoViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ReleaseInfoViewController>())};
return o;
}
 void GlobalNamespace::ReleaseInfoViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReleaseInfoViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
