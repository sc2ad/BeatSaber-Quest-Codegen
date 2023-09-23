#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstallerData_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::StandardLevelNoTransitionInstaller.get_standardLevelNoTransitionInstallerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::StandardLevelNoTransitionInstallerData (GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(&GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b6710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelNoTransitionInstaller>::get(),
                            "get_standardLevelNoTransitionInstallerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelNoTransitionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelNoTransitionInstaller::*)(Zenject::DiContainer)>(&GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x21b6718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::StandardLevelNoTransitionInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelNoTransitionInstaller>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(&GlobalNamespace::StandardLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b6868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelNoTransitionInstaller::__set__scenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO GlobalNamespace::StandardLevelNoTransitionInstaller::__get__scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelNoTransitionInstaller::__set__standardLevelNoTransitionInstallerData(GlobalNamespace::StandardLevelNoTransitionInstallerData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelNoTransitionInstallerData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardLevelNoTransitionInstallerData>(value));
}
constexpr GlobalNamespace::StandardLevelNoTransitionInstallerData GlobalNamespace::StandardLevelNoTransitionInstaller::__get__standardLevelNoTransitionInstallerData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelNoTransitionInstallerData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::StandardLevelNoTransitionInstallerData GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelNoTransitionInstaller>::get(),
                            "get_standardLevelNoTransitionInstallerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::StandardLevelNoTransitionInstallerData, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelNoTransitionInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
// Ctor Parameters []
 GlobalNamespace::StandardLevelNoTransitionInstaller::StandardLevelNoTransitionInstaller()  : Zenject::NoTransitionInstaller(THROW_UNLESS(::il2cpp_utils::New<StandardLevelNoTransitionInstaller>())) {}
 void GlobalNamespace::StandardLevelNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
