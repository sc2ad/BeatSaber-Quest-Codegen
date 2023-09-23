#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupProcessor.get_dirtyBoxGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBoxGroup> (GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(&GlobalNamespace::BeatmapEventDataBoxGroupProcessor::get_dirtyBoxGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dcdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "get_dirtyBoxGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ProcessInsertedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup>)>(&GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessInsertedData)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x21dcde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "ProcessInsertedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ProcessBeforeDeleteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup>)>(&GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessBeforeDeleteData)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x21dd3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "ProcessBeforeDeleteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupProcessor.ClearDirtyData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(&GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ClearDirtyData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21dc3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "ClearDirtyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBoxGroupProcessor::*)()>(&GlobalNamespace::BeatmapEventDataBoxGroupProcessor::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21dbf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ISortedListItemProcessor_1<GlobalNamespace::BeatmapEventDataBoxGroup>
constexpr  GlobalNamespace::BeatmapEventDataBoxGroupProcessor::operator GlobalNamespace::ISortedListItemProcessor_1<GlobalNamespace::BeatmapEventDataBoxGroup>() const noexcept {
return GlobalNamespace::ISortedListItemProcessor_1<GlobalNamespace::BeatmapEventDataBoxGroup>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__set__dirtyBoxGroups(System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup>>(value));
}
constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> GlobalNamespace::BeatmapEventDataBoxGroupProcessor::__get__dirtyBoxGroups() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBoxGroup> GlobalNamespace::BeatmapEventDataBoxGroupProcessor::get_dirtyBoxGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "get_dirtyBoxGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBoxGroup>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessInsertedData(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> insertedNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "ProcessInsertedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, insertedNode);
}
 void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ProcessBeforeDeleteData(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> nodeToDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "ProcessBeforeDeleteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodeToDelete);
}
 void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::ClearDirtyData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            "ClearDirtyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::BeatmapEventDataBoxGroupProcessor::BeatmapEventDataBoxGroupProcessor()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapEventDataBoxGroupProcessor>())) {}
 void GlobalNamespace::BeatmapEventDataBoxGroupProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
