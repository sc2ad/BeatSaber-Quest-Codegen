#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::VideoProjectionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VideoProjectionInstaller::*)()>(&GlobalNamespace::VideoProjectionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2268b64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::VideoProjectionInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VideoProjectionInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::VideoProjectionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VideoProjectionInstaller::*)()>(&GlobalNamespace::VideoProjectionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2268c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VideoProjectionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::VideoProjectionInstaller::__set__sceneSetupData(GlobalNamespace::EnvironmentSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentSceneSetupData>(value));
}
constexpr GlobalNamespace::EnvironmentSceneSetupData GlobalNamespace::VideoProjectionInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::VideoProjectionInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VideoProjectionInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::VideoProjectionInstaller::VideoProjectionInstaller()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<VideoProjectionInstaller>())) {}
 void GlobalNamespace::VideoProjectionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::VideoProjectionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
