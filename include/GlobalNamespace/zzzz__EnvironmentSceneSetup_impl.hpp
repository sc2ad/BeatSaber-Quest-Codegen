#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::EnvironmentSceneSetup.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSceneSetup::*)()>(&GlobalNamespace::EnvironmentSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x21b3f88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::EnvironmentSceneSetup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSceneSetup>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentSceneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSceneSetup::*)()>(&GlobalNamespace::EnvironmentSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b40f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentSceneSetup::__set__sceneSetupData(GlobalNamespace::EnvironmentSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentSceneSetupData>(value));
}
constexpr GlobalNamespace::EnvironmentSceneSetupData GlobalNamespace::EnvironmentSceneSetup::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EnvironmentSceneSetup::__set_trackLaneYPositionPropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "trackLaneYPositionPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSceneSetup>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::EnvironmentSceneSetup::__get_trackLaneYPositionPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "trackLaneYPositionPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSceneSetup>::get>();
}
 void GlobalNamespace::EnvironmentSceneSetup::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSceneSetup>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::EnvironmentSceneSetup::EnvironmentSceneSetup()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<EnvironmentSceneSetup>())) {}
 void GlobalNamespace::EnvironmentSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
