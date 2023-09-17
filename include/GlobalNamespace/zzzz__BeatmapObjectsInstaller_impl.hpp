#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatLine_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInstaller::*)()>(&::GlobalNamespace::BeatmapObjectsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x2117244;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BeatmapObjectsInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectsInstaller::*)()>(&::GlobalNamespace::BeatmapObjectsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2117718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__normalBasicNotePrefab(::GlobalNamespace::GameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameNoteController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameNoteController>(value));
}
constexpr ::GlobalNamespace::GameNoteController ::GlobalNamespace::BeatmapObjectsInstaller::__get__normalBasicNotePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameNoteController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__proModeNotePrefab(::GlobalNamespace::GameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameNoteController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameNoteController>(value));
}
constexpr ::GlobalNamespace::GameNoteController ::GlobalNamespace::BeatmapObjectsInstaller::__get__proModeNotePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameNoteController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__burstSliderHeadNotePrefab(::GlobalNamespace::GameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameNoteController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameNoteController>(value));
}
constexpr ::GlobalNamespace::GameNoteController ::GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderHeadNotePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameNoteController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__burstSliderNotePrefab(::GlobalNamespace::BurstSliderGameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BurstSliderGameNoteController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BurstSliderGameNoteController>(value));
}
constexpr ::GlobalNamespace::BurstSliderGameNoteController ::GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderNotePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BurstSliderGameNoteController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__burstSliderFillPrefab(::GlobalNamespace::BurstSliderGameNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BurstSliderGameNoteController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BurstSliderGameNoteController>(value));
}
constexpr ::GlobalNamespace::BurstSliderGameNoteController ::GlobalNamespace::BeatmapObjectsInstaller::__get__burstSliderFillPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BurstSliderGameNoteController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__bombNotePrefab(::GlobalNamespace::BombNoteController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BombNoteController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BombNoteController>(value));
}
constexpr ::GlobalNamespace::BombNoteController ::GlobalNamespace::BeatmapObjectsInstaller::__get__bombNotePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BombNoteController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__obstaclePrefab(::GlobalNamespace::ObstacleController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ObstacleController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ObstacleController>(value));
}
constexpr ::GlobalNamespace::ObstacleController ::GlobalNamespace::BeatmapObjectsInstaller::__get__obstaclePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstacleController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__sliderShortPrefab(::GlobalNamespace::SliderController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SliderController>(value));
}
constexpr ::GlobalNamespace::SliderController ::GlobalNamespace::BeatmapObjectsInstaller::__get__sliderShortPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__sliderMediumPrefab(::GlobalNamespace::SliderController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderController, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SliderController>(value));
}
constexpr ::GlobalNamespace::SliderController ::GlobalNamespace::BeatmapObjectsInstaller::__get__sliderMediumPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderController, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__sliderLongPrefab(::GlobalNamespace::SliderController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderController, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SliderController>(value));
}
constexpr ::GlobalNamespace::SliderController ::GlobalNamespace::BeatmapObjectsInstaller::__get__sliderLongPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderController, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__noteLineConnectionControllerPrefab(::GlobalNamespace::NoteLineConnectionController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineConnectionController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NoteLineConnectionController>(value));
}
constexpr ::GlobalNamespace::NoteLineConnectionController ::GlobalNamespace::BeatmapObjectsInstaller::__get__noteLineConnectionControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineConnectionController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__beatLinePrefab(::GlobalNamespace::BeatLine value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatLine, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatLine>(value));
}
constexpr ::GlobalNamespace::BeatLine ::GlobalNamespace::BeatmapObjectsInstaller::__get__beatLinePrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatLine, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectsInstaller::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData ::GlobalNamespace::BeatmapObjectsInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::BeatmapObjectsInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatmapObjectsInstaller::BeatmapObjectsInstaller()  : ::Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectsInstaller>())) {}
 void ::GlobalNamespace::BeatmapObjectsInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectsInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
