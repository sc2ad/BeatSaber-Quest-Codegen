// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: SliderData
#include "GlobalNamespace/SliderData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationBaseData
#include "BeatmapSaveDataVersion3/BeatmapSaveData_LightRotationBaseData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: EnvironmentColorType
  struct EnvironmentColorType;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: EnvironmentKeywords
  class EnvironmentKeywords;
  // Forward declaring type: EnvironmentLightGroups
  class EnvironmentLightGroups;
  // Forward declaring type: DefaultEnvironmentEvents
  class DefaultEnvironmentEvents;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: BeatmapDataBasicInfo
  class BeatmapDataBasicInfo;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Skipping declaration: ColorType because it is already included!
  // Forward declaring type: BeatmapEventTransitionType
  struct BeatmapEventTransitionType;
  // Forward declaring type: LightAxis
  struct LightAxis;
  // Forward declaring type: EaseType
  struct EaseType;
  // Skipping declaration: NoteLineLayer because it is already included!
  // Forward declaring type: LightRotationDirection
  struct LightRotationDirection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataLoader
  class BeatmapDataLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor
    class BpmTimeProcessor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::BasicEventConvertor
    class BasicEventConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<TBase, TIn, TOut>
    template<typename TBase, typename TIn, typename TOut>
    class BeatmapDataItemConvertor_3;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::BombNoteConvertor
    class BombNoteConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::BpmEventConvertor
    class BpmEventConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor
    class ColorBoostEventConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor
    class ColorNoteConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor
    class BeatmapEventDataBoxDistributionParamTypeConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor
    class EventBoxGroupConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor
    class IndexFilterConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::LightColorEventBoxConvertor
    class LightColorEventBoxConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::LightColoBaseDataConvertor
    class LightColoBaseDataConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor
    class LightRotationEventBoxConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::LightRotationBaseDataConvertor
    class LightRotationBaseDataConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::LightTranslationEventBoxConvertor
    class LightTranslationEventBoxConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::LightTranslationBaseDataConvertor
    class LightTranslationBaseDataConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::ObstacleConvertor
    class ObstacleConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::RotationEventConvertor
    class RotationEventConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::SliderConvertor
    class SliderConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor
    class BurstSliderConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::WaypointConvertor
    class WaypointConvertor;
    // Nested type: ::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter
    class SpecialEventsFilter;
    // static field const value: static private System.Int32 kDefaultNumberOfLines
    static constexpr const int kDefaultNumberOfLines = 4;
    // Get static field: static private System.Int32 kDefaultNumberOfLines
    static int _get_kDefaultNumberOfLines();
    // Set static field: static private System.Int32 kDefaultNumberOfLines
    static void _set_kDefaultNumberOfLines(int value);
    // public System.Void .ctor()
    // Offset: 0x13AAE3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader*, creationType>()));
    }
    // static private BeatmapData GetBeatmapDataFromBeatmapSaveData(BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData, BeatmapDifficulty beatmapDifficulty, System.Single startBpm, System.Boolean loadingForDesignatedEnvironment, EnvironmentKeywords environmentKeywords, EnvironmentLightGroups environmentLightGroups, DefaultEnvironmentEvents defaultEnvironmentEvents, PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x13A8E38
    static ::GlobalNamespace::BeatmapData* GetBeatmapDataFromBeatmapSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::EnvironmentLightGroups* environmentLightGroups, ::GlobalNamespace::DefaultEnvironmentEvents* defaultEnvironmentEvents, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // static public BeatmapDataBasicInfo GetBeatmapDataBasicInfoFromSaveData(BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData)
    // Offset: 0x13AAA5C
    static ::GlobalNamespace::BeatmapDataBasicInfo* GetBeatmapDataBasicInfoFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData);
    // static public BeatmapData GetBeatmapDataFromSaveData(BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData, BeatmapDifficulty beatmapDifficulty, System.Single startBpm, System.Boolean loadingForDesignatedEnvironment, EnvironmentInfoSO environmentInfo, PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x13AAC04
    static ::GlobalNamespace::BeatmapData* GetBeatmapDataFromSaveData(::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, float startBpm, bool loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // static private ColorType ConvertColorType(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType noteType)
    // Offset: 0x13AAD98
    static ::GlobalNamespace::ColorType ConvertColorType(::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType noteType);
    // static private EnvironmentColorType ConvertColorType(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EnvironmentColorType environmentColorType)
    // Offset: 0x13AADA8
    static ::GlobalNamespace::EnvironmentColorType ConvertColorType(::BeatmapSaveDataVersion3::BeatmapSaveData::EnvironmentColorType environmentColorType);
    // static private BeatmapEventTransitionType ConvertBeatmapEventTransitionType(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType transitionType)
    // Offset: 0x13AADBC
    static ::GlobalNamespace::BeatmapEventTransitionType ConvertBeatmapEventTransitionType(::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType transitionType);
    // static private LightAxis ConvertAxis(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis axis)
    // Offset: 0x13AADD0
    static ::GlobalNamespace::LightAxis ConvertAxis(::BeatmapSaveDataVersion3::BeatmapSaveData::Axis axis);
    // static private EaseType ConvertEaseType(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType easeType)
    // Offset: 0x13AADE4
    static ::GlobalNamespace::EaseType ConvertEaseType(::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType easeType);
    // static private NoteLineLayer ConvertNoteLineLayer(System.Int32 layer)
    // Offset: 0x13AAE04
    static ::GlobalNamespace::NoteLineLayer ConvertNoteLineLayer(int layer);
    // static private SliderData/Type ConvertSliderType(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.SliderType sliderType)
    // Offset: 0x13AAE18
    static ::GlobalNamespace::SliderData::Type ConvertSliderType(::BeatmapSaveDataVersion3::BeatmapSaveData::SliderType sliderType);
    // static private LightRotationDirection ConvertRotationOrientation(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationBaseData/BeatmapSaveDataVersion3.RotationDirection rotationDirection)
    // Offset: 0x13AAE28
    static ::GlobalNamespace::LightRotationDirection ConvertRotationOrientation(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData::RotationDirection rotationDirection);
  }; // BeatmapDataLoader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData
