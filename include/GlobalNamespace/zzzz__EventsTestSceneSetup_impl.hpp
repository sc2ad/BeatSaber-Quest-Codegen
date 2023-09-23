#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__EventsTestSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::EventsTestSceneSetup.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestSceneSetup::*)()>(&GlobalNamespace::EventsTestSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0xc34;
  constexpr static std::size_t addrs = 0x21b4160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::EventsTestSceneSetup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestSceneSetup>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EventsTestSceneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestSceneSetup::*)()>(&GlobalNamespace::EventsTestSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b4d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EventsTestSceneSetup::__set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayCoreSceneSetupData>(value));
}
constexpr GlobalNamespace::GameplayCoreSceneSetupData GlobalNamespace::EventsTestSceneSetup::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayCoreSceneSetupData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EventsTestSceneSetup::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestSceneSetup>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::EventsTestSceneSetup::EventsTestSceneSetup()  : Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<EventsTestSceneSetup>())) {}
 void GlobalNamespace::EventsTestSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EventsTestSceneSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
