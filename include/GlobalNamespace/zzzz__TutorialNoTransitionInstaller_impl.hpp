#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::TutorialNoTransitionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoTransitionInstaller::*)(Zenject::DiContainer)>(&GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b691c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialNoTransitionInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialNoTransitionInstaller>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialNoTransitionInstaller::*)()>(&GlobalNamespace::TutorialNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b6960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialNoTransitionInstaller::__set__scenesTransitionSetupData(GlobalNamespace::TutorialScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TutorialScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::TutorialScenesTransitionSetupDataSO GlobalNamespace::TutorialNoTransitionInstaller::__get__scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TutorialScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialNoTransitionInstaller::__set__playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettings GlobalNamespace::TutorialNoTransitionInstaller::__get__playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialNoTransitionInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
// Ctor Parameters []
 GlobalNamespace::TutorialNoTransitionInstaller::TutorialNoTransitionInstaller()  : Zenject::NoTransitionInstaller(THROW_UNLESS(::il2cpp_utils::New<TutorialNoTransitionInstaller>())) {}
 void GlobalNamespace::TutorialNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
