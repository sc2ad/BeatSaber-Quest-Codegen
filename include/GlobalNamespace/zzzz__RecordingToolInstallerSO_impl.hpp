#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__RecordingToolInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolResourceContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__ProgramArguments_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolInstallerSO.InstallDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolInstallerSO::*)(::Zenject::DiContainer, ::GlobalNamespace::ProgramArguments, ::GlobalNamespace::BeatmapCharacteristicCollection)>(&::GlobalNamespace::RecordingToolInstallerSO::InstallDependencies)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x21ab928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO>::get(),
                            "InstallDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ProgramArguments>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolInstallerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolInstallerSO::*)()>(&::GlobalNamespace::RecordingToolInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21abf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::RecordingToolInstallerSO::__set__recordingToolResourceContainer(::GlobalNamespace::RecordingToolResourceContainerSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolResourceContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RecordingToolResourceContainerSO>(value));
}
constexpr ::GlobalNamespace::RecordingToolResourceContainerSO ::GlobalNamespace::RecordingToolInstallerSO::__get__recordingToolResourceContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolResourceContainerSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::RecordingToolInstallerSO::InstallDependencies(::Zenject::DiContainer container, ::GlobalNamespace::ProgramArguments programArguments, ::GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO>::get(),
                            "InstallDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ProgramArguments>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, programArguments, beatmapCharacteristicCollection);
}
// Ctor Parameters []
 ::GlobalNamespace::RecordingToolInstallerSO::RecordingToolInstallerSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<RecordingToolInstallerSO>())) {}
 void ::GlobalNamespace::RecordingToolInstallerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
