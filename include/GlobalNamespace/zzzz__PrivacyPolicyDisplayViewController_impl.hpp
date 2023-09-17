#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PrivacyPolicyDisplayViewController_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyDisplayViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyDisplayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::PrivacyPolicyDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x217e5f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PrivacyPolicyDisplayViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyDisplayViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyDisplayViewController::*)()>(&::GlobalNamespace::PrivacyPolicyDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x217e634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PrivacyPolicyDisplayViewController::__set__textPageScrollView(::HMUI::TextPageScrollView value)  {
::cordl_internals::setInstanceField<::HMUI::TextPageScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::TextPageScrollView>(value));
}
constexpr ::HMUI::TextPageScrollView ::GlobalNamespace::PrivacyPolicyDisplayViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PrivacyPolicyDisplayViewController::__set__localizedTextAsset(::GlobalNamespace::LocalizedTextAsset value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalizedTextAsset, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LocalizedTextAsset>(value));
}
constexpr ::GlobalNamespace::LocalizedTextAsset ::GlobalNamespace::PrivacyPolicyDisplayViewController::__get__localizedTextAsset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalizedTextAsset, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::PrivacyPolicyDisplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Ctor Parameters []
 ::GlobalNamespace::PrivacyPolicyDisplayViewController::PrivacyPolicyDisplayViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<PrivacyPolicyDisplayViewController>())) {}
 void ::GlobalNamespace::PrivacyPolicyDisplayViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
