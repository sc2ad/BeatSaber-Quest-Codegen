// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapLineData
  class IReadonlyBeatmapLineData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IReadonlyBeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyBeatmapData*, "", "IReadonlyBeatmapData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IReadonlyBeatmapData
  // [TokenAttribute] Offset: FFFFFFFF
  class IReadonlyBeatmapData {
    public:
    // public System.Collections.Generic.IReadOnlyList`1<IReadonlyBeatmapLineData> get_beatmapLinesData()
    // Offset: 0xFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IReadonlyBeatmapLineData*>* get_beatmapLinesData();
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapEventData> get_beatmapEventsData()
    // Offset: 0xFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapEventData*>* get_beatmapEventsData();
    // public System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Collections.Generic.HashSet`1<BeatmapEventType>> get_availableSpecialEventsPerKeywordDictionary()
    // Offset: 0xFFFFFFFF
    ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventType>*>* get_availableSpecialEventsPerKeywordDictionary();
    // public System.Int32 get_numberOfLines()
    // Offset: 0xFFFFFFFF
    int get_numberOfLines();
    // public System.Int32 get_cuttableNotesCount()
    // Offset: 0xFFFFFFFF
    int get_cuttableNotesCount();
    // public System.Int32 get_obstaclesCount()
    // Offset: 0xFFFFFFFF
    int get_obstaclesCount();
    // public System.Int32 get_bombsCount()
    // Offset: 0xFFFFFFFF
    int get_bombsCount();
    // public System.Int32 get_spawnRotationEventsCount()
    // Offset: 0xFFFFFFFF
    int get_spawnRotationEventsCount();
    // public System.Collections.Generic.IEnumerable`1<BeatmapObjectData> get_beatmapObjectsData()
    // Offset: 0xFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();
    // public BeatmapData GetCopy()
    // Offset: 0xFFFFFFFF
    ::GlobalNamespace::BeatmapData* GetCopy();
    // public BeatmapData GetCopyWithoutEvents()
    // Offset: 0xFFFFFFFF
    ::GlobalNamespace::BeatmapData* GetCopyWithoutEvents();
    // public BeatmapData GetCopyWithoutBeatmapObjects()
    // Offset: 0xFFFFFFFF
    ::GlobalNamespace::BeatmapData* GetCopyWithoutBeatmapObjects();
  }; // IReadonlyBeatmapData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_beatmapLinesData
// Il2CppName: get_beatmapLinesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IReadonlyBeatmapLineData*>* (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_beatmapLinesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_beatmapLinesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_beatmapEventsData
// Il2CppName: get_beatmapEventsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapEventData*>* (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_beatmapEventsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_beatmapEventsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_availableSpecialEventsPerKeywordDictionary
// Il2CppName: get_availableSpecialEventsPerKeywordDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventType>*>* (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_availableSpecialEventsPerKeywordDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_availableSpecialEventsPerKeywordDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_numberOfLines
// Il2CppName: get_numberOfLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_numberOfLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_numberOfLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_cuttableNotesCount
// Il2CppName: get_cuttableNotesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_cuttableNotesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_cuttableNotesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_obstaclesCount
// Il2CppName: get_obstaclesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_obstaclesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_obstaclesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_bombsCount
// Il2CppName: get_bombsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_bombsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_bombsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_spawnRotationEventsCount
// Il2CppName: get_spawnRotationEventsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_spawnRotationEventsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_spawnRotationEventsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::get_beatmapObjectsData
// Il2CppName: get_beatmapObjectsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapObjectData*>* (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::get_beatmapObjectsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "get_beatmapObjectsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::GetCopyWithoutEvents
// Il2CppName: GetCopyWithoutEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::GetCopyWithoutEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "GetCopyWithoutEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapData::GetCopyWithoutBeatmapObjects
// Il2CppName: GetCopyWithoutBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (GlobalNamespace::IReadonlyBeatmapData::*)()>(&GlobalNamespace::IReadonlyBeatmapData::GetCopyWithoutBeatmapObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapData*), "GetCopyWithoutBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
