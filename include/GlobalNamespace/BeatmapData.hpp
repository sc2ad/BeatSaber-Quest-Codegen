// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLineData
  class BeatmapLineData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapObjectsInTimeRowProcessor
  class BeatmapObjectsInTimeRowProcessor;
  // Forward declaring type: BeatmapEventDataProcessor
  class BeatmapEventDataProcessor;
  // Forward declaring type: IReadonlyBeatmapLineData
  class IReadonlyBeatmapLineData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapData : public ::Il2CppObject/*, public GlobalNamespace::IReadonlyBeatmapData*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__32
    class $get_beatmapObjectsData$d__32;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int32 <cuttableNotesCount>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int cuttableNotesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <obstaclesCount>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int obstaclesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <bombsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int bombsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <spawnRotationEventsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int spawnRotationEventsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly BeatmapLineData[] _beatmapLinesData
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<GlobalNamespace::BeatmapLineData*> beatmapLinesData;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BeatmapLineData*>) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEventsData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEventsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<BeatmapEventType>> _availableSpecialEventsPerKeywordDictionary
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>* availableSpecialEventsPerKeywordDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>*) == 0x8);
    // private readonly BeatmapObjectsInTimeRowProcessor _beatmapObjectsInTimeRowProcessor
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectsInTimeRowProcessor* beatmapObjectsInTimeRowProcessor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectsInTimeRowProcessor*) == 0x8);
    // private readonly BeatmapEventDataProcessor _beatmapEventDataProcessor
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapEventDataProcessor* beatmapEventDataProcessor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventDataProcessor*) == 0x8);
    // private System.Single _prevAddedBeatmapObjectDataTime
    // Size: 0x4
    // Offset: 0x48
    float prevAddedBeatmapObjectDataTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevAddedBeatmapEventDataTime
    // Size: 0x4
    // Offset: 0x4C
    float prevAddedBeatmapEventDataTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IReadonlyBeatmapData
    operator GlobalNamespace::IReadonlyBeatmapData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReadonlyBeatmapData*>(this);
    }
    // Get instance field reference: private System.Int32 <cuttableNotesCount>k__BackingField
    int& dyn_$cuttableNotesCount$k__BackingField();
    // Get instance field reference: private System.Int32 <obstaclesCount>k__BackingField
    int& dyn_$obstaclesCount$k__BackingField();
    // Get instance field reference: private System.Int32 <bombsCount>k__BackingField
    int& dyn_$bombsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <spawnRotationEventsCount>k__BackingField
    int& dyn_$spawnRotationEventsCount$k__BackingField();
    // Get instance field reference: private readonly BeatmapLineData[] _beatmapLinesData
    ::ArrayW<GlobalNamespace::BeatmapLineData*>& dyn__beatmapLinesData();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEventsData
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*& dyn__beatmapEventsData();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<BeatmapEventType>> _availableSpecialEventsPerKeywordDictionary
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>*& dyn__availableSpecialEventsPerKeywordDictionary();
    // Get instance field reference: private readonly BeatmapObjectsInTimeRowProcessor _beatmapObjectsInTimeRowProcessor
    GlobalNamespace::BeatmapObjectsInTimeRowProcessor*& dyn__beatmapObjectsInTimeRowProcessor();
    // Get instance field reference: private readonly BeatmapEventDataProcessor _beatmapEventDataProcessor
    GlobalNamespace::BeatmapEventDataProcessor*& dyn__beatmapEventDataProcessor();
    // Get instance field reference: private System.Single _prevAddedBeatmapObjectDataTime
    float& dyn__prevAddedBeatmapObjectDataTime();
    // Get instance field reference: private System.Single _prevAddedBeatmapEventDataTime
    float& dyn__prevAddedBeatmapEventDataTime();
    // public System.Collections.Generic.IReadOnlyList`1<IReadonlyBeatmapLineData> get_beatmapLinesData()
    // Offset: 0x127421C
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IReadonlyBeatmapLineData*>* get_beatmapLinesData();
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapEventData> get_beatmapEventsData()
    // Offset: 0x1274224
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>* get_beatmapEventsData();
    // public System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Collections.Generic.HashSet`1<BeatmapEventType>> get_availableSpecialEventsPerKeywordDictionary()
    // Offset: 0x127422C
    System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>* get_availableSpecialEventsPerKeywordDictionary();
    // public System.Int32 get_numberOfLines()
    // Offset: 0x1274234
    int get_numberOfLines();
    // public System.Int32 get_cuttableNotesCount()
    // Offset: 0x1274250
    int get_cuttableNotesCount();
    // private System.Void set_cuttableNotesCount(System.Int32 value)
    // Offset: 0x1274258
    void set_cuttableNotesCount(int value);
    // public System.Int32 get_obstaclesCount()
    // Offset: 0x1274260
    int get_obstaclesCount();
    // private System.Void set_obstaclesCount(System.Int32 value)
    // Offset: 0x1274268
    void set_obstaclesCount(int value);
    // public System.Int32 get_bombsCount()
    // Offset: 0x1274270
    int get_bombsCount();
    // private System.Void set_bombsCount(System.Int32 value)
    // Offset: 0x1274278
    void set_bombsCount(int value);
    // public System.Int32 get_spawnRotationEventsCount()
    // Offset: 0x1274280
    int get_spawnRotationEventsCount();
    // private System.Void set_spawnRotationEventsCount(System.Int32 value)
    // Offset: 0x1274288
    void set_spawnRotationEventsCount(int value);
    // public System.Collections.Generic.IEnumerable`1<BeatmapObjectData> get_beatmapObjectsData()
    // Offset: 0x1274290
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();
    // public System.Void .ctor(System.Int32 numberOfLines)
    // Offset: 0x1274348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapData* New_ctor(int numberOfLines) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapData*, creationType>(numberOfLines)));
    }
    // public System.Void AddBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x12744E4
    void AddBeatmapObjectData(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Void AddBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x12746E8
    void AddBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void InsertBeatmapEventData(System.Int32 index, BeatmapEventData beatmapEventData)
    // Offset: 0x1274844
    void InsertBeatmapEventData(int index, GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void AddAvailableSpecialEventsPerKeyword(System.String keyword, System.Collections.Generic.HashSet`1<BeatmapEventType> availableSpecialEvents)
    // Offset: 0x1274AF0
    void AddAvailableSpecialEventsPerKeyword(::Il2CppString* keyword, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>* availableSpecialEvents);
    // public System.Void ProcessRemainingData()
    // Offset: 0x1274B60
    void ProcessRemainingData();
    // public BeatmapData GetCopy()
    // Offset: 0x1274B7C
    GlobalNamespace::BeatmapData* GetCopy();
    // public BeatmapData GetCopyWithoutEvents()
    // Offset: 0x1275734
    GlobalNamespace::BeatmapData* GetCopyWithoutEvents();
    // public BeatmapData GetCopyWithoutBeatmapObjects()
    // Offset: 0x12757B8
    GlobalNamespace::BeatmapData* GetCopyWithoutBeatmapObjects();
    // static private System.Void CopyBeatmapEvents(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x1275178
    static void CopyBeatmapEvents(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // static private System.Void CopyBeatmapObjects(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x1274C0C
    static void CopyBeatmapObjects(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // static public System.Void CopyBeatmapObjectsWaypointsOnly(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x127583C
    static void CopyBeatmapObjectsWaypointsOnly(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // static private System.Void CopyAvailableSpecialEventsPerKeywordDictionary(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x1275450
    static void CopyAvailableSpecialEventsPerKeywordDictionary(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
  }; // BeatmapData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapData), 76 + sizeof(float)> __GlobalNamespace_BeatmapDataSizeCheck;
  static_assert(sizeof(BeatmapData) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapData*, "", "BeatmapData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_beatmapLinesData
// Il2CppName: get_beatmapLinesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IReadonlyBeatmapLineData*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_beatmapLinesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_beatmapLinesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_beatmapEventsData
// Il2CppName: get_beatmapEventsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_beatmapEventsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_beatmapEventsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_availableSpecialEventsPerKeywordDictionary
// Il2CppName: get_availableSpecialEventsPerKeywordDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_availableSpecialEventsPerKeywordDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_availableSpecialEventsPerKeywordDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_numberOfLines
// Il2CppName: get_numberOfLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_numberOfLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_numberOfLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_cuttableNotesCount
// Il2CppName: get_cuttableNotesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_cuttableNotesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_cuttableNotesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_cuttableNotesCount
// Il2CppName: set_cuttableNotesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_cuttableNotesCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_cuttableNotesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_obstaclesCount
// Il2CppName: get_obstaclesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_obstaclesCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_obstaclesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_obstaclesCount
// Il2CppName: set_obstaclesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_obstaclesCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_obstaclesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_bombsCount
// Il2CppName: get_bombsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_bombsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_bombsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_bombsCount
// Il2CppName: set_bombsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_bombsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_bombsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_spawnRotationEventsCount
// Il2CppName: get_spawnRotationEventsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_spawnRotationEventsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_spawnRotationEventsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_spawnRotationEventsCount
// Il2CppName: set_spawnRotationEventsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_spawnRotationEventsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_spawnRotationEventsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_beatmapObjectsData
// Il2CppName: get_beatmapObjectsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_beatmapObjectsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_beatmapObjectsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddBeatmapObjectData
// Il2CppName: AddBeatmapObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapObjectData*)>(&GlobalNamespace::BeatmapData::AddBeatmapObjectData)> {
  static const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddBeatmapObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddBeatmapEventData
// Il2CppName: AddBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapData::AddBeatmapEventData)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::InsertBeatmapEventData
// Il2CppName: InsertBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int, GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapData::InsertBeatmapEventData)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "InsertBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddAvailableSpecialEventsPerKeyword
// Il2CppName: AddAvailableSpecialEventsPerKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*)>(&GlobalNamespace::BeatmapData::AddAvailableSpecialEventsPerKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* availableSpecialEvents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddAvailableSpecialEventsPerKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword, availableSpecialEvents});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::ProcessRemainingData
// Il2CppName: ProcessRemainingData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::ProcessRemainingData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "ProcessRemainingData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetCopyWithoutEvents
// Il2CppName: GetCopyWithoutEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopyWithoutEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetCopyWithoutEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetCopyWithoutBeatmapObjects
// Il2CppName: GetCopyWithoutBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopyWithoutBeatmapObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetCopyWithoutBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyBeatmapEvents
// Il2CppName: CopyBeatmapEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyBeatmapEvents)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyBeatmapEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyBeatmapObjects
// Il2CppName: CopyBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyBeatmapObjects)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyBeatmapObjectsWaypointsOnly
// Il2CppName: CopyBeatmapObjectsWaypointsOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyBeatmapObjectsWaypointsOnly)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyBeatmapObjectsWaypointsOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyAvailableSpecialEventsPerKeywordDictionary
// Il2CppName: CopyAvailableSpecialEventsPerKeywordDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyAvailableSpecialEventsPerKeywordDictionary)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyAvailableSpecialEventsPerKeywordDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
