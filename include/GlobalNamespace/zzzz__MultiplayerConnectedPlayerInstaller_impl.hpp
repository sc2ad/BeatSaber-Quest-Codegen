#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc84;
  constexpr static std::size_t addrs = 0x20e01bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MultiplayerConnectedPlayerInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e0e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__connectedPlayerAudioTimeSyncControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayerAudioTimeSyncControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__connectedPlayerBeatmapObjectEventManagerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayerBeatmapObjectEventManagerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerGameNoteControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBurstSliderHeadGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderHeadGameNoteControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBurstSliderGameNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderGameNoteControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBurstSliderFillControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBurstSliderFillControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerBombNoteControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerBombNoteControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__multiplayerObstacleControllerPrefab(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__multiplayerObstacleControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectedPlayer>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__localPlayerStartState(::GlobalNamespace::MultiplayerPlayerStartState value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerPlayerStartState>(value));
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__localPlayerStartState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerPlayerStartState, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel>(value));
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::__get__playersSpecificSettingsAtGameStartModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::MultiplayerConnectedPlayerInstaller()  : ::Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<MultiplayerConnectedPlayerInstaller>())) {}
 void ::GlobalNamespace::MultiplayerConnectedPlayerInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
