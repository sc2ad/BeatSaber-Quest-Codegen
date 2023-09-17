#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AnimatedAvatarPoseController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPoseController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimatedAvatarPoseController.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnimatedAvatarPoseController::*)()>(&::GlobalNamespace::AnimatedAvatarPoseController::LateUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20bf4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimatedAvatarPoseController>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimatedAvatarPoseController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnimatedAvatarPoseController::*)()>(&::GlobalNamespace::AnimatedAvatarPoseController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bf688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimatedAvatarPoseController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::AnimatedAvatarPoseController::__set__avatarPoseController(::GlobalNamespace::AvatarPoseController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarPoseController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AvatarPoseController>(value));
}
constexpr ::GlobalNamespace::AvatarPoseController ::GlobalNamespace::AnimatedAvatarPoseController::__get__avatarPoseController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarPoseController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::AnimatedAvatarPoseController::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimatedAvatarPoseController>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::AnimatedAvatarPoseController::AnimatedAvatarPoseController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<AnimatedAvatarPoseController>())) {}
 void ::GlobalNamespace::AnimatedAvatarPoseController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnimatedAvatarPoseController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
