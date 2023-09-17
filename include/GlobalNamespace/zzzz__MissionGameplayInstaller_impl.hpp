#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MissionGameplayInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MissionGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionGameplayInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionGameplayInstaller::*)()>(&::GlobalNamespace::MissionGameplayInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x211a128;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MissionGameplayInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionGameplayInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionGameplayInstaller::*)()>(&::GlobalNamespace::MissionGameplayInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211a5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MissionGameplayInstaller::__set__sceneSetupData(::GlobalNamespace::MissionGameplaySceneSetupData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionGameplaySceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MissionGameplaySceneSetupData>(value));
}
constexpr ::GlobalNamespace::MissionGameplaySceneSetupData ::GlobalNamespace::MissionGameplayInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionGameplaySceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MissionGameplayInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MissionGameplayInstaller::MissionGameplayInstaller()  : ::Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<MissionGameplayInstaller>())) {}
 void ::GlobalNamespace::MissionGameplayInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplayInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
