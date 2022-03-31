// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
  // Forward declaring type: ISortedList`1<T>
  template<typename T>
  class ISortedList_1;
  // Forward declaring type: BeatmapDataSortedListForTypes`1<TBase>
  template<typename TBase>
  class BeatmapDataSortedListForTypes_1;
  // Forward declaring type: BeatmapObjectsInTimeRowProcessor
  class BeatmapObjectsInTimeRowProcessor;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapData*, "", "BeatmapData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x65
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapData : public ::Il2CppObject/*, public ::GlobalNamespace::IReadonlyBeatmapData*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
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
    // Padding between fields: bombsCount and: beatmapEventDataWasInsertedEvent
    char __padding2[0x4] = {};
    // private System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> beatmapEventDataWasInsertedEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* beatmapEventDataWasInsertedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*) == 0x8);
    // private System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> beatmapEventDataWillBeRemovedEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* beatmapEventDataWillBeRemovedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*) == 0x8);
    // private System.Action`1<BeatmapEventData> beatmapEventDataWasRemovedEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::GlobalNamespace::BeatmapEventData*>* beatmapEventDataWasRemovedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*) == 0x8);
    // private readonly ISortedList`1<BeatmapDataItem> _allBeatmapData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>* allBeatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*) == 0x8);
    // private readonly BeatmapDataSortedListForTypes`1<BeatmapDataItem> _beatmapDataItemsPerType
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapDataSortedListForTypes_1<::GlobalNamespace::BeatmapDataItem*>* beatmapDataItemsPerType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataSortedListForTypes_1<::GlobalNamespace::BeatmapDataItem*>*) == 0x8);
    // private readonly System.Int32 _numberOfLines
    // Size: 0x4
    // Offset: 0x48
    int numberOfLines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfLines and: specialBasicBeatmapEventKeywords
    char __padding8[0x4] = {};
    // private readonly System.Collections.Generic.HashSet`1<System.String> _specialBasicBeatmapEventKeywords
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::HashSet_1<::StringW>* specialBasicBeatmapEventKeywords;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private readonly BeatmapObjectsInTimeRowProcessor _beatmapObjectsInTimeRowProcessor
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor* beatmapObjectsInTimeRowProcessor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*) == 0x8);
    // private System.Single _prevAddedBeatmapObjectDataTime
    // Size: 0x4
    // Offset: 0x60
    float prevAddedBeatmapObjectDataTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isCreatingFilteredCopy
    // Size: 0x1
    // Offset: 0x64
    bool isCreatingFilteredCopy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IReadonlyBeatmapData
    operator ::GlobalNamespace::IReadonlyBeatmapData() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IReadonlyBeatmapData*>(this);
    }
    // Get instance field reference: private System.Int32 <cuttableNotesCount>k__BackingField
    int& dyn_$cuttableNotesCount$k__BackingField();
    // Get instance field reference: private System.Int32 <obstaclesCount>k__BackingField
    int& dyn_$obstaclesCount$k__BackingField();
    // Get instance field reference: private System.Int32 <bombsCount>k__BackingField
    int& dyn_$bombsCount$k__BackingField();
    // Get instance field reference: private System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> beatmapEventDataWasInsertedEvent
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*& dyn_beatmapEventDataWasInsertedEvent();
    // Get instance field reference: private System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> beatmapEventDataWillBeRemovedEvent
    ::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*& dyn_beatmapEventDataWillBeRemovedEvent();
    // Get instance field reference: private System.Action`1<BeatmapEventData> beatmapEventDataWasRemovedEvent
    ::System::Action_1<::GlobalNamespace::BeatmapEventData*>*& dyn_beatmapEventDataWasRemovedEvent();
    // Get instance field reference: private readonly ISortedList`1<BeatmapDataItem> _allBeatmapData
    ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem*>*& dyn__allBeatmapData();
    // Get instance field reference: private readonly BeatmapDataSortedListForTypes`1<BeatmapDataItem> _beatmapDataItemsPerType
    ::GlobalNamespace::BeatmapDataSortedListForTypes_1<::GlobalNamespace::BeatmapDataItem*>*& dyn__beatmapDataItemsPerType();
    // Get instance field reference: private readonly System.Int32 _numberOfLines
    int& dyn__numberOfLines();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.String> _specialBasicBeatmapEventKeywords
    ::System::Collections::Generic::HashSet_1<::StringW>*& dyn__specialBasicBeatmapEventKeywords();
    // Get instance field reference: private readonly BeatmapObjectsInTimeRowProcessor _beatmapObjectsInTimeRowProcessor
    ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor*& dyn__beatmapObjectsInTimeRowProcessor();
    // Get instance field reference: private System.Single _prevAddedBeatmapObjectDataTime
    float& dyn__prevAddedBeatmapObjectDataTime();
    // Get instance field reference: private System.Boolean _isCreatingFilteredCopy
    bool& dyn__isCreatingFilteredCopy();
    // public System.Collections.Generic.LinkedList`1<BeatmapDataItem> get_allBeatmapDataItems()
    // Offset: 0x13673F0
    ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* get_allBeatmapDataItems();
    // public System.Int32 get_numberOfLines()
    // Offset: 0x13674A0
    int get_numberOfLines();
    // public System.Int32 get_cuttableNotesCount()
    // Offset: 0x13674A8
    int get_cuttableNotesCount();
    // private System.Void set_cuttableNotesCount(System.Int32 value)
    // Offset: 0x13674B0
    void set_cuttableNotesCount(int value);
    // public System.Int32 get_obstaclesCount()
    // Offset: 0x13674B8
    int get_obstaclesCount();
    // private System.Void set_obstaclesCount(System.Int32 value)
    // Offset: 0x13674C0
    void set_obstaclesCount(int value);
    // public System.Int32 get_bombsCount()
    // Offset: 0x13674C8
    int get_bombsCount();
    // private System.Void set_bombsCount(System.Int32 value)
    // Offset: 0x13674D0
    void set_bombsCount(int value);
    // public System.Int32 get_spawnRotationEventsCount()
    // Offset: 0x13674D8
    int get_spawnRotationEventsCount();
    // public System.Collections.Generic.IEnumerable`1<System.String> get_specialBasicBeatmapEventKeywords()
    // Offset: 0x1367528
    ::System::Collections::Generic::IEnumerable_1<::StringW>* get_specialBasicBeatmapEventKeywords();
    // public System.Void add_beatmapEventDataWasInsertedEvent(System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> value)
    // Offset: 0x1367530
    void add_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);
    // public System.Void remove_beatmapEventDataWasInsertedEvent(System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> value)
    // Offset: 0x13675D4
    void remove_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);
    // public System.Void add_beatmapEventDataWillBeRemovedEvent(System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> value)
    // Offset: 0x1367678
    void add_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);
    // public System.Void remove_beatmapEventDataWillBeRemovedEvent(System.Action`2<BeatmapEventData,System.Collections.Generic.LinkedListNode`1<BeatmapDataItem>> value)
    // Offset: 0x136771C
    void remove_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>* value);
    // public System.Void add_beatmapEventDataWasRemovedEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0x13677C0
    void add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void remove_beatmapEventDataWasRemovedEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0x1367864
    void remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void .ctor(System.Int32 numberOfLines)
    // Offset: 0x1367908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapData* New_ctor(int numberOfLines) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapData*, creationType>(numberOfLines)));
    }
    // public System.Collections.Generic.IEnumerable`1<T> GetBeatmapDataItems()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Collections::Generic::IEnumerable_1<T>* GetBeatmapDataItems() {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::BeatmapDataItem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapData::GetBeatmapDataItems");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetBeatmapDataItems", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___generic__method);
    }
    // public System.Int32 GetBeatmapDataItemsCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    int GetBeatmapDataItemsCount() {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::BeatmapDataItem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapData::GetBeatmapDataItemsCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetBeatmapDataItemsCount", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___generic__method);
    }
    // public System.Void AddBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x1367D6C
    void AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Void InsertBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x1367F48
    void InsertBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void RemoveBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x136805C
    void RemoveBeatmapEventData(::GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void AddSpecialBasicBeatmapEventKeyword(System.String specialBasicBeatmapEventKeyword)
    // Offset: 0x136820C
    void AddSpecialBasicBeatmapEventKeyword(::StringW specialBasicBeatmapEventKeyword);
    // public System.Void Clear()
    // Offset: 0x1368274
    void Clear();
    // public System.Void ProcessRemainingData()
    // Offset: 0x1368278
    void ProcessRemainingData();
    // public BeatmapData GetCopy()
    // Offset: 0x1368294
    ::GlobalNamespace::BeatmapData* GetCopy();
    // public BeatmapData GetFilteredCopy(System.Func`2<BeatmapDataItem,BeatmapDataItem> processDataItem)
    // Offset: 0x1368444
    ::GlobalNamespace::BeatmapData* GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>* processDataItem);
  }; // BeatmapData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapData), 100 + sizeof(bool)> __GlobalNamespace_BeatmapDataSizeCheck;
  static_assert(sizeof(BeatmapData) == 0x65);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_allBeatmapDataItems
// Il2CppName: get_allBeatmapDataItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_allBeatmapDataItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_allBeatmapDataItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
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
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords
// Il2CppName: get_specialBasicBeatmapEventKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_specialBasicBeatmapEventKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent
// Il2CppName: add_beatmapEventDataWasInsertedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(&GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "add_beatmapEventDataWasInsertedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent
// Il2CppName: remove_beatmapEventDataWasInsertedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(&GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "remove_beatmapEventDataWasInsertedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent
// Il2CppName: add_beatmapEventDataWillBeRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(&GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "add_beatmapEventDataWillBeRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent
// Il2CppName: remove_beatmapEventDataWillBeRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::System::Action_2<::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>*)>(&GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "remove_beatmapEventDataWillBeRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent
// Il2CppName: add_beatmapEventDataWasRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "add_beatmapEventDataWasRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent
// Il2CppName: remove_beatmapEventDataWasRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::System::Action_1<::GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "remove_beatmapEventDataWasRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetBeatmapDataItems
// Il2CppName: GetBeatmapDataItems
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetBeatmapDataItemsCount
// Il2CppName: GetBeatmapDataItemsCount
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddBeatmapObjectData
// Il2CppName: AddBeatmapObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapObjectData*)>(&GlobalNamespace::BeatmapData::AddBeatmapObjectData)> {
  static const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddBeatmapObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::InsertBeatmapEventData
// Il2CppName: InsertBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapData::InsertBeatmapEventData)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "InsertBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::RemoveBeatmapEventData
// Il2CppName: RemoveBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapData::RemoveBeatmapEventData)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "RemoveBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword
// Il2CppName: AddSpecialBasicBeatmapEventKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::StringW)>(&GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword)> {
  static const MethodInfo* get() {
    static auto* specialBasicBeatmapEventKeyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddSpecialBasicBeatmapEventKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{specialBasicBeatmapEventKeyword});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetFilteredCopy
// Il2CppName: GetFilteredCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)(::System::Func_2<::GlobalNamespace::BeatmapDataItem*, ::GlobalNamespace::BeatmapDataItem*>*)>(&GlobalNamespace::BeatmapData::GetFilteredCopy)> {
  static const MethodInfo* get() {
    static auto* processDataItem = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem"), ::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetFilteredCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{processDataItem});
  }
};
