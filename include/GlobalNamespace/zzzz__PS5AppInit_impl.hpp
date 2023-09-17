#pragma once
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PS5AppInit_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.AppStartAndMultiSceneEditorSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::AppStartAndMultiSceneEditorSetup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20b7db0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PS5AppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.RepeatableSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::RepeatableSetup)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20b7e18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PS5AppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.TransitionToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20b7e9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PS5AppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.TransitionToNextSceneInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::TransitionToNextSceneInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x20b7ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            "TransitionToNextSceneInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x20b7ef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PS5AppInit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AppInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AppInit::*)()>(&::GlobalNamespace::PS5AppInit::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20b8198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PS5AppInit::__set__mainSystemInit(::GlobalNamespace::MainSystemInit value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSystemInit, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MainSystemInit>(value));
}
constexpr ::GlobalNamespace::MainSystemInit ::GlobalNamespace::PS5AppInit::__get__mainSystemInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSystemInit, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PS5AppInit::__set__defaultScenesTransitionsFromInit(::GlobalNamespace::DefaultScenesTransitionsFromInit value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::DefaultScenesTransitionsFromInit>(value));
}
constexpr ::GlobalNamespace::DefaultScenesTransitionsFromInit ::GlobalNamespace::PS5AppInit::__get__defaultScenesTransitionsFromInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DefaultScenesTransitionsFromInit, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PS5AppInit::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>(value));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO ::GlobalNamespace::PS5AppInit::__get__appInitScenesTransitionSetupDataContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PS5AppInit::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MainSettingsModelSO>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO ::GlobalNamespace::PS5AppInit::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PS5AppInit::__set__ps5SharedPackageSKUs(::GlobalNamespace::PS5SharedPackageSKUsSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5SharedPackageSKUsSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PS5SharedPackageSKUsSO>(value));
}
constexpr ::GlobalNamespace::PS5SharedPackageSKUsSO ::GlobalNamespace::PS5AppInit::__get__ps5SharedPackageSKUs() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5SharedPackageSKUsSO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PS5AppInit::__set__sonyOnGoingToBackgroundSaveHandler(::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler>(value));
}
constexpr ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler ::GlobalNamespace::PS5AppInit::__get__sonyOnGoingToBackgroundSaveHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PS5AppInit::__set__ps5AdvancedHapticPlayerPrefab(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::PS5AppInit::__get__ps5AdvancedHapticPlayerPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PS5AppInit::__set__saveData(::GlobalNamespace::ISaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaveData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ISaveData>(value));
}
constexpr ::GlobalNamespace::ISaveData ::GlobalNamespace::PS5AppInit::__get__saveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::PS5AppInit::AppStartAndMultiSceneEditorSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            "AppStartAndMultiSceneEditorSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PS5AppInit::RepeatableSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            "RepeatableSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PS5AppInit::TransitionToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PS5AppInit::TransitionToNextSceneInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            "TransitionToNextSceneInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PS5AppInit::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::PS5AppInit::PS5AppInit()  : ::GlobalNamespace::AppInit(THROW_UNLESS(::il2cpp_utils::New<PS5AppInit>())) {}
 void ::GlobalNamespace::PS5AppInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AppInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
