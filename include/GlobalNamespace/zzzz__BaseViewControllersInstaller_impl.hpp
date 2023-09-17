#pragma once
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BaseViewControllersInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaFocusedSimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseViewControllersInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BaseViewControllersInstaller::*)()>(&::GlobalNamespace::BaseViewControllersInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2117190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BaseViewControllersInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseViewControllersInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BaseViewControllersInstaller::*)()>(&::GlobalNamespace::BaseViewControllersInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211723c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BaseViewControllersInstaller::__set__simpleDialogPromptViewControllerPrefab(::GlobalNamespace::SimpleDialogPromptViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SimpleDialogPromptViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SimpleDialogPromptViewController>(value));
}
constexpr ::GlobalNamespace::SimpleDialogPromptViewController ::GlobalNamespace::BaseViewControllersInstaller::__get__simpleDialogPromptViewControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SimpleDialogPromptViewController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BaseViewControllersInstaller::__set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>(value));
}
constexpr ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController ::GlobalNamespace::BaseViewControllersInstaller::__get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::BaseViewControllersInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::BaseViewControllersInstaller::BaseViewControllersInstaller()  : ::Zenject::ScriptableObjectInstaller(THROW_UNLESS(::il2cpp_utils::New<BaseViewControllersInstaller>())) {}
 void ::GlobalNamespace::BaseViewControllersInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
