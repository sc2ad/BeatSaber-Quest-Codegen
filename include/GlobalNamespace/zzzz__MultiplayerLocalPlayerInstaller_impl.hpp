#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerLocalPlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x211acd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MultiplayerLocalPlayerInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalPlayerInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalPlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerLocalPlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211af10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerLocalPlayerInstaller::__set__levelSceneSetupData(::GlobalNamespace::MultiplayerLevelSceneSetupData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerLevelSceneSetupData>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData ::GlobalNamespace::MultiplayerLocalPlayerInstaller::__get__levelSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalPlayerInstaller::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IMultiplayerSessionManager>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager ::GlobalNamespace::MultiplayerLocalPlayerInstaller::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerLocalPlayerInstaller::__set__startState(::GlobalNamespace::MultiplayerPlayerStartState value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerPlayerStartState>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState ::GlobalNamespace::MultiplayerLocalPlayerInstaller::__get__startState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerLocalPlayerInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerLocalPlayerInstaller::MultiplayerLocalPlayerInstaller()  : ::Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLocalPlayerInstaller>())) {}
 void ::GlobalNamespace::MultiplayerLocalPlayerInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalPlayerInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
