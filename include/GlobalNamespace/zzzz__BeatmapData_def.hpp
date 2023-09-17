#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
template<typename T>
class ISortedList_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace GlobalNamespace {
class BeatmapObjectsInTimeRowProcessor;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
template<typename TBase>
class BeatmapDataSortedListForTypeAndIds_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>;
}
// Type: ::BeatmapDataBinaryHeapItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4271))
// CS Name: BeatmapData::BeatmapDataBinaryHeapItem
class CORDL_TYPE ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IComparable_1<::GlobalNamespace::____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>
constexpr operator  ::System::IComparable_1<::GlobalNamespace::____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem(____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem(____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem& operator=(____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem& operator=(____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> __declspec(property(get=__get_node, put=__set_node))  node;

constexpr void __set_node(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> __get_node() const;


// Methods

// Ctor Parameters [CppParam { name: "node", ty: "::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> node) ;

/// @brief Method .ctor addr 0x21ca5e0 size 0x28 virtual false final false
 void _ctor(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> node) ;

/// @brief Method CompareTo addr 0x21caaf4 size 0xb0 virtual true final true
 int32_t CompareTo(::GlobalNamespace::____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass45_0`1
// Type: ::BeatmapData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4273))
// CS Name: BeatmapData
class CORDL_TYPE BeatmapData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__DisplayClass45_0_1 = ::GlobalNamespace::____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>;

using BeatmapDataBinaryHeapItem = ::GlobalNamespace::____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem;

/// @brief Convert operator to ::GlobalNamespace::IReadonlyBeatmapData
constexpr operator  ::GlobalNamespace::IReadonlyBeatmapData() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IBeatmapDataBasicInfo
constexpr operator  ::GlobalNamespace::IBeatmapDataBasicInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~BeatmapData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapData", modifiers: " const&", def_value: None }]
constexpr BeatmapData(BeatmapData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapData", modifiers: "&&", def_value: None }]
constexpr BeatmapData(BeatmapData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapData& operator=(BeatmapData&& o) noexcept = default;
  constexpr BeatmapData& operator=(BeatmapData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__updateAllBeatmapDataOnInsert_k__BackingField, put=__set__updateAllBeatmapDataOnInsert_k__BackingField))  _updateAllBeatmapDataOnInsert_k__BackingField;

constexpr void __set__updateAllBeatmapDataOnInsert_k__BackingField(bool value) ;

constexpr bool __get__updateAllBeatmapDataOnInsert_k__BackingField() const;

 int32_t __declspec(property(get=__get__cuttableNotesCount_k__BackingField, put=__set__cuttableNotesCount_k__BackingField))  _cuttableNotesCount_k__BackingField;

constexpr void __set__cuttableNotesCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__cuttableNotesCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__obstaclesCount_k__BackingField, put=__set__obstaclesCount_k__BackingField))  _obstaclesCount_k__BackingField;

constexpr void __set__obstaclesCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__obstaclesCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__bombsCount_k__BackingField, put=__set__bombsCount_k__BackingField))  _bombsCount_k__BackingField;

constexpr void __set__bombsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__bombsCount_k__BackingField() const;

 ::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> __declspec(property(get=__get_beatmapEventDataWasInsertedEvent, put=__set_beatmapEventDataWasInsertedEvent))  beatmapEventDataWasInsertedEvent;

constexpr void __set_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> __get_beatmapEventDataWasInsertedEvent() const;

 ::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> __declspec(property(get=__get_beatmapEventDataWillBeRemovedEvent, put=__set_beatmapEventDataWillBeRemovedEvent))  beatmapEventDataWillBeRemovedEvent;

constexpr void __set_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> __get_beatmapEventDataWillBeRemovedEvent() const;

 ::System::Action_1<::GlobalNamespace::BeatmapEventData> __declspec(property(get=__get_beatmapEventDataWasRemovedEvent, put=__set_beatmapEventDataWasRemovedEvent))  beatmapEventDataWasRemovedEvent;

constexpr void __set_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData> value) ;

constexpr ::System::Action_1<::GlobalNamespace::BeatmapEventData> __get_beatmapEventDataWasRemovedEvent() const;

 ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem> __declspec(property(get=__get__allBeatmapData, put=__set__allBeatmapData))  _allBeatmapData;

constexpr void __set__allBeatmapData(::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem> value) ;

constexpr ::GlobalNamespace::ISortedList_1<::GlobalNamespace::BeatmapDataItem> __get__allBeatmapData() const;

 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> __declspec(property(get=__get__allBeatmapDataItemToNodeMap, put=__set__allBeatmapDataItemToNodeMap))  _allBeatmapDataItemToNodeMap;

constexpr void __set__allBeatmapDataItemToNodeMap(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapDataItem,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> __get__allBeatmapDataItemToNodeMap() const;

 ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem> __declspec(property(get=__get__beatmapDataItemsPerTypeAndId, put=__set__beatmapDataItemsPerTypeAndId))  _beatmapDataItemsPerTypeAndId;

constexpr void __set__beatmapDataItemsPerTypeAndId(::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem> value) ;

constexpr ::GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<::GlobalNamespace::BeatmapDataItem> __get__beatmapDataItemsPerTypeAndId() const;

 int32_t __declspec(property(get=__get__numberOfLines, put=__set__numberOfLines))  _numberOfLines;

constexpr void __set__numberOfLines(int32_t value) ;

constexpr int32_t __get__numberOfLines() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__specialBasicBeatmapEventKeywords, put=__set__specialBasicBeatmapEventKeywords))  _specialBasicBeatmapEventKeywords;

constexpr void __set__specialBasicBeatmapEventKeywords(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__specialBasicBeatmapEventKeywords() const;

 ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor __declspec(property(get=__get__beatmapObjectsInTimeRowProcessor, put=__set__beatmapObjectsInTimeRowProcessor))  _beatmapObjectsInTimeRowProcessor;

constexpr void __set__beatmapObjectsInTimeRowProcessor(::GlobalNamespace::BeatmapObjectsInTimeRowProcessor value) ;

constexpr ::GlobalNamespace::BeatmapObjectsInTimeRowProcessor __get__beatmapObjectsInTimeRowProcessor() const;

 float_t __declspec(property(get=__get__prevAddedBeatmapObjectDataTime, put=__set__prevAddedBeatmapObjectDataTime))  _prevAddedBeatmapObjectDataTime;

constexpr void __set__prevAddedBeatmapObjectDataTime(float_t value) ;

constexpr float_t __get__prevAddedBeatmapObjectDataTime() const;

 bool __declspec(property(get=__get__isCreatingFilteredCopy, put=__set__isCreatingFilteredCopy))  _isCreatingFilteredCopy;

constexpr void __set__isCreatingFilteredCopy(bool value) ;

constexpr bool __get__isCreatingFilteredCopy() const;


// Properties

 bool __declspec(property(get=get_updateAllBeatmapDataOnInsert, put=set_updateAllBeatmapDataOnInsert))  updateAllBeatmapDataOnInsert;

 ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem> __declspec(property(get=get_allBeatmapDataItems))  allBeatmapDataItems;

 int32_t __declspec(property(get=get_numberOfLines))  numberOfLines;

 int32_t __declspec(property(get=get_cuttableNotesCount, put=set_cuttableNotesCount))  cuttableNotesCount;

 int32_t __declspec(property(get=get_obstaclesCount, put=set_obstaclesCount))  obstaclesCount;

 int32_t __declspec(property(get=get_bombsCount, put=set_bombsCount))  bombsCount;

 int32_t __declspec(property(get=get_spawnRotationEventsCount))  spawnRotationEventsCount;

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_specialBasicBeatmapEventKeywords))  specialBasicBeatmapEventKeywords;


// Methods

/// @brief Method get_updateAllBeatmapDataOnInsert addr 0x21c9970 size 0x8 virtual false final false
 bool get_updateAllBeatmapDataOnInsert() ;

/// @brief Method set_updateAllBeatmapDataOnInsert addr 0x21c9978 size 0xc virtual false final false
 void set_updateAllBeatmapDataOnInsert(bool value) ;

/// @brief Method get_allBeatmapDataItems addr 0x21c9984 size 0xa4 virtual true final true
 ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::BeatmapDataItem> get_allBeatmapDataItems() ;

/// @brief Method get_numberOfLines addr 0x21c9a28 size 0x8 virtual true final true
 int32_t get_numberOfLines() ;

/// @brief Method get_cuttableNotesCount addr 0x21c9a30 size 0x8 virtual true final true
 int32_t get_cuttableNotesCount() ;

/// @brief Method set_cuttableNotesCount addr 0x21c9a38 size 0x8 virtual false final false
 void set_cuttableNotesCount(int32_t value) ;

/// @brief Method get_obstaclesCount addr 0x21c9a40 size 0x8 virtual true final true
 int32_t get_obstaclesCount() ;

/// @brief Method set_obstaclesCount addr 0x21c9a48 size 0x8 virtual false final false
 void set_obstaclesCount(int32_t value) ;

/// @brief Method get_bombsCount addr 0x21c9a50 size 0x8 virtual true final true
 int32_t get_bombsCount() ;

/// @brief Method set_bombsCount addr 0x21c9a58 size 0x8 virtual false final false
 void set_bombsCount(int32_t value) ;

/// @brief Method get_spawnRotationEventsCount addr 0x21c9a60 size 0x4c virtual true final true
 int32_t get_spawnRotationEventsCount() ;

/// @brief Method get_specialBasicBeatmapEventKeywords addr 0x21c9aac size 0x8 virtual true final true
 ::System::Collections::Generic::IEnumerable_1<::StringW> get_specialBasicBeatmapEventKeywords() ;

/// @brief Method add_beatmapEventDataWasInsertedEvent addr 0x21c9ab4 size 0xb0 virtual true final true
 void add_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method remove_beatmapEventDataWasInsertedEvent addr 0x21c9b64 size 0xb0 virtual true final true
 void remove_beatmapEventDataWasInsertedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method add_beatmapEventDataWillBeRemovedEvent addr 0x21c9c14 size 0xb0 virtual true final true
 void add_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method remove_beatmapEventDataWillBeRemovedEvent addr 0x21c9cc4 size 0xb0 virtual true final true
 void remove_beatmapEventDataWillBeRemovedEvent(::System::Action_2<::GlobalNamespace::BeatmapEventData,::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method add_beatmapEventDataWasRemovedEvent addr 0x21c9d74 size 0xb0 virtual true final true
 void add_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData> value) ;

/// @brief Method remove_beatmapEventDataWasRemovedEvent addr 0x21c9e24 size 0xb0 virtual true final true
 void remove_beatmapEventDataWasRemovedEvent(::System::Action_1<::GlobalNamespace::BeatmapEventData> value) ;

// Ctor Parameters [CppParam { name: "numberOfLines", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapData(int32_t numberOfLines) ;

/// @brief Method .ctor addr 0x21b938c size 0x194 virtual false final false
 void _ctor(int32_t numberOfLines) ;

/// @brief Method GetBeatmapDataItems addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> GetBeatmapDataItems(int32_t subtypeGroupIdentifier) ;

/// @brief Method GetBeatmapDataItemsCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 int32_t GetBeatmapDataItemsCount(int32_t subtypeGroupIdentifier) ;

/// @brief Method GetBeatmapDataItemsMerged addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::System::Collections::Generic::IEnumerable_1<T> GetBeatmapDataItemsMerged(::ArrayW<int32_t> subtypeGroupIdentifiers) ;

/// @brief Method GetBeatmapDataItemsMergedCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 int32_t GetBeatmapDataItemsMergedCount(::ArrayW<int32_t> subtypeGroupIdentifiers) ;

/// @brief Method AddBeatmapObjectData addr 0x21b95bc size 0x19c virtual false final false
 void AddBeatmapObjectData(::GlobalNamespace::BeatmapObjectData beatmapObjectData) ;

/// @brief Method AddBeatmapObjectDataInOrder addr 0x21badf4 size 0x2c virtual false final false
 void AddBeatmapObjectDataInOrder(::GlobalNamespace::BeatmapObjectData beatmapObjectData) ;

/// @brief Method InsertBeatmapEventData addr 0x21b9520 size 0x9c virtual false final false
 void InsertBeatmapEventData(::GlobalNamespace::BeatmapEventData beatmapEventData) ;

/// @brief Method InsertBeatmapEventDataInOrder addr 0x21bad9c size 0x58 virtual false final false
 void InsertBeatmapEventDataInOrder(::GlobalNamespace::BeatmapEventData beatmapEventData) ;

/// @brief Method RemoveBeatmapEventData addr 0x21ca0a8 size 0x17c virtual false final false
 void RemoveBeatmapEventData(::GlobalNamespace::BeatmapEventData beatmapEventData) ;

/// @brief Method AddSpecialBasicBeatmapEventKeyword addr 0x21ca224 size 0x58 virtual false final false
 void AddSpecialBasicBeatmapEventKeyword(::StringW specialBasicBeatmapEventKeyword) ;

/// @brief Method ProcessRemainingData addr 0x21ca27c size 0x1c virtual false final false
 void ProcessRemainingData() ;

/// @brief Method ProcessAndSortBeatmapData addr 0x21ca298 size 0x348 virtual false final false
 void ProcessAndSortBeatmapData() ;

/// @brief Method GetCopy addr 0x21ca608 size 0x25c virtual true final true
 ::GlobalNamespace::BeatmapData GetCopy() ;

/// @brief Method GetFilteredCopy addr 0x21ca864 size 0x290 virtual true final true
 ::GlobalNamespace::BeatmapData GetFilteredCopy(::System::Func_2<::GlobalNamespace::BeatmapDataItem,::GlobalNamespace::BeatmapDataItem> processDataItem) ;

/// @brief Method InsertToAllBeatmapData addr 0x21c9ed4 size 0x1d4 virtual false final false
 ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> InsertToAllBeatmapData(::GlobalNamespace::BeatmapDataItem beatmapDataItem, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass45_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4272))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4272), inst: 2 })
// CS Name: BeatmapData::<>c__DisplayClass45_0`1
class CORDL_TYPE ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1(____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1(____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1& operator=(____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1& operator=(____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_subtypeGroupIdentifiers, put=__set_subtypeGroupIdentifiers))  subtypeGroupIdentifiers;

constexpr void __set_subtypeGroupIdentifiers(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_subtypeGroupIdentifiers() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetBeatmapDataItemsMerged>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _GetBeatmapDataItemsMerged_b__0(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> head) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__BeatmapData____c__DisplayClass45_0_1, "", "BeatmapData/<>c__DisplayClass45_0`1");
NEED_NO_BOX(::GlobalNamespace::BeatmapData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapData, "", "BeatmapData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem, "", "BeatmapData/BeatmapDataBinaryHeapItem");
