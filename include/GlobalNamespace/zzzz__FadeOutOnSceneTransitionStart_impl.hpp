#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__FadeOutOnSceneTransitionStart_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x267633c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26763c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart.HandleGameScenesManagerTransitionDidStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)(float_t)>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x267649c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            "HandleGameScenesManagerTransitionDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FadeOutOnSceneTransitionStart._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FadeOutOnSceneTransitionStart::*)()>(&::GlobalNamespace::FadeOutOnSceneTransitionStart::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26764b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::FadeOutOnSceneTransitionStart::__set__fadeInOut(::GlobalNamespace::FadeInOutController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FadeInOutController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FadeInOutController>(value));
}
constexpr ::GlobalNamespace::FadeInOutController ::GlobalNamespace::FadeOutOnSceneTransitionStart::__get__fadeInOut() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FadeInOutController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FadeOutOnSceneTransitionStart::__set__gameScenesManager(::GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameScenesManager>(value));
}
constexpr ::GlobalNamespace::GameScenesManager ::GlobalNamespace::FadeOutOnSceneTransitionStart::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::FadeOutOnSceneTransitionStart::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::FadeOutOnSceneTransitionStart::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::FadeOutOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart(float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            "HandleGameScenesManagerTransitionDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, duration);
}
// Ctor Parameters []
 ::GlobalNamespace::FadeOutOnSceneTransitionStart::FadeOutOnSceneTransitionStart()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FadeOutOnSceneTransitionStart>())) {}
 void ::GlobalNamespace::FadeOutOnSceneTransitionStart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FadeOutOnSceneTransitionStart>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
