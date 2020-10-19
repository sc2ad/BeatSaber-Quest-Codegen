// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerResultsViewController
#include "GlobalNamespace/MultiplayerResultsViewController.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: LevelBar
#include "GlobalNamespace/LevelBar.hpp"
// Including type: ResultsTableView
#include "GlobalNamespace/ResultsTableView.hpp"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
// Including type: ILobbyStateDataModel
#include "GlobalNamespace/ILobbyStateDataModel.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerResultsViewController.add_backToLobbyPressedEvent
void GlobalNamespace::MultiplayerResultsViewController::add_backToLobbyPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_backToLobbyPressedEvent", value));
}
// Autogenerated method: MultiplayerResultsViewController.remove_backToLobbyPressedEvent
void GlobalNamespace::MultiplayerResultsViewController::remove_backToLobbyPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_backToLobbyPressedEvent", value));
}
// Autogenerated method: MultiplayerResultsViewController.Init
void GlobalNamespace::MultiplayerResultsViewController::Init(GlobalNamespace::LevelCompletionResults* localPlayerLevelCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayersLevelCompletionResults, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", localPlayerLevelCompletionResults, otherPlayersLevelCompletionResults, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic));
}
// Autogenerated method: MultiplayerResultsViewController.BackToLobbyPressed
void GlobalNamespace::MultiplayerResultsViewController::BackToLobbyPressed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackToLobbyPressed"));
}
// Autogenerated method: MultiplayerResultsViewController.DidActivate
void GlobalNamespace::MultiplayerResultsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, addedToHierarchy, screenSystemEnabling));
}
// Autogenerated method: MultiplayerResultsViewController..ctor
GlobalNamespace::MultiplayerResultsViewController* GlobalNamespace::MultiplayerResultsViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MultiplayerResultsViewController*>());
}