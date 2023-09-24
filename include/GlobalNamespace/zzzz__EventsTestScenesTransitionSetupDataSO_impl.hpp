#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__EventsTestScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
//  Writing Method size for method: GlobalNamespace::EventsTestScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::EventsTestScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x21d0064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EventsTestScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::EventsTestScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d0244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EventsTestScenesTransitionSetupDataSO::__set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::EventsTestScenesTransitionSetupDataSO::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EventsTestScenesTransitionSetupDataSO::__set__eventsTestSceneInfo(GlobalNamespace::SceneInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SceneInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SceneInfo>(value));
}
constexpr GlobalNamespace::SceneInfo GlobalNamespace::EventsTestScenesTransitionSetupDataSO::__get__eventsTestSceneInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SceneInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EventsTestScenesTransitionSetupDataSO::__set__gameCoreSceneInfo(GlobalNamespace::SceneInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SceneInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SceneInfo>(value));
}
constexpr GlobalNamespace::SceneInfo GlobalNamespace::EventsTestScenesTransitionSetupDataSO::__get__gameCoreSceneInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SceneInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EventsTestScenesTransitionSetupDataSO::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::EventsTestScenesTransitionSetupDataSO GlobalNamespace::EventsTestScenesTransitionSetupDataSO::New_ctor()  {
GlobalNamespace::EventsTestScenesTransitionSetupDataSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::EventsTestScenesTransitionSetupDataSO>())};
return o;
}
 void GlobalNamespace::EventsTestScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
