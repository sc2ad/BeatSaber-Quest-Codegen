#pragma once
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataSortedListForTypeAndIds_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectsInTimeRowProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::*)(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>)>(&GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21ca5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::*)(GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem)>(&GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::CompareTo)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21caaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IComparable_1<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>
constexpr  GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::operator System::IComparable_1<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>() const noexcept {
return System::IComparable_1<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::__set_node(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>(value));
}
constexpr System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::__get_node() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::New_ctor(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> node)  {
GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>(node))};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::_ctor(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 int32_t GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem::CompareTo(GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapData__BeatmapDataBinaryHeapItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other);
}
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_updateAllBeatmapDataOnInsert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_updateAllBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_updateAllBeatmapDataOnInsert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.set_updateAllBeatmapDataOnInsert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(bool)>(&GlobalNamespace::BeatmapData::set_updateAllBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21c9978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_updateAllBeatmapDataOnInsert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_allBeatmapDataItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::LinkedList_1<GlobalNamespace::BeatmapDataItem> (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_allBeatmapDataItems)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21c9984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_allBeatmapDataItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_numberOfLines
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_numberOfLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_numberOfLines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_cuttableNotesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_cuttableNotesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_cuttableNotesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.set_cuttableNotesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int32_t)>(&GlobalNamespace::BeatmapData::set_cuttableNotesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_cuttableNotesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_obstaclesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_obstaclesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.set_obstaclesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int32_t)>(&GlobalNamespace::BeatmapData::set_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_obstaclesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_bombsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_bombsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.set_bombsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int32_t)>(&GlobalNamespace::BeatmapData::set_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_bombsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_spawnRotationEventsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_spawnRotationEventsCount)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21c9a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_spawnRotationEventsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.get_specialBasicBeatmapEventKeywords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c9aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_specialBasicBeatmapEventKeywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.add_beatmapEventDataWasInsertedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>)>(&GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c9ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "add_beatmapEventDataWasInsertedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.remove_beatmapEventDataWasInsertedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>)>(&GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c9b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "remove_beatmapEventDataWasInsertedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.add_beatmapEventDataWillBeRemovedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>)>(&GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c9c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "add_beatmapEventDataWillBeRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.remove_beatmapEventDataWillBeRemovedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>)>(&GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c9cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "remove_beatmapEventDataWillBeRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.add_beatmapEventDataWasRemovedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(System::Action_1<GlobalNamespace::BeatmapEventData>)>(&GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c9d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "add_beatmapEventDataWasRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::BeatmapEventData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.remove_beatmapEventDataWasRemovedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(System::Action_1<GlobalNamespace::BeatmapEventData>)>(&GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c9e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "remove_beatmapEventDataWasRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::BeatmapEventData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int32_t)>(&GlobalNamespace::BeatmapData::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x21b938c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.AddBeatmapObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapObjectData)>(&GlobalNamespace::BeatmapData::AddBeatmapObjectData)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x21b95bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "AddBeatmapObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapObjectData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.AddBeatmapObjectDataInOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapObjectData)>(&GlobalNamespace::BeatmapData::AddBeatmapObjectDataInOrder)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21badf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "AddBeatmapObjectDataInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapObjectData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.InsertBeatmapEventData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapEventData)>(&GlobalNamespace::BeatmapData::InsertBeatmapEventData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21b9520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "InsertBeatmapEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.InsertBeatmapEventDataInOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapEventData)>(&GlobalNamespace::BeatmapData::InsertBeatmapEventDataInOrder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21bad9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "InsertBeatmapEventDataInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.RemoveBeatmapEventData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapEventData)>(&GlobalNamespace::BeatmapData::RemoveBeatmapEventData)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x21ca0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "RemoveBeatmapEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.AddSpecialBasicBeatmapEventKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::StringW)>(&GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21ca224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "AddSpecialBasicBeatmapEventKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.ProcessRemainingData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::ProcessRemainingData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21ca27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "ProcessRemainingData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.ProcessAndSortBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::ProcessAndSortBeatmapData)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x21ca298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "ProcessAndSortBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.GetCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopy)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x21ca608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.GetFilteredCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData (GlobalNamespace::BeatmapData::*)(System::Func_2<GlobalNamespace::BeatmapDataItem,GlobalNamespace::BeatmapDataItem>)>(&GlobalNamespace::BeatmapData::GetFilteredCopy)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x21ca864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "GetFilteredCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::BeatmapDataItem,GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapData.InsertToAllBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapDataItem, System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>)>(&GlobalNamespace::BeatmapData::InsertToAllBeatmapData)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x21c9ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "InsertToAllBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IReadonlyBeatmapData
constexpr  GlobalNamespace::BeatmapData::operator GlobalNamespace::IReadonlyBeatmapData() const noexcept {
return GlobalNamespace::IReadonlyBeatmapData(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IBeatmapDataBasicInfo
constexpr  GlobalNamespace::BeatmapData::operator GlobalNamespace::IBeatmapDataBasicInfo() const noexcept {
return GlobalNamespace::IBeatmapDataBasicInfo(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__updateAllBeatmapDataOnInsert_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapData::__get__updateAllBeatmapDataOnInsert_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__cuttableNotesCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BeatmapData::__get__cuttableNotesCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__obstaclesCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BeatmapData::__get__obstaclesCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__bombsCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BeatmapData::__get__bombsCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set_beatmapEventDataWasInsertedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>(value));
}
constexpr System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> GlobalNamespace::BeatmapData::__get_beatmapEventDataWasInsertedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set_beatmapEventDataWillBeRemovedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>(value));
}
constexpr System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> GlobalNamespace::BeatmapData::__get_beatmapEventDataWillBeRemovedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set_beatmapEventDataWasRemovedEvent(System::Action_1<GlobalNamespace::BeatmapEventData> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::BeatmapEventData>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::BeatmapEventData>>(value));
}
constexpr System::Action_1<GlobalNamespace::BeatmapEventData> GlobalNamespace::BeatmapData::__get_beatmapEventDataWasRemovedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::BeatmapEventData>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__allBeatmapData(GlobalNamespace::ISortedList_1<GlobalNamespace::BeatmapDataItem> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ISortedList_1<GlobalNamespace::BeatmapDataItem>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ISortedList_1<GlobalNamespace::BeatmapDataItem>>(value));
}
constexpr GlobalNamespace::ISortedList_1<GlobalNamespace::BeatmapDataItem> GlobalNamespace::BeatmapData::__get__allBeatmapData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ISortedList_1<GlobalNamespace::BeatmapDataItem>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__allBeatmapDataItemToNodeMap(System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapDataItem,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapDataItem,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapDataItem,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapDataItem,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> GlobalNamespace::BeatmapData::__get__allBeatmapDataItemToNodeMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<GlobalNamespace::BeatmapDataItem,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__beatmapDataItemsPerTypeAndId(GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<GlobalNamespace::BeatmapDataItem> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<GlobalNamespace::BeatmapDataItem>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<GlobalNamespace::BeatmapDataItem>>(value));
}
constexpr GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<GlobalNamespace::BeatmapDataItem> GlobalNamespace::BeatmapData::__get__beatmapDataItemsPerTypeAndId() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataSortedListForTypeAndIds_1<GlobalNamespace::BeatmapDataItem>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__numberOfLines(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BeatmapData::__get__numberOfLines() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__specialBasicBeatmapEventKeywords(System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr System::Collections::Generic::HashSet_1<::StringW> GlobalNamespace::BeatmapData::__get__specialBasicBeatmapEventKeywords() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__beatmapObjectsInTimeRowProcessor(GlobalNamespace::BeatmapObjectsInTimeRowProcessor value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectsInTimeRowProcessor, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectsInTimeRowProcessor>(value));
}
constexpr GlobalNamespace::BeatmapObjectsInTimeRowProcessor GlobalNamespace::BeatmapData::__get__beatmapObjectsInTimeRowProcessor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectsInTimeRowProcessor, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__prevAddedBeatmapObjectDataTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BeatmapData::__get__prevAddedBeatmapObjectDataTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapData::__set__isCreatingFilteredCopy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapData::__get__isCreatingFilteredCopy() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::BeatmapData::get_updateAllBeatmapDataOnInsert()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_updateAllBeatmapDataOnInsert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapData::set_updateAllBeatmapDataOnInsert(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_updateAllBeatmapDataOnInsert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::LinkedList_1<GlobalNamespace::BeatmapDataItem> GlobalNamespace::BeatmapData::get_allBeatmapDataItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_allBeatmapDataItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedList_1<GlobalNamespace::BeatmapDataItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::BeatmapData::get_numberOfLines()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_numberOfLines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::BeatmapData::get_cuttableNotesCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_cuttableNotesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapData::set_cuttableNotesCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_cuttableNotesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::BeatmapData::get_obstaclesCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_obstaclesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapData::set_obstaclesCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_obstaclesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::BeatmapData::get_bombsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_bombsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapData::set_bombsCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "set_bombsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::BeatmapData::get_spawnRotationEventsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_spawnRotationEventsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<::StringW> GlobalNamespace::BeatmapData::get_specialBasicBeatmapEventKeywords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "get_specialBasicBeatmapEventKeywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapData::add_beatmapEventDataWasInsertedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "add_beatmapEventDataWasInsertedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapData::remove_beatmapEventDataWasInsertedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "remove_beatmapEventDataWasInsertedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapData::add_beatmapEventDataWillBeRemovedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "add_beatmapEventDataWillBeRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapData::remove_beatmapEventDataWillBeRemovedEvent(System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "remove_beatmapEventDataWillBeRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::BeatmapEventData,System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapData::add_beatmapEventDataWasRemovedEvent(System::Action_1<GlobalNamespace::BeatmapEventData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "add_beatmapEventDataWasRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::BeatmapEventData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapData::remove_beatmapEventDataWasRemovedEvent(System::Action_1<GlobalNamespace::BeatmapEventData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "remove_beatmapEventDataWasRemovedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::BeatmapEventData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::BeatmapData GlobalNamespace::BeatmapData::New_ctor(int32_t numberOfLines)  {
GlobalNamespace::BeatmapData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapData>(numberOfLines))};
return o;
}
 void GlobalNamespace::BeatmapData::_ctor(int32_t numberOfLines)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numberOfLines);
}
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::BeatmapData::GetBeatmapDataItems(int32_t subtypeGroupIdentifier)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                        "GetBeatmapDataItems",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<T>, false>(const_cast<void*>(instance), ___internal_method, subtypeGroupIdentifier);
}
template<typename T>
 int32_t GlobalNamespace::BeatmapData::GetBeatmapDataItemsCount(int32_t subtypeGroupIdentifier)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                        "GetBeatmapDataItemsCount",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, subtypeGroupIdentifier);
}
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::BeatmapData::GetBeatmapDataItemsMerged(::ArrayW<int32_t> subtypeGroupIdentifiers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                        "GetBeatmapDataItemsMerged",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<T>, false>(const_cast<void*>(instance), ___internal_method, subtypeGroupIdentifiers);
}
template<typename T>
 int32_t GlobalNamespace::BeatmapData::GetBeatmapDataItemsMergedCount(::ArrayW<int32_t> subtypeGroupIdentifiers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                        "GetBeatmapDataItemsMergedCount",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, subtypeGroupIdentifiers);
}
 void GlobalNamespace::BeatmapData::AddBeatmapObjectData(GlobalNamespace::BeatmapObjectData beatmapObjectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "AddBeatmapObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapObjectData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapObjectData);
}
 void GlobalNamespace::BeatmapData::AddBeatmapObjectDataInOrder(GlobalNamespace::BeatmapObjectData beatmapObjectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "AddBeatmapObjectDataInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapObjectData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapObjectData);
}
 void GlobalNamespace::BeatmapData::InsertBeatmapEventData(GlobalNamespace::BeatmapEventData beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "InsertBeatmapEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData);
}
 void GlobalNamespace::BeatmapData::InsertBeatmapEventDataInOrder(GlobalNamespace::BeatmapEventData beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "InsertBeatmapEventDataInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData);
}
 void GlobalNamespace::BeatmapData::RemoveBeatmapEventData(GlobalNamespace::BeatmapEventData beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "RemoveBeatmapEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData);
}
 void GlobalNamespace::BeatmapData::AddSpecialBasicBeatmapEventKeyword(::StringW specialBasicBeatmapEventKeyword)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "AddSpecialBasicBeatmapEventKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, specialBasicBeatmapEventKeyword);
}
 void GlobalNamespace::BeatmapData::ProcessRemainingData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "ProcessRemainingData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapData::ProcessAndSortBeatmapData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "ProcessAndSortBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapData GlobalNamespace::BeatmapData::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapData, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapData GlobalNamespace::BeatmapData::GetFilteredCopy(System::Func_2<GlobalNamespace::BeatmapDataItem,GlobalNamespace::BeatmapDataItem> processDataItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "GetFilteredCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<GlobalNamespace::BeatmapDataItem,GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapData, false>(const_cast<void*>(instance), ___internal_method, processDataItem);
}
/// @param node: System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> (default: csnull)
 System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> GlobalNamespace::BeatmapData::InsertToAllBeatmapData(GlobalNamespace::BeatmapDataItem beatmapDataItem, System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapData>::get(),
                            "InsertToAllBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDataItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>, false>(const_cast<void*>(instance), ___internal_method, beatmapDataItem, node);
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>::__set_subtypeGroupIdentifiers(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>::__get_subtypeGroupIdentifiers() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T> GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>::_GetBeatmapDataItemsMerged_b__0(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> head)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapData____c__DisplayClass45_0_1<T>>::get(),
                            "<GetBeatmapDataItemsMerged>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, head);
}
