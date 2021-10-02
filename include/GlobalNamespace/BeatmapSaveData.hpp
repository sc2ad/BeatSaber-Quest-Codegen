// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapSaveData::BeatmapObjectType
    struct BeatmapObjectType;
    // Nested type: GlobalNamespace::BeatmapSaveData::NoteType
    struct NoteType;
    // Nested type: GlobalNamespace::BeatmapSaveData::ColorType
    struct ColorType;
    // Nested type: GlobalNamespace::BeatmapSaveData::BeatmapEventType
    struct BeatmapEventType;
    // Nested type: GlobalNamespace::BeatmapSaveData::ITime
    class ITime;
    // Nested type: GlobalNamespace::BeatmapSaveData::EventData
    class EventData;
    // Nested type: GlobalNamespace::BeatmapSaveData::NoteData
    class NoteData;
    // Nested type: GlobalNamespace::BeatmapSaveData::WaypointData
    class WaypointData;
    // Nested type: GlobalNamespace::BeatmapSaveData::ObstacleData
    class ObstacleData;
    // Nested type: GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData
    class SpecialEventKeywordFiltersData;
    // Nested type: GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword
    class SpecialEventsForKeyword;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapSaveData/EventData> _events
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* events;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapSaveData/NoteData> _notes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> _waypoints
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* waypoints;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> _obstacles
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstacles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>*) == 0x8);
    // private BeatmapSaveData/SpecialEventKeywordFiltersData _specialEventsKeywordFilters
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* specialEventsKeywordFilters;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*) == 0x8);
    public:
    // static field const value: static private System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.5.0";
    // Get static field: static private System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static private System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // Get instance field reference: private System.String _version
    ::Il2CppString*& dyn__version();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveData/EventData> _events
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>*& dyn__events();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveData/NoteData> _notes
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>*& dyn__notes();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> _waypoints
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>*& dyn__waypoints();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> _obstacles
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>*& dyn__obstacles();
    // Get instance field reference: private BeatmapSaveData/SpecialEventKeywordFiltersData _specialEventsKeywordFilters
    GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*& dyn__specialEventsKeywordFilters();
    // public System.String get_version()
    // Offset: 0x12A7568
    ::Il2CppString* get_version();
    // public System.Collections.Generic.List`1<BeatmapSaveData/EventData> get_events()
    // Offset: 0x12A7570
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* get_events();
    // public System.Collections.Generic.List`1<BeatmapSaveData/NoteData> get_notes()
    // Offset: 0x12A7578
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* get_notes();
    // public System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> get_waypoints()
    // Offset: 0x12A7580
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* get_waypoints();
    // public System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> get_obstacles()
    // Offset: 0x12A7588
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* get_obstacles();
    // public BeatmapSaveData/SpecialEventKeywordFiltersData get_specialEventsKeywordFilters()
    // Offset: 0x12A7590
    GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* get_specialEventsKeywordFilters();
    // public System.Void .ctor(System.Collections.Generic.List`1<BeatmapSaveData/EventData> events, System.Collections.Generic.List`1<BeatmapSaveData/NoteData> notes, System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> waypoints, System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> obstacles, BeatmapSaveData/SpecialEventKeywordFiltersData specialEventsKeywordFilters)
    // Offset: 0x12A7598
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* events, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notes, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* waypoints, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstacles, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* specialEventsKeywordFilters) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData*, creationType>(events, notes, waypoints, obstacles, specialEventsKeywordFilters)));
    }
    // public System.Byte[] SerializeToBinary()
    // Offset: 0x12A7628
    ::ArrayW<uint8_t> SerializeToBinary();
    // static public BeatmapSaveData DeserializeFromFromBinary(System.Byte[] data)
    // Offset: 0x12A77A8
    static GlobalNamespace::BeatmapSaveData* DeserializeFromFromBinary(::ArrayW<uint8_t> data);
    // public System.String SerializeToJSONString()
    // Offset: 0x12A7938
    ::Il2CppString* SerializeToJSONString();
    // static public BeatmapSaveData DeserializeFromJSONString(System.String stringData)
    // Offset: 0x12A7940
    static GlobalNamespace::BeatmapSaveData* DeserializeFromJSONString(::Il2CppString* stringData);
    // static private System.Void ConvertBeatmapSaveDataPreV2_5_0(BeatmapSaveData beatmapSaveData)
    // Offset: 0x12A7A38
    static void ConvertBeatmapSaveDataPreV2_5_0(GlobalNamespace::BeatmapSaveData* beatmapSaveData);
  }; // BeatmapSaveData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData), 56 + sizeof(GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*)> __GlobalNamespace_BeatmapSaveDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData*, "", "BeatmapSaveData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::get_events
// Il2CppName: get_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::get_events)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "get_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::get_notes
// Il2CppName: get_notes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::get_notes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "get_notes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::get_waypoints
// Il2CppName: get_waypoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::get_waypoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "get_waypoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::get_obstacles
// Il2CppName: get_obstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::get_obstacles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "get_obstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::get_specialEventsKeywordFilters
// Il2CppName: get_specialEventsKeywordFilters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::get_specialEventsKeywordFilters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "get_specialEventsKeywordFilters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::SerializeToBinary
// Il2CppName: SerializeToBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::SerializeToBinary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "SerializeToBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::DeserializeFromFromBinary
// Il2CppName: DeserializeFromFromBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData* (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::BeatmapSaveData::DeserializeFromFromBinary)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "DeserializeFromFromBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::SerializeToJSONString
// Il2CppName: SerializeToJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapSaveData::*)()>(&GlobalNamespace::BeatmapSaveData::SerializeToJSONString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "SerializeToJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::DeserializeFromJSONString
// Il2CppName: DeserializeFromJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData* (*)(::Il2CppString*)>(&GlobalNamespace::BeatmapSaveData::DeserializeFromJSONString)> {
  static const MethodInfo* get() {
    static auto* stringData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "DeserializeFromJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0
// Il2CppName: ConvertBeatmapSaveDataPreV2_5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::BeatmapSaveData*)>(&GlobalNamespace::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0)> {
  static const MethodInfo* get() {
    static auto* beatmapSaveData = &::il2cpp_utils::GetClassFromName("", "BeatmapSaveData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData*), "ConvertBeatmapSaveDataPreV2_5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapSaveData});
  }
};
