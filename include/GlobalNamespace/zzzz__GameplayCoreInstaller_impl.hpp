#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BeatLineManager_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__MissedNoteEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameplayCoreInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayCoreInstaller::*)()>(&GlobalNamespace::GameplayCoreInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x1b28;
  constexpr static std::size_t addrs = 0x21180c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GameplayCoreInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayCoreInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayCoreInstaller::*)()>(&GlobalNamespace::GameplayCoreInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2119be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__beatLineManagerPrefab(GlobalNamespace::BeatLineManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatLineManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatLineManager>(value));
}
constexpr GlobalNamespace::BeatLineManager GlobalNamespace::GameplayCoreInstaller::__get__beatLineManagerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatLineManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__songTimeTweeningManager(Tweening::SongTimeTweeningManager value)  {
::cordl_internals::setInstanceField<Tweening::SongTimeTweeningManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::SongTimeTweeningManager>(value));
}
constexpr Tweening::SongTimeTweeningManager GlobalNamespace::GameplayCoreInstaller::__get__songTimeTweeningManager() const {
return ::cordl_internals::getInstanceField<Tweening::SongTimeTweeningManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__audioManager(GlobalNamespace::AudioManagerSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioManagerSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioManagerSO>(value));
}
constexpr GlobalNamespace::AudioManagerSO GlobalNamespace::GameplayCoreInstaller::__get__audioManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioManagerSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__playerHeightDetectorPrefab(GlobalNamespace::PlayerHeightDetector value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerHeightDetector, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerHeightDetector>(value));
}
constexpr GlobalNamespace::PlayerHeightDetector GlobalNamespace::GameplayCoreInstaller::__get__playerHeightDetectorPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerHeightDetector, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__noteCutScoreSpawnerPrefab(GlobalNamespace::NoteCutScoreSpawner value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutScoreSpawner, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutScoreSpawner>(value));
}
constexpr GlobalNamespace::NoteCutScoreSpawner GlobalNamespace::GameplayCoreInstaller::__get__noteCutScoreSpawnerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutScoreSpawner, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__badNoteCutEffectSpawnerPrefab(GlobalNamespace::BadNoteCutEffectSpawner value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BadNoteCutEffectSpawner, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BadNoteCutEffectSpawner>(value));
}
constexpr GlobalNamespace::BadNoteCutEffectSpawner GlobalNamespace::GameplayCoreInstaller::__get__badNoteCutEffectSpawnerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BadNoteCutEffectSpawner, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__missedNoteEffectSpawnerPrefab(GlobalNamespace::MissedNoteEffectSpawner value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissedNoteEffectSpawner, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissedNoteEffectSpawner>(value));
}
constexpr GlobalNamespace::MissedNoteEffectSpawner GlobalNamespace::GameplayCoreInstaller::__get__missedNoteEffectSpawnerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissedNoteEffectSpawner, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__effectPoolsManualInstaller(GlobalNamespace::EffectPoolsManualInstaller value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EffectPoolsManualInstaller, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EffectPoolsManualInstaller>(value));
}
constexpr GlobalNamespace::EffectPoolsManualInstaller GlobalNamespace::GameplayCoreInstaller::__get__effectPoolsManualInstaller() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EffectPoolsManualInstaller, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr GlobalNamespace::GameplayCoreSceneSetupData GlobalNamespace::GameplayCoreInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__perceivedLoudnessPerLevelModel(GlobalNamespace::PerceivedLoudnessPerLevelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PerceivedLoudnessPerLevelModel>(value));
}
constexpr GlobalNamespace::PerceivedLoudnessPerLevelModel GlobalNamespace::GameplayCoreInstaller::__get__perceivedLoudnessPerLevelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__set__relativeSfxVolumePerLevelModel(GlobalNamespace::RelativeSfxVolumePerLevelModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RelativeSfxVolumePerLevelModel, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RelativeSfxVolumePerLevelModel>(value));
}
constexpr GlobalNamespace::RelativeSfxVolumePerLevelModel GlobalNamespace::GameplayCoreInstaller::__get__relativeSfxVolumePerLevelModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RelativeSfxVolumePerLevelModel, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameplayCoreInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GameplayCoreInstaller::GameplayCoreInstaller()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<GameplayCoreInstaller>())) {}
 void GlobalNamespace::GameplayCoreInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayCoreInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
