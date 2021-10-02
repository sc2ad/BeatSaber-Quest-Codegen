// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: SelectLevelCategoryViewController/LevelCategory
#include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LevelSelectionFlowCoordinator/State
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelSelectionFlowCoordinator::State : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly System.Nullable`1<SelectLevelCategoryViewController/LevelCategory> levelCategory
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    System::Nullable_1<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory> levelCategory;
    // public readonly IBeatmapLevelPack beatmapLevelPack
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly IDifficultyBeatmap difficultyBeatmap
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Nullable`1<SelectLevelCategoryViewController/LevelCategory> levelCategory
    System::Nullable_1<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory>& dyn_levelCategory();
    // Get instance field reference: public readonly IBeatmapLevelPack beatmapLevelPack
    GlobalNamespace::IBeatmapLevelPack*& dyn_beatmapLevelPack();
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // Get instance field reference: public readonly IDifficultyBeatmap difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap*& dyn_difficultyBeatmap();
    // private System.Void .ctor(System.Nullable`1<SelectLevelCategoryViewController/LevelCategory> levelCategory, IBeatmapLevelPack beatmapLevelPack, IPreviewBeatmapLevel previewBeatmapLevel, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x130F800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSelectionFlowCoordinator::State* New_ctor(System::Nullable_1<GlobalNamespace::SelectLevelCategoryViewController::LevelCategory> levelCategory, GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSelectionFlowCoordinator::State::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSelectionFlowCoordinator::State*, creationType>(levelCategory, beatmapLevelPack, previewBeatmapLevel, difficultyBeatmap)));
    }
    // public System.Void .ctor(IBeatmapLevelPack beatmapLevelPack)
    // Offset: 0x130F84C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSelectionFlowCoordinator::State* New_ctor(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSelectionFlowCoordinator::State::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSelectionFlowCoordinator::State*, creationType>(beatmapLevelPack)));
    }
    // public System.Void .ctor(IBeatmapLevelPack beatmapLevelPack, IPreviewBeatmapLevel previewBeatmapLevel)
    // Offset: 0x130F87C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSelectionFlowCoordinator::State* New_ctor(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSelectionFlowCoordinator::State::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSelectionFlowCoordinator::State*, creationType>(beatmapLevelPack, previewBeatmapLevel)));
    }
    // public System.Void .ctor(SelectLevelCategoryViewController/LevelCategory levelCategory, IBeatmapLevelPack beatmapLevelPack, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x130F8B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSelectionFlowCoordinator::State* New_ctor(GlobalNamespace::SelectLevelCategoryViewController::LevelCategory levelCategory, GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSelectionFlowCoordinator::State::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSelectionFlowCoordinator::State*, creationType>(levelCategory, beatmapLevelPack, difficultyBeatmap)));
    }
  }; // LevelSelectionFlowCoordinator/State
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSelectionFlowCoordinator::State*, "", "LevelSelectionFlowCoordinator/State");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelSelectionFlowCoordinator::State::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelSelectionFlowCoordinator::State::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelSelectionFlowCoordinator::State::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelSelectionFlowCoordinator::State::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
