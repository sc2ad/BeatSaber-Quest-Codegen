#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectPoolsInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(&GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x211b560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectPoolsInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectPoolsInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectPoolsInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(&GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211b6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectPoolsInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__basicNotePrefab(GlobalNamespace::TutorialNoteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TutorialNoteController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TutorialNoteController>(value));
}
constexpr GlobalNamespace::TutorialNoteController GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__basicNotePrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TutorialNoteController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__bombNotePrefab(GlobalNamespace::BombNoteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BombNoteController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BombNoteController>(value));
}
constexpr GlobalNamespace::BombNoteController GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__bombNotePrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BombNoteController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__obstaclePrefab(GlobalNamespace::ObstacleController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ObstacleController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ObstacleController>(value));
}
constexpr GlobalNamespace::ObstacleController GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__obstaclePrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ObstacleController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__set__noteLineConnectionControllerPrefab(GlobalNamespace::NoteLineConnectionController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineConnectionController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineConnectionController>(value));
}
constexpr GlobalNamespace::NoteLineConnectionController GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::__get__noteLineConnectionControllerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineConnectionController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectPoolsInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::TutorialBeatmapObjectPoolsInstaller()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<TutorialBeatmapObjectPoolsInstaller>())) {}
 void GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectPoolsInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
