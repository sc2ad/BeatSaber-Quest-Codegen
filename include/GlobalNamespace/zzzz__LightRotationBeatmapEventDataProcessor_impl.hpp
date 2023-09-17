#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor.ProcessInsertedEventDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>)>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xd93114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LightRotationBeatmapEventDataProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor.ProcessBeforeDeleteEventDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>)>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xd93224;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LightRotationBeatmapEventDataProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventDataProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventDataProcessor::*)()>(&::GlobalNamespace::LightRotationBeatmapEventDataProcessor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xd93320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> insertedNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor>::get(),
                            "ProcessInsertedEventDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, insertedNode);
}
 void ::GlobalNamespace::LightRotationBeatmapEventDataProcessor::ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> nodeToDelete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor>::get(),
                            "ProcessBeforeDeleteEventDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodeToDelete);
}
// Ctor Parameters []
 ::GlobalNamespace::LightRotationBeatmapEventDataProcessor::LightRotationBeatmapEventDataProcessor()  : ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::LightRotationBeatmapEventData>(THROW_UNLESS(::il2cpp_utils::New<LightRotationBeatmapEventDataProcessor>())) {}
 void ::GlobalNamespace::LightRotationBeatmapEventDataProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationBeatmapEventDataProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
