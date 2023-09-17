#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerResultsAvatarController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarPoseController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarVisualController_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsAvatarController.SetScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsAvatarController::*)(float_t)>(&::GlobalNamespace::MultiplayerResultsAvatarController::SetScale)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2100db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsAvatarController>::get(),
                            "SetScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsAvatarController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsAvatarController::*)(::GlobalNamespace::IConnectedPlayer)>(&::GlobalNamespace::MultiplayerResultsAvatarController::Setup)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2100df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsAvatarController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsAvatarController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsAvatarController::*)()>(&::GlobalNamespace::MultiplayerResultsAvatarController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2100f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsAvatarController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerResultsAvatarController::__set__avatarVisualController(::GlobalNamespace::AvatarVisualController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarVisualController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AvatarVisualController>(value));
}
constexpr ::GlobalNamespace::AvatarVisualController ::GlobalNamespace::MultiplayerResultsAvatarController::__get__avatarVisualController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarVisualController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsAvatarController::__set__multiplayerAvatarPoseController(::GlobalNamespace::MultiplayerAvatarPoseController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerAvatarPoseController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerAvatarPoseController>(value));
}
constexpr ::GlobalNamespace::MultiplayerAvatarPoseController ::GlobalNamespace::MultiplayerResultsAvatarController::__get__multiplayerAvatarPoseController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerAvatarPoseController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerResultsAvatarController::SetScale(float_t scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsAvatarController>::get(),
                            "SetScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scale);
}
 void ::GlobalNamespace::MultiplayerResultsAvatarController::Setup(::GlobalNamespace::IConnectedPlayer connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsAvatarController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerResultsAvatarController::MultiplayerResultsAvatarController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerResultsAvatarController>())) {}
 void ::GlobalNamespace::MultiplayerResultsAvatarController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsAvatarController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
