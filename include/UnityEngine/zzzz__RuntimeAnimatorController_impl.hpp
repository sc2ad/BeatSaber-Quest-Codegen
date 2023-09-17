#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
namespace {
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RuntimeAnimatorController::*)()>(&::UnityEngine::RuntimeAnimatorController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b193a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RuntimeAnimatorController.get_animationClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::AnimationClip> (::UnityEngine::RuntimeAnimatorController::*)()>(&::UnityEngine::RuntimeAnimatorController::get_animationClips)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b1a3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController>::get(),
                            "get_animationClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::RuntimeAnimatorController::RuntimeAnimatorController()  : ::UnityEngine::Object(THROW_UNLESS(::il2cpp_utils::New<RuntimeAnimatorController>())) {}
 void ::UnityEngine::RuntimeAnimatorController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::AnimationClip> ::UnityEngine::RuntimeAnimatorController::get_animationClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RuntimeAnimatorController>::get(),
                            "get_animationClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimationClip>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
