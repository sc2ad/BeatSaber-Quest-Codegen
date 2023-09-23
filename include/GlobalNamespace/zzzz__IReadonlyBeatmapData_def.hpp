#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Type: ::IReadonlyBeatmapData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4288))
// CS Name: IReadonlyBeatmapData
class CORDL_TYPE IReadonlyBeatmapData : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapDataBasicInfo
constexpr operator  GlobalNamespace::IBeatmapDataBasicInfo() const noexcept;

~IReadonlyBeatmapData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReadonlyBeatmapData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Collections::Generic::LinkedList_1<GlobalNamespace::BeatmapDataItem> __declspec(property(get=get_allBeatmapDataItems))  allBeatmapDataItems;

 int32_t __declspec(property(get=get_spawnRotationEventsCount))  spawnRotationEventsCount;


// Methods

/// @brief Method get_allBeatmapDataItems addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::LinkedList_1<GlobalNamespace::BeatmapDataItem> get_allBeatmapDataItems() ;

/// @brief Method GetBeatmapDataItems addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GetBeatmapDataItems(int32_t subtypeGroupIdentifier) ;

/// @brief Method get_spawnRotationEventsCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_spawnRotationEventsCount() ;

/// @brief Method add_beatmapEventDataWasInsertedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_beatmapEventDataWasInsertedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method remove_beatmapEventDataWasInsertedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_beatmapEventDataWasInsertedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method add_beatmapEventDataWillBeRemovedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_beatmapEventDataWillBeRemovedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method remove_beatmapEventDataWillBeRemovedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_beatmapEventDataWillBeRemovedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value) ;

/// @brief Method add_beatmapEventDataWasRemovedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_beatmapEventDataWasRemovedEvent(System::Action_1<GlobalNamespace::BeatmapEventData> value) ;

/// @brief Method remove_beatmapEventDataWasRemovedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_beatmapEventDataWasRemovedEvent(System::Action_1<GlobalNamespace::BeatmapEventData> value) ;

/// @brief Method GetCopy addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapData GetCopy() ;

/// @brief Method GetFilteredCopy addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapData GetFilteredCopy(System::Func_2<GlobalNamespace::BeatmapDataItem,GlobalNamespace::BeatmapDataItem> processDataItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IReadonlyBeatmapData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IReadonlyBeatmapData, "", "IReadonlyBeatmapData");
