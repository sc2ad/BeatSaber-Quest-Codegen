// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObjectsMovementRecorder
#include "GlobalNamespace/ObjectsMovementRecorder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuDestination
  class MenuDestination;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LayerMask
  struct LayerMask;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TrailerToolConfigurationProcessor
  class TrailerToolConfigurationProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrailerToolConfigurationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailerToolConfigurationProcessor*, "", "TrailerToolConfigurationProcessor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TrailerToolConfigurationProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class TrailerToolConfigurationProcessor : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::TrailerToolConfigurationProcessor::PlaybackScreenshot
    class PlaybackScreenshot;
    // Nested type: ::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration
    class TrailerToolConfiguration;
    // Nested type: ::GlobalNamespace::TrailerToolConfigurationProcessor::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // static field const value: static private System.String kSoloMode
    static constexpr const char* kSoloMode = "Solo";
    // Get static field: static private System.String kSoloMode
    static ::StringW _get_kSoloMode();
    // Set static field: static private System.String kSoloMode
    static void _set_kSoloMode(::StringW value);
    // static field const value: static private System.String kRecordRecordingMode
    static constexpr const char* kRecordRecordingMode = "Record";
    // Get static field: static private System.String kRecordRecordingMode
    static ::StringW _get_kRecordRecordingMode();
    // Set static field: static private System.String kRecordRecordingMode
    static void _set_kRecordRecordingMode(::StringW value);
    // static field const value: static private System.String kPlaybackRecordingMode
    static constexpr const char* kPlaybackRecordingMode = "Playback";
    // Get static field: static private System.String kPlaybackRecordingMode
    static ::StringW _get_kPlaybackRecordingMode();
    // Set static field: static private System.String kPlaybackRecordingMode
    static void _set_kPlaybackRecordingMode(::StringW value);
    // static field const value: static private System.String kFirstPersonCameraView
    static constexpr const char* kFirstPersonCameraView = "FirstPerson";
    // Get static field: static private System.String kFirstPersonCameraView
    static ::StringW _get_kFirstPersonCameraView();
    // Set static field: static private System.String kFirstPersonCameraView
    static void _set_kFirstPersonCameraView(::StringW value);
    // static field const value: static private System.String kThirdPersonCameraView
    static constexpr const char* kThirdPersonCameraView = "ThirdPerson";
    // Get static field: static private System.String kThirdPersonCameraView
    static ::StringW _get_kThirdPersonCameraView();
    // Set static field: static private System.String kThirdPersonCameraView
    static void _set_kThirdPersonCameraView(::StringW value);
    // static field const value: static private System.String kNormalEnvironmentType
    static constexpr const char* kNormalEnvironmentType = "Normal";
    // Get static field: static private System.String kNormalEnvironmentType
    static ::StringW _get_kNormalEnvironmentType();
    // Set static field: static private System.String kNormalEnvironmentType
    static void _set_kNormalEnvironmentType(::StringW value);
    // static field const value: static private System.String kNormalEnvironmentTypeSuffix
    static constexpr const char* kNormalEnvironmentTypeSuffix = "EnvironmentType";
    // Get static field: static private System.String kNormalEnvironmentTypeSuffix
    static ::StringW _get_kNormalEnvironmentTypeSuffix();
    // Set static field: static private System.String kNormalEnvironmentTypeSuffix
    static void _set_kNormalEnvironmentTypeSuffix(::StringW value);
    // static field const value: static private System.String kNormalEnvironmentNameSuffix
    static constexpr const char* kNormalEnvironmentNameSuffix = "Environment";
    // Get static field: static private System.String kNormalEnvironmentNameSuffix
    static ::StringW _get_kNormalEnvironmentNameSuffix();
    // Set static field: static private System.String kNormalEnvironmentNameSuffix
    static void _set_kNormalEnvironmentNameSuffix(::StringW value);
    // static field const value: static private System.String kEverythingLayerMask
    static constexpr const char* kEverythingLayerMask = "Everything";
    // Get static field: static private System.String kEverythingLayerMask
    static ::StringW _get_kEverythingLayerMask();
    // Set static field: static private System.String kEverythingLayerMask
    static void _set_kEverythingLayerMask(::StringW value);
    // static field const value: static private System.String kNothingLayerMask
    static constexpr const char* kNothingLayerMask = "Nothing";
    // Get static field: static private System.String kNothingLayerMask
    static ::StringW _get_kNothingLayerMask();
    // Set static field: static private System.String kNothingLayerMask
    static void _set_kNothingLayerMask(::StringW value);
    // static field const value: static private System.String kDefaultMrcLayersMask
    static constexpr const char* kDefaultMrcLayersMask = "DefaultMrcLayers";
    // Get static field: static private System.String kDefaultMrcLayersMask
    static ::StringW _get_kDefaultMrcLayersMask();
    // Set static field: static private System.String kDefaultMrcLayersMask
    static void _set_kDefaultMrcLayersMask(::StringW value);
    // static public System.Void ApplyConfigurationFromCommandLineParameters(Zenject.DiContainer container)
    // Offset: 0x1340264
    static void ApplyConfigurationFromCommandLineParameters(::Zenject::DiContainer* container);
    // static private TrailerToolConfigurationProcessor/TrailerToolConfiguration LoadConfigurationFile(System.String filePath)
    // Offset: 0x1340D94
    static ::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration* LoadConfigurationFile(::StringW filePath);
    // static public TrailerToolConfigurationProcessor/TrailerToolConfiguration ReadConfiguration(System.String[] args)
    // Offset: 0x1340404
    static ::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration* ReadConfiguration(::ArrayW<::StringW> args);
    // static public UnityEngine.LayerMask GetDefaultMrcLayersMask()
    // Offset: 0x1340EE8
    static ::UnityEngine::LayerMask GetDefaultMrcLayersMask();
    // static public UnityEngine.LayerMask GetLayerMask(System.String layerName)
    // Offset: 0x1340F80
    static ::UnityEngine::LayerMask GetLayerMask(::StringW layerName);
    // static public ObjectsMovementRecorder/InitData CreateObjectsMovementRecorderInitDataFromConfiguration(TrailerToolConfigurationProcessor/TrailerToolConfiguration trailerToolConfiguration)
    // Offset: 0x134052C
    static ::GlobalNamespace::ObjectsMovementRecorder::InitData* CreateObjectsMovementRecorderInitDataFromConfiguration(::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration* trailerToolConfiguration);
    // static public MenuDestination CreateMenuDestinationFromConfiguration(TrailerToolConfigurationProcessor/TrailerToolConfiguration trailerToolConfiguration, System.Collections.Generic.IEnumerable`1<IBeatmapLevelPack> beatmapLevelPacks, BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection)
    // Offset: 0x1340994
    static ::GlobalNamespace::MenuDestination* CreateMenuDestinationFromConfiguration(::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration* trailerToolConfiguration, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks, ::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection);
    // static private IBeatmapLevelPack GetLevelPack(System.String levePackId, System.Collections.Generic.IEnumerable`1<IBeatmapLevelPack> beatmapLevelPacks)
    // Offset: 0x1341850
    static ::GlobalNamespace::IBeatmapLevelPack* GetLevelPack(::StringW levePackId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);
    // static private System.ValueTuple`2<IBeatmapLevelPack,IPreviewBeatmapLevel> GetLevelPackAndLevelPreviewForLevelId(System.String levelId, System.Collections.Generic.IEnumerable`1<IBeatmapLevelPack> beatmapLevelPacks)
    // Offset: 0x1341104
    static ::System::ValueTuple_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*> GetLevelPackAndLevelPreviewForLevelId(::StringW levelId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);
    // public System.Void .ctor()
    // Offset: 0x1341914
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailerToolConfigurationProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrailerToolConfigurationProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailerToolConfigurationProcessor*, creationType>()));
    }
  }; // TrailerToolConfigurationProcessor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::ApplyConfigurationFromCommandLineParameters
