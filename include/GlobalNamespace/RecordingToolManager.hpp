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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolSettings
  class RecordingToolSettings;
  // Forward declaring type: MenuDestination
  class MenuDestination;
  // Forward declaring type: ListLogger
  class ListLogger;
  // Forward declaring type: IBeatSaberLogger
  class IBeatSaberLogger;
  // Forward declaring type: IPosesSerializer
  class IPosesSerializer;
  // Forward declaring type: ProgramArguments
  class ProgramArguments;
  // Forward declaring type: RecordingToolResourceContainerSO
  class RecordingToolResourceContainerSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolManager
  class RecordingToolManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolManager*, "", "RecordingToolManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolManager : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Boolean _recordingToolEnabled
    // Size: 0x1
    // Offset: 0x10
    bool recordingToolEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recordingToolEnabled and: configJsonData
    char __padding0[0x7] = {};
    // private readonly System.String _configJsonData
    // Size: 0x8
    // Offset: 0x18
    ::StringW configJsonData;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly RecordingToolSettings _recordingToolSettings
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::RecordingToolSettings* recordingToolSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolSettings*) == 0x8);
    // private readonly ObjectsMovementRecorder/InitData _objectsMovementRecorderInitData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ObjectsMovementRecorder::InitData* objectsMovementRecorderInitData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ObjectsMovementRecorder::InitData*) == 0x8);
    // private readonly MenuDestination _menuDestination
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MenuDestination* menuDestination;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuDestination*) == 0x8);
    // private readonly ListLogger _listLogger
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ListLogger* listLogger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ListLogger*) == 0x8);
    // private readonly IBeatSaberLogger _logger
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IBeatSaberLogger* logger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatSaberLogger*) == 0x8);
    // private readonly IPosesSerializer _posesSerializer
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::IPosesSerializer* posesSerializer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPosesSerializer*) == 0x8);
    public:
    // static field const value: static public System.String kRecordingToolId
    static constexpr const char* kRecordingToolId = "RecordingTool";
    // Get static field: static public System.String kRecordingToolId
    static ::StringW _get_kRecordingToolId();
    // Set static field: static public System.String kRecordingToolId
    static void _set_kRecordingToolId(::StringW value);
    // Get instance field reference: private readonly System.Boolean _recordingToolEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__recordingToolEnabled();
    // Get instance field reference: private readonly System.String _configJsonData
    [[deprecated("Use field access instead!")]] ::StringW& dyn__configJsonData();
    // Get instance field reference: private readonly RecordingToolSettings _recordingToolSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolSettings*& dyn__recordingToolSettings();
    // Get instance field reference: private readonly ObjectsMovementRecorder/InitData _objectsMovementRecorderInitData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ObjectsMovementRecorder::InitData*& dyn__objectsMovementRecorderInitData();
    // Get instance field reference: private readonly MenuDestination _menuDestination
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuDestination*& dyn__menuDestination();
    // Get instance field reference: private readonly ListLogger _listLogger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ListLogger*& dyn__listLogger();
    // Get instance field reference: private readonly IBeatSaberLogger _logger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatSaberLogger*& dyn__logger();
    // Get instance field reference: private readonly IPosesSerializer _posesSerializer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPosesSerializer*& dyn__posesSerializer();
    // public System.Boolean get_recordingToolEnabled()
    // Offset: 0x1423DD0
    bool get_recordingToolEnabled();
    // public System.Boolean get_showRecordingToolScene()
    // Offset: 0x1423DD8
    bool get_showRecordingToolScene();
    // public System.String get_configJsonData()
    // Offset: 0x1423DE0
    ::StringW get_configJsonData();
    // public RecordingToolSettings get_recordingToolSettings()
    // Offset: 0x1423DE8
    ::GlobalNamespace::RecordingToolSettings* get_recordingToolSettings();
    // public ObjectsMovementRecorder/InitData get_objectsMovementRecorderInitData()
    // Offset: 0x1423DF0
    ::GlobalNamespace::ObjectsMovementRecorder::InitData* get_objectsMovementRecorderInitData();
    // public MenuDestination get_menuDestination()
    // Offset: 0x1423DF8
    ::GlobalNamespace::MenuDestination* get_menuDestination();
    // public ListLogger get_listLogger()
    // Offset: 0x1423E00
    ::GlobalNamespace::ListLogger* get_listLogger();
    // public IBeatSaberLogger get_logger()
    // Offset: 0x1423E08
    ::GlobalNamespace::IBeatSaberLogger* get_logger();
    // public IPosesSerializer get_posesSerializer()
    // Offset: 0x1423E10
    ::GlobalNamespace::IPosesSerializer* get_posesSerializer();
    // public System.Void .ctor(ProgramArguments programArguments, RecordingToolResourceContainerSO resourceContainer)
    // Offset: 0x1423B34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolManager* New_ctor(::GlobalNamespace::ProgramArguments* programArguments, ::GlobalNamespace::RecordingToolResourceContainerSO* resourceContainer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolManager*, creationType>(programArguments, resourceContainer)));
    }
  }; // RecordingToolManager
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolManager), 72 + sizeof(::GlobalNamespace::IPosesSerializer*)> __GlobalNamespace_RecordingToolManagerSizeCheck;
  static_assert(sizeof(RecordingToolManager) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_recordingToolEnabled
// Il2CppName: get_recordingToolEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_recordingToolEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_recordingToolEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_showRecordingToolScene
// Il2CppName: get_showRecordingToolScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_showRecordingToolScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_showRecordingToolScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_configJsonData
// Il2CppName: get_configJsonData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_configJsonData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_configJsonData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_recordingToolSettings
// Il2CppName: get_recordingToolSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RecordingToolSettings* (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_recordingToolSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_recordingToolSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_objectsMovementRecorderInitData
// Il2CppName: get_objectsMovementRecorderInitData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObjectsMovementRecorder::InitData* (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_objectsMovementRecorderInitData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_objectsMovementRecorderInitData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_menuDestination
// Il2CppName: get_menuDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuDestination* (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_menuDestination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_menuDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_listLogger
// Il2CppName: get_listLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ListLogger* (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_listLogger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_listLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_logger
// Il2CppName: get_logger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatSaberLogger* (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_logger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_logger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::get_posesSerializer
// Il2CppName: get_posesSerializer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPosesSerializer* (GlobalNamespace::RecordingToolManager::*)()>(&GlobalNamespace::RecordingToolManager::get_posesSerializer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolManager*), "get_posesSerializer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
