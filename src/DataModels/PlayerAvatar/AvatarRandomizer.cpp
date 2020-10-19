// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DataModels.PlayerAvatar.AvatarRandomizer
#include "DataModels/PlayerAvatar/AvatarRandomizer.hpp"
// Including type: DataModels.PlayerAvatar.RandomizeAvatarColorMap
#include "DataModels/PlayerAvatar/RandomizeAvatarColorMap.hpp"
// Including type: AvatarData
#include "GlobalNamespace/AvatarData.hpp"
// Including type: AvatarPartsModel
#include "GlobalNamespace/AvatarPartsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly DataModels.PlayerAvatar.RandomizeAvatarColorMap[] _randomizeColorsParamsCollection
::Array<DataModels::PlayerAvatar::RandomizeAvatarColorMap*>* DataModels::PlayerAvatar::AvatarRandomizer::_get__randomizeColorsParamsCollection() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*>("DataModels.PlayerAvatar", "AvatarRandomizer", "_randomizeColorsParamsCollection"));
}
// Autogenerated static field setter
// Set static field: static private readonly DataModels.PlayerAvatar.RandomizeAvatarColorMap[] _randomizeColorsParamsCollection
void DataModels::PlayerAvatar::AvatarRandomizer::_set__randomizeColorsParamsCollection(::Array<DataModels::PlayerAvatar::RandomizeAvatarColorMap*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("DataModels.PlayerAvatar", "AvatarRandomizer", "_randomizeColorsParamsCollection", value));
}
// Autogenerated method: DataModels.PlayerAvatar.AvatarRandomizer..cctor
void DataModels::PlayerAvatar::AvatarRandomizer::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("DataModels.PlayerAvatar", "AvatarRandomizer", ".cctor"));
}
// Autogenerated method: DataModels.PlayerAvatar.AvatarRandomizer.RandomizeAll
void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeAll(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::AvatarPartsModel* avatarPartsModel) {
  THROW_UNLESS(il2cpp_utils::RunMethod("DataModels.PlayerAvatar", "AvatarRandomizer", "RandomizeAll", avatarData, avatarPartsModel));
}
// Autogenerated method: DataModels.PlayerAvatar.AvatarRandomizer.RandomizeModels
void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeModels(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::AvatarPartsModel* avatarPartsModel) {
  THROW_UNLESS(il2cpp_utils::RunMethod("DataModels.PlayerAvatar", "AvatarRandomizer", "RandomizeModels", avatarData, avatarPartsModel));
}
// Autogenerated method: DataModels.PlayerAvatar.AvatarRandomizer.RandomizeColors
void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeColors(GlobalNamespace::AvatarData* avatarData) {
  THROW_UNLESS(il2cpp_utils::RunMethod("DataModels.PlayerAvatar", "AvatarRandomizer", "RandomizeColors", avatarData));
}