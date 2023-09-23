#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalInactivePlayerInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x20e888c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerLocalInactivePlayerInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactivePlayerInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLocalInactivePlayerInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e8e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactivePlayerInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__audioManager(GlobalNamespace::AudioManagerSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioManagerSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioManagerSO>(value));
}
constexpr GlobalNamespace::AudioManagerSO GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__audioManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioManagerSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr GlobalNamespace::GameplayCoreSceneSetupData GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__beatmapLoudnessModel(GlobalNamespace::PerceivedLoudnessPerLevelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PerceivedLoudnessPerLevelModel>(value));
}
constexpr GlobalNamespace::PerceivedLoudnessPerLevelModel GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__beatmapLoudnessModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__set__relativeSfxVolumePerLevelModel(GlobalNamespace::RelativeSfxVolumePerLevelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RelativeSfxVolumePerLevelModel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RelativeSfxVolumePerLevelModel>(value));
}
constexpr GlobalNamespace::RelativeSfxVolumePerLevelModel GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::__get__relativeSfxVolumePerLevelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RelativeSfxVolumePerLevelModel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactivePlayerInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::MultiplayerLocalInactivePlayerInstaller()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLocalInactivePlayerInstaller>())) {}
 void GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLocalInactivePlayerInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
