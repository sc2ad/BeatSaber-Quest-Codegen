#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::LightColorBeatmapEventDataProcessor.ProcessInsertedEventDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventDataProcessor::*)(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>)>(&GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessInsertedEventDataInternal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xd92e9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightColorBeatmapEventDataProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBeatmapEventDataProcessor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightColorBeatmapEventDataProcessor.ProcessBeforeDeleteEventDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventDataProcessor::*)(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>)>(&GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xd92fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightColorBeatmapEventDataProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBeatmapEventDataProcessor>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightColorBeatmapEventDataProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightColorBeatmapEventDataProcessor::*)()>(&GlobalNamespace::LightColorBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xd930cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBeatmapEventDataProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessInsertedEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> insertedNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBeatmapEventDataProcessor>::get(),
                            "ProcessInsertedEventDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, insertedNode);
}
 void GlobalNamespace::LightColorBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> nodeToDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBeatmapEventDataProcessor>::get(),
                            "ProcessBeforeDeleteEventDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodeToDelete);
}
// Ctor Parameters []
 GlobalNamespace::LightColorBeatmapEventDataProcessor::LightColorBeatmapEventDataProcessor()  : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::LightColorBeatmapEventData>(THROW_UNLESS(::il2cpp_utils::New<LightColorBeatmapEventDataProcessor>())) {}
 void GlobalNamespace::LightColorBeatmapEventDataProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightColorBeatmapEventDataProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
