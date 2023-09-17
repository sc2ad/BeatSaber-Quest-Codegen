#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PCAppInit_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__SteamInit_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__FileSaveData_def.hpp"
#include "GlobalNamespace/zzzz__OculusInit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.AppStartAndMultiSceneEditorSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x20b753c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PCAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.RepeatableSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::RepeatableSetup)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20b75b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PCAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.TransitionToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x20b763c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PCAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x20b76fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PCAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PCAppInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PCAppInit::*)()>(&::GlobalNamespace::PCAppInit::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20b79dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PCAppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSystemInit, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MainSystemInit>(value));
}
constexpr ::GlobalNamespace::MainSystemInit ::GlobalNamespace::PCAppInit::__get__mainSystemInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PCAppInit::__set__oculusInit(::GlobalNamespace::OculusInit value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusInit, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OculusInit>(value));
}
constexpr ::GlobalNamespace::OculusInit ::GlobalNamespace::PCAppInit::__get__oculusInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusInit, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PCAppInit::__set__steamInit(::GlobalNamespace::SteamInit value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SteamInit, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SteamInit>(value));
}
constexpr ::GlobalNamespace::SteamInit ::GlobalNamespace::PCAppInit::__get__steamInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SteamInit, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PCAppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::DefaultScenesTransitionsFromInit>(value));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit ::GlobalNamespace::PCAppInit::__get__defaultScenesTransitionsFromInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PCAppInit::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO ::GlobalNamespace::PCAppInit::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PCAppInit::__set__goStraightToMenuCommandArgument(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PCAppInit::__get__goStraightToMenuCommandArgument() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PCAppInit::__set__goStraightToEditorCommandArgument(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PCAppInit::__get__goStraightToEditorCommandArgument() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PCAppInit::__set__saveData(::GlobalNamespace::FileSaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FileSaveData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FileSaveData>(value));
}
constexpr ::GlobalNamespace::FileSaveData ::GlobalNamespace::PCAppInit::__get__saveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FileSaveData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::PCAppInit::AppStartAndMultiSceneEditorSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                            "AppStartAndMultiSceneEditorSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PCAppInit::RepeatableSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                            "RepeatableSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PCAppInit::TransitionToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PCAppInit::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::PCAppInit::PCAppInit()  : ::GlobalNamespace::AppInit(THROW_UNLESS(::il2cpp_utils::New<PCAppInit>())) {}
 void ::GlobalNamespace::PCAppInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PCAppInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
