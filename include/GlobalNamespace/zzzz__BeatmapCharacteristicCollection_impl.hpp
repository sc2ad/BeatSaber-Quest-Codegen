#pragma once
namespace {
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollection::*)(::GlobalNamespace::BeatmapCharacteristicCollectionSO, ::GlobalNamespace::AppStaticSettingsSO)>(&::GlobalNamespace::BeatmapCharacteristicCollection::_ctor)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x21c9274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppStaticSettingsSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection.GetBeatmapCharacteristicBySerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO (::GlobalNamespace::BeatmapCharacteristicCollection::*)(::StringW)>(&::GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x21bc51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection>::get(),
                            "GetBeatmapCharacteristicBySerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapCharacteristicCollection::__set__beatmapCharacteristicsBySerializedName(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO> ::GlobalNamespace::BeatmapCharacteristicCollection::__get__beatmapCharacteristicsBySerializedName() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapCharacteristicSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapCharacteristicCollection::__set_beatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO> ::GlobalNamespace::BeatmapCharacteristicCollection::__get_beatmapCharacteristics() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "collection", ty: "::GlobalNamespace::BeatmapCharacteristicCollectionSO", modifiers: "", def_value: None }, CppParam { name: "appSettings", ty: "::GlobalNamespace::AppStaticSettingsSO", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapCharacteristicCollection::BeatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO collection, ::GlobalNamespace::AppStaticSettingsSO appSettings)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapCharacteristicCollection>(collection, appSettings))) {}
 void ::GlobalNamespace::BeatmapCharacteristicCollection::_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO collection, ::GlobalNamespace::AppStaticSettingsSO appSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollectionSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppStaticSettingsSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collection, appSettings);
}
 ::GlobalNamespace::BeatmapCharacteristicSO ::GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName(::StringW serializedName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection>::get(),
                            "GetBeatmapCharacteristicBySerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO, false>(const_cast<void*>(instance), ___internal_method, serializedName);
}
} // end anonymous namespace
