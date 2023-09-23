#pragma once
#include "GlobalNamespace/zzzz__DifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
//  Writing Method size for method: GlobalNamespace::DifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO (GlobalNamespace::DifficultyBeatmapSet::*)()>(&GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DifficultyBeatmapSet.get_difficultyBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> (GlobalNamespace::DifficultyBeatmapSet::*)()>(&GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyBeatmapSet::*)(GlobalNamespace::BeatmapCharacteristicSO, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>)>(&GlobalNamespace::DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21ec148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmapSet
constexpr  GlobalNamespace::DifficultyBeatmapSet::operator GlobalNamespace::IDifficultyBeatmapSet() const noexcept {
return GlobalNamespace::IDifficultyBeatmapSet(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DifficultyBeatmapSet::__set__beatmapCharacteristic_k__BackingField(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::DifficultyBeatmapSet::__get__beatmapCharacteristic_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DifficultyBeatmapSet::__set__difficultyBeatmaps_k__BackingField(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> GlobalNamespace::DifficultyBeatmapSet::__get__difficultyBeatmaps_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapCharacteristicSO, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmaps", ty: "System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>", modifiers: "", def_value: None }]
 GlobalNamespace::DifficultyBeatmapSet::DifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> difficultyBeatmaps)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DifficultyBeatmapSet>(beatmapCharacteristic, difficultyBeatmaps))) {}
 void GlobalNamespace::DifficultyBeatmapSet::_ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> difficultyBeatmaps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapCharacteristic, difficultyBeatmaps);
}
