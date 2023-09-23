#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "GlobalNamespace/zzzz__QuestAppInit_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__OculusInit_def.hpp"
#include "GlobalNamespace/zzzz__FileSaveData_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
//  Writing Method size for method: GlobalNamespace::QuestAppInit.AppStartAndMultiSceneEditorSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20b819c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::QuestAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuestAppInit.RepeatableSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::RepeatableSetup)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20b81b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::QuestAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuestAppInit.TransitionToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x20b8238;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::QuestAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuestAppInit.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x20b8268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::QuestAppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::QuestAppInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20b85a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::QuestAppInit::__set__mainSystemInit(GlobalNamespace::MainSystemInit value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSystemInit, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSystemInit>(value));
}
constexpr GlobalNamespace::MainSystemInit GlobalNamespace::QuestAppInit::__get__mainSystemInit() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSystemInit, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuestAppInit::__set__oculusInit(GlobalNamespace::OculusInit value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusInit, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusInit>(value));
}
constexpr GlobalNamespace::OculusInit GlobalNamespace::QuestAppInit::__get__oculusInit() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusInit, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuestAppInit::__set__defaultScenesTransitionsFromInit(GlobalNamespace::DefaultScenesTransitionsFromInit value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DefaultScenesTransitionsFromInit, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DefaultScenesTransitionsFromInit>(value));
}
constexpr GlobalNamespace::DefaultScenesTransitionsFromInit GlobalNamespace::QuestAppInit::__get__defaultScenesTransitionsFromInit() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DefaultScenesTransitionsFromInit, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuestAppInit::__set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MainSettingsModelSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr GlobalNamespace::MainSettingsModelSO GlobalNamespace::QuestAppInit::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MainSettingsModelSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QuestAppInit::__set__saveData(GlobalNamespace::FileSaveData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FileSaveData, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FileSaveData>(value));
}
constexpr GlobalNamespace::FileSaveData GlobalNamespace::QuestAppInit::__get__saveData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FileSaveData, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::QuestAppInit::AppStartAndMultiSceneEditorSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                            "AppStartAndMultiSceneEditorSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::QuestAppInit::RepeatableSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                            "RepeatableSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::QuestAppInit::TransitionToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::QuestAppInit::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::QuestAppInit::QuestAppInit()  : GlobalNamespace::AppInit(THROW_UNLESS(::il2cpp_utils::New<QuestAppInit>())) {}
 void GlobalNamespace::QuestAppInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuestAppInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
