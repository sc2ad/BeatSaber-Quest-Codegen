#pragma once
#include "GlobalNamespace/zzzz__CustomDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__CustomDifficultyBeatmap_def.hpp"
//  Writing Method size for method: GlobalNamespace::CustomDifficultyBeatmapSet.get_beatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO (GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(&GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e96c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomDifficultyBeatmapSet.get_difficultyBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> (GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(&GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e96d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomDifficultyBeatmapSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomDifficultyBeatmapSet::*)(GlobalNamespace::BeatmapCharacteristicSO)>(&GlobalNamespace::CustomDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e96d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomDifficultyBeatmapSet.SetCustomDifficultyBeatmaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomDifficultyBeatmapSet::*)(::ArrayW<GlobalNamespace::CustomDifficultyBeatmap>)>(&GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            "SetCustomDifficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::CustomDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IDifficultyBeatmapSet
constexpr  GlobalNamespace::CustomDifficultyBeatmapSet::operator GlobalNamespace::IDifficultyBeatmapSet() const noexcept {
return GlobalNamespace::IDifficultyBeatmapSet(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomDifficultyBeatmapSet::__set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::CustomDifficultyBeatmapSet::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomDifficultyBeatmapSet::__set__difficultyBeatmaps(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap> GlobalNamespace::CustomDifficultyBeatmapSet::__get__difficultyBeatmaps() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::CustomDifficultyBeatmap>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            "get_beatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapCharacteristicSO, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap> GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            "get_difficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmap>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }]
 GlobalNamespace::CustomDifficultyBeatmapSet::CustomDifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CustomDifficultyBeatmapSet>(beatmapCharacteristic))) {}
 void GlobalNamespace::CustomDifficultyBeatmapSet::_ctor(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapCharacteristic);
}
 void GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps(::ArrayW<GlobalNamespace::CustomDifficultyBeatmap> difficultyBeatmaps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomDifficultyBeatmapSet>::get(),
                            "SetCustomDifficultyBeatmaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::CustomDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmaps);
}
