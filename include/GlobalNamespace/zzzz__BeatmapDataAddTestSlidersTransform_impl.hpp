#pragma once
#include "GlobalNamespace/zzzz__BeatmapDataAddTestSlidersTransform_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapDataAddTestSlidersTransform.CreateTransformedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IReadonlyBeatmapData (*)(GlobalNamespace::IReadonlyBeatmapData)>(&GlobalNamespace::BeatmapDataAddTestSlidersTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x21b906c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataAddTestSlidersTransform>::get(),
                            "CreateTransformedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyBeatmapData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataAddTestSlidersTransform.FindNextSameColorTypeNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData (*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapDataItem>, int32_t, GlobalNamespace::ColorType)>(&GlobalNamespace::BeatmapDataAddTestSlidersTransform::FindNextSameColorTypeNote)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x21b9758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataAddTestSlidersTransform>::get(),
                            "FindNextSameColorTypeNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapDataItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapDataAddTestSlidersTransform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataAddTestSlidersTransform::*)()>(&GlobalNamespace::BeatmapDataAddTestSlidersTransform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b9944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataAddTestSlidersTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::IReadonlyBeatmapData GlobalNamespace::BeatmapDataAddTestSlidersTransform::CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData beatmapData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataAddTestSlidersTransform>::get(),
                            "CreateTransformedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyBeatmapData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IReadonlyBeatmapData, false>(nullptr, ___internal_method, beatmapData);
}
 GlobalNamespace::NoteData GlobalNamespace::BeatmapDataAddTestSlidersTransform::FindNextSameColorTypeNote(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapDataItem> beatmapDataItems, int32_t startIndex, GlobalNamespace::ColorType colorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataAddTestSlidersTransform>::get(),
                            "FindNextSameColorTypeNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapDataItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteData, false>(nullptr, ___internal_method, beatmapDataItems, startIndex, colorType);
}
 GlobalNamespace::BeatmapDataAddTestSlidersTransform GlobalNamespace::BeatmapDataAddTestSlidersTransform::New_ctor()  {
GlobalNamespace::BeatmapDataAddTestSlidersTransform o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapDataAddTestSlidersTransform>())};
return o;
}
 void GlobalNamespace::BeatmapDataAddTestSlidersTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapDataAddTestSlidersTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
