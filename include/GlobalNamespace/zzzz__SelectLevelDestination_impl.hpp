#pragma once
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelDestination_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: GlobalNamespace::SelectLevelDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLevelDestination::*)(GlobalNamespace::IBeatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO)>(&GlobalNamespace::SelectLevelDestination::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21bc5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelDestination>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectLevelDestination::__set_beatmapLevelPack(GlobalNamespace::IBeatmapLevelPack value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevelPack, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevelPack>(value));
}
constexpr GlobalNamespace::IBeatmapLevelPack GlobalNamespace::SelectLevelDestination::__get_beatmapLevelPack() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevelPack, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelDestination::__set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr GlobalNamespace::IPreviewBeatmapLevel GlobalNamespace::SelectLevelDestination::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IPreviewBeatmapLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelDestination::__set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::SelectLevelDestination::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SelectLevelDestination::__set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::SelectLevelDestination::__get_beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beatmapLevelPack", ty: "GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }]
 GlobalNamespace::SelectLevelDestination::SelectLevelDestination(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic)  : GlobalNamespace::MenuDestination(THROW_UNLESS(::il2cpp_utils::New<SelectLevelDestination>(beatmapLevelPack, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic))) {}
 void GlobalNamespace::SelectLevelDestination::_ctor(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectLevelDestination>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelPack, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic);
}
