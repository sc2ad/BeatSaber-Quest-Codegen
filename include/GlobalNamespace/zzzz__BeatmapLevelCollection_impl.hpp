#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapLevelCollection.get_beatmapLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> (GlobalNamespace::BeatmapLevelCollection::*)()>(&GlobalNamespace::BeatmapLevelCollection::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e2b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelCollection>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelCollection::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel>)>(&GlobalNamespace::BeatmapLevelCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e2b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelCollection.CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelCollection (*)(GlobalNamespace::IBeatmapLevelCollection, GlobalNamespace::BeatmapCharacteristicSO)>(&GlobalNamespace::BeatmapLevelCollection::CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x21e2b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelCollection>::get(),
                            "CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelCollection
constexpr  GlobalNamespace::BeatmapLevelCollection::operator GlobalNamespace::IBeatmapLevelCollection() const noexcept {
return GlobalNamespace::IBeatmapLevelCollection(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelCollection::__set__levels(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::BeatmapLevelCollection::__get__levels() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> GlobalNamespace::BeatmapLevelCollection::get_beatmapLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelCollection>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelCollection GlobalNamespace::BeatmapLevelCollection::New_ctor(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> levels)  {
GlobalNamespace::BeatmapLevelCollection o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapLevelCollection>(levels))};
return o;
}
 void GlobalNamespace::BeatmapLevelCollection::_ctor(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel> levels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IPreviewBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, levels);
}
 GlobalNamespace::BeatmapLevelCollection GlobalNamespace::BeatmapLevelCollection::CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelCollection>::get(),
                            "CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapLevelCollection, false>(nullptr, ___internal_method, beatmapLevelCollection, beatmapCharacteristic);
}
