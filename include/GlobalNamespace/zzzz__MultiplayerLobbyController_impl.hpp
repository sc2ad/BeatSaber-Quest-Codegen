#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyController_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlaceManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyController.get_lobbyActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLobbyController::*)()>(&GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214f864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "get_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyController.set_lobbyActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyController::*)(bool)>(&GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x214f86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "set_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyController.ActivateMultiplayerLobby
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyController::*)()>(&GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x214f878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "ActivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyController.DeactivateMultiplayerLobby
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyController::*)()>(&GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x214f90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "DeactivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLobbyController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyController::*)()>(&GlobalNamespace::MultiplayerLobbyController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x214f97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__innerCircleRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerLobbyController::__get__innerCircleRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__minOuterCircleRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MultiplayerLobbyController::__get__minOuterCircleRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyAvatarManager(GlobalNamespace::MultiplayerLobbyAvatarManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLobbyAvatarManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLobbyAvatarManager>(value));
}
constexpr GlobalNamespace::MultiplayerLobbyAvatarManager GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLobbyAvatarManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyCenterStageManager(GlobalNamespace::MultiplayerLobbyCenterStageManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLobbyCenterStageManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLobbyCenterStageManager>(value));
}
constexpr GlobalNamespace::MultiplayerLobbyCenterStageManager GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyCenterStageManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLobbyCenterStageManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__multiplayerLobbyAvatarPlaceManager(GlobalNamespace::MultiplayerLobbyAvatarPlaceManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerLobbyAvatarPlaceManager>(value));
}
constexpr GlobalNamespace::MultiplayerLobbyAvatarPlaceManager GlobalNamespace::MultiplayerLobbyController::__get__multiplayerLobbyAvatarPlaceManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerLobbyAvatarPlaceManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__menuEnvironmentManager(GlobalNamespace::MenuEnvironmentManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MenuEnvironmentManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MenuEnvironmentManager>(value));
}
constexpr GlobalNamespace::MenuEnvironmentManager GlobalNamespace::MultiplayerLobbyController::__get__menuEnvironmentManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MenuEnvironmentManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLobbyController::__set__lobbyActivated_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerLobbyController::__get__lobbyActivated_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::MultiplayerLobbyController::get_lobbyActivated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "get_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyController::set_lobbyActivated(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "set_lobbyActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerLobbyController::ActivateMultiplayerLobby()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "ActivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerLobbyController::DeactivateMultiplayerLobby()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            "DeactivateMultiplayerLobby",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLobbyController::MultiplayerLobbyController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLobbyController>())) {}
 void GlobalNamespace::MultiplayerLobbyController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLobbyController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
