#pragma once
namespace {
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupLists_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(::GlobalNamespace::BeatmapData, ::GlobalNamespace::IBeatToTimeConvertor, bool)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21dc9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup> (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(int32_t, ::GlobalNamespace::BeatmapEventDataBoxGroup)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::Insert)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21da184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(int32_t, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup>)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x21dca64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.ToggleUpdateBeatmapDataOnInsert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)(bool)>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::ToggleUpdateBeatmapDataOnInsert)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21dcb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "ToggleUpdateBeatmapDataOnInsert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBoxGroupLists.SyncWithBeatmapData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBoxGroupLists::*)()>(&::GlobalNamespace::BeatmapEventDataBoxGroupLists::SyncWithBeatmapData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x21dcc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "SyncWithBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__beatmapEventDataBoxGroupListDict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList> ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatmapEventDataBoxGroupListDict() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BeatmapEventDataBoxGroupList>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__beatmapData(::GlobalNamespace::BeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapData>(value));
}
constexpr ::GlobalNamespace::BeatmapData ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__beatToTimeConvertor(::GlobalNamespace::IBeatToTimeConvertor value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatToTimeConvertor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatToTimeConvertor>(value));
}
constexpr ::GlobalNamespace::IBeatToTimeConvertor ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__beatToTimeConvertor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatToTimeConvertor, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__set__updateBeatmapDataOnInsert(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BeatmapEventDataBoxGroupLists::__get__updateBeatmapDataOnInsert() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beatmapData", ty: "::GlobalNamespace::BeatmapData", modifiers: "", def_value: None }, CppParam { name: "beatToTimeConvertor", ty: "::GlobalNamespace::IBeatToTimeConvertor", modifiers: "", def_value: None }, CppParam { name: "updateBeatmapDataOnInsert", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapEventDataBoxGroupLists::BeatmapEventDataBoxGroupLists(::GlobalNamespace::BeatmapData beatmapData, ::GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, bool updateBeatmapDataOnInsert)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapEventDataBoxGroupLists>(beatmapData, beatToTimeConvertor, updateBeatmapDataOnInsert))) {}
 void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::_ctor(::GlobalNamespace::BeatmapData beatmapData, ::GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, bool updateBeatmapDataOnInsert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapData, beatToTimeConvertor, updateBeatmapDataOnInsert);
}
 ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup> ::GlobalNamespace::BeatmapEventDataBoxGroupLists::Insert(int32_t groupId, ::GlobalNamespace::BeatmapEventDataBoxGroup beatmapEventDataBoxGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup>, false>(const_cast<void*>(instance), ___internal_method, groupId, beatmapEventDataBoxGroup);
}
 void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::Remove(int32_t groupId, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup> nodeToDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, groupId, nodeToDelete);
}
 void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::ToggleUpdateBeatmapDataOnInsert(bool enableUpdateOnInsert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "ToggleUpdateBeatmapDataOnInsert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enableUpdateOnInsert);
}
 void ::GlobalNamespace::BeatmapEventDataBoxGroupLists::SyncWithBeatmapData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBoxGroupLists>::get(),
                            "SyncWithBeatmapData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
