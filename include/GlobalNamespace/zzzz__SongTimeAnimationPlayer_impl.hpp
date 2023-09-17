#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SongTimeAnimationPlayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongTimeAnimationPlayer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeAnimationPlayer::*)()>(&::GlobalNamespace::SongTimeAnimationPlayer::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2117098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongTimeAnimationPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeAnimationPlayer::*)()>(&::GlobalNamespace::SongTimeAnimationPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21170dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SongTimeAnimationPlayer::__set__animationClip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::GlobalNamespace::SongTimeAnimationPlayer::__get__animationClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SongTimeAnimationPlayer::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController ::GlobalNamespace::SongTimeAnimationPlayer::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SongTimeAnimationPlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SongTimeAnimationPlayer::SongTimeAnimationPlayer()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SongTimeAnimationPlayer>())) {}
 void ::GlobalNamespace::SongTimeAnimationPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeAnimationPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
