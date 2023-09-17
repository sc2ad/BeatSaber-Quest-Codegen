#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerIntroAnimator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator.SetBeforeIntroValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20e814c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>::get(),
                            "SetBeforeIntroValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator.SetAfterIntroValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20e8168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>::get(),
                            "SetAfterIntroValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e81b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__set__introPlayableDirector(::UnityEngine::Playables::PlayableDirector value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableDirector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Playables::PlayableDirector>(value));
}
constexpr ::UnityEngine::Playables::PlayableDirector ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__get__introPlayableDirector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>::get(),
                            "SetBeforeIntroValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>::get(),
                            "SetAfterIntroValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::MultiplayerLocalActivePlayerIntroAnimator()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLocalActivePlayerIntroAnimator>())) {}
 void ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
