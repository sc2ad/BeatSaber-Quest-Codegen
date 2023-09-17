#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__HealthWarningNoTransitionInstaller_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningNoTransitionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningNoTransitionInstaller::*)(::Zenject::DiContainer)>(&::GlobalNamespace::HealthWarningNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b65a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::HealthWarningNoTransitionInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningNoTransitionInstaller::*)()>(&::GlobalNamespace::HealthWarningNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b65e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::HealthWarningNoTransitionInstaller::__set__healthWarningSceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HealthWarningSceneSetupData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::HealthWarningSceneSetupData>(value));
}
constexpr ::GlobalNamespace::HealthWarningSceneSetupData ::GlobalNamespace::HealthWarningNoTransitionInstaller::__get__healthWarningSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HealthWarningSceneSetupData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HealthWarningNoTransitionInstaller::__set__scenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO ::GlobalNamespace::HealthWarningNoTransitionInstaller::__get__scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::HealthWarningNoTransitionInstaller::InstallBindings(::Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
// Ctor Parameters []
 ::GlobalNamespace::HealthWarningNoTransitionInstaller::HealthWarningNoTransitionInstaller()  : ::Zenject::NoTransitionInstaller(THROW_UNLESS(::il2cpp_utils::New<HealthWarningNoTransitionInstaller>())) {}
 void ::GlobalNamespace::HealthWarningNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
