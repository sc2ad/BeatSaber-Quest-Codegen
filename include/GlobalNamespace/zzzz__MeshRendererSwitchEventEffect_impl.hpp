#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MeshRendererSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: GlobalNamespace::MeshRendererSwitchEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&GlobalNamespace::MeshRendererSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x226438c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MeshRendererSwitchEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22644b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MeshRendererSwitchEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)(GlobalNamespace::BasicBeatmapEventData)>(&GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22644cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MeshRendererSwitchEventEffect.ToggleObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)(bool)>(&GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22644ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "ToggleObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MeshRendererSwitchEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&GlobalNamespace::MeshRendererSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22645b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__beatmapEvent(GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr GlobalNamespace::BasicBeatmapEventType GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__deactivateOnBoostRenderers(::ArrayW<UnityEngine::MeshRenderer> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::MeshRenderer>>(value));
}
constexpr ::ArrayW<UnityEngine::MeshRenderer> GlobalNamespace::MeshRendererSwitchEventEffect::__get__deactivateOnBoostRenderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__activateOnBoostRenderers(::ArrayW<UnityEngine::MeshRenderer> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::MeshRenderer>>(value));
}
constexpr ::ArrayW<UnityEngine::MeshRenderer> GlobalNamespace::MeshRendererSwitchEventEffect::__get__activateOnBoostRenderers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MeshRendererSwitchEventEffect::__set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::MeshRendererSwitchEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MeshRendererSwitchEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
 void GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects(bool isBoostOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            "ToggleObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isBoostOn);
}
// Ctor Parameters []
 GlobalNamespace::MeshRendererSwitchEventEffect::MeshRendererSwitchEventEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MeshRendererSwitchEventEffect>())) {}
 void GlobalNamespace::MeshRendererSwitchEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MeshRendererSwitchEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
