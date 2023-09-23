#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__GameCoreSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureAfterDelay_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameCoreSceneSetup.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameCoreSceneSetup::*)()>(&GlobalNamespace::GameCoreSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x21b4d9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GameCoreSceneSetup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameCoreSceneSetup>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameCoreSceneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameCoreSceneSetup::*)()>(&GlobalNamespace::GameCoreSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b5208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameCoreSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameCoreSceneSetup::__set__screenCaptureAfterDelayPrefab(GlobalNamespace::ScreenCaptureAfterDelay value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScreenCaptureAfterDelay, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScreenCaptureAfterDelay>(value));
}
constexpr GlobalNamespace::ScreenCaptureAfterDelay GlobalNamespace::GameCoreSceneSetup::__get__screenCaptureAfterDelayPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScreenCaptureAfterDelay, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameCoreSceneSetup::__set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsModelSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr GlobalNamespace::MainSettingsModelSO GlobalNamespace::GameCoreSceneSetup::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsModelSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameCoreSceneSetup::__set__bloomFog(GlobalNamespace::BloomFogSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomFogSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomFogSO>(value));
}
constexpr GlobalNamespace::BloomFogSO GlobalNamespace::GameCoreSceneSetup::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomFogSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameCoreSceneSetup::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameCoreSceneSetup>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GameCoreSceneSetup::GameCoreSceneSetup()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<GameCoreSceneSetup>())) {}
 void GlobalNamespace::GameCoreSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameCoreSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
