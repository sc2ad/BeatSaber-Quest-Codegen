#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BackgroundTextureGradientSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
//  Writing Method size for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x225bb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x225bc18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)(GlobalNamespace::ColorBoostBeatmapEventData)>(&GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x225bc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorBoostBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225bc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__defaultTextureGradient(GlobalNamespace::BloomPrePassBackgroundTextureGradient value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassBackgroundTextureGradient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassBackgroundTextureGradient>(value));
}
constexpr GlobalNamespace::BloomPrePassBackgroundTextureGradient GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__defaultTextureGradient() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassBackgroundTextureGradient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__boostTextureGradient(GlobalNamespace::BloomPrePassBackgroundTextureGradient value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassBackgroundTextureGradient, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassBackgroundTextureGradient>(value));
}
constexpr GlobalNamespace::BloomPrePassBackgroundTextureGradient GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__boostTextureGradient() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassBackgroundTextureGradient, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent(GlobalNamespace::ColorBoostBeatmapEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorBoostBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
// Ctor Parameters []
 GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::BackgroundTextureGradientSwitchEventEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BackgroundTextureGradientSwitchEventEffect>())) {}
 void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BackgroundTextureGradientSwitchEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
