// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: EnvironmentEffectsFilterPreset
  struct EnvironmentEffectsFilterPreset;
  // Forward declaring type: EnvironmentIntensityReductionOptions
  class EnvironmentIntensityReductionOptions;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataTransformHelper
  class BeatmapDataTransformHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataTransformHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataTransformHelper*, "", "BeatmapDataTransformHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataTransformHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataTransformHelper : public ::Il2CppObject {
    public:
    // static public IReadonlyBeatmapData CreateTransformedBeatmapData(IReadonlyBeatmapData beatmapData, IPreviewBeatmapLevel beatmapLevel, GameplayModifiers gameplayModifiers, System.Boolean leftHanded, EnvironmentEffectsFilterPreset environmentEffectsFilterPreset, EnvironmentIntensityReductionOptions environmentIntensityReductionOptions, MainSettingsModelSO mainSettingsModel)
    // Offset: 0x154153C
    static ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool leftHanded, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset, ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions, ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel);
    // static private System.Void AddTestBurstSlider(System.Single time, System.Single duration, System.Int32 headLineIndex, NoteLineLayer headNoteLineLayer, NoteCutDirection headCutDirection, System.Int32 tailLineIndex, NoteLineLayer tailNoteLineLayer, NoteCutDirection tailCutDirection, System.Int32 sliceCount, System.Single squishAmount, BeatmapData beatmapData)
    // Offset: 0x154180C
    static void AddTestBurstSlider(float time, float duration, int headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, int tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, int sliceCount, float squishAmount, ::GlobalNamespace::BeatmapData* beatmapData);
    // static private System.Void AddTestSlider(System.Single time, System.Single duration, System.Int32 headLineIndex, NoteLineLayer headNoteLineLayer, NoteCutDirection headCutDirection, System.Single headControlPointLength, System.Int32 tailLineIndex, NoteLineLayer tailNoteLineLayer, NoteCutDirection tailCutDirection, System.Single tailControlPointLength, System.Boolean hasHeadNote, System.Boolean hasTailNote, BeatmapData beatmapData)
    // Offset: 0x154190C
    static void AddTestSlider(float time, float duration, int headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float headControlPointLength, int tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, float tailControlPointLength, bool hasHeadNote, bool hasTailNote, ::GlobalNamespace::BeatmapData* beatmapData);
    // static public System.Boolean IsObstaclesMergingNeeded(IPreviewBeatmapLevel beatmapLevel, System.Boolean screenDisplacementEffectsEnabled)
    // Offset: 0x1541800
    static bool IsObstaclesMergingNeeded(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, bool screenDisplacementEffectsEnabled);
  }; // BeatmapDataTransformHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData
// Il2CppName: CreateTransformedBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, bool, ::GlobalNamespace::EnvironmentEffectsFilterPreset, ::GlobalNamespace::EnvironmentIntensityReductionOptions*, ::GlobalNamespace::MainSettingsModelSO*)>(&GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* leftHanded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* environmentEffectsFilterPreset = &::il2cpp_utils::GetClassFromName("", "EnvironmentEffectsFilterPreset")->byval_arg;
    static auto* environmentIntensityReductionOptions = &::il2cpp_utils::GetClassFromName("", "EnvironmentIntensityReductionOptions")->byval_arg;
    static auto* mainSettingsModel = &::il2cpp_utils::GetClassFromName("", "MainSettingsModelSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataTransformHelper*), "CreateTransformedBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData, beatmapLevel, gameplayModifiers, leftHanded, environmentEffectsFilterPreset, environmentIntensityReductionOptions, mainSettingsModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataTransformHelper::AddTestBurstSlider
// Il2CppName: AddTestBurstSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, int, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, int, float, ::GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapDataTransformHelper::AddTestBurstSlider)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* headNoteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* headCutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* tailLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tailNoteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* tailCutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* sliceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* squishAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataTransformHelper*), "AddTestBurstSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, duration, headLineIndex, headNoteLineLayer, headCutDirection, tailLineIndex, tailNoteLineLayer, tailCutDirection, sliceCount, squishAmount, beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataTransformHelper::AddTestSlider
// Il2CppName: AddTestSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, int, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, float, int, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteCutDirection, float, bool, bool, ::GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapDataTransformHelper::AddTestSlider)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* headNoteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* headCutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* headControlPointLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tailLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tailNoteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* tailCutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* tailControlPointLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hasHeadNote = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasTailNote = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataTransformHelper*), "AddTestSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, duration, headLineIndex, headNoteLineLayer, headCutDirection, headControlPointLength, tailLineIndex, tailNoteLineLayer, tailCutDirection, tailControlPointLength, hasHeadNote, hasTailNote, beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataTransformHelper::IsObstaclesMergingNeeded
// Il2CppName: IsObstaclesMergingNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IPreviewBeatmapLevel*, bool)>(&GlobalNamespace::BeatmapDataTransformHelper::IsObstaclesMergingNeeded)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* screenDisplacementEffectsEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataTransformHelper*), "IsObstaclesMergingNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel, screenDisplacementEffectsEnabled});
  }
};
