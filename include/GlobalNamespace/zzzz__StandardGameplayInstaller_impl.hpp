#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__StandardGameplayInstaller_def.hpp"
#include "GlobalNamespace/zzzz__StandardGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::StandardGameplayInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardGameplayInstaller::*)()>(&GlobalNamespace::StandardGameplayInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x211b1e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::StandardGameplayInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardGameplayInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardGameplayInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardGameplayInstaller::*)()>(&GlobalNamespace::StandardGameplayInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211b558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardGameplayInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardGameplayInstaller::__set__standardSceneSetupData(GlobalNamespace::StandardGameplaySceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardGameplaySceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::StandardGameplaySceneSetupData>(value));
}
constexpr GlobalNamespace::StandardGameplaySceneSetupData GlobalNamespace::StandardGameplayInstaller::__get__standardSceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardGameplaySceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::StandardGameplayInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardGameplayInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::StandardGameplayInstaller::StandardGameplayInstaller()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<StandardGameplayInstaller>())) {}
 void GlobalNamespace::StandardGameplayInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardGameplayInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
