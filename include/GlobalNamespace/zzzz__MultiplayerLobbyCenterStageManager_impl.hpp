#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageManager_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__CenterStageScreenController_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterStageManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)(float_t, float_t)>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214c1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterStageManager.ActivateCenterStageManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x214c1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "ActivateCenterStageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterStageManager.DeactivateCenterStageManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x214c304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "DeactivateCenterStageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterStageManager.RecalculateCenterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x214c20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "RecalculateCenterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyCenterStageManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x214c328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__centerObjectTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__centerObjectTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__centerStageScreenController(GlobalNamespace::CenterStageScreenController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CenterStageScreenController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CenterStageScreenController>(value));
}
constexpr GlobalNamespace::CenterStageScreenController GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__centerStageScreenController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CenterStageScreenController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__lobbyStateDataModel(GlobalNamespace::ILobbyStateDataModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ILobbyStateDataModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ILobbyStateDataModel>(value));
}
constexpr GlobalNamespace::ILobbyStateDataModel GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__lobbyStateDataModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ILobbyStateDataModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__innerCircleRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__innerCircleRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__set__minOuterCircleRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerLobbyCenterStageManager::__get__minOuterCircleRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLobbyCenterStageManager::Init(float_t innerCircleRadius, float_t minOuterCircleRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, innerCircleRadius, minOuterCircleRadius);
}
 void GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "ActivateCenterStageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "DeactivateCenterStageManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            "RecalculateCenterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLobbyCenterStageManager::MultiplayerLobbyCenterStageManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLobbyCenterStageManager>())) {}
 void GlobalNamespace::MultiplayerLobbyCenterStageManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyCenterStageManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
