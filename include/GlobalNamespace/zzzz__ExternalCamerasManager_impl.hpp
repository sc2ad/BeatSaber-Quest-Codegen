#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ExternalCamerasManager_def.hpp"
#include "GlobalNamespace/zzzz__OculusMRCManager_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: GlobalNamespace::ExternalCamerasManager.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ExternalCamerasManager::*)()>(&GlobalNamespace::ExternalCamerasManager::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2675f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ExternalCamerasManager.InstantiateMixedRealityBackgroundCameraGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (GlobalNamespace::ExternalCamerasManager::*)(UnityEngine::GameObject)>(&GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x267604c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            "InstantiateMixedRealityBackgroundCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ExternalCamerasManager.InstantiateMixedRealityForegroundCameraGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (GlobalNamespace::ExternalCamerasManager::*)(UnityEngine::GameObject)>(&GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26760cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            "InstantiateMixedRealityForegroundCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ExternalCamerasManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ExternalCamerasManager::*)()>(&GlobalNamespace::ExternalCamerasManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267614c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ExternalCamerasManager::__set__oculusMRCManager(GlobalNamespace::OculusMRCManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OculusMRCManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OculusMRCManager>(value));
}
constexpr GlobalNamespace::OculusMRCManager GlobalNamespace::ExternalCamerasManager::__get__oculusMRCManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OculusMRCManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ExternalCamerasManager::__set__mrcBackgroundCameraPrefab(UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<UnityEngine::Camera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Camera>(value));
}
constexpr UnityEngine::Camera GlobalNamespace::ExternalCamerasManager::__get__mrcBackgroundCameraPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::Camera, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ExternalCamerasManager::__set__mrcForegroundCameraPrefab(UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<UnityEngine::Camera, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Camera>(value));
}
constexpr UnityEngine::Camera GlobalNamespace::ExternalCamerasManager::__get__mrcForegroundCameraPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::Camera, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ExternalCamerasManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GameObject GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine::GameObject mainCameraGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            "InstantiateMixedRealityBackgroundCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, mainCameraGameObject);
}
 UnityEngine::GameObject GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject(UnityEngine::GameObject mainCameraGameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            "InstantiateMixedRealityForegroundCameraGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, mainCameraGameObject);
}
// Ctor Parameters []
 GlobalNamespace::ExternalCamerasManager::ExternalCamerasManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ExternalCamerasManager>())) {}
 void GlobalNamespace::ExternalCamerasManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ExternalCamerasManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
