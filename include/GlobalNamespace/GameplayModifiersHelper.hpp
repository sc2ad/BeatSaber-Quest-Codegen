// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersHelper
  class GameplayModifiersHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersHelper*, "", "GameplayModifiersHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayModifiersHelper : public ::Il2CppObject {
    public:
    // static public BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers[] ToDTO(GameplayModifiers gameplayModifiers)
    // Offset: 0x13E60D4
    static ::ArrayW<::BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers> ToDTO(::GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // static public GameplayModifiers FromDTO(BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers[] gameplayModifiersDTOs)
    // Offset: 0x13E63E0
    static ::GlobalNamespace::GameplayModifiers* FromDTO(::ArrayW<::BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers> gameplayModifiersDTOs);
  }; // GameplayModifiersHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersHelper::ToDTO
// Il2CppName: ToDTO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers> (*)(::GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::GameplayModifiersHelper::ToDTO)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersHelper*), "ToDTO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersHelper::FromDTO
// Il2CppName: FromDTO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (*)(::ArrayW<::BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>)>(&GlobalNamespace::GameplayModifiersHelper::FromDTO)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiersDTOs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("BeatSaberAPI.DataTransferObjects", "LevelScoreResult/GameplayModifiers"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersHelper*), "FromDTO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiersDTOs});
  }
};
