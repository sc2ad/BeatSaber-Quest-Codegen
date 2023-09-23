#pragma once
#include "GlobalNamespace/zzzz__LocalPlayerInGameMenuInitData_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: GlobalNamespace::LocalPlayerInGameMenuInitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalPlayerInGameMenuInitData::*)(GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO, bool)>(&GlobalNamespace::LocalPlayerInGameMenuInitData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20ce44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalPlayerInGameMenuInitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::LocalPlayerInGameMenuInitData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::LocalPlayerInGameMenuInitData::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::LocalPlayerInGameMenuInitData::__get_beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LocalPlayerInGameMenuInitData::__set_hasSong(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LocalPlayerInGameMenuInitData::__get_hasSong() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "hasSong", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::LocalPlayerInGameMenuInitData::LocalPlayerInGameMenuInitData(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool hasSong)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LocalPlayerInGameMenuInitData>(previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, hasSong))) {}
 void GlobalNamespace::LocalPlayerInGameMenuInitData::_ctor(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool hasSong)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalPlayerInGameMenuInitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, hasSong);
}
