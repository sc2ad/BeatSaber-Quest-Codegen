#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelNoTransitionInstaller_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionLevelNoTransitionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelNoTransitionInstaller::*)(Zenject::DiContainer)>(&GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21b65f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MissionLevelNoTransitionInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelNoTransitionInstaller>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MissionLevelNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelNoTransitionInstaller::*)()>(&GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b66b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapLevel(GlobalNamespace::BeatmapLevelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelSO>(value));
}
constexpr GlobalNamespace::BeatmapLevelSO GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapLevel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr GlobalNamespace::BeatmapDifficulty GlobalNamespace::MissionLevelNoTransitionInstaller::__get__beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficulty, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__colorScheme(GlobalNamespace::ColorSchemeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSchemeSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSchemeSO>(value));
}
constexpr GlobalNamespace::ColorSchemeSO GlobalNamespace::MissionLevelNoTransitionInstaller::__get__colorScheme() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSchemeSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__missionObjectives(::ArrayW<GlobalNamespace::MissionObjective> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::MissionObjective>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::MissionObjective>>(value));
}
constexpr ::ArrayW<GlobalNamespace::MissionObjective> GlobalNamespace::MissionLevelNoTransitionInstaller::__get__missionObjectives() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::MissionObjective>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__gameplayModifiers(GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiers, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiers>(value));
}
constexpr GlobalNamespace::GameplayModifiers GlobalNamespace::MissionLevelNoTransitionInstaller::__get__gameplayModifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiers, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerSpecificSettings>(value));
}
constexpr GlobalNamespace::PlayerSpecificSettings GlobalNamespace::MissionLevelNoTransitionInstaller::__get__playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerSpecificSettings, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__backButtonText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MissionLevelNoTransitionInstaller::__get__backButtonText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MissionLevelNoTransitionInstaller::__set__scenesTransitionSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO GlobalNamespace::MissionLevelNoTransitionInstaller::__get__scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelNoTransitionInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
// Ctor Parameters []
 GlobalNamespace::MissionLevelNoTransitionInstaller::MissionLevelNoTransitionInstaller()  : Zenject::NoTransitionInstaller(THROW_UNLESS(::il2cpp_utils::New<MissionLevelNoTransitionInstaller>())) {}
 void GlobalNamespace::MissionLevelNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionLevelNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
