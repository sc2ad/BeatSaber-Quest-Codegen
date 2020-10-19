// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FilteredBeatmapLevel/FilteredBeatmapLevelData
#include "GlobalNamespace/FilteredBeatmapLevel_FilteredBeatmapLevelData.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: FilteredBeatmapLevel/FilteredBeatmapLevelData.set_difficultyBeatmapSets
void GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::set_difficultyBeatmapSets(::Array<GlobalNamespace::IDifficultyBeatmapSet*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_difficultyBeatmapSets", value));
}
// Autogenerated method: FilteredBeatmapLevel/FilteredBeatmapLevelData..ctor
GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData* GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::New_ctor(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
  return THROW_UNLESS(il2cpp_utils::New<FilteredBeatmapLevel::FilteredBeatmapLevelData*>(beatmapLevelData, allowedBeatmapDifficultyMask, notAllowedCharacteristics));
}
// Autogenerated method: FilteredBeatmapLevel/FilteredBeatmapLevelData.get_audioClip
UnityEngine::AudioClip* GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::get_audioClip() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioClip*>(this, "get_audioClip"));
}
// Autogenerated method: FilteredBeatmapLevel/FilteredBeatmapLevelData.get_difficultyBeatmapSets
::Array<GlobalNamespace::IDifficultyBeatmapSet*>* GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::get_difficultyBeatmapSets() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<GlobalNamespace::IDifficultyBeatmapSet*>*>(this, "get_difficultyBeatmapSets"));
}