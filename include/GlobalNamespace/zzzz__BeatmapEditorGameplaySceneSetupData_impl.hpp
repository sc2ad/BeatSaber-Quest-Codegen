#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapEditorGameplaySceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEditorGameplaySceneSetupData::*)(bool, bool, bool)>(&GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21b6a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEditorGameplaySceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__set_useFirstPersonFlyingController(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_useFirstPersonFlyingController() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__set_recordVRMovement(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_recordVRMovement() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__set_playVRMovement(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__get_playVRMovement() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "useFirstPersonFlyingController", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "recordVRMovement", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "playVRMovement", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::BeatmapEditorGameplaySceneSetupData::BeatmapEditorGameplaySceneSetupData(bool useFirstPersonFlyingController, bool recordVRMovement, bool playVRMovement)  : GlobalNamespace::SceneSetupData(THROW_UNLESS(::il2cpp_utils::New<BeatmapEditorGameplaySceneSetupData>(useFirstPersonFlyingController, recordVRMovement, playVRMovement))) {}
 void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor(bool useFirstPersonFlyingController, bool recordVRMovement, bool playVRMovement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEditorGameplaySceneSetupData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, useFirstPersonFlyingController, recordVRMovement, playVRMovement);
}
