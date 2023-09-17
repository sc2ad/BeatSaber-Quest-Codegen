#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__RecordingToolSettingsNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)(::Zenject::DiContainer)>(&::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21b66c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::*)()>(&::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b6708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolSceneSetupData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RecordingToolSceneSetupData>(value));
}
constexpr ::GlobalNamespace::RecordingToolSceneSetupData ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__get__recordingToolSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolSceneSetupData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__set__scenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::__get__scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::InstallBindings(::Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
// Ctor Parameters []
 ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::RecordingToolSettingsNoTransitionInstaller()  : ::Zenject::NoTransitionInstaller(THROW_UNLESS(::il2cpp_utils::New<RecordingToolSettingsNoTransitionInstaller>())) {}
 void ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