// Il2CppName: ApplyConfigurationFromCommandLineParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::DiContainer*)>(&GlobalNamespace::TrailerToolConfigurationProcessor::ApplyConfigurationFromCommandLineParameters)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "ApplyConfigurationFromCommandLineParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::LoadConfigurationFile
// Il2CppName: LoadConfigurationFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration* (*)(::StringW)>(&GlobalNamespace::TrailerToolConfigurationProcessor::LoadConfigurationFile)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "LoadConfigurationFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::ReadConfiguration
// Il2CppName: ReadConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration* (*)(::ArrayW<::StringW>)>(&GlobalNamespace::TrailerToolConfigurationProcessor::ReadConfiguration)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "ReadConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::GetDefaultMrcLayersMask
// Il2CppName: GetDefaultMrcLayersMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)()>(&GlobalNamespace::TrailerToolConfigurationProcessor::GetDefaultMrcLayersMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "GetDefaultMrcLayersMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::GetLayerMask
// Il2CppName: GetLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::StringW)>(&GlobalNamespace::TrailerToolConfigurationProcessor::GetLayerMask)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "GetLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::CreateObjectsMovementRecorderInitDataFromConfiguration
// Il2CppName: CreateObjectsMovementRecorderInitDataFromConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObjectsMovementRecorder::InitData* (*)(::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration*)>(&GlobalNamespace::TrailerToolConfigurationProcessor::CreateObjectsMovementRecorderInitDataFromConfiguration)> {
  static const MethodInfo* get() {
    static auto* trailerToolConfiguration = &::il2cpp_utils::GetClassFromName("", "TrailerToolConfigurationProcessor/TrailerToolConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "CreateObjectsMovementRecorderInitDataFromConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trailerToolConfiguration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::CreateMenuDestinationFromConfiguration
// Il2CppName: CreateMenuDestinationFromConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuDestination* (*)(::GlobalNamespace::TrailerToolConfigurationProcessor::TrailerToolConfiguration*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>*, ::GlobalNamespace::BeatmapCharacteristicCollectionSO*)>(&GlobalNamespace::TrailerToolConfigurationProcessor::CreateMenuDestinationFromConfiguration)> {
  static const MethodInfo* get() {
    static auto* trailerToolConfiguration = &::il2cpp_utils::GetClassFromName("", "TrailerToolConfigurationProcessor/TrailerToolConfiguration")->byval_arg;
    static auto* beatmapLevelPacks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")})->byval_arg;
    static auto* beatmapCharacteristicCollection = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicCollectionSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "CreateMenuDestinationFromConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trailerToolConfiguration, beatmapLevelPacks, beatmapCharacteristicCollection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::GetLevelPack
// Il2CppName: GetLevelPack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPack* (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>*)>(&GlobalNamespace::TrailerToolConfigurationProcessor::GetLevelPack)> {
  static const MethodInfo* get() {
    static auto* levePackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* beatmapLevelPacks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "GetLevelPack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levePackId, beatmapLevelPacks});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::GetLevelPackAndLevelPreviewForLevelId
// Il2CppName: GetLevelPackAndLevelPreviewForLevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*> (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IBeatmapLevelPack*>*)>(&GlobalNamespace::TrailerToolConfigurationProcessor::GetLevelPackAndLevelPreviewForLevelId)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* beatmapLevelPacks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrailerToolConfigurationProcessor*), "GetLevelPackAndLevelPreviewForLevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, beatmapLevelPacks});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrailerToolConfigurationProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