// Il2CppName: GetBeatmapDataFromBeatmapSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BeatmapDifficulty, float, bool, ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::EnvironmentLightGroups*, ::GlobalNamespace::DefaultEnvironmentEvents*, ::GlobalNamespace::PlayerSpecificSettings*)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData)> {
  static const MethodInfo* get() {
    static auto* beatmapSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* startBpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* loadingForDesignatedEnvironment = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* environmentKeywords = &::il2cpp_utils::GetClassFromName("", "EnvironmentKeywords")->byval_arg;
    static auto* environmentLightGroups = &::il2cpp_utils::GetClassFromName("", "EnvironmentLightGroups")->byval_arg;
    static auto* defaultEnvironmentEvents = &::il2cpp_utils::GetClassFromName("", "DefaultEnvironmentEvents")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromBeatmapSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapSaveData, beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentKeywords, environmentLightGroups, defaultEnvironmentEvents, playerSpecificSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveData
// Il2CppName: GetBeatmapDataBasicInfoFromSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveData)> {
  static const MethodInfo* get() {
    static auto* beatmapSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataBasicInfoFromSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromSaveData
// Il2CppName: GetBeatmapDataFromSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData*, ::GlobalNamespace::BeatmapDifficulty, float, bool, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::PlayerSpecificSettings*)>(&GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  static const MethodInfo* get() {
    static auto* beatmapSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* startBpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* loadingForDesignatedEnvironment = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* environmentInfo = &::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "GetBeatmapDataFromSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapSaveData, beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentInfo, playerSpecificSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertColorType
// Il2CppName: ConvertColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType)>(&GlobalNamespace::BeatmapDataLoader::ConvertColorType)> {
  static const MethodInfo* get() {
    static auto* noteType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/NoteColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertColorType
// Il2CppName: ConvertColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::EnvironmentColorType)>(&GlobalNamespace::BeatmapDataLoader::ConvertColorType)> {
  static const MethodInfo* get() {
    static auto* environmentColorType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/EnvironmentColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentColorType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertBeatmapEventTransitionType
// Il2CppName: ConvertBeatmapEventTransitionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventTransitionType (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType)>(&GlobalNamespace::BeatmapDataLoader::ConvertBeatmapEventTransitionType)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertBeatmapEventTransitionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertAxis
// Il2CppName: ConvertAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightAxis (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::Axis)>(&GlobalNamespace::BeatmapDataLoader::ConvertAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertEaseType
// Il2CppName: ConvertEaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EaseType (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType)>(&GlobalNamespace::BeatmapDataLoader::ConvertEaseType)> {
  static const MethodInfo* get() {
    static auto* easeType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertEaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{easeType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertNoteLineLayer
// Il2CppName: ConvertNoteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int)>(&GlobalNamespace::BeatmapDataLoader::ConvertNoteLineLayer)> {
  static const MethodInfo* get() {
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertNoteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertSliderType
// Il2CppName: ConvertSliderType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderData::Type (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::SliderType)>(&GlobalNamespace::BeatmapDataLoader::ConvertSliderType)> {
  static const MethodInfo* get() {
    static auto* sliderType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/SliderType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertSliderType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ConvertRotationOrientation
// Il2CppName: ConvertRotationOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationDirection (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData::RotationDirection)>(&GlobalNamespace::BeatmapDataLoader::ConvertRotationOrientation)> {
  static const MethodInfo* get() {
    static auto* rotationDirection = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationBaseData/RotationDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader*), "ConvertRotationOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotationDirection});
  }
};
