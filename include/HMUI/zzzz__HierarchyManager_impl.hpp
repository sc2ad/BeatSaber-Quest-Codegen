#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "HMUI/zzzz__HierarchyManager_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "HMUI/zzzz__ScreenSystem_def.hpp"
//  Writing Method size for method: ::HMUI::HierarchyManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HierarchyManager::*)()>(&::HMUI::HierarchyManager::Start)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1fb6260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HierarchyManager::*)()>(&::HMUI::HierarchyManager::OnDestroy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1fb6428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.HandleSceneTransitionDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HierarchyManager::*)(::GlobalNamespace::ScenesTransitionSetupDataSO, ::Zenject::DiContainer)>(&::HMUI::HierarchyManager::HandleSceneTransitionDidFinish)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1fb637c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "HandleSceneTransitionDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.HandleBeforeDismissingScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HierarchyManager::*)()>(&::HMUI::HierarchyManager::HandleBeforeDismissingScenes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1fb6568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "HandleBeforeDismissingScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager.StartWithFlowCoordinator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HierarchyManager::*)(::HMUI::FlowCoordinator)>(&::HMUI::HierarchyManager::StartWithFlowCoordinator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1fb6614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "StartWithFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HierarchyManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HierarchyManager::*)()>(&::HMUI::HierarchyManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb6638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::HierarchyManager::__set__screenSystem(::HMUI::ScreenSystem value)  {
::cordl_internals::setInstanceField<::HMUI::ScreenSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ScreenSystem>(value));
}
constexpr ::HMUI::ScreenSystem ::HMUI::HierarchyManager::__get__screenSystem() const {
return ::cordl_internals::getInstanceField<::HMUI::ScreenSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::HierarchyManager::__set__gameScenesManager(::GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameScenesManager>(value));
}
constexpr ::GlobalNamespace::GameScenesManager ::HMUI::HierarchyManager::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::HierarchyManager::__set__rootFlowCoordinator(::HMUI::FlowCoordinator value)  {
::cordl_internals::setInstanceField<::HMUI::FlowCoordinator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::FlowCoordinator>(value));
}
constexpr ::HMUI::FlowCoordinator ::HMUI::HierarchyManager::__get__rootFlowCoordinator() const {
return ::cordl_internals::getInstanceField<::HMUI::FlowCoordinator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HMUI::HierarchyManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::HierarchyManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::HierarchyManager::HandleSceneTransitionDidFinish(::GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, ::Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "HandleSceneTransitionDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scenesTransitionSetupData, container);
}
 void ::HMUI::HierarchyManager::HandleBeforeDismissingScenes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "HandleBeforeDismissingScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::HierarchyManager::StartWithFlowCoordinator(::HMUI::FlowCoordinator flowCoordinator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            "StartWithFlowCoordinator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flowCoordinator);
}
// Ctor Parameters []
 ::HMUI::HierarchyManager::HierarchyManager()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<HierarchyManager>())) {}
 void ::HMUI::HierarchyManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HierarchyManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
