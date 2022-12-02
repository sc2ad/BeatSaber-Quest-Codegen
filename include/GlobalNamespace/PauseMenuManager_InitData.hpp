// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PauseMenuManager
#include "GlobalNamespace/PauseMenuManager.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PauseMenuManager::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseMenuManager::InitData*, "", "PauseMenuManager/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: PauseMenuManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class PauseMenuManager::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String backButtonText
    // Size: 0x8
    // Offset: 0x10
    ::StringW backButtonText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding2[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // public readonly System.Boolean showRestartButton
    // Size: 0x1
    // Offset: 0x30
    bool showRestartButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean showLevelBar
    // Size: 0x1
    // Offset: 0x31
    bool showLevelBar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.String backButtonText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_backButtonText();
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // Get instance field reference: public readonly BeatmapDifficulty beatmapDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_beatmapDifficulty();
    // Get instance field reference: public readonly BeatmapCharacteristicSO beatmapCharacteristic
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn_beatmapCharacteristic();
    // Get instance field reference: public readonly System.Boolean showRestartButton
    [[deprecated("Use field access instead!")]] bool& dyn_showRestartButton();
    // Get instance field reference: public readonly System.Boolean showLevelBar
    [[deprecated("Use field access instead!")]] bool& dyn_showLevelBar();
    // public System.Void .ctor(System.String backButtonText, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Boolean showRestartButton, System.Boolean showLevelBar)
    // Offset: 0x1572EBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseMenuManager::InitData* New_ctor(::StringW backButtonText, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool showRestartButton, bool showLevelBar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PauseMenuManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseMenuManager::InitData*, creationType>(backButtonText, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, showRestartButton, showLevelBar)));
    }
  }; // PauseMenuManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(PauseMenuManager::InitData), 49 + sizeof(bool)> __GlobalNamespace_PauseMenuManager_InitDataSizeCheck;
  static_assert(sizeof(PauseMenuManager::InitData) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
